# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kwayland
CATEGORIES=	x11 # kde-plasma
COMMENT=	KDE5 kwayland

LIB_DEPENDS=	libEGL.so.1:${PORTSDIR}/graphics/libEGL \
		libXcursor.so.1:${PORTSDIR}/x11/libXcursor \
		libepoxy.so:${PORTSDIR}/graphics/libepoxy \
		libwayland-client.so:${PORTSDIR}/x11/wayland

BUILD_DEPENDS=	${LOCALBASE}/include/linux/input.h:${PORTSDIR}/multimedia/v4l_compat

USE_QT5=	concurrent core dbus gui multimedia network qml \
		quick script uitools widgets x11extras xml
USE_KDE5=	activities archive attica auth bookmarks codecs \
		completion config configwidgets coreaddons crash \
		dbusaddons declarative decoration doctools ecm \
		globalaccel guiaddons i18n iconthemes init \
		itemviews jobwidgets kcmutils kdeprefix kio \
		newstuff notifications plasma-framework service \
		solid sonnet textwidgets widgetsaddons \
		windowsystem xmlgui

.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-plasma.mk"
.include <bsd.port.mk>

