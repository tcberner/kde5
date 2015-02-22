# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	libksysguard
CATEGORIES=	sysutils # kde-plasma
COMMENT=	KDE5 libksysguard

USE_QT5=	core dbus gui network opengl printsupport qml \
		quick script webkit widgets x11extras xml
USE_KDE5=	archive attica auth bookmarks codecs completion \
		config configwidgets coreaddons crash dbusaddons \
		designerplugin doctools ecm emoticons globalaccel \
		guiaddons i18n iconthemes init itemmodels itemviews \
		jobwidgets kdelibs4support kdeprefix kio notifications \
		parts plasma-framework service solid sonnet \
		textwidgets unitconversion widgetsaddons windowsystem \
		xmlgui


# TODO : fails to look for KDELibs4Support in the correct location
CFLAGS+=	-I/usr/local/include/KF5/KDELibs4Support \
		-I/usr/local/include/KF5/KConfigCore

.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-plasma.mk"
.include <bsd.port.mk>

