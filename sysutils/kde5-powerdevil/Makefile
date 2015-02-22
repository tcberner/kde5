# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	powerdevil
CATEGORIES=	sysutils # kde-plasma
COMMENT=	KDE5 powerdevil

USE_QT5=	core dbus gui network printsupport \
		widgets x11extras xml
USE_KDE5=	archive attica auth bookmarks codecs \
		completion config configwidgets coreaddons \
		crash dbusaddons designerplugin doctools \
		ecm emoticons globalaccel guiaddons i18n \
		iconthemes idletime init itemmodels \
		itemviews jobwidgets kdelibs4support \
		kdeprefix kio notifications notifyconfig \
		parts plasma-framework plasma-workspace \
		service solid sonnet textwidgets \
		unitconversion widgetsaddons windowsystem \
		xmlgui

.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-plasma.mk"
.include <bsd.port.mk>

