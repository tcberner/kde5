# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kde-cli-tools
CATEGORIES=	sysutils # kde-plasma
COMMENT=	KDE5 kde-cli-tools

USE_QT5=	core dbus gui svg widgets x11extras
USE_KDE5=	config ecm emoticons i18n iconthemes \
		init  itemmodels kcmutils \
		kdelibs4support kdesu windowsystem

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	YES

.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-plasma.mk"
.include <bsd.port.mk>

