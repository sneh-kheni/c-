#include <iostream>
#include <cmath>
using namespace std;

class FinancialCalculator {  // Capital 'C' here
public:
    void simpleInterest() {
        float principal, rate, time, si;
        cout << "\n--- Simple Interest ---\n";
        cout << "Enter Principal: ";
        cin >> principal;
        cout << "Enter Rate of Interest (%): ";
        cin >> rate;
        cout << "Enter Time (in years): ";
        cin >> time;

        si = (principal * rate * time) / 100;
        cout << "Simple Interest = " << si << endl;
    }

    void compoundInterest() {
        float principal, rate, time, amount, ci;
        cout << "\n--- Compound Interest ---\n";
        cout << "Enter Principal: ";
        cin >> principal;
        cout << "Enter Rate of Interest (%): ";
        cin >> rate;
        cout << "Enter Time (in years): ";
        cin >> time;

        amount = principal * pow((1 + rate / 100), time);
        ci = amount - principal;
        cout << "Compound Interest = " << ci << endl;
    }

    void calculateEMI() {
        float principal, rate, time, emi;
        cout << "\n--- EMI Calculation ---\n";
        cout << "Enter Loan Amount: ";
        cin >> principal;
        cout << "Enter Annual Interest Rate (%): ";
        cin >> rate;
        cout << "Enter Loan Tenure (in years): ";
        cin >> time;

        float monthlyRate = rate / (12 * 100);
        int months = static_cast<int>(time * 12);
        emi = (principal * monthlyRate * pow(1 + monthlyRate, months)) / (pow(1 + monthlyRate, months) - 1);
        cout << "Monthly EMI = " << emi << endl;
    }

    void loanAffordability() {
        float monthlyIncome, monthlyExpenses, rate, tenure, maxLoan;
        cout << "\n--- Loan Affordability ---\n";
        cout << "Enter Monthly Income: ";
        cin >> monthlyIncome;
        cout << "Enter Monthly Expenses: ";
        cin >> monthlyExpenses;
        cout << "Enter Annual Interest Rate (%): ";
        cin >> rate;
        cout << "Enter Loan Tenure (in years): ";
        cin >> tenure;

        float available = monthlyIncome - monthlyExpenses;
        float monthlyRate = rate / (12 * 100);
        int months = static_cast<int>(tenure * 12);

        maxLoan = (available * (pow(1 + monthlyRate, months) - 1)) / (monthlyRate * pow(1 + monthlyRate, months));
        cout << "Maximum Loan You Can Afford = " << maxLoan << endl;
    }
};

int main() {
    FinancialCalculator calc;  // Capital 'C' here
    int choice;

    do {
        cout << "\n=== Financial Calculator ===\n";
        cout << "1. Simple Interest\n";
        cout << "2. Compound Interest\n";
        cout << "3. EMI Calculation\n";
        cout << "4. Loan Affordability\n";
        cout << "5. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch(choice) {
            case 1: calc.simpleInterest(); break;
            case 2: calc.compoundInterest(); break;
            case 3: calc.calculateEMI(); break;
            case 4: calc.loanAffordability(); break;
            case 5: cout << "Thank you! Exiting...\n"; break;
            default: cout << "Invalid choice. Please try again.\n";
        }
    } while(choice != 5);

    return 0;
}
