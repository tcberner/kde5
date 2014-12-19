# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=       konsole
CATEGORIES=     sysutils # kde-plasma
COMMENT=        KDE5 konsole (git version)

USE_QT5=        core dbus gui widgets script scripttools sql 
USE_KDE5=       kdeprefix ecm xmlgui windowsystem widgetsaddons textwidgets service pty parts notifyconfig notifications kio kdelibs4support init i18n iconthemes

# TODO : fails to add lutil automatically
LDFLAGS+=-lutil

.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-git.mk"
.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-plasma.mk"
.include <bsd.port.mk>

