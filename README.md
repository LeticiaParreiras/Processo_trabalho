# Processo_trabalho
Instruções
Este trabalho prático tem por finalidade a implementação, em C, de algoritmo para leitura e manipulação de dados formatados de um arquivo texto.

Formato dos dados:
No arquivo processo_043_202409032338, cada linha (com exceção da primeira) contém dados relacionados a processos que tramitam na justiça eleitoral de uma unidade da federação e que incluem os campos id (identificador), numero (número do processo), data_ajuizamento (data em que o processo foi iniciado), id_classe (classe vinculada ao processo), id_assunto (assunto vinculado ao processo) e ano_eleicao (ano da eleição que ensejou a abertura do processo). A seguir, observe que os atributos da aluna Maria Oliveira são (555) 123-4567, Direito, 9.0 e 9.3 e estão separados por vírgula:

"id","numero","data_ajuizamento","id_classe","id_assunto","ano_eleicao"

638633058,"00000103020166070018",2016-04-20 15:03:40.000,{12554},{11778},0

405287812,"06000824620216070000",2021-07-01 16:33:15.000,{12377},{11778},2020

405277919,"00000238420156070011",2015-05-18 16:49:33.000,{11541},{11778},0

638632762,"00000041120156070001",2015-01-30 16:22:15.000,{12551},{11778},0

638633040,"00000207620136070019",2013-06-13 14:25:37.000,{11541},{11778},0

O que deve ser feito:
O programa a ser construído deve ler dados de cada processo, identificando cada um dos atributos acima para, a seguir, realizar as seguintes operações:

Ordenar, em ordem crescente, o conjunto de dados a partir do atributo “id”;
Ordenar, em ordem decrescente, o conjunto de dados a partir do atributo “data_ajuizamento”;
Contar quantos processos estão vinculados a um determinado “id_classe”;
Identificar quantos “id_assuntos” constam nos processos presentes na base de dados; e
Indicar a quantos dias um processo está em tramitação na justiça.
Observações:
Os dados devem ser organizados em vetores de structs.
As respostas dos itens 1 e 2 devem ser armazenados em arquivo “cvs”, mantendo cabeçalho.
Deve ser implementada 1 (uma) função para resolver cada item indicado acima.
O código-fonte deve ser modularizado em três arquivos, conforme indicado nas aulas de agosto/2024.
