#include <ap_int.h>
/*					Sample structure for streaming. You can use this for the demo.
struct DTYPE							
{
	float data;
	ap_uint<1> last;
};
*/

typedef float DTYPE;
#define SIZE 1024 		/* SIZE OF DFT */
void top_dft(DTYPE real_sample[SIZE], DTYPE imag_sample[SIZE],DTYPE real_out[SIZE], DTYPE imag_out[SIZE]);
//void dft(DTYPE *, DTYPE *,DTYPE *, DTYPE *); use this for doing the demo// 
