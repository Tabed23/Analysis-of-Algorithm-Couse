#include<iostream>

int SimpleDivisionRemander(int, int);
int SimpleDivisonQoutient(int,int);
int FastDivisonRemander(int,int);
int FastDevisonQoutient(int,int);
int main()
{
    std::cout << "slow Dev qoutent:" << SimpleDivisonQoutient(36, 6) <<std::endl;
    std::cout<< "slow Dev remainder:" << SimpleDivisionRemander(36, 6)<<std::endl;
	std::cout << "fast Dev qoutient:" << FastDevisonQoutient(125, 5) <<std::endl;
    std::cout<< "fast Dev remainder:" << FastDivisonRemander(125, 5)<<std::endl;
}
int SimpleDivisionRemander(int dividend, int divisor)
{
    if(divisor ==0 || dividend ==0)
        return -1;
    return dividend % divisor;
}

int SimpleDivisonQoutient(int dividend,int divisor)
{
    if(divisor ==0 || dividend ==0)
        return -1;
    return 1 +SimpleDivisonQoutient(dividend-divisor, divisor);
}

int FastDivisonRemander(int dividend, int divisor)
{
    if(dividend <divisor)
        return dividend;
    return FastDivisonRemander(dividend -divisor, divisor);

}
int FastDevisonQoutient(int dividend, int divisor)
{
    if(dividend <divisor)
        return 0;
    
    return  1 + FastDivisonRemander(dividend-divisor, divisor);
}