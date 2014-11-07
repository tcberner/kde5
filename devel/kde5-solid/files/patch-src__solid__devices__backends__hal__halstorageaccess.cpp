--- ./src/solid/devices/backends/hal/halstorageaccess.cpp.orig	2014-07-04 22:19:20.000000000 +0200
+++ ./src/solid/devices/backends/hal/halstorageaccess.cpp	2014-07-17 13:26:01.000000000 +0200
@@ -21,7 +21,7 @@
 #include "halstorageaccess.h"
 
 #include "halfstabhandling.h"
-#include "../../genericinterface.h"
+#include "../../../solid/genericinterface.h"
 
 #include <QtCore/QLocale>
 #include <QtCore/QDebug>
