#ifndef TELA_INICIAL_H
#define TELA_INICIAL_H
#include "tela_adicionar.h"
#include "pesquisar.h"
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Tela_Inicial; }
QT_END_NAMESPACE

class Tela_Inicial : public QMainWindow
{
    Q_OBJECT

public:
    Tela_Inicial(QWidget *parent = nullptr);
    ~Tela_Inicial();

private slots:
    void on_b_sair_clicked();

    void on_b_adicionar_clicked();

    void on_b_pesquisar_clicked();

private:
    Ui::Tela_Inicial *ui;
    tela_adicionar *t_add;
    Pesquisar *t_pes;
};
#endif // TELA_INICIAL_H
