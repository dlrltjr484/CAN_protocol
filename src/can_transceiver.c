#include "header.h"

int user_receivable_id;

void can_transceiver(void)
{
    printf(" [%s:%d] \n" , __FUNCTION__ , __LINE__ );
}

void can_init_filter(can_msg_filter *msg_filter)
{
    printf(" [%s:%d] \n" , __FUNCTION__ , __LINE__ );

    user_receivable_id = 0x100;
}

void can_transmit_tx(int time, can_msg_type *transmit_msg)
{
    printf(" %0x \n" , transmit_msg->id);
    printf(" %d \n" , time);
}

void can_receive(int receivable_id, can_msg_type *receive_msg)
{
    printf(" %0x \n" , receive_msg->id);
    printf(" %d \n" , receivable_id);
}
