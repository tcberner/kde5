--- drkonqi/detachedprocessmonitor.cpp.orig	2015-01-08 16:28:33 UTC
+++ drkonqi/detachedprocessmonitor.cpp
@@ -16,6 +16,7 @@
 */
 #include "detachedprocessmonitor.h"
 
+#include <errno.h>
 #include <signal.h>
 
 #include <QtCore/QTimerEvent>
