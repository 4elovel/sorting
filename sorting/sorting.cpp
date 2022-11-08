#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	bool leaver = true;
	vector <string> letters{ "А", "Б", "В", "Г", "Ґ", "Д", "Е", "Є", "Ж", "З", "И", "І", "Ї", "Й", "К", "Л", "М", "Н", "О", "П", "Р", "С", "Т", "У", "Ф", "Х", "Ц", "Ч", "Ш", "Щ", "ь", "Ю", "Я", "а", "б", "в", "г", "ґ", "д", "е", "є", "ж", "з", "и", "і", "ї", "й", "к", "л", "м", "н", "о", "п", "р", "с", "т", "у", "ф", "х", "ц", "ч", "ш", "щ", "ь", "ю", "я", "’" };
	vector <string> vec{ "Іваненко", "Їжаченко", "Ґалаґан", "Дзюба", "Єремійчук", "Григорчук", "Козачук", "Олексюк", "Петрюк", "Пилип’юк", "Чумаченко","Костюченко", "Андрійчук", "Яворівський", "Пилипенко", "Бур’яненко", "Буряченко", "Лук’яненко", "Лук’янченко" };

	bool first = false, second = false;
	int res1, res2;

	cout << "Before:\n";
	for (string i : vec)
	{
		cout << i << endl;
	}
	cout << "\n\n";

	while (leaver) {
		leaver = false;
		for (size_t i = 0; i < vec.size() - 1; ++i)
		{

			for (size_t j = 0; j < vec[i].size(); ++j)
			{

				for (size_t t = 0; t < letters.size(); ++t)
				{
					if (!first && vec[i][j] == letters[t][0])
					{
						res1 = t;
						first = true;
					}
					if (!second && vec[i + 1][j] == letters[t][0])
					{
						res2 = t;
						second = true;
					}
				}

				first = second = false;

				if (res1 == res2)
				{
					continue;
				}

				if (res1 > res2)
				{
					swap(vec[i], vec[i + 1]);
					leaver = true;
					break;
				}
				if (res1 < res2)
				{
					break;
				}

			}

		}

	}

cout << "After:\n";

for (string i : vec)
{
	cout << i << endl;
}

	










	//while (leaver)
	//{
	//	leaver = false;

	//	for (size_t i = 0; i < vec.size()-1; i++)
	//	{

	//		for (size_t j = 0; j < vec[i].size(); j++)
	//		{
	//			int buf1, buf2;
	//			for (size_t k = 0; k < letters.size(); k++)
	//			{

	//				if (vec[i].substr(j,1) == letters[k])
	//				{
	//					buf1 = k;
	//					cout << " букву 1 знайдено\n";
	//				}
	//				if (vec[i+1].substr(j,1) == letters[k])
	//				{
	//					buf2 = k;
	//					cout << " букву 2 знайдено\n";
	//				}
	//			}
	//			if (buf1==buf2)
	//			{

	//				cout << "однаково\n";
	//				continue;
	//			}
	//			else if (buf1 > buf2) {
	//				cout << "більше\n";
	//				leaver = true;
	//				swap(vec[i], vec[i + 1]);
	//			}
	//			else if (buf1 < buf2) {
	//				leaver = true;
	//				cout << "менше\n";
	//				break;
	//			}
	//		}
	//	}
	//}
}
