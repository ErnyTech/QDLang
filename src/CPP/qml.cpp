#include "qml.h"

// ===================== QJSEngine ====================
// 454
extern "C" QDLANGCPP_EXPORT QJSEngine* QJSEngine_create1(QObject* parent) {
    return new QJSEngine(parent);
}
// 455
extern "C" QDLANGCPP_EXPORT void QJSEngine_delete1(QJSEngine* wd) {
    if(wd->parent() == NULL) delete wd;
}
// 458
extern "C" QDLANGCPP_EXPORT void QJSEngine_evaluate(QJSEngine* wd, QString* qs, QString* qfile, int lineNumer) {
    if(!qfile) {
        if(lineNumer == 1)  wd->evaluate(*qs);
    }
}

// ===================== QQmlEngine ====================
// 456
extern "C" QDLANGCPP_EXPORT QQmlEngine* QQmlEngine_create1(QObject* parent) {
    return new QQmlEngine(parent);
}
// 457
extern "C" QDLANGCPP_EXPORT void QQmlEngine_delete1(QQmlEngine* wd) {
    if(wd->parent() == NULL) delete wd;
}

// ===================== QQmlApplicationEngine ====================
// 451
extern "C" QDLANGCPP_EXPORT QQmlApplicationEngine* QQmlApplicationEngine_create1(QObject* parent) {
    return new QQmlApplicationEngine(parent);
}
// 452
extern "C" QDLANGCPP_EXPORT void QQmlApplicationEngine_delete1(QQmlApplicationEngine* wd) {
    if(wd->parent() == NULL) delete wd;
}
// 453
extern "C" QDLANGCPP_EXPORT void QQmlApplicationEngine_load1(QQmlApplicationEngine* wd, QString* qs) {
    wd->load(*qs);
}
// 459 - эксперементальный метод
// ________________________________
extern "C" QDLANGCPP_EXPORT void QQmlApplicationEngine_setContextProperty1(QQmlApplicationEngine* wd, QString* qs, QObject* adr) {
    wd->rootContext()->setContextProperty(*qs, adr);
}
// ===================== QQmlContext ====================
// 464
extern "C" QDLANGCPP_EXPORT QQmlContext* qteQQmlContext_create1(QQmlEngine* parent) {
     return parent->rootContext();
}
// 467
extern "C" QDLANGCPP_EXPORT QQmlContext* qteQQmlContext_create2(QQmlEngine* parent, QObject* adr) {
     return new QQmlContext(parent, adr);
}

// 465
extern "C" QDLANGCPP_EXPORT void qteQQmlContext_delete1(QQmlContext* wd) {
    delete wd;
}
// 466
extern "C" QDLANGCPP_EXPORT void qteQQmlContext_setContextProperty(QQmlContext* wd, QString* qs, QObject* adr) {
    wd->setContextProperty(*qs, adr);
}

