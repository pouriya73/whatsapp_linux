# whatsapp_linux
Whatsapp Application  for Linux (Ubuntu 20.4) 

Details
--------------------------------------------
Programming Language : C++

Library : 
```
Webview.h
gtk+-3.0
webkit2gtk-4.0
pkg-config
```
Browser detected by the phone :Safari (Mac OS)

Usage
--------------------------------------------
Open the Linux terminal and type the following command : 
```
$./whatsapp
```
Then connect to WhatsApp by scanning QR

*-need library webkit2gtk-4.0 on Linux (Ubuntu 20.4)*

Ubuntu 20.4
```
$ sudo apt-get install libwebkit2gtk-4.0-dev
```
Fedora 31
```
$ sudo dnf install webkit2gtk3-devel.x86_64
```
Build App
-------------------------------------------------
terminal:
```
$ c++ SOURCE_NAME.cc `pkg-config --cflags --libs gtk+-3.0 webkit2gtk-4.0` -o APPNAME
```
Source App
---------------------------------------------------
```
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
```


Change Sourcecode:(sample)
----
```
TITLE_NAME : TEST_APP
WIDTH_SIZE : 200 without px
HEIGHT_SIZE : 100 without px
URLWEB : http(s)://SAMPLE.com
```
