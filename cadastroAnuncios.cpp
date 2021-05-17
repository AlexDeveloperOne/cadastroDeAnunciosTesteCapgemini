// array of structures
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// array of structures
struct cadastro_anuncio {
  string nomeDoAnucio;
  string cliente;
  double investimentoDia;
  struct dataDeInicio {
      int dia;
      int mes;
      int ano;
  } dt_inicio;
  struct dataDeTermino {
      int dia;
      int mes;
      int ano;
  } dt_termino;
} cadastro[2];

void relatorio (cadastro_anuncio cadastro);

int main ()
{
  string mystr;
  int n;
  
  for (n=0; n<2; n++)
  {
    cout << "Digite o nome do anuncio: ";
    getline (cin,cadastro[n].nomeDoAnucio);
    cout << "Digite o nome do cliente: ";
    getline (cin,cadastro[n].cliente);
    //
    cout << "Data de Inicio:\ndia: ";
    getline (cin,mystr);
    stringstream(mystr) >> cadastro[n].dt_inicio.dia;
    cout << "mes: ";
    getline (cin,mystr);
    stringstream(mystr) >> cadastro[n].dt_inicio.mes;
    cout << "ano: ";
    getline (cin,mystr);
    stringstream(mystr) >> cadastro[n].dt_inicio.ano;
    //
    cout << "\nData de Termino:\ndia: ";
    getline (cin,mystr);
    stringstream(mystr) >> cadastro[n].dt_termino.dia;
    cout << "mes: ";
    getline (cin,mystr);
    stringstream(mystr) >> cadastro[n].dt_termino.mes;
    cout << "ano: ";
    getline (cin,mystr);
    stringstream(mystr) >> cadastro[n].dt_termino.ano;
    //
    cout << "\nDigite o valor a ser investido: ";
    getline (cin,mystr);
    stringstream(mystr) >> cadastro[n].investimentoDia;
    cout << "\n";
  }
  
 	cout << "\nRELATORIO DOS ANUNCIOS:\n";
  	for (n=0; n<2; n++){
  	relatorio (cadastro[n]);
  	cout <<"\n";
	}
  
  return 0;
}

void relatorio (cadastro_anuncio cadastro)
{
	double vizualizacoes = cadastro.investimentoDia * 30;	
	double qtd_maxima_visualizacoes =  qtd_maxima_visualizacoes + vizualizacoes;
	double cliques = (vizualizacoes * 12) / 100;
	double qtd_maxima_cliques = qtd_maxima_cliques + cliques;
  	double compartilhamento = (cliques * 3) / 20;
  	double qtd_maxima_compartilhamentos = qtd_maxima_compartilhamentos + compartilhamento;

  	vizualizacoes = compartilhamento * 40;
  	qtd_maxima_visualizacoes =  qtd_maxima_visualizacoes + vizualizacoes;
  	cliques = (vizualizacoes * 12) / 100;
  	qtd_maxima_cliques = qtd_maxima_cliques + cliques;
  	compartilhamento = (cliques * 3) / 20;
  	qtd_maxima_compartilhamentos = qtd_maxima_compartilhamentos + compartilhamento;
  	//
  	vizualizacoes = compartilhamento * 40;
  	qtd_maxima_visualizacoes =  qtd_maxima_visualizacoes + vizualizacoes;
  	cliques = (vizualizacoes * 12) / 100;
  	qtd_maxima_cliques = qtd_maxima_cliques + cliques;
  	compartilhamento = (cliques * 3) / 20;
  	qtd_maxima_compartilhamentos = qtd_maxima_compartilhamentos + compartilhamento;
	//
  	vizualizacoes = compartilhamento * 40;
  	qtd_maxima_visualizacoes =  qtd_maxima_visualizacoes + vizualizacoes;
  	cliques = (vizualizacoes * 12) / 100;
  	qtd_maxima_cliques = qtd_maxima_cliques + cliques;
	
	cout << "Valor Total Investido R$ " << cadastro.investimentoDia;
	cout << "\nQuantidade Maxima de Visualizacoes = " << qtd_maxima_visualizacoes;
	cout << "\nQuantidade Maxima de Cliques =" << qtd_maxima_cliques;
  	cout << "\nQuantidade Maxima de Compartilhamentos =" << qtd_maxima_compartilhamentos;
}
