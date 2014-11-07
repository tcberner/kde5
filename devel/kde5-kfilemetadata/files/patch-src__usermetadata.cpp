--- src/usermetadata.cpp.orig	2014-10-09 11:53:16 UTC
+++ src/usermetadata.cpp
@@ -19,6 +19,7 @@
 
 #include "usermetadata.h"
 #include "xattr_p.h"
+#include <errno.h>
 
 #include <QSet>
 
@@ -137,7 +138,7 @@
 {
     k_getxattr(d->filePath, QStringLiteral("user") + key, 0);
 
-    return (errno != ENODATA);
+    return (errno != ENOATTR);
 }
 
 QString UserMetaData::attribute(const QString& key)
