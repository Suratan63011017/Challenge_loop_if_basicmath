#include<stdio.h>
#include<math.h>
int main() {
	float start, finish;
	scanf_s("%f %f", &start, &finish); //input
	float average;
	if (start < finish) {
		average = (((start + finish)*((finish - start) + 1)) / 2.0) / ((finish-start) + 1);
	}
	else if (start > finish) {
		average = (((start + finish)*((start - finish) + 1)) / 2.0) / ((start-finish) + 1);
	}
	float sumforsd = 0; //used for find S.D.
	if (start < finish)//start value less than finish value cases
	{
		for (int i = start; i <= finish; i++) {
			printf("%d ", i);
			sumforsd += pow((i-average), 2); //i - average = delta value
		}
	}
	else if (start > finish)//start value more than finish value cases
	{
		for (int i = start; i >= finish; i--) {
			printf("%d ", i);
			sumforsd += pow((i-average), 2); //i - average = delta value
		}
	}
	printf("\nAverage = %.2f",average); //average
	if (start < finish) {
		printf("\nSD = %.2f", sqrt(sumforsd /(finish - start))); //S.D.
	}
	else if (start > finish) {
		printf("\nSD = %.2f", sqrt(sumforsd /(start - finish))); //S.D.
	}
	return 0;
}