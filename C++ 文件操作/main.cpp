#include <iostream>
#include <fstream>

using namespace std;

void test()
{
    //创建流文件
    ofstream ofs;

    //以写的方式打开文件
    ofs.open("test.txt", ios::out);

    //写内容
    ofs << "name: may huang"<<endl;
    ofs << "age: 30" << endl;
    ofs << "favorite: reading" << endl;

    //关闭文件
    ofs.close();
}

void testRead()
{
    //创建流文件
    ifstream ifs;

    //打开文件
    ifs.open("test.txt", ios::in);
    if (!ifs.is_open())
    {
        cout << "open file test.txt failed!"<<endl;
        return;
    }

    //读取数据
    string str;
    while (getline(ifs, str))
    {
        cout << str <<endl;
    }
}

int main() {
    testRead();
    //test();
    return 0;
}
