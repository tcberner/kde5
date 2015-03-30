# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	oxygen
PORTVERSION=	${KDE5_VERSION}
CATEGORIES=	x11-themes # kde-plasma
COMMENT=	KDE5 oxygen

USE_QT5=	core dbus gui widgets x11extras xml
USE_KDE5=	auth codecs completion config configwidgets \
		coreaddons dbusaddons ecm frameworkintegration \
		guiaddons i18n iconthemes itemviews kdeprefix \
		service widgetsaddons windowsystem

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	YES

.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-plasma.mk"
.include <bsd.port.mk>

