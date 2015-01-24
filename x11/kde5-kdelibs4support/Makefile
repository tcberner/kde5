# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kdelibs4support
CATEGORIES=	x11 # kde-framework
COMMENT=	KDE5 kdelibs4 porting helpers
MASTER_SITE_SUBDIR?=	stable/frameworks/${KDE5_FRAMEWORKS_VERSION:R}/portingAids

USE_QT5=	concurrent core dbus designer gui network printsupport svg \
		widgets x11extras xml
USE_KDE5=	archive attica auth bookmarks codecs completion config \
		configwidgets coreaddons crash dbusaddons designerplugin \
		doctools ecm globalaccel guiaddons i18n iconthemes itemviews \
		jobwidgets kdeprefix kio notifications parts pty service \
		solid sonnet textwidgets unitconversion widgetsaddons \
		windowsystem xmlgui

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
