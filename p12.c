// Write a c program to prepare pay slip using following data.Da = 10% of basic, Hra = 7.50% of basic, Ma = 300, Pf = 12.50% of basic.
// Gross = basic + Da + Hra + Ma
// Nt = Gross – Pf.

#include <stdio.h>
int main(){
    float basic, da, hra, ma =300, pf, gr, nt;
    
    printf("Enter Basic Salary : \n");
    scanf("%f",&basic);
    
    da = basic * 0.10;
    hra = basic * 0.075;
    pf = basic * 0.125;
    
    gr = basic + da + hra + ma;
    nt = gr - pf;
    
    printf("Salary Slip : \n");
    printf("Basic Salary : %.2f \n",basic);
    printf("DA : %.2f\n",da);
    printf("HRA : %.2f\n",hra);
    printf("MA : %.2f\n",ma);
    printf("PF : %.2f\n",pf);
    printf("Gross Salary : %.2f\n",gr);
    printf("Net Salary : %.2f\n",nt);
    
    return 0;
}

/*
Enter Basic Salary : 
10000
Salary Slip : 
Basic Salary : 10000.00 
DA : 1000.00
HRA : 750.00
MA : 300.00
PF : 1250.00
Gross Salary : 12050.00
Net Salary : 10800.00
*/

/*
Explanation (simple words)
Basic salary is taken from user.
DA, HRA and PF are calculated using given percentages.
MA is fixed as 300.
Gross salary is calculated by adding basic, DA, HRA and MA.
Net salary is calculated by subtracting PF from gross.
All salary details are displayed.

Viva explanation (remember these lines)
This program prepares a pay slip using basic salary.
DA, HRA, MA and PF are calculated and gross and net salary are displayed.

Viva quick questions
Q. Why float data type used?
→ Salary values can be decimal.
Q. What is gross salary?
→ Gross salary is total earnings before PF deduction.
Q. What is net salary?
→ Net salary is gross salary minus PF.
*/
