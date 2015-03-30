# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kdoctools
CATEGORIES=	devel # kde-framework
COMMENT=	KDE5 doctools

USE_QT5=	core
USE_KDE5=	archive ecm i18n kdeprefix
USE_GNOME=	libxml2 libxslt

BUILD_DEPENDS+=	${LOCALBASE}/share/xsl/docbook/html/docbook.xsl:${PORTSDIR}/textproc/docbook-xsl \
		docbook-xml>0:${PORTSDIR}/textproc/docbook-xml \
		p5-URI>=0:${PORTSDIR}/net/p5-URI

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	YES

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
