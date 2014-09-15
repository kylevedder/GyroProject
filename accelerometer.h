#ifndef __ACCEL_H__
#define __ACCEL_H__

//*****************************************************************************
//
// Defines
//
//*****************************************************************************
#define ACCEL_SLAVE_ADDRESS 0x19  //in 7 lsb of byte, address lsb=1

#define ACCEL_CTRL_REG1_A 		0x20
#define ACCEL_CTRL_REG2_A 		0x21
#define ACCEL_CTRL_REG3_A 		0x22
#define ACCEL_CTRL_REG4_A 		0x23
#define ACCEL_CTRL_REG5_A 		0x24
#define ACCEL_CTRL_REG6_A 		0x25
#define ACCEL_REFERENCE_A 		0x26
#define ACCEL_STATUS_REG_A 		0x27
#define ACCEL_OUT_X_L_A 		0x28
#define ACCEL_OUT_X_H_A 		0x29
#define ACCEL_OUT_Y_L_A 		0x2A
#define ACCEL_OUT_Y_H_A 		0x2B
#define ACCEL_OUT_Z_L_A 		0x2C
#define ACCEL_OUT_Z_H_A 		0x2D
#define ACCEL_FIFO_CTRL_REG_A	0x2E
#define ACCEL_FIFO_SRC_REG_A 	0x2F
#define ACCEL_INT1_CFG_A 		0x30
#define ACCEL_INT1_SOURCE_A 	0x31
#define ACCEL_INT1_THS_A 		0x32
#define ACCEL_INT1_DURATION_A 	0x33
#define ACCEL_INT2_CFG_A 		0x34
#define ACCEL_INT2_SOURCE_A 	0x35
#define ACCEL_INT2_THS_A 		0x36
#define ACCEL_INT2_DURATION_A 	0x37
#define ACCEL_CLICK_CFG_A 		0x38
#define ACCEL_CLICK_SRC_A 		0x39
#define ACCEL_CLICK_THS_A 		0x3A
#define ACCEL_TIME_LIMIT_A 		0x3B
#define ACCEL_TIME_LATENCY_A 	0x3C
#define ACCEL_TIME_WINDOW_A 	0x3D



//I2C buffer size
#define I2C_BUFFER_SIZE 6


//*****************************************************************************
//
// Function prototypes
//
//*****************************************************************************

void		Accel_Configure(void);
void		Accel_RegWrite(uint8_t ui8RegisterAddress, uint8_t ui8Data);
uint8_t		Accel_RegRead(uint8_t ui8RegisterAddress);
uint16_t	Accel_RegRead2(uint8_t ui8RegisterAddress);
void		Accel_Main();


#endif // __ACCEL_H__
