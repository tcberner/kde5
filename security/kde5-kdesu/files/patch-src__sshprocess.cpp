--- ./src/sshprocess.cpp.orig	2014-07-17 15:54:32.000000000 +0200
+++ ./src/sshprocess.cpp	2014-07-17 15:54:55.000000000 +0200
@@ -17,6 +17,9 @@
 
 #include <QDebug>
 
+#include <time.h>
+
+
 extern int kdesuDebugArea();
 
 namespace KDESu
