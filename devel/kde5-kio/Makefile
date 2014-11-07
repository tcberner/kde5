# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kio
CATEGORIES=	devel # kde-framework
COMMENT=	KDE5 kio

USE_QT5=        script gui dbus network xml core widgets concurrent
USE_KDE5=       kdeprefix ecm archive auth guiaddons globalaccel sonnet \
                textwidgets attica bookmarks codecs completion config \
                configwidgets coreaddons dbusaddons doctools i18n \
                iconthemes itemviews jobwidgets notifications service \
                solid widgetsaddons windowsystem xmlgui wallet
		
.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
