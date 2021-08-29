#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX_LIMIT 26
char name_of_staff[MAX_LIMIT];
char m_status; //ms means marital status
int q;   //q means qualification
int b_salary;    //bs means basic salary
int m_allowance; // marital allowance 
int tax;
int h_allowance; //health allowance
float net_pay;//
int gross_pay;//
int payrolCalc(void);

int main()
{
   payrolCalc(); 
}

int payrolCalc(void)
{
    printf("Enter the name of the staff: ");
    scanf("%s", name_of_staff);
    printf("Enter 1 for phd,2 for MSC,3 for BSC and 4 for OND as qualification:\n ");
    scanf("%d",&q);
    printf("Enter M for married staff and S for single staff as marital staff:\n ");
    scanf("%c", &m_status);
    
    
    //calculating staff basic salary using qualification
    if (q == 1)
    {
        b_salary = 50000;
        printf("Qualification: PHD\n");
    }
    else if (q == 2)
    {
        b_salary = 40000;
        printf("Qualification: MSC\n");
    }
    else if (q == 3)
    {
        b_salary = 30000;
        printf("Qualification: BSC\n");
    }
    else 
    {
        b_salary = 20000;
        printf("Qualification: OND\n");
    }
    //calculating marital allowance  using basic salary
    if (m_status == 'M')
        m_allowance = b_salary * 0.2;
    else 
        m_allowance = b_salary * 0.1;

    tax = b_salary * 0.1;
    h_allowance = b_salary * 0.2;
    gross_pay = b_salary + m_allowance + h_allowance + tax;
    net_pay = gross_pay - tax;
    printf("NET PAY: %.2f\n", net_pay);

    return (0);   
}