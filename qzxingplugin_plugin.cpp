#include "qzxingplugin_plugin.h"
#include "qzxingplugin.h"

#include <qqml.h>
#include <QZXing>

void QzxingpluginPlugin::initializeEngine(QQmlEngine *engine, const char *uri)
{
    Q_ASSERT(QString(QZXING_PLUGIN_ID) == uri);
    engine->addImageProvider(QLatin1String("QZXing"), new QZXingImageProvider());
}

void QzxingpluginPlugin::registerTypes(const char *uri)
{

    Q_ASSERT(QString(QZXING_PLUGIN_ID) == uri);
    // @uri QZXing
    qmlRegisterType<QZXingPlugin>(uri, 1, 0, "QZXingPlugin");
    qmlRegisterType<QZXing>(uri, 2, 3, "QZXing");
#ifdef QZXING_MULTIMEDIA
    qmlRegisterType<QZXingFilter>(uri, 2, 3, "QZXingFilter");
#endif //QZXING_MULTIMEDIA

}

