# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kdelibs4support
CATEGORIES=	x11 # kde-framework
CONFLICTS=	kdelibs4.*
COMMENT=	KDE5 kdelibs4 porting helpers
MASTER_SITE_SUBDIR?=    stable/frameworks/${KDE5_FRAMEWORKS_VERSION:R}/portingAids


USE_QT5=        core network gui widgets dbus svg printsupport xml \
                designer concurrent x11extras
USE_KDE5=       kdeprefix ecm completion config coreaddons auth codecs \
                configwidgets crash designerplugin globalaccel archive \
                doctools guiaddons i18n itemviews iconthemes dbusaddons\
                sonnet attica bookmarks jobwidgets solid kio \
                notifications parts service textwidgets unitconversion \
                widgetsaddons windowsystem xmlgui

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
