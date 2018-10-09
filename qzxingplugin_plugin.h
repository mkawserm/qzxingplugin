#pragma once

#include <QtQml>
#include <QQmlExtensionPlugin>

#define QZXING_PLUGIN_ID "QZXing"

class QzxingpluginPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QZXING_PLUGIN_ID)

public:
    virtual void initializeEngine(QQmlEngine *engine, const char *uri);
    virtual void registerTypes(const char *uri);
};
