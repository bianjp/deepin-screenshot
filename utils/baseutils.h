#ifndef BASEUTILS_H
#define BASEUTILS_H

#include <QCursor>
#include <QFont>
#include <QLayout>
#include <QFontMetrics>

enum ResizeDirection {
    Rotate,
    Moving,
    TopLeft,
    TopRight,
    BottomLeft,
    BottomRight,
    Top,
    Bottom,
    Left,
    Right,
    Outting,
};

QCursor setCursorShape(QString cursorName);
int stringWidth(const QFont &f, const QString &str);
QString     getFileContent(const QString &file);

#endif // BASEUTILS_H
