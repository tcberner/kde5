# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=       baloo
CATEGORIES=     sysutils # kde-plasma
COMMENT=        KDE5 baloo 

LIB_DEPENDS=	libxapian.so:${PORTSDIR}/databases/xapian-core

USE_QT5=        xml network printsupport core gui widgets dbus sql
USE_KDE5=       kdeprefix coreaddons dbusaddons codecs guiaddons widgetsaddons\
                configwidgets itemviews iconthemes globalaccel completion \
                windowsystem sonnet textwidgets attica xmlgui bookmarks \
                jobwidgets designerplugin archive doctools emoticons itemmodels \
                init notifications parts unitconversion ecm i18n config service\
                idletime kcmutils auth crash solid kio kdelibs4support filemetadata
                
.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-plasma.mk"
.include <bsd.port.mk>

