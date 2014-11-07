# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	knotifications
CATEGORIES=	devel # kde-framework
COMMENT=	KDE5 dbus addons

USE_QT5=        gui widgets dbus x11extras xml linguisttools core 
USE_KDE5=       kdeprefix windowsystem dbusaddons i18n service config \
                auth guiaddons widgetsaddons configwidgets itemviews  \
                iconthemes codecs coreaddons ecm phonon # note, phonon should be moved to QT
		
.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
