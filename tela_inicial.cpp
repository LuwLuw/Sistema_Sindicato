#include "tela_inicial.h"
#include "tela_adicionar.h"
#include "ui_tela_inicial.h"

Tela_Inicial::Tela_Inicial(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Tela_Inicial)
{
    ui->setupUi(this);
}

Tela_Inicial::~Tela_Inicial()
{
    delete ui;
}


void Tela_Inicial::on_b_sair_clicked()
{
    QSqlDatabase Database = QSqlDatabase::database("DadosDB");
    Database.close();
    this->close();
}


void Tela_Inicial::on_b_adicionar_clicked()
{

    t_add = new tela_adicionar();
    t_add->show();

}


void Tela_Inicial::on_b_pesquisar_clicked()
{
    t_pes = new Pesquisar();
    t_pes->show();
}


