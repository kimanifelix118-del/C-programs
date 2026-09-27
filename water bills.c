#include <stdio.h>
//function prototype
float calculate_bill(int units);

int main() {
int units_consumed;
float totalbill;
printf("enter number of electricity units consumed:\t");
scanf("%d", & units_consumed);

//function call
totalbill=calculate_bill(units_consumed);

printf("\n");
printf("Karuri water and sanitation company\n");
printf("============================\n");
printf("units consumed:%d\n", units_consumed);
printf("totalbill:ksh%.2f\n", totalbill);
printf("============================\n");
return 0;
}

//function defition
float calculate_bill(int units){
float bill;
if(units <=100){
	bill=units*10.0;
}
else if (units<=200){
	bill=(100*10.0)+((units-100)*15.0);
} 
else {
	bill=(100*10.0)+(100.0*15.0)+((units-200)*20.0);
}
return bill;
}
