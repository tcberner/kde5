# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kded
CATEGORIES=	x11 # kde-framework
COMMENT=	KDE5 kded

USE_QT5=	core dbus gui widgets xml
USE_KDE5=	archive config coreaddons crash dbusaddons doctools ecm i18n \
		init kdeprefix service windowsystem

OPTIONS_DEFINE=	DOCS
OPTIONS_SUB=	YES

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
