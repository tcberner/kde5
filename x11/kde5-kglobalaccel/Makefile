# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kglobalaccel
CATEGORIES=	x11 # kde-framework
COMMENT=	KDE5 global accels

USE_QT5=        core dbus gui widgets x11extras linguisttools
USE_KDE5=       kdeprefix ecm
		
# hopefully fix segfault -- still necessary? TODO
CXXFLAGS+=      -fno-use-cxa-atexit

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
