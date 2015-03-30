# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	frameworkintegration
CATEGORIES=	x11 # kde-framework
COMMENT=	KDE5 framework integration

USE_QT5=	core dbus gui network widgets x11extras xml
USE_KDE5=	attica auth bookmarks codecs completion config configwidgets \
		coreaddons dbusaddons ecm globalaccel guiaddons i18n \
		iconthemes itemviews jobwidgets kdeprefix kio notifications \
		oxygen-fonts service solid sonnet textwidgets widgetsaddons \
		windowsystem xmlgui
USE_XORG=	xcursor

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	YES

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
