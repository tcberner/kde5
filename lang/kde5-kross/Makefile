# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kross
CATEGORIES=	lang # kde-framework
COMMENT=	KDE5 kross
MASTER_SITE_SUBDIR?=	stable/frameworks/${KDE5_FRAMEWORKS_VERSION:R}/portingAids

USE_QT5=	core dbus gui network script uitools widgets xml
USE_KDE5=	archive attica auth bookmarks codecs completion config \
		configwidgets coreaddons dbusaddons doctools ecm \
		globalaccel guiaddons i18n iconthemes itemviews \
		jobwidgets kdeprefix kio notifications parts service \
		solid sonnet textwidgets widgetsaddons windowsystem \
		xmlgui

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
