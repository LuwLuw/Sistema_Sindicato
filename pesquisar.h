#ifndef PESQUISAR_H
#define PESQUISAR_H

#include <QWidget>
#include "view.h"

namespace Ui {
class Pesquisar;
}

class Pesquisar : public QWidget
{
    Q_OBJECT

public:
    explicit Pesquisar(QWidget *parent = nullptr);
    ~Pesquisar();
    QString ModoPesquisa;
    QString Dado;
    QString res;
    QString nome;
    QString Cpf;
    QString Ender;
    QString tel;
    QString Func;
    QString Emp;
    QString estado;
    int quantidade;

private slots:
    void on_Pes_B_Voltar_clicked();

    void on_Pes_B_Vis_clicked();

    void on_Pes_B_Pes_clicked();



    void on_Pes_B_VoltarView_clicked();

    void on_Pes_B_Update_clicked();



    void on_Pes_B_Deletar_clicked();

private:
    Ui::Pesquisar *ui;
    View *t_view;
};

#endif // PESQUISAR_H
