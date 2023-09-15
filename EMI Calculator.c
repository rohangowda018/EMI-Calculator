/*Fixed rate home equity loan is calculated based on the user input for the Loan Amount (LA), 
Interest Rate (IR) and Number of Months (n). Print the calculated monthly payment.*/

#include<stdio.h>
#include<math.h>
int main(void)
{
    int n,LA,N; // LA = Loan amount, N = Number of months to pay off.
    float MP,IR,I,P,BA; // MP = monthly payment, IR = Interest rate, I = Interest, P = Principal, BA = Balance Amount.
    printf("Enter the total Loan Amount: \n");
    scanf("%i", &LA);
    printf("Enter the Interest Rate: \n");
    scanf("%f", &IR);
    printf("Enter the Mortgage term: \n");
    scanf("%i", &N);
    MP = LA * IR/1200 * pow(1 + IR /1200, N) / (pow(1 + IR /1200, N) - 1);
    printf("Loan Amount: %i\n", LA);
    printf("Intrest Rate: %f\n", IR);
    printf("Mortgage Term: %i\n", N);
    printf("Monthly Payment: %f\n\n", MP);
    printf("Payment schedule for %d months based on monthly payment of %f\n\n", N, MP);
    printf("Payment\t Principal\t Interest\t Balance\n\n");
    BA = LA; //For the first payment Balance is same as the loan amount
    for (n = 1; n <= N; n++)
    {
        I = BA * IR/1200; //Interest = Balance * Interest Rate/1200
        P = MP - I; //Principal = Monthly Payment – Interest
        BA = BA - P; //Balance = Balance – Principal
        printf("%i\t %f\t %f\t %f\n", n, P, I, BA);
    }
    return 0;
}
