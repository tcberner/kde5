--- ./src/plasmapkg/plasmapkg.cpp.orig	2014-08-02 08:21:59.000000000 +0000
+++ ./src/plasmapkg/plasmapkg.cpp	2014-08-20 17:04:16.000000000 +0000
@@ -47,7 +47,7 @@
 
 #include "config-plasma.h"
 
-static QTextStream cout(stdout);
+static QTextStream pc_cout(stdout);
 
 namespace Plasma
 {
@@ -379,7 +379,7 @@
 
 void PlasmaPkgPrivate::coutput(const QString &msg)
 {
-    cout << msg.toLocal8Bit().constData() << endl;
+    pc_cout << msg.toLocal8Bit().constData() << endl;
 }
 
 void PlasmaPkgPrivate::runKbuildsycoca()
