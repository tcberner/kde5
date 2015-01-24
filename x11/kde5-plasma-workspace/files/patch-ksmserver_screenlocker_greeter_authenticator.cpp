--- ksmserver/screenlocker/greeter/authenticator.cpp.orig	2015-01-08 16:28:33 UTC
+++ ksmserver/screenlocker/greeter/authenticator.cpp
@@ -30,6 +30,7 @@ along with this program.  If not, see <h
 #include <QTimer>
 
 // system
+#include <errno.h>
 #include <unistd.h>
 #include <sys/types.h>
 #include <sys/socket.h>
