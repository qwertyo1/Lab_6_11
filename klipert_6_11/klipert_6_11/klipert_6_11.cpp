#include "stdafx.h"

int main()
{
	setlocale(LC_ALL,"ru");
	set t;
	t.addToSet("���������");
	t.addToSet("��������");
	t.addToSet("�����");
	t.printSet();
	set t2;
	t2.addToSet("����");
	t2.addToSet("������");
	t2.addToSet("�������");
	t2.addToSet("�����");
	t2.printSet();
	cout << t.checkBelongs("�����") << endl;
	cout << t.checkBelongs("�����") << endl;
	set combo;
	combo = t.intersectionOfSets(t2);
	combo.printSet();
	set combo1;
	combo1 = t.mergeOfSets(t2);
	combo1.printSet();
	system("pause");
	system("cls");
	//���� ���� ������ ������������ ����������������� �������


	system("pause");
	return 0;
}