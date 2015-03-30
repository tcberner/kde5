# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kmenuedit
CATEGORIES=	sysutils # kde-plasma
COMMENT=	KDE5 kmenuedit

USE_QT5=	core dbus gui network printsupport widgets xml
USE_KDE5=	archive attica auth bookmarks codecs completion config \
		configwidgets coreaddons crash dbusaddons designerplugin \
		doctools ecm emoticons globalaccel guiaddons i18n \
		iconthemes init itemmodels itemviews jobwidgets \
		kdelibs4support kdeprefix kio notifications parts \
		service solid sonnet textwidgets unitconversion \
		widgetsaddons windowsystem xmlgui

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	YES

.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-plasma.mk"
.include <bsd.port.mk>

