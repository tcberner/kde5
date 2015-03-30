# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kdeclarative
CATEGORIES=	devel # kde-framework
COMMENT=	KDE5 declarative

LIB_DEPENDS=	libepoxy.so:${PORTSDIR}/graphics/libepoxy

USE_QT5=	core dbus gui network qml quick widgets xml
USE_KDE5=	attica auth bookmarks codecs completion config configwidgets \
		coreaddons dbusaddons ecm globalaccel guiaddons i18n \
		iconthemes itemviews jobwidgets kdeprefix kio kpackage service solid \
		sonnet textwidgets widgetsaddons windowsystem xmlgui

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	YES

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
