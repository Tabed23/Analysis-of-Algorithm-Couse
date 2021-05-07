#include<iostream>
#include<fstream>
#include<vector>
#include<exception>
using namespace std;
struct Prisoner
{
	int ri;
	int ci;
};
void reader(vector<vector<int>>&,int&,int&);
void print_(vector<vector<int>>&, int&, int&);
int counter_prisoners(vector<vector<int>>&, int&, int&);
void find_prisoner_location(vector<Prisoner> &, vector<vector<int>>, int&, int&);
bool Is_escapesble(vector<vector<int>>,int ,int);
void Copy(vector<vector<int>>&, vector<vector<int>>&, int, int);
bool escapesble(vector<vector<int>>&, vector<Prisoner>&, int &, int&);
int main()
{
	vector<vector<int>>Map;
	vector<Prisoner>prisoner;
	int total_prisoners;
	int row, cols;
	reader(Map, row, cols);
	print_(Map, row, cols);
	total_prisoners = counter_prisoners(Map, row, cols);
	find_prisoner_location(prisoner, Map, row, cols);
	cout << "total prisoners->" << total_prisoners << endl;
	if (escapesble(Map, prisoner, row, cols))
	{
		cout << "prisoner->" << "is Escapble";
	}
	else
	{
		cout << "prisoner->" << "is not  Escapble" <<endl;
	}
	return 0;
}
void reader(vector<vector<int>>&Maps,int &row,int &cols)
{
	ifstream rdr;
	int temp;
	rdr.open("Room.txt");
	if (!rdr)
	{
		cout << "file not read";
		return;
	}
	rdr >> row >> cols;
	for (int ri = 0; ri < row; ri++)
	{
		vector<int> tempvect;
		for (int ci = 0; ci < cols; ci++)
		{
			rdr >> temp;
			tempvect.push_back(temp);
		}
		Maps.push_back(tempvect);
	}
}
void print_(vector<vector<int>>&Maps, int& row, int&cols)
{
	for (int ri = 0; ri < row; ri++)
	{
		for (int ci = 0; ci < cols; ci++)
		{
			cout << Maps[ri][ci]<<" ";
		}
		cout << endl;
	}
}
int counter_prisoners(vector<vector<int>>&Maps, int&row, int&cols)
{
	int counter = 0;
	for (int ri = 0; ri < row; ri++)
	{
		for (int ci = 0; ci < cols; ci++)
		{
			if (Maps[ri][ci] == 3)
			{
				counter++;
			}
		}
	}
	return counter;
}
void find_prisoner_location(vector<Prisoner>& prisoner, vector<vector<int>>Maps, int& row, int& cols)
{
	int counter = 0;
	Prisoner los;
	for (int ri = 0; ri < row; ri++)
	{
		for (int ci = 0; ci < cols; ci++)
		{
			if (Maps[ri][ci] == 3)
			{
				los.ri = ri;
				los.ci = ci;
				prisoner.push_back(los);
			}
		}
	}

}
bool Is_escapesble(vector<vector<int>>Maps, int  row,int cols)
{
	if (row == 0 || cols == 0 || row >= 9 || cols>= 9)
		return false;
	if (Maps[row][cols] == 5)
	{
		return true;
	}
	if (Maps[row][cols] == 2)
	{
		return true;
	}
	if (Maps[row][cols] == 10)
	{
		return false;
	}
	Maps[row][cols] = 10;
	return Is_escapesble(Maps, row + 1, cols + 1) || Is_escapesble(Maps, row + 1, cols - 1) || Is_escapesble(Maps, row - 1, cols + 1) || Is_escapesble(Maps, row - 1, cols - 1);
}
void Copy(vector<vector<int>>&p, vector<vector<int>>&Ms,int row, int cols)
{
	int store = 0;
	vector<int > temp;
	for (int i = 0; i < row; i++)
	{
		for (int ci = 0; ci < cols; ci++)
		{
			store=Ms[i][ci];
			temp.push_back(store);
		}
		p.push_back(temp);
	}
}
bool escapesble(vector<vector<int>>&Maps ,vector<Prisoner>&prisoners, int & row, int& cols)
{
	vector < vector<int>>temp;
	Copy(temp, Maps, row, cols);
	try
	{
		return Is_escapesble(temp, row, cols);
	}
	catch (exception ex)
	{
		throw (ex);
	}
}