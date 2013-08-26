#include <stdio.h>

main() {
    double sample_float = 1.2345000;
    
    printf("zero padding in back of a number: %.5f %.6f %.7f\n", sample_float, sample_float, sample_float);
    printf("zero padding in front of a number: %05.4f %07.4f %08.4f\n", sample_float, sample_float, sample_float);
    printf("exponentials (base 10): %.4e %.5e %.6e\n", sample_float, sample_float, sample_float);
    printf("truncation vs rounding of numbers: %.3f \n", sample_float); //note the answer is not 1.235
    printf("negative numbers: %.4f %.4e\n", -1*sample_float, -1*sample_float);
}