#include "tab_index.h"      // TabIndex, QWidget

MyLineEdit::MyLineEdit(QWidget *parent) : QLineEdit(parent)
{
}

void MyLineEdit::keyPressEvent(QKeyEvent *event)
{
	if (event->key() == Qt::Key_Up)
	{
		auto tabIndex = dynamic_cast<Ui::TabIndex*>(parent());
		auto item = tabIndex->tree->itemAbove(tabIndex->tree->currentItem());
		if (item != nullptr)
			tabIndex->tree->setCurrentItem(item);
		tabIndex->tree->setFocus( Qt::ShortcutFocusReason );
	}
	else if (event->key() == Qt::Key_Down)
	{
		auto tabIndex = dynamic_cast<Ui::TabIndex*>(parent());
		auto item = tabIndex->tree->itemAbove(tabIndex->tree->currentItem());
		if (item != nullptr)
			tabIndex->tree->setCurrentItem(item);
		tabIndex->tree->setFocus( Qt::ShortcutFocusReason );
	}
    QLineEdit::keyPressEvent( event );
}
