#include "qzxingplugin_plugin.h"
#include "qzxingplugin.h"

#include <qqml.h>

void QzxingpluginPlugin::registerTypes(const char *uri)
{
    // @uri QZXing
    qmlRegisterType<QZXingPlugin>(uri, 1, 0, "QZXingPlugin");
}

