# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kparts
CATEGORIES=	devel # kde-framework
COMMENT=	KDE5 parts

USE_QT5=        core gui widgets xml dbus network
USE_KDE5=       kdeprefix ecm config coreaddons i18n auth codecs \
                guiaddons configwidgets itemviews iconthemes     \
                globalaccel completion dbusaddons windowsystem   \
                sonnet attica bookmarks solid kio jobwidgets     \
                notifications service textwidgets widgetsaddons  \
                xmlgui
		
.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
