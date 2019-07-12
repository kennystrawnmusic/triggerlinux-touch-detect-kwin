#include <iostream>
#include <QTouchDevice>

int main()
{
    if (QTouchDevice::devices().count() == 0) {
        std::cout << "false";
    } else {
        std::cout << "true";
    }
    return 0;
}
