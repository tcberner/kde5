--- ./src/html/doctypes.cpp.orig	2014-07-17 16:43:00.000000000 +0200
+++ ./src/html/doctypes.cpp	2014-07-17 16:43:10.000000000 +0200
@@ -1161,7 +1161,7 @@
     };
 
     if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH) {
-        register int key = hash(str, len);
+        register int key = ::hash(str, len);
 
         if (key <= MAX_HASH_VALUE && key >= 0) {
             register const char *s = wordlist[key].name;
