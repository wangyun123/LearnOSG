/*
*	ѧϰQString stdwstring�б����ʹ��
*	�ο�1�� QString�����ģ�QString��std::wstring���໥ת��
*	https://my.oschina.net/jthmath/blog/521458
*
*	�ο�2��Qt ���� QObject::tr()
*	http://blog.csdn.net/yueye30121/article/details/16114713
*
*	ע�⣺ QT
*	
*	1������������Դ����ʹ�������ַ�;
*
*		ԭ���޷���֤ʹ����ȷ���ַ������ʽ��windows��Ĭ�ϲ���GBK/GB2312��
*
*	2�����Դ����ʹ���������ַ����ɲ������ַ�ʽ���;
*
*	��1��ȫ�����á���ȷ���߱�����ʹ�����ֱ����ʽ
*		QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GB2312"))��
*
*	��2���ֲ����á���ȷָ����ǰ�ַ��������õı����ʽ
*		QString::fromStdWString(L"������");
*
*	2017-03-22
*/

#include <string>
#include <QtCore/QCoreApplication>

void func()
{

}
int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	func();
// 	printf("Hello world!\n");
// 	char* str10 = "��Ȩ����";//"��";//
// 	char str11[] = "��Ȩ����";
// 	QString str1("��Ȩ����");
// 	QString str2(QString::fromStdWString(L"��"));
// 	QString str3(QString::fromUtf8(u8"��"));	//c++11
// 	QString str4(QObject::tr("��"));

// 	char* str1 = "china";
// 	char* str2 = "������";
// 	printf("%s\n%s\n", str1, str2);

#if 0
	QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GB2312"));
	QString s1 = "������";
	QString s2("������");
	QString s3;
	s3 = "������";
	QMessageBox::information(NULL, "Title", s1+"\n"+s2+"\n"+s3, QMessageBox::Ok);
#endif

#if 0
	QString t1 = QObject::tr("china");
	QString t2 = QString::fromStdWString(L"������");
	QString t3 = "������";
	QMessageBox::information(NULL, "Title", t1+"\n"+t2+"\n"+t3, QMessageBox::Ok);
#endif

// 	getchar();
	//system("pause");

	return a.exec();
}
