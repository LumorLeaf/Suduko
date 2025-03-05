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
//调用ran_ber检查是否输出随机数
int main()
{
    int rand=0;
    for(int i=0;i<10;i++)
    {
        rand=ran_ber();
        cout<<rand<<endl;
    }

    return 0;
}

int main1()//only test
{}