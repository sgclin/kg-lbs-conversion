#include <iostream>

double kg_to_lb(double a)
{
	return a / 0.45359237;
}

double lb_to_kg(double a)
{
	return a * 0.45359237;
}


int main()
{
	std::cout << "[1] KG to LBS\n[2] LBS to KG\n";

	uint16_t userChoice;
	std::cout << "Option: ";
	std::cin >> userChoice;

	switch (userChoice)
	{
		case 1:
			double a;
			std::cout << "KG: ";
			std::cin >> a;

			std::cout << kg_to_lb(a) << " lbs";
			break;
		case 2:
			double b;
			std::cout << "LBS: ";
			std::cin >> b;

			std::cout << lb_to_kg(b) << " kg";
			break;
	}
}
