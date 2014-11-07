# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=	kdewebkit
CATEGORIES=	www # kde-framework
COMMENT=	KDE5 webkit

USE_QT5=        core gui widgets qml quick opengl printsupport webkit \
                network xml dbus
USE_KDE5=       kdeprefix ecm config coreaddons auth codecs guiaddons \
                i18n widgetsaddons configwidgets itemviews iconthemes \
                globalaccel completion dbusaddons windowsystem sonnet \
                textwidgets attica xmlgui bookmarks solid kio         \
                jobwidgets notifications parts service wallet

.include "${.CURDIR}/../../x11/kde5-frameworks/bsd.kde5-frameworks.mk"
.include <bsd.port.mk>
