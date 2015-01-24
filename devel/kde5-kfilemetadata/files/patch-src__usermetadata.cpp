--- src/usermetadata.cpp.orig	2015-01-16 09:37:21 UTC
+++ src/usermetadata.cpp
@@ -138,7 +138,7 @@ bool UserMetaData::hasAttribute(const QS
 {
     k_getxattr(d->filePath, QStringLiteral("user") + key, 0);
 
-    return (errno != ENODATA);
+    return (errno != ENOATTR);
 }
 
 QString UserMetaData::attribute(const QString& key)
