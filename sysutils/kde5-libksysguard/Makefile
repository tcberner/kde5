# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=       libksysguard
CATEGORIES=     sysutils # kde-plasma
COMMENT=        KDE5 libksysguard 

USE_QT5=        network qml quick opengl printsupport webkit xml dbus gui \
                widgets script core x11extras
USE_KDE5=       kdeprefix coreaddons auth codecs guiaddons widgetsaddons    \
                configwidgets windowsystem crash designerplugin archive     \
                doctools dbusaddons service emoticons itemviews iconthemes  \
                itemmodels init notifications globalaccel completion sonnet \
                textwidgets attica xmlgui bookmarks jobwidgets solid kio    \
                parts unitconversion kdelibs4support i18n ecm               \
                plasma-framework config

# TODO : fails to look for KDELibs4Support in the correct location
CFLAGS+=-I/usr/local/include/KF5/KDELibs4Support  -I/usr/local/include/KF5/KConfigCore

.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-plasma.mk"
.include <bsd.port.mk>

