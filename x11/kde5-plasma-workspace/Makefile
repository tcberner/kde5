# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	plasma-workspace
CATEGORIES=	x11 # kde-plasma

RUN_DEPENDS=	iceauth:${PORTSDIR}/x11/iceauth \
		xsetroot:${PORTSDIR}/x11/xsetroot \
		xset:${PORTSDIR}/x11/xset \
		xmessage:${PORTSDIR}/x11/xmessage \
		${LOCALBASE}/libdata/pkgconfig/xkeyboard-config.pc:${PORTSDIR}/x11/xkeyboard-config
# TODO: is anyone really using libdbusmen? -- distfile has to be fetched
# from launchpad, official tarballs are too old.
#LIB_DEPENDS=	libdbusmenu-qt5.so:${PORTSDIR}/devel/libdbusmenu-qt5

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE5 plasma-workspace

USE_QT5=	core dbus gui network qdbus qml paths phonon5 quick \
		quickcontrols script scripttools webkit widgets xml
USE_KDE5=	attica auth baloo bookmarks codecs completion \
		config configwidgets coreaddons dbusaddons ecm \
		globalaccel guiaddons i18n iconthemes idletime \
		itemviews jobwidgets jsembed kdeprefix kded kdesu kio \
		ksysguard kwin libkscreen notifyconfig plasma-framework \
		runner service solid sonnet texteditor textwidgets \
		threadweaver wayland widgetsaddons windowsystem \
		xmlgui

USE_XORG=	xft xkbfile

CMAKE_ARGS+=	-DBUILD_TESTING:BOOL=OFF

OPTIONS_DEFINE=	GPS DOCS NLS
OPTIONS_SUB=	YES

GPS_LIB_DEPENDS=	libgps.so:${PORTSDIR}/astro/gpsd
GPS_DESC=		GPS support for geolocation

.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-plasma.mk"
.include <bsd.port.mk>

