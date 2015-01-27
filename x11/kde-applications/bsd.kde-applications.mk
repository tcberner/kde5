KDE_APPLICATIONS_VERSION=	14.12.1
MASTER_SITES?=			${MASTER_SITE_KDE}
MASTER_SITE_SUBDIR?=		stable/applications/${KDE_APPLICATIONS_VERSION}/src

PORTVERSION?=			${KDE_APPLICATIONS_VERSION}

# TODO depend on docbook... (option?)
BUILD_DEPENDS+=         ${LOCALBASE}/share/xsl/docbook/html/docbook.xsl:${PORTSDIR}/textproc/docbook-xsl \
                        ${LOCALBASE}/share/xml/docbook/4.2:${PORTSDIR}/textproc/docbook-xml


USE_QT5+=	qmake_build buildtools_build

USES+=		tar:xz cmake gettext pkgconfig
USE_LCONFIG=	yes
