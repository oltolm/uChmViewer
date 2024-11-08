#pragma once

#include <QKeyEvent>
#include <QLineEdit>
#include <QObject>
#include <QWidget>

class MyLineEdit : public QLineEdit
{
	Q_OBJECT
public:
	explicit MyLineEdit(QWidget *parent = nullptr);
	void keyPressEvent(QKeyEvent *event) override;
};
