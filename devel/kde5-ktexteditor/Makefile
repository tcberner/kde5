# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	ktexteditor
CATEGORIES=	devel # kde-framework
COMMENT=	KDE5 texteditor


LIB_DEPENDS=	libgit2.so:${PORTSDIR}/devel/libgit2

USE_QT5=	core dbus gui network printsupport script widgets xml
USE_KDE5=	archive attica auth bookmarks codecs completion config \
		configwidgets coreaddons dbusaddons ecm globalaccel \
		guiaddons i18n iconthemes itemviews jobwidgets kdeprefix \
		kio notifications parts service solid sonnet textwidgets \
		widgetsaddons windowsystem xmlgui

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	YES

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
