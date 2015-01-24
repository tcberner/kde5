# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kactivities
CATEGORIES=	x11 # kde-framework
COMMENT=	KDE5 activities

LIB_DEPENDS=	libboost_system.so.5:${PORTSDIR}/devel/boost-libs

USE_QT5=	core dbus gui network qml sql widgets xml
USE_KDE5=	attica auth bookmarks codecs completion config configwidgets \
		coreaddons dbusaddons declarative ecm globalaccel guiaddons \
		i18n iconthemes itemviews jobwidgets kcmutils kdeprefix kio \
		service solid sonnet textwidgets widgetsaddons windowsystem \
		xmlgui

USES=		cmake:outsource tar:xz gettext

# hopefully fix crash -- TODO: still necessary?
CXXFLAGS+=	-fno-use-cxa-atexit

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
