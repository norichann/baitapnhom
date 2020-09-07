#include "mytexteditor.h"
#include "ui_mytexteditor.h"

MyTextEditor::MyTextEditor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyTextEditor)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MyTextEditor::~MyTextEditor()
{
    delete ui;
}

void MyTextEditor::on_actionBold_triggered(bool checked)
{
    checked ? ui->textEdit->setFontWeight(QFont::Bold) :
              ui->textEdit->setFontWeight(QFont::Normal);
}
