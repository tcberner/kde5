--- startkde/startkde.cmake.orig	2015-01-08 16:28:33 UTC
+++ startkde/startkde.cmake
@@ -3,6 +3,24 @@
 #  DEFAULT KDE STARTUP SCRIPT ( @PROJECT_VERSION@ )
 #
 
+# FreeBSD: add ${QTPREFIX}/lib/qt5/bin to path - note, this should be done better
+PATH=${PATH}:/usr/local/lib/qt5/bin
+export PATH
+
+# FreeBSD: add xdg-dirs (see misc/kde4-xdg-env)
+XDG_CONFIG_DIRS=${XDG_CONFIG_DIRS}:/etc/xdg:/usr/local/etc/xdg:/usr/local/etc/xdg/xfce
+export XDG_CONFIG_DIRS
+
+XDG_DATA_DIRS=${XDG_DATA_DIRS}:/usr/share:/usr/local/share:/usr/local/share/gnome
+export XDG_DATA_DIRS
+
+# FreeBSD: add qml/qt-plugin paths 
+QML2_IMPORT_PATH="/usr/local/lib/qml:/usr/local/qt5/qml:/usr/local/qt5/imports:${QML2_IMPORT_PATH}" 
+export QML2_IMPORT_PATH
+QT_PLUGIN_PATH="/usr/local/lib/plugins:/usr/local/lib/qt5/plugins/:${QT_PLUGIN_PATH}"
+export QT_PLUGIN_PATH
+
+
 if test "x$1" = x--failsafe; then
     KDE_FAILSAFE=1 # General failsafe flag
     KWIN_COMPOSE=N # Disable KWin's compositing

