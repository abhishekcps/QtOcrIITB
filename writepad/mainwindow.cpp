#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    mFilename = "";
    ui->textEdit->setPlainText("");

}

void MainWindow::on_actionSave_triggered()
{

}

void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();

}

void MainWindow::on_actionPaste_triggered()
{ ui->textEdit->paste();

}

void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();

}

void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void MainWindow::on_actionOpen_triggered()
{
    /*QString file = QFileDialog::getOpenFileName(this,"Open a file");
    if(!file.isEmpty()){
        QFile sFile(file);
        if(sFile.open(QFile::ReadOnly | QFile::Text))
        {
            QTextStream in(&sFile);
            QString text = in.readAll();
            sFile.close();

            ui->textEdit->setPlainText(text);
        }
    }*/



}

void MainWindow::on_actionBold_triggered()
{
    //QString labelText = "<P><b><i><font color='#ff0000' font_size=4>";
    //labelText .append("Text what u want to display");
   // labelText .append("</font></i></b></P></br>");
    //QLabel label->setText(labelText);

  /*  if(!bold_pressed) {
            ui->text_toggle_bold->setStyleSheet("QPushButton { color: black; font: 13px;font-weight: 600;background-color: #e6e6e6;border: 1px solid #cccccc; border-top-left-radius: 9px;border-bottom-left-radius: 9px;height: 10px;width: 10px;} QPushButton:hover {background-color: #e6e6e6;}");


            QTextCharFormat format;
            format.setFontWeight(QFont::Bold);

            QTextCursor cursor = ui->textEdit->textCursor();
            cursor.mergeCharFormat(format);


            QTextCharFormat fmt;
            fmt.setFontWeight(QFont::Bold);
             mergeFormatOnWordOrSelection(fmt);



}
    */
}
