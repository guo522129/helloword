#pragma once

#include <QtWidgets/QWidget>
#include "ui_helloword.h"

class helloword : public QWidget
{
	Q_OBJECT

public:
	helloword(QWidget *parent = Q_NULLPTR);

private:
	Ui::hellowordClass ui;
};
