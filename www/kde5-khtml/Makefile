# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	khtml
CATEGORIES=	www # kde-framework
COMMENT=	KDE5 khtml
MASTER_SITE_SUBDIR?=    stable/frameworks/${KDE5_FRAMEWORKS_VERSION:R}/portingAids

USE_QT5=        core gui widgets network dbus printsupport xml x11extras
USE_KDE5=       kdeprefix ecm archive codecs globalaccel i18n coreaddons \
                auth config guiaddons configwidgets itemviews iconthemes \
                completion dbusaddons service attica bookmarks jobwidgets\
                solid kio js notifications parts sonnet textwidgets wallet \
                widgetsaddons windowsystem xmlgui
		
.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
