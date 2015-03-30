# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kbookmarks
CATEGORIES=	devel # kde-frameworks
COMMENT=	KDE5 bookmarks

USE_QT5=	core dbus gui linguisttools widgets xml
USE_KDE5=	attica auth codecs completion config configwidgets coreaddons \
		dbusaddons ecm globalaccel guiaddons i18n iconthemes \
		itemviews kdeprefix service sonnet textwidgets widgetsaddons \
		windowsystem xmlgui

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	YES

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
