// Attempt to identify a window by name or attribute.
// by Adam Pierce <adam@doctort.org>

#include <X11/Xlib.h>
#include <X11/Xatom.h>
#include <iostream>
#include <list>

using namespace std;

class GetWindowProperty
{
public:
   GetWindowProperty(Display *display, Window window)
        : _display(display)
    {
    }

    void getWindowID()
    {
        ;
    }

private:
    Display  *_display;
};

int main(int argc, char **argv)
{
    // Start with the root window.
    Display *display = XOpenDisplay(0);

    Window focused;
    int revert_to;

    XGetInputFocus(display, &focused, &revert_to);
    
    GetWindowProperty properties(display, focused);

    properties.getWindowID();

    return 0;
}