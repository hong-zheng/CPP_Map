#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <time.h>
#include <vector>
#include <algorithm>

#include <map>
#include <string>
using namespace std;



void main(){

	map<int, string> ismap;

	pair<int, string> v1 = { 1, "Student" };
	pair<int, string> v2 = { 2, "Teacher" };
	pair<int, string> v3 = { 3, "Friend" };

	ismap.insert(v1);
	ismap.insert(v2);
	ismap.insert(v3);
	ismap[4] = "MYTEACHER";
	map<int, string>::iterator it = ismap.begin();

	while (it != ismap.end()){
		cout << it->first << " : " << it->second << endl;
		++it;
	}
	cout << "auto for" << endl;
	for (auto &e : ismap){
		cout << e.first << " : " << e.second << endl;
	}

	cout << "find" << endl;
	int key;
	cin >> key;
	auto ret_it = ismap.find(key);
	if (ret_it != ismap.end()){
		cout << key << " : " << ret_it->second << endl;
	}
	else{
		cout << "所查找的值不存在" << endl;
	}

	auto erase_it = ismap.find(30);
	if (erase_it != ismap.end() ){
		ismap.erase(erase_it);
	}
	else{
		cout << "所要删除元素不存在" << endl;
	}
	ismap.erase(3);
	while (1);
	system("pause");
}
/*
int main(void){
	// 实例化时需要指定模板参数
	// C++ 98/03 要求模板参数必须是具备拷贝构造函数
	// C++ 11 要求模板参数具有转移构造函数也可以
	vector<int> ivec;
	vector<string> svec;
	// 使用 push_back 尾插元素
	// 未触碰扩容时时间复杂度 O(1)
	// 触碰扩容时时间复杂度为 O(N)
	ivec.push_back(1);
	ivec.push_back(2);
	ivec.push_back(3);
	ivec.push_back(4);
	ivec.push_back(5);
	for (auto e : ivec){
		cout << e << endl;
	}
	cout << "使用insert 在中间位置插入元素"<< endl;
	// 使用insert 在中间位置插入元素
	auto it = ivec.begin() + 2;
	// begin 为 0 号 元素
	ivec.insert(it, 100);
	for (auto e : ivec){
		cout << e << endl;
	}
	cout << "通过 [] 来访问元素"<< endl;
	cout << ivec[0] << endl;
	cout << ivec[1] << endl;
	ivec[0] = 120;
	cout << ivec[0] << endl;
	cout << "使用循环访问元素" << endl;
	for (size_t i = 0; i < ivec.size(); i++){
		cout << ivec[i] << " ";
	}
	cout << endl;
	// at 越界会抛异常
	cout << ivec.at(0) << endl;
	cout << "通过 迭代器 来访问元素" << endl;
	vector<int>::iterator iitt = ivec.begin();
	cout << *iitt << endl;
	// ivec.end() 指向最后一个元素的后一个位置
	for (auto it = ivec.begin(); it != ivec.end(); it++){
		cout << *it << " ";
	}
	cout << endl;
	cout << "通过 find 查找元素" << endl;
	auto pos = find(ivec.begin(), ivec.end(), 3);
	if (pos != ivec.end()){
		cout << "找到了:" << *pos << endl;
	}
	else{
		cout << "没有找到" << endl;
	}
	cout << "通过 erase 删除元素 ， 需要指定位置" << endl;
	pos = ivec.begin() + 2;
	ivec.erase(pos);
	for (int e : ivec){
		cout << e << " ";
	}
	cout << endl;
	// ?
	//cout << "使用 sort 排序 ， 默认为升序排序" << endl;
	//cout << "升序操作" << endl;
	//qsort(ivec.begin(),ivec.size(),sizeof(int),greater<int>());
	system("pause");
	return 0;
}

*/


