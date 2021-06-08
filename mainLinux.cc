#include "webview.h"
#ifdef WIN32
int WINAPI WinMain(HINSTANCE hInt, HINSTANCE hPrevInst, LPSTR lpCmdLine,
int nCmdShow) {
#else
int main() {
#endif
  webview::webview w(true, nullptr);
  w.set_title("TITLE_NAME");
  w.set_size(WIDTH_SIZE, HEIGHT_SIZE, WEBVIEW_HINT_NONE);
  w.navigate("URLWEB");
  w.run();
  return 0;
}
