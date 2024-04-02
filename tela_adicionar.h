#ifndef TELA_ADICIONAR_H
#define TELA_ADICIONAR_H
#include <QDate>
#include <QWidget>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>

namespace Ui {
class tela_adicionar;
}

class tela_adicionar : public QWidget
{
    Q_OBJECT

public:
    explicit tela_adicionar(QWidget *parent = nullptr);
    ~tela_adicionar();
    QString Nome;
    QString CPF;
    QString RG;
    QString Endereco;
    QString Nascimento;
    QString Telefone;
    QString Funcao;
    QString Empresa;
    QString Filiacao;
    QString Matricula;
    QString Estado;
    int quantidade;

private slots:
    void on_BVoltar_clicked();

    void on_BSalvar_clicked();

    void on_BLimpar_clicked();

private:
    Ui::tela_adicionar *ui;
};

#endif // TELA_ADICIONAR_H
