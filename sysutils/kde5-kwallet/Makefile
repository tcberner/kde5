# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kwallet
CATEGORIES=	sysutils # kde-framework
COMMENT=	KDE5 wallet

USE_QT5=	core dbus gui widgets xml
USE_KDE5=	auth codecs config configwidgets coreaddons \
		dbusaddons ecm guiaddons i18n iconthemes \
		itemviews kdeprefix notifications service \
		widgetsaddons windowsystem

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	YES

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
