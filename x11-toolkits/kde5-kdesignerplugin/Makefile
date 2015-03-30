# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kdesignerplugin
CATEGORIES=	x11-toolkits # kde-framework
COMMENT=	KDE5 designerplugin

USE_QT5=	core dbus designer gui linguisttools network opengl \
		printsupport qml quick webkit xml
USE_KDE5=	archive attica auth bookmarks codecs completion config \
		configwidgets coreaddons dbusaddons doctools ecm globalaccel \
		guiaddons i18n iconthemes itemviews jobwidgets kdeprefix \
		kdewebkit kio plotting service solid sonnet textwidgets \
		widgetsaddons windowsystem xmlgui

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	YES

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
