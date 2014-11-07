# Created by: Tobias Berner <tcberner@gmail.com>

PORTNAME=       khelpcenter 
CATEGORIES=     sysutils # kde-plasma
COMMENT=        KDE5 khelpcenter 

USE_QT5=        xml network printsupport core gui widgets dbus
USE_KDE5=       kdeprefix coreaddons auth codecs guiaddons i18n	\
		widgetsaddons configwidgets itemviews 		\
		iconthemes dbusaddons service globalaccel 	\
		completion windowsystem sonnet textwidgets 	\
		attica xmlgui archive bookmarks js jobwidgets 	\
		solid kio notifications parts wallet crash 	\
		designerplugin doctools emoticons itemmodels 	\
		unitconversion kdelibs4support ecm config init 	\
		kcmutils khtml
                
.include "${.CURDIR}/../../x11/kde5-plasma/bsd.kde5-plasma.mk"
.include <bsd.port.mk>

