#include <iostream>
//#include <vector>
//#include <list>
#include <map>
using namespace std;

int main()
{
	/*vector<int> arr{1, 2, 3, 4, 5};
	cout << arr[0] << endl;
	for (auto ptr = arr.begin(); ptr != arr.end(); ptr++)                                                                                                          
	{
		cout << *ptr << "\t";
	}
	cout << endl;*/

	/*list<int> List{1,2,3,4,5};
	for (auto ptr = List.begin(); ptr != List.end(); ptr++)
	{
		cout << *ptr << "\t";
	}
	cout << endl; 

	List.push_back(100);
	List.push_front(200);

	for (auto ptr = List.begin(); ptr != List.end(); ptr++)
	{
		cout << *ptr << "\t";
	}
	cout << endl;*/

	map<string, string> dict;
	string key, value;
	int v;
	system("color 07");
	do {
		cout << "1. Add\n2. Search\n3. Print\n 4. Exit\n--> ";
		cin >> v;
		switch (v)
		{
		case 1:
			system("cls");
			system("color 17");
			cout << "Enter key: ";
			cin >> key;
			cout << "Enter value: ";
			cin >> value;
			dict.insert(make_pair(key, value));
			break;
		case 2:
			system("cls");
			system("color 80");
			cout << "Enter key: ";
			cin >> key;
			cout << dict.find(key)->second << endl;
			break;
		case 3:
			system("cls");
			system("color 30");
			for (auto ptr = dict.begin(); ptr != dict.end(); ptr++)
			{
				cout << ptr->first << " - " << ptr->second << endl;
			}
			break;
		case 4:
			system("cls");
			system("color 04");
			cout << "Exit..." << endl;
			exit(1);
			break;
		}
		
	} while (v!=4);

}