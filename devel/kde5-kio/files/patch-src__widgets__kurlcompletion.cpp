--- ./src/widgets/kurlcompletion.cpp.orig	2014-07-18 14:52:56.000000000 +0200
+++ ./src/widgets/kurlcompletion.cpp	2014-07-18 14:53:38.000000000 +0200
@@ -831,7 +831,11 @@
 //
 
 #ifndef Q_OS_WIN
-extern char **environ; // Array of environment variables
+
+extern "C" 
+{
+    char **environ; // Array of environment variables
+}    
 #endif
 
 bool KUrlCompletionPrivate::envCompletion(const KUrlCompletionPrivate::MyURL &url, QString *pMatch)
