# Template para desenvolvimento e entrega de NAC

Esse é um guia simples, o grupo pode e deve modificar o template conforme necessidade. 

# Nome do projeto

**nome dos alunos: Rafael Vinícius rm86981 e João Pedro Otoni** 

**Turma 2TDSG:**

**Ano: 2022**

## Objetivo / descrição do Projeto

Sobre o projeto:
Conectamos um sensor de umidade ao arduíno e mostramos a informação da umidade do local em tempo real em dashboards dentro da ferramenta node red e através da biblioteca arduino json. Liberamos a informação obtida do sensor de umidade , em tempo real usando o protocolo MQTT , então qualquer pessoa de qualquer parte do mundo , pode fazer a "consulta/requisição" desses dados em tempo real, ent nesse caso o protocolo mqtt está servindo até como uma API.

Usando a tag button da biblioteca dashboards atrelamos ela a um servo motor , onde ela gira 180 graus , basta clicar no botão no node red que ela gira.

Conectamos o arduíno a um sistema de RfID , onde ao usuário encostar seu cartão/ tag rfid , é disparado uma mensagem no telegram informando que alguém entrou usando a tag rfid.

O bot foi conectado no telegram através da ferramenta do botfather (nativa do telegram).

Para rodar o projeto , instale a bibiblioteca dashboards no node red e a biblioteca telegram-bot, para rodar apenas na porta serial do arduíno baixa a lib arduino json.h , spi.h , mfrc522.h

## Diagrama do projeto

Adicione uma ou mais fotos do projeto, pode ser uma imagem da arquitetura, do circuito eletrônico do Flow desenvolvido. 

<img src="/node_jp.png" width="550">


## Como usar 


Para rodar o projeto , instale a bibiblioteca dashboards no node red e a biblioteca telegram-bot, para rodar apenas na porta serial do arduíno baixa a lib arduino json.h , spi.h , mfrc522.h

* Pode ser utilizado marcadores
* Para ajudar na formatação


**Link do vídeo no youtube:    https://youtu.be/H-cWkc-SPF0 **


### Referências 

* [mastering-markdown](https://guides.github.com/features/mastering-markdown/)
* [Basic writing and formatting syntax](https://docs.github.com/en/github/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax)
