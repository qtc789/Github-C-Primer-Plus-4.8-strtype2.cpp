// 4.8 strtype2.cpp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    using namespace std;
    string s1 = "penguin";
    string s2, s3;
    cout << "you can assign one sting to another:s2=s1   " << endl;
    s2 = s1;
    cout << "s1;" << s1 << ",s2;" << s2 << endl;
    cout << "s2=\"buzzard\"\n";//用一下转义字符不然没办法输入或者双引号
    s2 = "buzzard";
    cout << "s2:  " << s2 << endl;
    cout << "you can concatenate strings: s3=s1+s2" << endl;
    s3 = s1 + s2;
    cout << "s3:   " << s3 << endl;
    cout << "you can append strings " << endl;
    s1 += s2;
    cout << "s1 += s2 yields s1=  " << s1 << endl;
    s2 += "for a day";
    cout << s2 << endl;
}


