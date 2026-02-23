#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  MainWindow w;
  w.show();
  return a.exec();
}



/*

Cell
Stage
Board

Menu: start, end, pause,
Game Generate: algorithm, ocr, manual

Game Controls: mouse, keyboard, hot key

Main Window: normal, killer
*/
