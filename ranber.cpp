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
    table[0][0]=ran_ber();
    for(int i1=1;i1<5;i1++)
    {
        AGAIN1:
        table[0][i1]=ran_ber();
        for(int i3=0;i3<i1;i3++)
        {
            if(table[0][i1]==table[0][i3])
            {
                goto AGAIN1;
            }
        }

    }//填充第一行

    //尝试填充完成其他行
    for(int i2=1;i2<5;i2++)
    {
        for(int i3=0;i3<5;i3++)
        {
            AGAIN2:
            table[i2][i3]=ran_ber();
            if(table[i2][i3]==table[i2-1][i3])
            {
                goto AGAIN2;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << table[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}