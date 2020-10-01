#include <stdio.h>

//Problem #1
int sum_mult_3_and_5 (int max){

int sum = 0;

int counter = 0;

while ( (3 * counter) < max){
	int mult_3 = 3 * counter;
	int mult_5 = 5 * counter;
	
	sum += mult_3;
	
	if (mult_5 < max) 
		sum += mult_5;
		
	counter++;
	}
	
	return sum;
}

//Problem #5

int smallest_multiple (){
	int true_false = 0;
	int multiple = 1;
    
	while (true_false == 0){
	true_false = 1;
        multiple++;
        
        int counter;
        	for (counter = 2; counter <= 20; counter++){
            		if (multiple % counter != 0){
                		true_false = 0;
                		break;
            		}
		}
        }
    
    return multiple;
}

//Problem #6
int sum_square_diff (int max){

	int square_sums = 0;
	int squared_sum = 0;
	
	int counter;
	for (counter = 1; counter <= max; counter++){
		square_sums += counter * counter;
		squared_sum += counter;
		}
		
	squared_sum = squared_sum * squared_sum;
	
	int difference = squared_sum - square_sums;
	return difference;
}
	
	
int main (){
	printf ("The answer to #1 is: %d\n", sum_mult_3_and_5(1000));
	printf ("The answer to #5 is: %d\n", smallest_multiple());
	printf ("The answer to #6 is: %d\n", sum_square_diff(100));
	
	return 0;
}
