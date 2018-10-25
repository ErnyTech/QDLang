#ifndef QTE5WIDGETS_GLOBAL_H
#define QTE5WIDGETS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(_WIN32) || defined(_WIN64)
    #define DLL_EXPORT __declspec(dllexport)
    #define DLL_IMPORT __declspec(dllimport)
#else
    #define DLL_EXPORT
    #define DLL_IMPORT
#endif
    
#if defined(QDLANGCPP_LIBRARY)
    #define QDLANGCPP_EXPORT Q_DECL_EXPORT DLL_EXPORT
#else
    #define QDLANGCPP_EXPORT Q_DECL_IMPORT DLL_IMPORT
#endif

#endif // QTE5GUI_GLOBAL_H
