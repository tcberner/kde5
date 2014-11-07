# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kxmlgui
CATEGORIES=	x11-toolkits # kde-framework
COMMENT=	KDE5 xml gui

USE_QT5=        core gui widgets dbus network printsupport xml
USE_KDE5=       kdeprefix attica ecm itemviews config globalaccel \
                coreaddons auth codecs guiaddons configwidgets \
                i18n iconthemes completion dbusaddons service  \
                sonnet textwidgets widgetsaddons windowsystem 
		
.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
