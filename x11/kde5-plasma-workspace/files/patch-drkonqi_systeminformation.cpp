--- drkonqi/systeminformation.cpp.orig	2015-01-08 16:28:33 UTC
+++ drkonqi/systeminformation.cpp
@@ -26,6 +26,8 @@
 # include <sys/utsname.h>
 #endif
 
+#include <errno.h>
+
 #include <QtCore/QFile>
 
 #include <KProcess>
