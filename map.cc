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
		cout << "�����ҵ�ֵ������" << endl;
	}

	auto erase_it = ismap.find(30);
	if (erase_it != ismap.end() ){
		ismap.erase(erase_it);
	}
	else{
		cout << "��Ҫɾ��Ԫ�ز�����" << endl;
	}
	ismap.erase(3);
	while (1);
	system("pause");
}
/*
int main(void){
	// ʵ����ʱ��Ҫָ��ģ�����
	// C++ 98/03 Ҫ��ģ����������Ǿ߱��������캯��
	// C++ 11 Ҫ��ģ���������ת�ƹ��캯��Ҳ����
	vector<int> ivec;
	vector<string> svec;
	// ʹ�� push_back β��Ԫ��
	// δ��������ʱʱ�临�Ӷ� O(1)
	// ��������ʱʱ�临�Ӷ�Ϊ O(N)
	ivec.push_back(1);
	ivec.push_back(2);
	ivec.push_back(3);
	ivec.push_back(4);
	ivec.push_back(5);
	for (auto e : ivec){
		cout << e << endl;
	}
	cout << "ʹ��insert ���м�λ�ò���Ԫ��"<< endl;
	// ʹ��insert ���м�λ�ò���Ԫ��
	auto it = ivec.begin() + 2;
	// begin Ϊ 0 �� Ԫ��
	ivec.insert(it, 100);
	for (auto e : ivec){
		cout << e << endl;
	}
	cout << "ͨ�� [] ������Ԫ��"<< endl;
	cout << ivec[0] << endl;
	cout << ivec[1] << endl;
	ivec[0] = 120;
	cout << ivec[0] << endl;
	cout << "ʹ��ѭ������Ԫ��" << endl;
	for (size_t i = 0; i < ivec.size(); i++){
		cout << ivec[i] << " ";
	}
	cout << endl;
	// at Խ������쳣
	cout << ivec.at(0) << endl;
	cout << "ͨ�� ������ ������Ԫ��" << endl;
	vector<int>::iterator iitt = ivec.begin();
	cout << *iitt << endl;
	// ivec.end() ָ�����һ��Ԫ�صĺ�һ��λ��
	for (auto it = ivec.begin(); it != ivec.end(); it++){
		cout << *it << " ";
	}
	cout << endl;
	cout << "ͨ�� find ����Ԫ��" << endl;
	auto pos = find(ivec.begin(), ivec.end(), 3);
	if (pos != ivec.end()){
		cout << "�ҵ���:" << *pos << endl;
	}
	else{
		cout << "û���ҵ�" << endl;
	}
	cout << "ͨ�� erase ɾ��Ԫ�� �� ��Ҫָ��λ��" << endl;
	pos = ivec.begin() + 2;
	ivec.erase(pos);
	for (int e : ivec){
		cout << e << " ";
	}
	cout << endl;
	// ?
	//cout << "ʹ�� sort ���� �� Ĭ��Ϊ��������" << endl;
	//cout << "�������" << endl;
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
////	int& ra = a; // ���ñ����ڶ���ʱ����Ҫ��ʼ����������д�����Ϣ
////	cout << "a=" << a << endl;
////	cout << "ra=" << ra << endl;
////	cout << "&ra" << &ra << endl; //&ra006FF870
////	int b = 20;
////	cout << "b=" << b << endl;
////	ra = b; // �˴���û�иı�ra�����ã�ֻ�Ƕ�ra���и�ֵ���ı���ԭ����λ�õ�ֵ
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
////	// �˴��漰����������ת��
////	double a = 3.2;
////	// �˴���Ҫ��const��ԭ����ΪaΪdouble���ͣ�a��ʽת������һ����ʱ���α�����raָ����ʱ���α�������ʱ�������г�����
////	// int& ֻ��ԭ���������ã�����ԭ�����Ŀ��������Ч�ʱȽϸ�
////	// �������ں���ջ֡�У���������������٣����ܱ�������ʱ���ܸı�
////	// ������Ϊ����ֵʱ��ע�ⷵ��ֵ����������һ��Ҫ���ں�������������
////
////	const int& ra = a;
////	cout << a << endl;
////	cout << ra << endl;
////	//test();
////	system("pause");
////	return 0;
////}
//
//// �����޶���
//// ���е� public 
//// ������ protected 
//// ˽�е� private
//// ֻ���Ƴ�Ա������ķ���Ȩ�ޣ����ڲ����ܷ����޶�������
//
///*
//class Student{
//private: // ˽�еĳ�Ա�����ⲻ�ɼ�,�����пɼ���ֻ����������
//	int id;
//	char name[1024];
//public:// ���еĳ�Ա������ɼ�
//	void showinfo(){
//
//	}
//	void setId(int id){
//		this->id = id;
//	}
//	int getId(){
//		return id;
//	}
//protected:// ������������Ҳ���ɼ�
//	void show();
//};
//void test(){
//	Student s;
//	s.getId();
//}
//int main(void){
//	//auto i = 0;// �Զ��Ƶ�����
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
