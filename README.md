*README - Jogo da Velha em C*
Visão Geral
Este projeto implementa um Jogo da Velha para dois jogadores em C. O jogo permite que os jogadores alternem turnos para marcar posições em um tabuleiro 3x3 até que um dos jogadores vença ou o tabuleiro se complete sem vencedores.

Funcionalidades
Inicialização do Tabuleiro

A função inicializaMatriz prepara o tabuleiro 3x3, definindo todas as posições como vazias (' ').
Impressão do Tabuleiro

A função imprimeMatriz exibe o tabuleiro no console, mostrando as linhas e colunas numeradas para facilitar a escolha das posições pelos jogadores.
Validação de Coordenadas

A função coordenadaValida verifica se a jogada escolhida está dentro dos limites do tabuleiro e se a posição já está ocupada. Caso contrário, a função pede para que o jogador escolha outra posição.
Lógica do Jogo

O jogo alterna entre os dois jogadores (X e O), permitindo que cada um insira uma coordenada até que haja um vencedor ou até que todas as posições sejam preenchidas, resultando em empate.
A verificação de vitória é realizada a cada jogada, checando as linhas, colunas e diagonais.

Como Usar
Compilação

Para compilar o programa, use um compilador de C. No terminal, utilize o comando:
*gcc nome_do_arquivo.c -o jogo_da_velha*
Substitua nome_do_arquivo.c pelo nome do arquivo onde o código está salvo.

Execução

Execute o programa no terminal:
*./jogo_da_velha*

Jogabilidade

O programa pedirá os nomes dos dois jogadores.
Em cada rodada, o jogador atual deve inserir as coordenadas da linha e coluna onde deseja marcar seu símbolo (X ou O).
O jogo termina quando um dos jogadores conseguir alinhar três de seus símbolos em uma linha, coluna ou diagonal, ou quando todas as posições do tabuleiro forem preenchidas.

Requisitos
Compilador C: GCC ou qualquer outro compilador que suporte a linguagem C.

Autor
Este programa foi desenvolvido para demonstrar conceitos básicos de programação em C, incluindo manipulação de matrizes, controle de fluxo e validação de entrada de dados.


