# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	baloo
PORTVERSION=	5.6.2

CATEGORIES=	sysutils # kde-plasma
COMMENT=	KDE5 baloo

LIB_DEPENDS=	libxapian.so:${PORTSDIR}/databases/xapian-core

USE_QT5=	core dbus gui network printsupport sql widgets xml
USE_KDE5=	archive attica auth bookmarks codecs completion config \
		configwidgets coreaddons crash dbusaddons designerplugin \
		doctools ecm emoticons filemetadata globalaccel guiaddons \
		i18n iconthemes idletime init itemmodels itemviews \
		jobwidgets kcmutils kdelibs4support kdeprefix kio \
		notifications parts service solid sonnet textwidgets \
		unitconversion widgetsaddons windowsystem xmlgui

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	YES

PLIST_SUB+=	PORTVERSION="${PORTVERSION}"

.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-plasma.mk"
.include <bsd.port.mk>

