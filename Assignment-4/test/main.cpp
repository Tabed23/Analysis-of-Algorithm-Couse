#include<iostream>
#include<string.h>
using namespace std;

class HugeInteger
{
private:

	char* data;
	int size;
	void set_data(char *ds)
	{
	    this->size = strlen(ds);
	    this->data = new char[size];
	    for(int i=0;i<size;i++)
	    {
	        this->data[i]= ds[i];
	    }
	}

public:

	HugeInteger()
	{
		this->size = 0;
		this->data = NULL;
	}

	HugeInteger(int s)
	{
		this->size = s;
		for (int i = 0; i < s; i++)
		{
			this->data[i] = '0';
		}
		this->data[s] = '\0';
	}

	~HugeInteger()
	{
		cout << "Destructor Called" << endl;
		delete[] data;
	}

	HugeInteger(const HugeInteger & obj)
	{
		size = obj.size;
		data = new char[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = obj.data[i];
		}
	}

	friend HugeInteger RemoveStartingZeros(HugeInteger & t)
	{
		bool flag = false;
		int p = 0;
		int j = 0;

		for (int i = 0; i < t.size; i++)
		{
			if (t.data[i] > 48 && t.data[i] < 58 && flag == false)
			{
				flag = true;
				p = i;
				break;
			}
		}


		int ns = t.size - p;
		char* a = new char[ns];
		for (int i = p; i < t.size; i++)
		{
			a[j] = t.data[i];
			j++;
		}

		t.size = ns;
		t.data = new char[t.size];
		for (int i = 0; i < t.size; i++)
		{
			t.data[i] = a[i];
		}

		delete[]a;

		return t;
	}

    friend istream& operator >> (istream& in, HugeInteger& hi)
	{
		cout << "Enter Huge Integer: ";
		char temp[1000000];
		in.getline(temp,1000000 ,'\n'); //  note
                                                /*
                                                    do not access more memory then this
                                                    allocate several of these on the stack
                                                     (some are unnecessary: you should really pass arguments by const reference).
                                                     A typical stack size limit is 8MB
                                                */

		hi.set_data(temp);

		RemoveStartingZeros(hi);
		return in;
	}



    friend ostream& operator << (ostream& out, const HugeInteger& hi)
	{
		cout << "Huge Integer: ";
		for (int i = 0; i < hi.size; i++)
		{
			out << static_cast<int>(hi.data[i]-48);
		}
		out << hi.size;
        cout << endl;
		return out;
	}

};


int main()
{
	HugeInteger h;
	cin >> h;


	HugeInteger h1;
	cin >> h1;
	cout << h1;
    cout << h;
}
