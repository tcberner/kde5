--- containments/folder/plugin/positioner.cpp.orig	2015-01-08 16:15:45 UTC
+++ containments/folder/plugin/positioner.cpp
@@ -569,7 +569,7 @@ void Positioner::sourceRowsAboutToBeRemo
         QHash<int, int> newProxyToSource;
         QHash<int, int> newSourceToProxy;
         QHashIterator<int, int> it(m_sourceToProxy);
-        int delta = std::abs(first - last) + 1;
+        int delta = abs(first - last) + 1;
 
         while (it.hasNext()) {
             it.next();
