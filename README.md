# IF677 - Infraestrutura de Software

Repositório da monitoria de Infraestrutura de Software (IF677). Disciplina ministrada pelo professor Carlos Ferraz no curso de Ciência da Computação do CIn UFPE.

**Monitores**

Paulo Salgado (pdssf)

Paulo Aragão (pvsa)

Pedro Caminha (phcl)

## Links úteis

[Lista de e-mail](mailto:if677cc+subscribe@googlegroups.com)

[Aulas do professor](https://cin.ufpe.br/~cagf/if677/)

[P.O.T.E.](https://www.dropbox.com/sh/tgd67gmw94kirxy/AABoMmUuZcY_nSaqArOIv_qva/3%C2%BA%20Per%C3%ADodo/Infraestrutura%20de%20Software?dl=0&subfolder_nav_tracking=1)

[PETLib](https://drive.google.com/drive/folders/195dVoGYZR15OuO6ipxTYB9ahFkYXZZdl)

[pthread.h - The Open Group Library](https://pubs.opengroup.org/onlinepubs/007908799/xsh/pthread.h.html)

[POSIX Threads Programming](https://computing.llnl.gov/tutorials/pthreads/)

[Slide: Linux e C/C++](https://docs.google.com/presentation/d/1qieBy0_VDD2yoTcEdH9_kvGngC-zpo1bTs5EtgcKTIE/edit?usp=sharing)

[Slide: Threads](https://docs.google.com/presentation/d/1YwnQt127eA4tNMoTyCIejQYJzqhzw5SfLzWc-zftzlo/edit?usp=sharing)

## Primeiros passos

### Instalação de uma distribuição Linux
*Recomendação: [Linux Mint](https://linuxmint.com/) ou [Ubuntu](https://ubuntu.com/)*

Durante as atividades de monitoria, utilizaremos ferramentas inclusas por padrão no kernel Linux. Isso eliminará a necessidade de instalarmos muitos pacotes adicionais e de fazermos ajustes extras no sistema. Portanto, sugerimos que você instale uma distribuição Linux.

### Instalação do metapacote build-essential no Ubuntu e derivados
1. Abra o terminal

2. Execute o comando

   `sudo apt-get install build-essential`   

3. Entre com sua senha

### Instalação do Java JRE e Java JDK no Ubuntu e derivados
1. Abra o terminal

2. Execute o comando

   `sudo apt-get install openjdk-11-jre openjdk-11-jdk`   

3. Entre com sua senha

### Instalação do Visual Studio Code e do Eclipse (recomendado)
No Linux Mint, basta abrir a **Central de Programas**, procurar pelos programas e clicar para instalar.

No Ubuntu, é possível baixar o Eclipse através do **Adicionar ou remover programas**. O Visual Studio Code pode ser baixado no [site oficial](https://code.visualstudio.com/) do projeto.

## Código-fonte
Neste repositório disponibilizamos os códigos-fonte apresentados nas aulas de monitoria, com comentários e breve explicação sobre os conceitos abordados. Esse código serve como material de estudo para os exercícios práticos que realizaremos ao longo da disciplina.

### Compilação e execução
1. Abra o terminal

2. Compile com o comando

   `gcc -pthread nome_arquivo.c -o nome_saida`   

3. Execute com o comando

   `./nome_saida`   

Para códigos-fonte na linguagem C++, basta substituir o `gcc` por `g++`.
