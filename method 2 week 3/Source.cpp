#include<stdio.h>
void BMIcalculator(float x, float y) {
	float z;
	z = x / (y * y);

	printf("Your BMI is %f\n", z = x / (y * y));

	if (z < 18.5) {
		printf("Underweight");
	}
	else if (z >= 18.5 && z <= 24.9) {
		printf("Normal");
	}
	else if (z > 24.9 && z <= 29.9) {
		printf("Overweight");
	}
	else {
		printf("Obese");
	}

}
int main() {

	float x, y;

	printf("Enter your weight (in Kg): ");
	scanf_s("%f", &x);

	printf("Enter your hight (in m.) : ");
	scanf_s("%f", &y);
	
	BMIcalculator(x,y);

	return 0;
}
