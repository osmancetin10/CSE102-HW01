						/***************************/
						/*                         */
						/*      Osman Çetin        */
						/*       161044069         */
						/*          HW-01          */
						/*                         */
						/***************************/
#include <stdio.h>
#include <math.h>/*Because of this library, we can use mathematical functions.*/
#define PI 3.14/*we are defining pi here*/

double circle_area(double radius);
double calc_hypotenuse(int side1, int side2);
double calc_radius_of_smallest_circle(int side1, int side2);
double calc_radius_of_largest_circle(int side1, int side2);
double calc_area_of_smallest_circle(int side1, int side2);/*these are our function's prototypes*/
double calc_area_of_largest_circle(int side1, int side2);
double calc_area_of_smallest_square(int side1, int side2);
double calc_area_of_largest_square(int side1, int side2);
double calc_area_of_square (int side);
void display_results(double largest_circle,double largest_square,double smallest_circle,double smallest_square);

/*this program calculates
 the area of the largest circle that fits inside a rectangle,
 the area of the largest square that fits inside the rectangle,
 the area of the smallest circle that surrounds the same rectangle,
 the area of the smallest square that surrounds the same rectangle.
*/
int main(){	
	int side1,side2;
	double largest_circle,smallest_circle,largest_square,smallest_square;
	printf("Enter side1:");
	scanf("%d",&side1);
	printf("Enter side2:");
	scanf("%d",&side2);
	
	largest_circle = calc_area_of_largest_circle(side1,side2);
	smallest_circle = calc_area_of_smallest_circle(side1,side2);
	largest_square = calc_area_of_largest_square(side1,side2);
	smallest_square = calc_area_of_smallest_square(side1,side2);	
	
	display_results(largest_circle,smallest_circle,largest_square,smallest_square);
	return 0;
}

double circle_area(double radius){/*The purpose of this function is to find the area of ​​a triangle with a known radius.*/
	double area;
	area=PI*pow(radius,2);
	return area;
}

double calc_hypotenuse(int side1, int side2){/*The purpose of this function is to find hypotenuse of rectangle with a known sides*/
	double hypo;
	hypo=sqrt(pow(side1,2)+pow(side2,2));
	return hypo;
}

double calc_radius_of_smallest_circle(int side1, int side2){/*The purpose of this function is to find radius of the smallest circle that surrounds the rectangle */
	double radius;
	radius=calc_hypotenuse(side1,side2)/2;
	return radius;
}

double calc_radius_of_largest_circle(int side1, int side2){/*The purpose of this function is to find radius of the largest circle that fits inside a rectangle*/
	double radius;
	if(side1>=side2){
		radius=(double)side2/2;
	}
	else{
		radius=(double)side1/2;
	}
	
	return radius;
}

double calc_area_of_smallest_circle(int side1, int side2){/*The purpose of this function is to calculate area of the smallest circle that surrounds the rectangle*/
	double radius,area_small_circle;
	radius=calc_radius_of_smallest_circle(side1,side2);
	area_small_circle = circle_area(radius);
	return area_small_circle;
}

double calc_area_of_largest_circle(int side1, int side2){/*The purpose of this function is to calculate area of the largest circle that inside the rectangle*/
	double radius,area_largest_circle;
	radius=calc_radius_of_largest_circle(side1,side2);
	area_largest_circle=circle_area(radius);
	return area_largest_circle;
}

double calc_area_of_smallest_square(int side1, int side2){/*The purpose of this function is to calculate area of the smallest square that surrounds the rectangle*/
	double side;
	if(side1>=side2){
		side=side1;
	}
	else{
		side=side2;
	}
	
	return calc_area_of_square (side);
}

double calc_area_of_largest_square(int side1, int side2){/*The purpose of this function is to calculate area of the largest square that inside the rectangle*/
	double side;
	if(side1>=side2){
		side=side2;
	}
	else{
		side=side1;
	}
	
	return calc_area_of_square (side);
}

double calc_area_of_square (int side){/*The purpose of this function is to calculate area of square with a known side*/
	double area_square;
	area_square=pow(side,2);
	return area_square;
}


void display_results(double largest_circle,double largest_square,double smallest_circle,double smallest_square){/*This function prints results*/
	
	printf("\n---------------------------------------------------------------------------------");
	
	printf("\nThe area of the largest circle that fits inside a rectangle:%.2lf",largest_circle);	
	

	printf("\nThe area of the smallest circle that surrounds the same rectangle:%.2lf",smallest_circle);
	

	printf("\nThe area of the largest square that fits inside the rectangle:%.2lf",largest_square);
	

	printf("\nThe area of the smallest square that surrounds the same rectangle.%.2lf",smallest_square);
	printf("\n---------------------------------------------------------------------------------\n");	

}













