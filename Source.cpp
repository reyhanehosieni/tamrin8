#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main()
{
	int choice, n, line_Counter = 0, k=0;
	string line;
	struct product_info
	{
		int id = 0;
		string name = "";
		int price = 0;
		int quantity = 0;
	}*products;

	cout << "Enter the number of Products";
	cin >> n;
	products = new product_info[n];

	ifstream product_File;
	product_File.open("products.txt");

	while (getline(product_File, line))
	{
		line_Counter++;
		cout << "\nproduct " << line_Counter << " :";
		string array[4];
		int j = 0;
		for (int i = 0; i < line.size(); i++)
		{
			if (line[i] != ',')
				array[j] = array[j] + line[i];
			else
			{
				cout << array[j] << ',';
			
			}
			if (i == line.size() - 1)
			{
				switch (j) {
				case 0:
					products[k].id = stoi.(array[j]);
					break;
					case 1;
						products[k].name = array[j];
						break;
						case2;
						products[k].price = stoi.array[j];
						break;
						case3;
						products[k].quantity = stoi.array[j];
						break;
				}
				j++
			}
			k++
		}
	}
	product_File.close();

	delete[n]products;
