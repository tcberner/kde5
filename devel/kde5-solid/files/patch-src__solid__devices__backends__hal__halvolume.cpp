--- ./src/solid/devices/backends/hal/halvolume.cpp.orig	2014-07-17 13:26:46.000000000 +0200
+++ ./src/solid/devices/backends/hal/halvolume.cpp	2014-07-17 13:26:55.000000000 +0200
@@ -20,7 +20,7 @@
 
 #include "halvolume.h"
 #include "halstorageaccess.h"
-#include "../../genericinterface.h"
+#include "../../../solid/genericinterface.h"
 
 using namespace Solid::Backends::Hal;
 
