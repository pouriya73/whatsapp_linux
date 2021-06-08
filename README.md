# whatsapp_linux
Whatsapp Application  for Linux (Ubuntu 20.4) 

Details
--------------------------------------------
Programming Language : C++

Library : Webview.h

Browser detected by the phone :Safari (Mac OS)

Usage
--------------------------------------------
Open the Linux terminal and type the following command : 

$ ./whatsapp

Then connect to WhatsApp by scanning QR

*-need library webkit2gtk-4.0 on Linux (Ubuntu 20.4)*

Ubuntu 20.4

$ sudo apt-get install libwebkit2gtk-4.0-dev

Fedora 31

$ sudo dnf install webkit2gtk3-devel.x86_64

Build App
-------------------------------------------------
terminal:

$ c++ SOURCE_NAME.cc `pkg-config --cflags --libs gtk+-3.0 webkit2gtk-4.0` -o APPNAME

Source App
---------------------------------------------------
#include "webview.h"

#ifdef WIN32

int WINAPI WinMain(HINSTANCE hInt, HINSTANCE hPrevInst, LPSTR lpCmdLine,

int nCmdShow) {

#else

int main() {

#endif

  webview::webview w(true, nullptr);
	
  w.set_title(" _TITLE_NAME_ ");
	
  w.set_size( _WIDTH_SIZE_ , _HEIGHT_SIZE_ , WEBVIEW_HINT_NONE);
	
  w.navigate(" _URLWEB_ ");
	
  w.run();
	
  return 0;
	
}

Change :(sample)

_TITLE_NAME_ : TEST_APP

_WIDTH_SIZE_ : 200 without px

_HEIGHT_SIZE_ : 100 without px

_URLWEB_ : http(s)://SAMPLE.com
