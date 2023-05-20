#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Bokalenko.h"

class Bokalenko : public QMainWindow
{
    Q_OBJECT

public:
    Bokalenko(QWidget* parent = nullptr);

    ~Bokalenko();

private slots:

    void Click_to_info();

    void Click_to_description();

private:
    Ui::BokalenkoClass ui;
};
