/*
*	ѧϰQT�Ĺ��ʻ�
*
*	�ο���Qtʵ�ֶ�̬�л�����
*	http://blog.csdn.net/csf111/article/details/7752839
*
*	����QEvent::LanguageChange()�źź���ʵ�����Զ�̬�л�
*	
*	���ַ�ʽ
*	
*	1��ʹ��UI�༭�����Զ����ɽ���������
*	ui->retranslateUi(this);//�ڴ˴�ˢ�����Ե�
*
*	2)��ʹ��UI�༭�����Լ�ͨ�����Ա�������Ӧ�ó����������
*	�Լ�ʵ�ֺ���void retranslate(QWidget *parent=0);
*	�磺DialogTranslator::retranslate()
*
*	ע��
*	�����QTranslator* translator;��Ϊ�Ի�����ĳ�Ա������
*	��installTranslator��QApplication����������ʱ����translatorΪ�ֲ�������
*	�������˳�ʱ�ñ��������٣����ᴥ��changeEvent(QEvent * event)������
*	�����ֻ���ԭ��ģ����
*
*	�����������QTranslator* translator��Ϊ�Ի�����ľ�̬��Ա����
*	static QTranslator* translator; ����
*	QTranslator* DialogTranslator::translator = new QTranslator();��ʼ��
*
*/
#include <QApplication>
#include <QDebug>
#include <QTranslator>

#include "dialog.h"
#include "mainwindow.h"
#include "myapplication.h"

int main(int argc, char *argv[])
{
    //QApplication a(argc, argv);
    MyApplication a(argc, argv);

//    QString path = qApp->applicationDirPath();
//    qDebug()<< qPrintable(path);

//    QTranslator translator;
//    translator.load(path+QString("/zh_CN"),"." );
//    a.installTranslator(&translator);

    MainWindow dlg;
    dlg.show();

    return a.exec();
}
