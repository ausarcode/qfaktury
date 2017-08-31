#include "detector.h"
#if _pragma_once_support
#    pragma once
#endif
#ifndef USER_H
#define USER_H

#include "ui_User.h"


class User: public QDialog, public Ui::User {

Q_OBJECT

public:

    User(QWidget *parent);


public slots:

	void init();
	void okClick();
    bool checkAll();

private slots:
    void on_nextSeller_clicked();
    void delcurrSel();

private:
    QList<QWidget*> sellersWidgets;

};
#endif
