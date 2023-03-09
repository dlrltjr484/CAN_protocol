#include <stdbool.h>
#include <stdio.h>

typedef __int64_t   UINT64;
typedef __int32_t   UINT32;
typedef __int16_t   UINT16;
typedef __int8_t    UINT8;

#define DATA_FRAME      0
#define REMOTE_FRAME    1

#define LIST_MODE   0
#define MASK_MODE   1

typedef struct
{
    UINT32            id;                             
    UINT8             frame_type;                    
    UINT8             ide;
    UINT8             data_length;                    
    UINT8             data[8];                           
    UINT16            crc_sequence;                  
    UINT8             ark_slot;                     
} can_msg_type;

typedef struct
{
    UINT8              filter_mode;                   
    UINT16             filter_id;                 
    UINT16             filter_mask_id;            
} can_msg_filter;

typedef struct
{
    UINT8             prescaler;                     
    UINT8             nominal_bit_time;          
    UINT8             sync_seg;          
    UINT8             prop_seg;          
    UINT8             phase_seg1;          
    UINT8             phase_seg2;            
} can_bit_rate;




// void can_controller(void);
void can_get_core_clk(void);
void can_init_bit_rate(can_bit_rate *bit_rate);
int can_get_time_quantum(int *prescaler);
void can_set_nominal_bit_time_and_seg(can_bit_rate *nominal_info);
void can_init_msg_type(can_msg_type *send_msg);
int can_get_ide_format(int id);
int can_get_frame_type(int frame_type);

// void can_transceiver(void);
void can_init_filter(can_msg_filter *msg_filter);
int can_get_receivable_id(can_msg_filter *msg_filter);
void can_transmit_tx(int time, can_msg_type *transmit_msg);
void can_receive_rx(int receivable_id, can_msg_type *receive_msg);
int can_exception_handler(int check_case);



