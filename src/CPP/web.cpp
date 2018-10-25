#include "web.h"

// ============ QWebView =======================================
// 24
extern "C" QDLANGCPP_EXPORT void* qteQWebView_create(QWidget* parent) {
    return new QWebView(parent);
}
// 25
extern "C" QDLANGCPP_EXPORT void qteQWebView_delete(QWebView* wd) {
    if(!wd) return;
#ifdef debDelete
    printf("del QTabBar --> \n");
#endif
#ifdef debDestr
    if(wd->parent() == NULL) delete wd;
#endif
#ifdef debDelete
    printf("Ok\n");
#endif
}
// 26
extern "C" QDLANGCPP_EXPORT void qteQWebView_load(QWebView* wv, QUrl* url) {
    wv->load(*url);
}
