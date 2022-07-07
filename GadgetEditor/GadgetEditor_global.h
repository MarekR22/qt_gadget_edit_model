#ifndef GADGETEDITOR_GLOBAL_H
#define GADGETEDITOR_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(GADGETEDITOR_LIBRARY)
#  define GADGETEDITOR_EXPORT Q_DECL_EXPORT
#else
#  define GADGETEDITOR_EXPORT Q_DECL_IMPORT
#endif

#endif // GADGETEDITOR_GLOBAL_H