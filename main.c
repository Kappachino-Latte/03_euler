#include <stdio.h>

//Problem #1
int sum_mult_3_and_5 (int max){

	int sum = 0;

	int i = 0;

	for (i = 0; i < max; i++){
		if ( (i%3==0) || (i%5==0) )
			sum+=i;
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
        
        int i;
        	for (i = 2; i <= 20; i++){
            		if (multiple % i != 0){
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
	
	int i;
	for (i = 1; i <= max; i++){
		square_sums += i * i;
		squared_sum += i;
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
