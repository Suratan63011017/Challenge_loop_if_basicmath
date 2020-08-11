#include<stdio.h>
#include<math.h>
int main() {
	float start, finish;
	scanf("%f %f", &start, &finish); //input
	float average = (((start + finish) * (abs(finish - start) + 1)) / 2.0) / (abs(finish - start) + 1); //average = sum/count of data
	float sumforsd; //used for find S.D.
	if (start < finish)//start value less than finish value cases
	{
		for (int i = start; i <= finish; i++) {
			printf("%d ", i);
			sumforsd += pow((i - average), 2); //i - average = delta value
		}
	}
	else if (start > finish)//start value more than finish value cases
	{
		for (int i = start; i >= finish; i--) {
			printf("%d ", i);
			sumforsd += pow((i - average), 2); //i - average = delta value
		}
	}
	printf("\nAverage = %.2f", average); //average
	printf("\nSD = %.2f", sqrt(sumforsd / abs(finish - start))); //S.D.
	return 0;
}