//struct Student{
//	int id;
//	char name[1024];
//public:
//	void showinfo();
//	int getId();
//};
//
//void Student::showinfo(){
//	cout << "id:" << this->getId() << "name:" << this->name << endl;
//}
//int main(void){
//	Student s;
//	
//	s.showinfo();
//	system("pasue");
//	return 0;
//}
////
//
//
// 
//int main(void){
//
//	int arr[10] = { 3,2,8,74,9,0,861,49,0,83};
//	for (auto e : arr)
//		cout << "\t" << e;
//	cout << endl;
//
//	for (auto& e : arr)
//		e *= 2;
//	for (auto e : arr)
//		cout << "\t" << e;
//
//	int* p = nullptr;
//	cout << endl;
//
//	cout << typeid(nullptr).name() << endl;
//	cout << sizeof(nullptr) << endl;
//
//	int bb = 19;
//	auto pbb = &bb;
//	//auto  a = 10;
//	//cout << typeid(a).name() << endl;
//	//int s = add(1, 2);
//	//int s1 = ADD(3, 4);
//	//test2();
//	system("pause");
//	return 0;
//}
//
//
////struct MyStruct
////{
////	int arr[1024];
////};
////void fun1(MyStruct a){}
////void fun2(MyStruct& a){}
////
////
////void test(){
////	MyStruct  a;
////	int i = 0;
////	int len = 1000000;
////	int begin = clock();
////	for (; i < len; i++){
////		fun1(a);
////	}
////	int end = clock();
////	cout << "fun1(int):>" << end - begin << endl;
////	begin = clock();
////	for (i = 0; i < len; i++){
////		fun2(a);
////	}
////	end = clock();
////	cout << "fun2(int&):>" << end - begin << endl;
////}
////
////void test1(){
////
////	int a = 10;
////	int* pa = &a;
////
////	int b = 20;
////	int& rb = b;
////}
////
////void test2(){
////	int a = 10;
////	int& ra = a; // 引用变量在定义时必须要初始化，否则会有错误信息
////	cout << "a=" << a << endl;
////	cout << "ra=" << ra << endl;
////	cout << "&ra" << &ra << endl; //&ra006FF870
////	int b = 20;
////	cout << "b=" << b << endl;
////	ra = b; // 此处并没有改变ra的引用，只是对ra进行赋值，改变了原引用位置的值
////	cout << "ra = " << ra << endl;
////	cout << "&ra" << &ra << endl;//&ra006FF870
////
////	int* pa = &a;
////	cout << "sizeof(pa)=" << sizeof(pa) << endl;
////	cout << "sizeof(ra)=" << sizeof(ra) << endl;
////	cout << "typeid(pa).name()=" << typeid(pa).name() << endl;
////}
//
////
////int& add(int a){
////	return ++a;
////}
////void test(){
////	int a = 10;
////	int& ra = add(a);
////	cout << a << endl;
////	cout << ra << endl;
////	cout << a << endl;
////}
////
////int main(void){
////
////	// 此处涉及到引用类型转换
////	double a = 3.2;
////	// 此处需要加const的原因：因为a为double类型，a隐式转换生成一个临时整形变量，ra指向临时整形变量，临时变量具有常性质
////	// int& 只是原变量的引用，不是原变量的拷贝，因此效率比较高
////	// 函数存于函数栈帧中，函数运行完就销毁，不受保护，随时可能改变
////	// 引用作为返回值时，注意返回值的生命周期一定要大于函数的生命周期
////
////	const int& ra = a;
////	cout << a << endl;
////	cout << ra << endl;
////	//test();
////	system("pause");
////	return 0;
////}
//
//// 访问限定符
//// 共有的 public 
//// 保护的 protected 
//// 私有的 private
//// 只限制成员在类外的访问权限，类内部不受访问限定符限制
//
///*
//class Student{
//private: // 私有的成员在类外不可见,在类中可见，只是限制类外
//	int id;
//	char name[1024];
//public:// 公有的成员在类外可见
//	void showinfo(){
//
//	}
//	void setId(int id){
//		this->id = id;
//	}
//	int getId(){
//		return id;
//	}
//protected:// 保护，在类外也不可见
//	void show();
//};
//void test(){
//	Student s;
//	s.getId();
//}
//int main(void){
//	//auto i = 0;// 自动推倒类型
//	//for (; i < 100; i++){
//	//	cout << " " << i;
//	//}
//
//	//int arr[] = { 243, 254, 6, 5, 6, 7, 68, 54, 3, 2, 2 };
//	//for (auto e : arr){
//	//	cout << " " << e;
//	//}
//	//cout << endl;
//	//auto p3 = nullptr;
//	system("pause");
//	return 0;
//}
//
//*/
