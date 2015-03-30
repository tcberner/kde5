# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kjobwidgets
CATEGORIES=	x11-toolkits # kde-framework
LIB_DEPENDS=	libqjson.so:${PORTSDIR}/devel/qt5-qjson
COMMENT=	KDE5 job widgets

USE_QT5=	core dbus gui linguisttools widgets x11extras
USE_KDE5=	coreaddons ecm kdeprefix service widgetsaddons

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	YES

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
