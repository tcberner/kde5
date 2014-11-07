# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kjobwidgets
CATEGORIES=	x11-toolkits # kde-framework
LIB_DEPENDS=	libqjson.so:${PORTSDIR}/devel/qt5-qjson
COMMENT=	KDE5 job widgets

USE_QT5=        core gui widgets dbus linguisttools x11extras
USE_KDE5=       kdeprefix ecm coreaddons widgetsaddons service
		
.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
