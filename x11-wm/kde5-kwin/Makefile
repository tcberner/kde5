# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=       kwin
CATEGORIES=     x11-wm # kde-plasma
COMMENT=        KDE5 kwin 

LIB_DEPENDS=	libEGL.so.1:${PORTSDIR}/graphics/libEGL \
		libXcursor.so.1:${PORTSDIR}/x11/libXcursor \
		libepoxy.so:${PORTSDIR}/graphics/libepoxy

USE_QT5=        xml concurrent dbus network qml gui quick script uitools \
                widgets x11extras core multimedia
USE_KDE5=       kdeprefix activities doctools auth codecs guiaddons  \
                dbusaddons itemviews iconthemes sonnet textwidgets   \
                attica bookmarks jobwidgets solid archive activities \
                doctools config configwidgets coreaddons crash       \
                globalaccel i18n init notifications service ecm      \
                plasma-framework widgetsaddons windowsystem completion         \
                declarative kcmutils kio newstuff xmlgui
                
.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-plasma.mk"
.include <bsd.port.mk>

