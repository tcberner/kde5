# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=       plasma-workspace 
CATEGORIES=     x11 # kde-plasma

RUN_DEPENDS=	iceauth:${PORTSDIR}/x11/iceauth \
		xsetroot:${PORTSDIR}/x11/xsetroot \
		xset:${PORTSDIR}/x11/xset \
		xmessage:${PORTSDIR}/x11/xmessage \
		${LOCALBASE}/libdata/pkgconfig/xkeyboard-config.pc:${PORTSDIR}/x11/xkeyboard-config 

MAINTAINER=     kde@FreeBSD.org
COMMENT=        KDE5 plasma-workspace 

USE_QT5=        gui widgets network qml quick xml dbus core 		\
		quickcontrols qtpaths
USE_KDE5=       kdeprefix config coreaddons i18n auth codecs guiaddons \
                widgetsaddons configwidgets itemviews iconthemes       \
                globalaccel completion dbusaddons windowsystem sonnet  \
                textwidgets attica xmlgui bookmarks jobwidgets kio     \
                service ecm plasma-framework solid threadweaver runner idletime  \
                baloo kdesu jsembed libkscreen kwin texteditor

CMAKE_ARGS+=-DBUILD_TESTING:BOOL=OFF   

.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-plasma.mk"
.include <bsd.port.mk>

