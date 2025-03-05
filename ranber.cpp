#include<iostream>
#include<random>

using namespace std;

//写出一个随机生成1到5的函数
int ran_ber()
{    
    std::random_device rd;  // 随机数种子
    std::mt19937 gen(rd());  // 随机数生成器

    std::uniform_int_distribution<> dis(1, 5);  // 定义随机数范围

    return dis(gen);  // 生成随机数并返回
}

//尝试输出5*5随机数字表
int main()
{
    int table[5][5]={'0'};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            table[i][j]=ran_ber();
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}