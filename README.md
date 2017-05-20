# Uri_judge
Códigos em C com exercícios propostos pelo site "uri online judge"

Todo código ficará com o status atual no site, como Accepted por exemplo.

### compilar usando o GCC ####

gcc [nome do arquivo.extensão do arquivo]


### exemplo: ###

gcc desafio2_area.c

A saída o será um arquivo chamado ### a.out ###, é um padrão que o gcc utiliza. Para que o arquivo saia com outro nome é necessário colocar ### -o ### como no exemplo abaixo:

gcc [nome do arquivo.extensão do arquivo] -o [nome de saída do arquivo]

### exemplo: ###

gcc desafio2_area.c -o desafio2_area

A saída será um arquivo chamado ### desafio2_area ###

### compilar usando a biblioteca math ####

gcc [nome do arquivo.extensão do arquivo] -o [nome de saída do arquivo] -lm

### exemplo: ###

gcc desafio2_area.c -o desafio2_area -lm

### executar arquivo ###

./[nome do arquivo]

### exemplo: ###

./desafio2_area

### utilizar o gnu debugger, gdb ###

Para mais informações sobre o GDB é possível consultar a documentação disponível em https://www.gnu.org/software/gdb/ ou digitar o comando #man gdb, se este comando retornar algum erro o manual pode ser instalado com o comando #apt-get install gdb-doc 

Caso o executável já esteja compilado é necessário executar o gcc com um novo parâmetro antes do arquivo fonte, pois o GDB não identifica os breakpoints do executável com o padrão de compilação gcc [nome do arquivo.extensão do arquivo] -o [nome de saída do arquivo]

O arquivo deve sem compiado com o parâmetro "-ggdb", ficando "gcc -ggdb [nome do arquivo.extensão do arquivo] -o [nome de saída do arquivo]"

### exemplo: ###

gcc desafio2_area.c -o desafio2_area

Após isso o comando "gdb [nome de saída do arquivo]"  deve ser digitado no terminal

### exemplo: ###

gdb desafio2_area

### Comandos úteis: ###

Enter repete o último comando digitado

start ou r - Inicia o programa

display [variável] - Exibe o valor da variável, exemplo: "display x" o valor da variável x será exibido deste ponto em diante até o fim da execução do código

break ou b - Coloca um breakpoint no código

next ou n - Vai para a próxima linha do código

Ctrl+d ou q - Fecha o GDB
