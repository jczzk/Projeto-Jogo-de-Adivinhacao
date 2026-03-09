# Jogo de Adivinhação de números em C 

Exibição do Menu:
Usamos printf para exibir o menu principal com três opções: Iniciar jogo, Ver regras e Sair.
Usamos scanf para ler a escolha do usuário e armazená-la na variável opcao.

Estrutura switch
A variável opcao é usada como controle para o switch.
Cada case verifica um valor específico da variável opcao. Se o valor da variável corresponder a um dos casos, o código dentro desse case é executado.

Case 1: Inicar Jogo
Quando o usuário escolhe a opção 1, a função srand(time(0)) é chamada para inicializar o gerador de números aleatórios com base no tempo atual. Isso garante que o gerador de números aleatórios produza sequências diferentes cada vez que o programa for executado.
A variável numeroSecreto é atribuída a um número aleatório entre 1 e 10, gerado pela expressão rand() % 10 + 1. A função rand() gera um número aleatório inteiro, e o operador % 10 limita esse número ao intervalo de 0 a 9. Adicionando 1, obtemos um número entre 1 e 10.
O programa então solicita ao usuário que adivinhe o número secreto com a mensagem "Adivinhe o número (entre 1 e 10): ".
Usamos scanf para ler o palpite do usuário e armazená-lo na variável palpite.
Uma estrutura if-else é usada para comparar o palpite do usuário com o número secreto. Se o palpite for igual ao número secreto, o programa imprime "Parabéns! Você acertou!". Caso contrário, imprime "Você errou. O número era X.", sendo X o número secreto.

Case 2: Regras do Jogo
Quando o usuário escolhe a opção 2, o programa imprime as regras do jogo usando printf. As regras incluem informações básicas sobre como jogar.

Case 3: Sair
Quando o usuário escolhe a opção 2, o programa imprime as regras do jogo usando printf. As regras incluem informações básicas sobre como jogar.

Default:
Se o usuário digitar um valor que não seja 1, 2 ou 3, o default será executado, imprimindo "Opção inválida. Tente novamente." Isso orienta o usuário a fazer uma escolha válida.

