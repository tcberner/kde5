#
# Collect stuff shared over [nearly] all kde5-plasma ports in one location
#

PKGNAMEPREFIX?=		kde5-
MAINTAINER?=		kde@FreeBSD.org

PORTVERSION?=		${KDE5_VERSION}
#PORTVERSION?=		${KDE5_VERSION}${KDE5_REVISION}
DISTNAME?=		${PORTNAME}-${PORTVERSION}
PKGNAMEPREFIX?=		kde5-

WRKSRC?=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
MASTER_SITES?=		${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR?=	${KDE5_BRANCH}/plasma/${KDE5_VERSION}
DIST_SUBDIR?=		KDE/plasma/${KDE5_VERSION}

USE_QT5+=		buildtools_build qmake_build
USES?=			cmake gettext pkgconfig tar:xz
USE_LDCONFIG?=		yes

# auth installs a cmake file with a target containing whitespaces
# we need to switch to gmake for these ports
.if ${USE_KDE5:Mauth}
USES+=			gmake
.endif

# Handle DOCS & NLS option and add dependencies
.include <bsd.port.options.mk>
.if ${PORT_OPTIONS:MDOCS}
BUILD_DEPENDS+=		${LOCALBASE}/share/xsl/docbook/html/docbook.xsl:${PORTSDIR}/textproc/docbook-xsl \
			docbook-xml>0:${PORTSDIR}/textproc/docbook-xml
.endif

.if ${PORT_OPTIONS:MNLS}
USES+=			gettext
.else
EXTRACT_AFTER_ARGS+=	--exclude ${DISTNAME}/po
.endif

