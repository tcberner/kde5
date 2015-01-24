--- src/server/clientconnection.h.orig	2015-01-16 20:32:52 UTC
+++ src/server/clientconnection.h
@@ -20,6 +20,10 @@ License along with this library.  If not
 #ifndef KWAYLAND_SERVER_CLIENTCONNECTION_H
 #define KWAYLAND_SERVER_CLIENTCONNECTION_H
 
+#include <pwd.h>
+#include <signal.h>
+
+
 #include <QObject>
 
 #include <KWayland/Server/kwaylandserver_export.h>
