--- src/qmlcontrols/kquickcontrolsaddons/plotter.cpp.orig	2015-02-08 15:14:40 UTC
+++ src/qmlcontrols/kquickcontrolsaddons/plotter.cpp
@@ -22,6 +22,7 @@
 */
 
 #include <epoxy/gl.h>
+#include <math.h>
 #include "plotter.h"
 
 #include <QGuiApplication>
@@ -560,8 +561,8 @@ void Plotter::render()
 
     //encase all m_plotData access in a mutex, since rendering is usually done in another thread
     m_mutex.lock();
-    int roundedHeight = std::lround(height());
-    int roundedWidth = std::lround(width());
+    int roundedHeight = lround(height());
+    int roundedWidth = lround(width());
 
     for (auto data : m_plotData) {
         // Interpolate the data set
@@ -604,7 +605,7 @@ void Plotter::render()
     m_mutex.unlock();
 
     //s single line as base for the graph and divide between multiple stacked ones
-    vertices << QVector2D(0, std::lround(height()-1)) << QVector2D(width(), std::lround(height()-1));
+    vertices << QVector2D(0, lround(height()-1)) << QVector2D(width(), lround(height()-1));
 
     // Upload vertices
     GLuint vbo;
@@ -763,14 +764,14 @@ QSGNode *Plotter::updatePaintNode(QSGNod
 
     if (n->texture()->textureSize() != boundingRect().size()) {
         //we need a size always equal or smaller, size.toSize() won't do
-        static_cast<PlotTexture *>(n->texture())->recreate(QSize(std::lround(boundingRect().size().width()), std::lround(boundingRect().size().height())));
+        static_cast<PlotTexture *>(n->texture())->recreate(QSize(lround(boundingRect().size().width()), lround(boundingRect().size().height())));
         m_matrix = QMatrix4x4();
-        m_matrix.ortho(0, std::lround(width()), 0, std::lround(height()), -1, 1);
+        m_matrix.ortho(0, lround(width()), 0, lround(height()), -1, 1);
     }
 
     n->setRect(QRect(QPoint(0,0),
-                     QSize(std::lround(boundingRect().size().width()),
-                           std::lround(boundingRect().size().height()))));
+                     QSize(lround(boundingRect().size().width()),
+                           lround(boundingRect().size().height()))));
     return n;
 }
 
