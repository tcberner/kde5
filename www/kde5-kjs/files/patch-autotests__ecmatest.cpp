--- ./autotests/ecmatest.cpp.orig	2014-07-01 20:17:07.000000000 +0200
+++ ./autotests/ecmatest.cpp	2014-07-17 16:31:21.000000000 +0200
@@ -140,7 +140,7 @@
 #endif
 static QString basedir("");
 static QByteArray testrunner;
-static QMap<QByteArray, QByteArray> includes;
+static QMap<QByteArray, QByteArray> kj_includes;
 static QStringList expectedBroken;  // list of tests we know that will fail
 
 /**
@@ -148,7 +148,7 @@
  * @param fn filename
  * @return if operation succeeded
  *
- * Will load the given file into the "includes" map
+ * Will load the given file into the "kj_includes" map
  */
 static bool loadInclude(const QByteArray &fn)
 {
@@ -158,7 +158,7 @@
         return false;
     }
 
-    includes[ fn ] = runnerfile.readAll();
+    kj_includes[ fn ] = runnerfile.readAll();
 
     return true;
 }
@@ -180,7 +180,7 @@
     QVERIFY(loadInclude("sta.js"));
     QVERIFY(loadInclude("ed.js"));
 
-    testrunner = includes[ "sta.js" ] + includes[ "ed.js" ] + '\n';
+    testrunner = kj_includes[ "sta.js" ] + kj_includes[ "ed.js" ] + '\n';
 
     const QString brokenFn = QString::fromLatin1(qgetenv("ECMATEST_BROKEN").constData());
     if (!brokenFn.isEmpty()) {
@@ -278,11 +278,11 @@
 
         const QByteArray includeFile = testdata.mid(from + include.length(), endq - from - include.length());
 
-        if (! includes.contains(includeFile)) {
+        if (! kj_includes.contains(includeFile)) {
             QVERIFY(loadInclude(includeFile));
         }
 
-        testscript += includes[ includeFile ];
+        testscript += kj_includes[ includeFile ];
         from = endq;
     }
 
