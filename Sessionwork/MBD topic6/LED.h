
typedef enum
	{
		LED_enumError_WrongPin,
		LED_enumError_WrongPort,
		LED_enumError_WrongConfig,
		LED_enumError_OK,
		LED_enumError_NOK
	}LED_enumError_t;

typedef enum
{
	FIRST_LED
}LED_ID_t;

typedef enum
{
LED_OFF,
LED_ON
}LED_enumState_t;

LED_enumError_t LED_SET(LED_ID_t LED_NAME_ID,LED_enumState_t LED_OUTPUT_STATE);
