#ifndef gtk_webview_impl_h
#define gtk_webview_impl_h

#include <optional>
#include <webkit2/webkit2.h>

#include "../webview/webview.h"

namespace DeskGap {
    struct WebView::Impl {
		WebKitWebView* gtkWebView;
		WebView::EventCallbacks callbacks;
		std::optional<std::string> servedPath;
		
		gulong loadChangedHandler;
    };
}

#endif
