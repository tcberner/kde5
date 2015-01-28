# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	konsole
CATEGORIES=	sysutils # kde-applications
COMMENT=	KDE5 konsole 
PKGNAMEPREFIX=	kde5-

USE_QT5=	core dbus gui script scripttools sql widgets
USE_KDE5=	ecm emoticons i18n iconthemes init itemmodels \
		kdelibs4support kdeprefix kio notifications \
		notifyconfig parts pty service textwidgets \
		widgetsaddons windowsystem xmlgui

# TODO: kinfog_getfile
LDFLAGS+=	-lutil

.include "${.CURDIR}/../../x11/kde-applications/bsd.kde-applications.mk"
.include <bsd.port.mk>

