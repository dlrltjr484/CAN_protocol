#include "header.h"

int bit_time;

void can_controller(void)
{
    printf(" [%s:%d] \n" , __FUNCTION__ , __LINE__ );
}

void can_init_bit_rate(can_bit_rate *bit_rate)
{
    printf(" [%s:%d] \n" , __FUNCTION__ , __LINE__ );
    bit_time = 1;
}

int can_get_time_quantum(int *prescaler)
{   
    int time_quantum= 0;
    return time_quantum;
} 

void can_set_nominal_bit_time_and_seg(can_bit_rate *nominal_info)
{

}



void can_set_msg_type(can_msg_type *send_msg)
{
    printf(" [%s:%d] \n" , __FUNCTION__ , __LINE__ );

    can_msg_type data = *send_msg;
    
    can_transmit_tx(bit_time, &data);
}


