#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
    Cliente cliente1;
    cliente1._Nome = "J. Jonah Jameson";
    cliente1._Endereco ="Nova York";
	cliente1.Cep = "35690000";
    cliente1.print();

    Cliente cliente2;
    cliente2._Nome = "Norman Osborn";
    cliente2._Endereco ="Hartlford";
	cliente2.Cep = "22061955";
    cliente2.print();

    Cliente cliente3;
    cliente3._Nome = "Otto Octavius";
    cliente3._Endereco ="Schenectady";
	cliente3.Cep = "24051953";
    cliente3.print();

    Cliente cliente4;
    cliente4._Nome = "Bruce Benner";
    cliente4._Endereco ="Dayton";
	cliente4.Cep = "22111967";
    cliente4.print();

    Cliente cliente5;
    cliente5._Nome = "Steve Rogers";
    cliente5._Endereco ="Lower East Side";
	cliente5.Cep = "13061981";
    cliente5.print();

    Especialista e01;
    int numAtendimentos01 = 0;
    double comissao01 = 0;
    e01.Nome = "Peter Parker";
    e01.Idade = "46";
    e01.RG_Func = 27061975;
    e01.SalarioBase = 3000;
    e01.especialidade = "Fotografia";

    Especialista e02;
    int numAtendimentos02 = 0;
    double comissao02 = 0;
    e02.Nome = "Tony Stark";
    e02.Idade = "56";
    e02.RG_Func = 4041965;
    e02.SalarioBase = 1000;
    e02.especialidade = "Consertos de equipamentos eletronicos";

    Especialista e03;
    int numAtendimentos03 = 0;
    double comissao03 = 0;
    e03.Nome = "Wanda Maximoff";
    e03.Idade = "32";
    e03.RG_Func = 16021989;
    e03.SalarioBase = 5000;
    e03.especialidade = "Engenharia e Designeeeeer";

    Gerente g01;
    double bonificacao01 = 0;
    g01.Nome = "Nick Fury";
    g01.Idade = "72";
    g01.RG_Func = 21121948;
    g01.SalarioBase = 10000;

    Venda v01;
    v01.cliente= "J. Jonah Jameson";
    v01.esp = e01;
    v01.descricao = "Fotos do Homem Aranha";
    v01.Valor = 100;
    comissao01 += e01.comissao(v01.VALOR);
    numAtendimentos01+=1;

    Venda v02;
    v02.cliente= "Bruce Benner";
    v02.esp = e02;
    v02.descricao = "Troca da tela do telefone";
    v02.Valor = 100;
    comissao02 += e02.comissao(v02.VALOR);
    numAtendimentos02+=1;

    Venda v03;
    v03.cliente= "Norman Osborn";
    v03.esp = e01;
    v03.descricao = "Fotos do novo planador";
    v03.Valor = 150;
    comissao01 += e01.comissao(v03.VALOR);
    numAtendimentos01+=1;

    Venda v04;
    v04.cliente= "J. Jonah Jameson";
    v04.esp = e02;
    v04.descricao = "Recarga de cartucho";
    v04.Valor = 10;
    comissao02 += e02.comissao(v04.VALOR);
    numAtendimentos02+=1;

    Venda v05;
    v05.cliente= "Bruce Benner";
    v05.esp = e03;
    v05.descricao = "Reconstrucao de Predio";
    v05.Valor = 10000;
    comissao03 += e03.comissao(v05.VALOR);
    numAtendimentos03+=1;

    Venda v06;
    v06.cliente= "Steve Rogers";
    v06.esp = e03;
    v06.descricao = "Decoracao de Apartamento no Brooklyn";
    v06.Valor = 3000;
    comissao03 += e03.comissao(v06.VALOR);
    numAtendimentos03+=1;

    v06.descricao = "Decoracao de Apartamento no Brooklyn";
    v06.Valor = 3000;

    Venda v07;
    v07.cliente= "J. Jonah Jameson";
    v07.esp = e03;
    v07.descricao = "Reforma do Clarim Diario";
    v07.Valor = 5000;
    comissao03 += e03.comissao(v07.VALOR);
    numAtendimentos03+=1;

    Venda v08;
    v08.cliente= "Otto Octavius";
    v08.esp = e02;
    v08.descricao = "Formatacao do PC";
    v08.Valor = 80;
    comissao02 += e02.comissao(v08.VALOR);
    numAtendimentos02+=1;

    cout <<"\n\n Relatorio das Vendas \n" << endl;

    v01.print();
    cout << " Descricao: " << v01.descricao << endl;
    v02.print();
    cout << " Descricao: " << v02.descricao << endl;
    v03.print();
    cout << " Descricao: " << v03.descricao << endl;
    v04.print();
    cout << " Descricao: " << v04.descricao << endl;
    v05.print();
    cout << " Descricao: " << v05.descricao << endl;
    v06.print();
    cout << " Descricao: " << v06.descricao << endl;
    v06.print();
    cout << " Descricao: " << v06.descricao << endl;
    v07.print();
    cout << " Descricao: " << v07.descricao << endl;
    v08.print();
    cout << " Descricao: " << v08.descricao << endl;


    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.print();
    cout << "Num Atendimentos: " << numAtendimentos01 << endl;
    cout << "Salario Total: " << e01.SalarioBase+comissao01<<endl;

    e02.print();
    cout << "Num Atendimentos: " << numAtendimentos02 << endl;
    cout << "Salario Total: " << e02.SalarioBase+comissao02<<endl;

    e03.print();
    cout << "Num Atendimentos: " << numAtendimentos03 << endl;
    cout << "Salario Total: " << e03.SalarioBase+comissao03<<endl;


    int NUMTOTALservicos = 0;
    NUMTOTALservicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    g01.bonificacao = g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    g01.print();
    cout << "Salario Total: " << g01.SalarioBase + g01.bonificacao<<endl;

    return 0;
}
