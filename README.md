Pratica - Calculo minutos 

**Descrição do Projeto**

  Este projeto em linguagem C tem como objetivo calcular a diferença, em minutos, entre dois horários fornecidos pelo usuário.

  O programa solicita duas entradas no formato HH:MM, converte cada horário para o total de minutos desde 00:00 (meia-noite) e, em seguida, calcula a diferença absoluta entre eles.

  A solução foi estruturada de forma modular, utilizando funções para melhorar a organização, reutilização de código e clareza da lógica.

  **Funcionamento**
   
    Função minutos
      Recebe hora e minuto separadamente
      Converte para minutos totais:

    Função diferenca
      Recebe dois valores em minutos
      Calcula a diferença absoluta entre eles
      Garante que o resultado seja sempre positivo

    Função main
      Lê os horários do usuário no formato HH:MM
      Chama a função minutos para cada horário
      Calcula a diferença com a função diferenca
      Exibe o resultado final

  **Exemplo de Execução**
   
    Entrada:
    digite a hora1: 10:30
    digite a hora2: 12:00
    Saída:
    a diferenca entre as horas eh de 90 minutos



 Observações Importantes
 - O formato de entrada deve ser exatamente HH:MM, pois o scanf("%d:%d", ...) depende dos dois pontos (:) para funcionar corretamente.
 - A função minutos é chamada duas vezes porque C não permite retornar dois valores diretamente de uma função.
 - O uso de funções separadas melhora a organização e segue boas práticas de programação.
 - A função diferenca garante que o resultado seja sempre positivo (diferença absoluta).
 - O programa não valida entradas inválidas (como 25:99), então é importante inserir horários válidos.
 - Esse projeto é um ótimo exercício para praticar:
Funções em C;
Passagem de parâmetros por valor;
Manipulação de entrada formatada (scanf);
Organização de código;
