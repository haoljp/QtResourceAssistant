#include "QAboutDialog.h"
#include <QLabel>
#include <QHBoxLayout>

QAboutDialog::QAboutDialog(QWidget *parent)
	: QDialog(parent)
{
	setWindowTitle(tr("����"));

	QLabel *AboutLabel = new QLabel(this);
	AboutLabel->setText(tr("���������ѧϰ�ͽ���,��Ȩ��������,�벻Ҫ������ҵ��;��\n���������,���QQ��1245178753������\n���ֻʵ�����Լ��ϴ���Դ����ʾ��ɾ��,��������ҳ��Ĺ����Լ����ز�û��ʵ�֡�\n���ص��е��鷳,û����ϸ�о���"));

	QHBoxLayout *HBoxLayout = new QHBoxLayout(this);
	HBoxLayout->addWidget(AboutLabel);
}

QAboutDialog::~QAboutDialog()
{

}
