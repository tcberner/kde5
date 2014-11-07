# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kdesignerplugin
CATEGORIES=	x11-toolkits # kde-framework
COMMENT=	KDE5 designerplugin

USE_QT5=        gui xml designer dbus network qml quick opengl \
                printsupport webkit core linguisttools 
USE_KDE5=       kdeprefix completion auth codecs guiaddons i18n \
                configwidgets iconthemes globalaccel dbusaddons \
                service windowsystem attica bookmarks jobwidgets\
                solid kio itemviews plotting textwidgets \
                widgetsaddons xmlgui sonnet kdewebkit ecm coreaddons\
                config archive doctools
		
.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
