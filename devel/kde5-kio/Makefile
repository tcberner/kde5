# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kio
CATEGORIES=	devel # kde-framework
COMMENT=	KDE5 kio

USE_QT5=	concurrent core dbus gui network script widgets xml
USE_KDE5=	archive attica auth bookmarks codecs completion config \
		configwidgets coreaddons dbusaddons doctools ecm globalaccel \
		guiaddons i18n iconthemes itemviews jobwidgets kdeprefix \
		notifications service solid sonnet textwidgets wallet \
		widgetsaddons windowsystem xmlgui

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	YES

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
