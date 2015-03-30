# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	plasma-desktop
CATEGORIES=	x11 # kde-plasma
COMMENT=	KDE5 plasma-desktop

USE_QT5=	concurrent core dbus gui network printsupport \
		qml quick svg widgets x11extras xml
USE_KDE5=	activities archive attica auth bookmarks codecs \
		completion config configwidgets coreaddons crash \
		dbusaddons designerplugin doctools ecm emoticons \
		globalaccel guiaddons i18n iconthemes init \
		itemmodels itemviews jobwidgets kcmutils \
		kdelibs4support kdeprefix kio kwin libksysguard \
		newstuff notifications notifyconfig parts \
		plasma-framework plasma-workspace runner service \
		solid sonnet textwidgets unitconversion wallet \
		widgetsaddons windowsystem xmlgui

# needed for one of the source files (TODO: fetch upstream patch)
CXXFLAGS=	-ftemplate-depth=512

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	YES

.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-plasma.mk"
.include <bsd.port.mk>

