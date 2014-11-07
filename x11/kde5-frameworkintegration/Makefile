# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	frameworkintegration
CATEGORIES=	x11 # kde-framework
COMMENT=	KDE5 framework integration

USE_QT5=        core gui widgets dbus xml network x11extras
USE_KDE5=       kdeprefix ecm config coreaddons auth codecs guiaddons \
                configwidgets i18n itemviews iconthemes globalaccel   \
                completion dbusaddons service windowsystem sonnet     \
                textwidgets attica xmlgui bookmarks jobwidgets solid  \
                kio notifications widgetsaddons

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
