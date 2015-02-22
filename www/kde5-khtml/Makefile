# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	khtml
CATEGORIES=	www # kde-framework
COMMENT=	KDE5 khtml
MASTER_SITE_SUBDIR?=	stable/frameworks/${KDE5_FRAMEWORKS_VERSION:R}/portingAids

USE_QT5=	core dbus gui network printsupport widgets x11extras xml
USE_KDE5=	archive attica auth bookmarks codecs completion config \
		configwidgets coreaddons dbusaddons ecm globalaccel guiaddons \
		i18n iconthemes itemviews jobwidgets js kdeprefix kio \
		notifications parts service solid sonnet textwidgets wallet \
		widgetsaddons windowsystem xmlgui

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
