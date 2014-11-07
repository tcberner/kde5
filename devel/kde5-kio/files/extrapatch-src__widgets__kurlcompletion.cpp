--- ./src/widgets/kurlcompletion.cpp.orig	2014-07-04 22:30:39.000000000 +0200
+++ ./src/widgets/kurlcompletion.cpp	2014-07-17 14:50:03.000000000 +0200
@@ -830,9 +830,11 @@
 // Environment variables
 //
 
+/*
 #ifndef Q_OS_WIN
 extern char **environ; // Array of environment variables
 #endif
+*/
 
 bool KUrlCompletionPrivate::envCompletion(const KUrlCompletionPrivate::MyURL &url, QString *pMatch)
 {
@@ -840,6 +842,7 @@
         return false;
     }
 
+    /*
     if (!isListedUrl(CTEnv)) {
         q->stop();
         q->clear();
@@ -873,8 +876,10 @@
 
     *pMatch = finished();
     return true;
-}
-
+    */
+    return false; 
+}        
+            
 //////////////////////////////////////////////////
 //////////////////////////////////////////////////
 // Executables
