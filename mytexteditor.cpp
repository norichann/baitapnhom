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
void MyTextEditor::on_actionColor_triggered(bool checked)
{
    checked ? ui->textEdit->setTextColor(QColor(255, 0, 0)):
              ui->textEdit->setFontWeight(QFont::Normal);
}
void MyTextEditor::on_actionNormal_triggered(bool checked){
    checked ? ui->textEdit->setFontWeight(QFont::Normal):
              ui->textEdit->setFontWeight(QFont::Normal);
}
void MyTextEditor::on_actionFont_triggered(bool checked){
    if(checked ){
        QFont font("Times New Roman, 48");
        ui->textEdit->setCurrentFont(font);
        ui->textEdit->setFontWeight(QFont::Bold);
    }else{
        ui->textEdit->setFontWeight(QFont::Normal);
    }
}
void MyTextEditor::on_actionItalic_triggered(bool checked){
    checked ? ui->textEdit->setFontItalic(QFont::StyleItalic):
              ui->textEdit->setFontWeight(QFont::Normal);
}
void MyTextEditor::on_actionUnderline_triggered(bool checked){
    checked ? ui->textEdit->setFontUnderline(QFont::UnderlineResolved):
              ui->textEdit->setFontWeight(QFont::Normal);
}
