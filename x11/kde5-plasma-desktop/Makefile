# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=       plasma-desktop
CATEGORIES=     x11 # kde-plasma
COMMENT=        KDE5 plasma-desktop 

USE_QT5=        xml printsupport network qml gui quick dbus widgets x11extras svg \
                concurrent core
USE_KDE5=       kdeprefix coreaddons archive codecs config guiaddons widgetsaddons \
                configwidgets itemviews iconthemes dbusaddons service globalaccel  \
                completion windowsystem sonnet textwidgets xmlgui bookmarks        \
                jobwidgets solid kio crash designerplugin init notifications parts \
                unitconversion activities auth ecm plasma-framework  doctools i18n kcmutils  \
                newstuff kdelibs4support notifyconfig attica wallet runner         \
                libksysguard itemmodels emoticons kwin plasma-workspace

.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-plasma.mk"
.include <bsd.port.mk>

