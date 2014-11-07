# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kdeclarative
CATEGORIES=	devel # kde-framework
COMMENT=	KDE5 declarative

USE_QT5=        xml widgets dbus core network qml quick gui
USE_KDE5=       kdeprefix config i18n auth codecs configwidgets   \
                itemviews iconthemes completion dbusaddons service\
                sonnet textwidgets attica xmlgui bookmarks jobwidgets \
                solid kio widgetsaddons windowsystem globalaccel \
                coreaddons guiaddons ecm
		
.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
