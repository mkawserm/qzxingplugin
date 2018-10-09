#ifndef QZXINGPLUGIN_H
#define QZXINGPLUGIN_H

#include <QQuickItem>

class QZXingPlugin : public QQuickItem
{
    Q_OBJECT
    Q_DISABLE_COPY(QZXingPlugin)

public:
    QZXingPlugin(QQuickItem *parent = Q_NULLPTR);
    ~QZXingPlugin();
};

#endif // QZXINGPLUGIN_H
