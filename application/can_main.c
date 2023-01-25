#include <stdio.h>
#include "can_controller.h"
#include "can_transceiver.h"

int main(void)
{
    can_controller();
    can_transceiver();

    return 0;
}