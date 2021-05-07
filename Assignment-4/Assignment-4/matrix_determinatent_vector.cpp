#include<iostream>
#include<fstream>
#include<vector>
#include<math.h>
using namespace std;

template<typename TM>
class Matrix
{
private:
	vector<vector<TM>> M;
	int N;
public:
	Matrix()
	{
		this->N = 0;
	}
	int size()
	{
		return this->N;
	}
	Matrix(int size)
	{
		this->N = size;
		vector<vector<TM>>temp(size, vector<TM>(size));
		M  = temp;
	}
	void load(ifstream & rdr)
	{
		rdr >> this->N;

        int var;
		for (int ri = 0; ri < this->N; ri++)
		{
            vector<TM>temp;
			for (int ci = 0; ci < this->N; ci++)
			{
				rdr >> var;
                temp.push_back(var);
			}
            M.push_back(temp);
		}
	}

	TM index(int ri, int ci)
	{
		return this->M[ri][ci];
	}
	void assinge(int ri, int ci, TM value)
	{
		this->M[ri][ci] = value;
	}
	void print()const
	{
		for (int ri = 0; ri < this->N; ri++)
		{
			for (int ci = 0; ci < this->N; ci++)
			{
				cout << this->M[ri][ci] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

};

void copy(Matrix<int>&des, Matrix<int>sour, int cols);
int determinent(Matrix<int>&M);
int main()
{
	Matrix<int>M;
	ifstream rdr("matrix.txt");
	M.load(rdr);
	M.print();
	cout << determinent(M) << endl;
	return 0;
}
void copy(Matrix<int>&des, Matrix<int>sour, int cols)
{
	int Cr = 1;
	int Cc;
	for (int ri = 0; ri < des.size(); ri++)
	{
		Cc = 0;
		for (int ci = 0;ci< des.size(); ci++)
		{
			if (Cc == cols)
			{

				Cc++;
			}
			des.assinge(ri, ci, sour.index(Cr, Cc));
			Cc++;
		}
		Cr++;
	}
}
int determinent(Matrix<int>&M)
{
	if (M.size() == 1)
		return M.index(0, 0);
	int res = 0;
	for (int c = 0; c < M.size(); c++)
	{
		Matrix<int>Mc(M.size() - 1);
		copy(Mc, M, c);
		res += M.index(0, c)*determinent(Mc) * pow(-1, c);
	}
	return res;
}
