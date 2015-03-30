# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	knotifications
CATEGORIES=	devel # kde-framework
COMMENT=	KDE5 notifications

USE_QT5=	core dbus gui linguisttools phonon5 widgets x11extras xml
USE_KDE5=	auth codecs config configwidgets coreaddons dbusaddons \
		ecm guiaddons i18n iconthemes itemviews kdeprefix service \
		widgetsaddons windowsystem

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	YES

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
