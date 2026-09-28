# include<stdio.h>

//function prototype
float calculatetax(float Gross_salary);
int main(){
float salary,result,Net_salary;
printf("enter salary earned:\t");
scanf("%f",& salary);

//function call
result=calculatetax(salary);
Net_salary=salary-result;
printf("\n");
printf(" Kenya Revenue Authority\n");
printf("======================\n");
printf("Gross salary: ksh%.2f\n", salary);
printf("tax deducted:ksh%.2f\n", result);
printf("Net salary earned:ksh%.2f\n",Net_salary);
printf("======================\n");
return 0;
}

//function definition
float calculatetax(float Gross_salary){
float tax;
if(Gross_salary<30000){
tax=0.05*Gross_salary;
}
else if(Gross_salary>=30000 &&Gross_salary<=59999){
tax=0.1*Gross_salary;
}
else if(Gross_salary>=60000){
tax=0.15*Gross_salary;}

return tax;
}