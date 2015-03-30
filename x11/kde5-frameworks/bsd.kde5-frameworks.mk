#
# Collect stuff shared over [nearly] all kde5-framworks ports in one location
#

PKGNAMEPREFIX?=		kde5-

MAINTAINER?=		kde@FreeBSD.org

PORTVERSION?=		${KDE5_FRAMEWORKS_VERSION}
MASTER_SITES?=		${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR?=	stable/frameworks/${KDE5_FRAMEWORKS_VERSION:R}
DIST_SUBDIR?=		KDE/frameworks/${KDE5_FRAMEWORKS_VERSION}

USE_QT5+=		buildtools_build core qmake_build testlib
USES?=			cmake pkgconfig tar:xz
USE_LDCONFIG?=		yes

# auth installs a cmake file with a target containing whitespaces
# we need to switch to gmake for these ports
.if ${USE_KDE5:Mauth}
USES+=			gmake
.endif

.include <bsd.port.options.mk>

# Handle DOCS & NLS option and add dependencies
.if ${PORT_OPTIONS:MNLS}
BUILD_DEPENDS+=		${LOCALBASE}/share/xsl/docbook/html/docbook.xsl:${PORTSDIR}/textproc/docbook-xsl \
			docbook-xml>0:${PORTSDIR}/textproc/docbook-xml
.endif

.if ${PORT_OPTIONS:MNLS}
USES+=			gettext
.else
EXTRACT_AFTER_ARGS+=	--exclude ${DISTNAME}/po
.endif
