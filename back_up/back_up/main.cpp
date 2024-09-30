#include "widget.h"
#include <QApplication>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <Qwidget>


int main(int argc, char *argv[])
{
     QApplication a(argc, argv);
    // QLabel *infoLabel = new QLabel;
    // QLabel *openLabel = new QLabel;
    // QLineEdit *cmdLineEdit = new QLineEdit;
    // QPushButton *commitButton = new QPushButton;
    // QPushButton *cancelButton = new QPushButton;
    // QPushButton *browseButton = new QPushButton;

    // infoLabel->setText("input cmd:");
    // openLabel->setText("open");
    // commitButton->setText("commit");
    // cancelButton->setText("cancel");
    // browseButton->setText("browse");

    // QHBoxLayout *cmdLayout = new QHBoxLayout;
    // cmdLayout->addWidget(openLabel);
    // cmdLayout->addWidget(cmdLineEdit);

    // QHBoxLayout *buttonLayout = new QHBoxLayout;
    // buttonLayout->addWidget(commitButton);
    // buttonLayout->addWidget(cancelButton);
    // buttonLayout->addWidget(browseButton);

    // QVBoxLayout *mainLayout = new QVBoxLayout;
    // mainLayout->addWidget(infoLabel);
    // mainLayout->addLayout(cmdLayout);
    // mainLayout->addLayout(buttonLayout);

    // QWidget w;
    // w.setLayout(mainLayout);
    Widget w;
    w.show();
    return a.exec();
}

