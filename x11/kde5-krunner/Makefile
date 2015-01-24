# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	krunner
CATEGORIES=	x11 # kde-framework
COMMENT=	KDE5 krunner
MASTER_SITE_SUBDIR?=	stable/frameworks/${KDE5_FRAMEWORKS_VERSION:R}/portingAids

USE_QT5=	core dbus gui network qml quick widgets xml
USE_KDE5=	attica auth bookmarks codecs completion config \
		configwidgets coreaddons dbusaddons ecm globalaccel \
		guiaddons i18n iconthemes itemviews jobwidgets \
		kdeprefix kio plasma-framework service solid sonnet \
		textwidgets threadweaver widgetsaddons windowsystem \
		xmlgui

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
