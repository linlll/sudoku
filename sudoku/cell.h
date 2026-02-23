#ifndef CELL_H
#define CELL_H

#include <QWidget>

class Cell : public QWidget
{
  Q_OBJECT
 public:
  explicit Cell(QWidget *parent = nullptr);

 signals:


 private:
  int32_t height, width;
  QColor cBackground, cSelected, cHighlight;

};

#endif // CELL_H
