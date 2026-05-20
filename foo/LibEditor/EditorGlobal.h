#ifndef EDITORGLOBAL_H
#define EDITORGLOBAL_H

#include <QtGlobal>

#if defined(EDITOR_LIBRARY)
 #  define EDITOR_EXPORT Q_DECL_EXPORT
 #else
 #  define EDITOR_EXPORT Q_DECL_IMPORT
 #endif

#endif // EDITORGLOBAL_H
