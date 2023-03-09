#include "header.h"


int main(void)
{
    // can_controller();
    // can_transceiver();

    can_bit_rate user_bit_rate = { 20, 10, 1, 1, 5, 3};
    can_msg_filter user_filter = { MASK_MODE , 0x121 , 0x000 };
    can_msg_type msg1 = { 0x121 , DATA_FRAME , 8 , 0x12345678 , 123 , 1 , 1 , 1 };

    can_init_bit_rate(&user_bit_rate);
    can_init_filter(&user_filter);
    
    can_set_msg_type(&msg1);
    

    return 0;
}