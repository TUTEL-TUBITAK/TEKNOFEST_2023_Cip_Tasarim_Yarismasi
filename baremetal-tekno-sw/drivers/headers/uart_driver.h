
/// Functions ///
#include <stdint.h>

void     print           (const char *p);
void     zputchar        (char c);
void     print_hex       (uint32_t v, int digits);
char     zgetchar_prompt (char *prompt);
char     zgetchar        ();
int      zscan           (char *buffer, int max_size, int echo);
void     cmd_echo        ();
int      strcmp          (const char *p1, const char *p2);
uint32_t hexstr_to_uint  (char *buffer, uint8_t length);
uint32_t zscanint_prompt (char *prompt);
size_t   strlen          (const char *s);
void     tekno_printf    (const char *fmt, ...);

typedef union
{
	struct {
		unsigned int tx_en    : 1;
		unsigned int rx_en 	  : 1;
		unsigned int null	  : 14;
		unsigned int baud_div : 16;
	} fields;
	uint32_t bits;
}uart_ctrl;

typedef union
{
	struct {
		unsigned int tx_full  : 1;
		unsigned int rx_full  : 1;
		unsigned int tx_empty : 1;
		unsigned int rx_empty : 1;
		unsigned int null	  : 28;
	} fields;
	uint32_t bits;
}uart_status;