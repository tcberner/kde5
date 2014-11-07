--- containments/folder/plugin/positioner.cpp.orig	2014-10-24 16:15:21 UTC
+++ containments/folder/plugin/positioner.cpp
@@ -569,7 +569,7 @@
         QHash<int, int> newProxyToSource;
         QHash<int, int> newSourceToProxy;
         QHashIterator<int, int> it(m_sourceToProxy);
-        int delta = std::abs(first - last) + 1;
+        int delta = abs(first - last) + 1;
 
         while (it.hasNext()) {
             it.next();
