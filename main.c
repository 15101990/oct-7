#include <stdio.h>
#include <stdlib.h>

void shutdown(void);           // 1 - function prototype

int main()
{
    if (key_button == 1)
    shutdown();               // calling

    if (remote_button == 1)
    shutdown();

    if (RFID == 0)
    shutdown();

    if (mobile_app_button == 1)
    shutdown();

    return 0;
}
    shutdown()                // 3 - function body
    {
        motor  = 0;
        acc    = 0;
        lock   = 1;
        window = 0;
    }
