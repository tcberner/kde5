# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kross
CATEGORIES=	lang # kde-framework
COMMENT=	KDE5 kross
MASTER_SITE_SUBDIR?=    stable/frameworks/${KDE5_FRAMEWORKS_VERSION:R}/portingAids


USE_QT5=        core script xml gui widgets uitools dbus network
USE_KDE5=       kdeprefix ecm config completion coreaddons archive \
                doctools i18n auth codecs guiaddons configwidgets  \
                itemviews iconthemes globalaccel dbusaddons        \
                windowsystem sonnet textwidgets attica bookmarks   \
                jobwidgets solid kio notifications parts service   \
                widgetsaddons xmlgui
		
.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
