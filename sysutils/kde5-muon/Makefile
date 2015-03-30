# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	muon
CATEGORIES=	sysutils # kde-plasma
COMMENT=	KDE5 muon

USE_QT5=	concurrent core dbus gui network qml quick svg widgets xml
USE_KDE5=	attica config configwidgets coreaddons dbusaddons \
		declarative ecm i18n kdeprefix newstuff notifications \
		plasma-framework solid wallet widgetsaddons

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	YES

.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-plasma.mk"
.include <bsd.port.mk>

