# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	krunner
CATEGORIES=	x11 # kde-framework
COMMENT=	KDE5 krunner
MASTER_SITE_SUBDIR?=    stable/frameworks/${KDE5_FRAMEWORKS_VERSION:R}/portingAids

USE_QT5=        gui widgets network qml quick xml dbus core
USE_KDE5=       kdeprefix config coreaddons i18n auth codecs \
                guiaddons widgetsaddons configwidgets itemviews \
                iconthemes globalaccel completion dbusaddons \
                windowsystem sonnet textwidgets attica xmlgui \
                bookmarks jobwidgets kio service ecm plasma-framework solid \
                threadweaver

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
