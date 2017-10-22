#include "QLoginDialog.h"
#include <QLabel>
#include <QGridLayout>
#include <QPushButton>
#include <QMessageBox>

QLoginDialog::QLoginDialog(QWidget *parent)
	: QDialog(parent)
{
	initUi();
}

QLoginDialog::~QLoginDialog()
{

}

void QLoginDialog::initUi()
{
	setWindowTitle(tr("��¼"));

	QLabel *AccountLabel = new QLabel(this);
	mAccountEdit = new QLineEdit(this);

	QLabel *PasswordLabel = new QLabel(this);
	mPasswordEdit = new QLineEdit(this);

	AccountLabel->setText(tr("�˺ţ�"));
	PasswordLabel->setText(tr("���룺"));
	mPasswordEdit->setEchoMode(QLineEdit::Password);

	QPushButton *LoginButton = new QPushButton(this);
	QPushButton *CancelButton = new QPushButton(this);

	LoginButton->setText(tr("��¼"));
	CancelButton->setText(tr("ȡ��"));

	QGridLayout *GridLayout = new QGridLayout(this);
	GridLayout->addWidget(AccountLabel, 0, 0, 1, 1);
	GridLayout->addWidget(mAccountEdit, 0, 1, 1, 3);
	GridLayout->addWidget(PasswordLabel, 1, 0, 1, 1);
	GridLayout->addWidget(mPasswordEdit, 1, 1, 1, 3);
	GridLayout->addWidget(LoginButton, 2, 2, 1, 1);
	GridLayout->addWidget(CancelButton, 2, 3, 1, 1);

	connect(CancelButton, &QPushButton::clicked, this, [&] {
		this->hide();
	});

	connect(LoginButton, &QPushButton::clicked, this, [&] {
		if (getAccount().isEmpty() || getPassword().isEmpty())
		{
			QMessageBox::warning(this, tr("����"), tr("�˻��������벻��Ϊ�գ�"), QMessageBox::StandardButton::Close);
			return;
		}
		emit loginSignal();
		this->hide();
	});
}

QString QLoginDialog::getAccount()
{
	return mAccountEdit->text();
}

QString QLoginDialog::getPassword()
{
	return mPasswordEdit->text();
}