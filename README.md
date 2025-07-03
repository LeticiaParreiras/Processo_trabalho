# 📄 Processo\_trabalho

## 📌 Objetivo

Este trabalho prático tem como finalidade a implementação, em linguagem C, de um algoritmo para leitura e manipulação de dados estruturados provenientes de um arquivo `.csv`.

## 🗂️ Formato dos Dados

O arquivo `processo_043_202409032338` contém registros de processos da Justiça Eleitoral. Cada linha (exceto o cabeçalho) possui os seguintes campos:

```
"id","numero","data_ajuizamento","id_classe","id_assunto","ano_eleicao"
```

Exemplo de dados:

```
638633058,"00000103020166070018",2016-04-20 15:03:40.000,{12554},{11778},0  
405287812,"06000824620216070000",2021-07-01 16:33:15.000,{12377},{11778},2020  
405277919,"00000238420156070011",2015-05-18 16:49:33.000,{11541},{11778},0  
```

### Campos:

* `id`: Identificador do processo
* `numero`: Número do processo
* `data_ajuizamento`: Data de início do processo
* `id_classe`: Classe processual
* `id_assunto`: Assunto do processo
* `ano_eleicao`: Ano da eleição relacionada (se houver)

---

## 🛠️ Funcionalidades

Esse codigo faz:

1. **Gera um arquivo `.csv` com  os processos ordernados pelo `id` em ordem crescente**
2. **Gera um arquivo `.csv` com  os processos ordernados pela `data_ajuizamento` em ordem decrescente**
3. **Contar a quantidade de processos vinculados a um determinado `id_classe`**
4. **Identificar quantos `id_assunto` distintos existem na base de dados**
5. **Calcular há quantos dias cada processo está em tramitação**

## Como rodar o código
Após clonar este repositório, basta executar o arquivo `./processo.exe`
