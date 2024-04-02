#include "tela_adicionar.h"
#include "ui_tela_adicionar.h"
QSqlDatabase sqlDatabase = QSqlDatabase::database("DadosDB");

tela_adicionar::tela_adicionar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tela_adicionar)
{
    ui->setupUi(this);
}

tela_adicionar::~tela_adicionar()
{
    delete ui;
}

void tela_adicionar::on_BVoltar_clicked()
{

    this->hide();
}


void tela_adicionar::on_BSalvar_clicked()
{

    Nome = ui->InputName->text();
    CPF = ui->InputCPF->text();
    RG = ui->InputRG->text();
    Endereco = ui->InputEndereco->text();
    Nascimento = ui->InputNasc->text();
    Telefone = ui->InputTelefone->text();
    Funcao = ui->InputFuncao->text();
    Empresa = ui->InputEmpresa->text();
    Filiacao = ui->InputFiliacao->text();
    Matricula = ui->InputMatricula->text();
    Estado = ui->InputEstado->currentText();

    QSqlQuery query(QSqlDatabase::database("DadosDB"));
    if(query.exec("INSERT INTO Filiados (Nome, CPF, RG, Endereco, Nascimento, Telefone, Funcao, Empresa, Filiacao, Matricula, Estado) VALUES ('"+Nome+"','"+CPF+"','"+RG+"','"+Endereco+"','"+Nascimento+"','"+Telefone+"','"+Funcao+"','"+Empresa+"','"+Filiacao+"','"+Matricula+"','"+Estado+"')")){
        QMessageBox::about(this,"Banco de Dados","Registro gravado com sucesso");
    }
    else{
        //testa se o cpf ja existe
        if(query.exec("SELECT * FROM Filiados WHERE CPF = '"+CPF+"' ")){
            quantidade = 0;
            while(query.next()){
                quantidade++;

            }

        if(quantidade != 0){
            QMessageBox::about(this,"Erro nos dados ","CPF ja existente");
        }}

        //testa se o rg ja existe
        if(query.exec("SELECT * FROM Filiados WHERE RG = '"+RG+"' ")){
            quantidade = 0;
            while(query.next()){
                quantidade++;

            }
        if(quantidade != 0){
            QMessageBox::about(this,"Erro nos dados ","RG ja existente");
        }}
        //testa se a matricula ja existe
        if(query.exec("SELECT * FROM Filiados WHERE Matricula = '"+Matricula+"' ")){
            quantidade = 0;
            while(query.next()){
                quantidade++;

            }

        if(quantidade != 0){
            QMessageBox::about(this,"Erro nos dados ","Matricula ja existente");
        }}


    }
    Nome=' ';
    CPF=' ';
    RG=' ';
    Endereco=' ';
    Nascimento=' ';
    Telefone=' ';
    Funcao=' ';
    Empresa=' ';
    Filiacao=' ';
    Matricula=' ';
    Estado=' ';
    ui->InputName->clear();
    ui->InputCPF->clear();
    ui->InputRG->clear();
    ui->InputEndereco->clear();
    ui->InputTelefone->clear();
    ui->InputFuncao->clear();
    ui->InputEmpresa->clear();
    ui->InputMatricula->clear();


}

void tela_adicionar::on_BLimpar_clicked()
{
    ui->InputName->clear();
    ui->InputCPF->clear();
    ui->InputRG->clear();
    ui->InputEndereco->clear();
    ui->InputTelefone->clear();
    ui->InputFuncao->clear();
    ui->InputEmpresa->clear();
    ui->InputMatricula->clear();
}

