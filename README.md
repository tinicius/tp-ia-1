Inteligência Artificial - Trabalho 2

Integrantes:

- Vinicius Alves Pereira
- César Henrique Resende Soares

# Introdução

Este projeto tem como objetivo explorar e comparar a eficiência e eficácia de dois algoritmos de busca aplicados à
resolução de um problema de labirinto. O labirinto foi configurado como um grafo, onde cada nó possui uma letra, e o
objetivo é sair do ponto U e chegar ao ponto E, considerando as paredes que desconectam uma parte da outra do grafo. É
válido ressaltar que, no exemplo dado, o grafo como um todo é conexo. Este trabalho foi desenvolvido no contexto da
disciplina de Inteligência Artificial do curso de Engenharia de Computação do CEFET-MG, Campus Divinópolis. Nele, foram
comparados os termos de tempo de execução, consumo de memória, completude e optimalidade dos algoritmos A* (usando a
distância de Manhattan) e Busca Gulosa.

# Descrição dos Algoritmos Implementados

O código apresentado implementa dois algoritmos clássicos de busca em grafos: a Busca A* e a Busca Gulosa. Ambos os
algoritmos são utilizados em aplicações de inteligência artificial e na ciência da computação como um todo,
especialmente em problemas que envolvem exploração de caminhos.

### Algoritmo A*:

O A* é um algoritmo de busca que explora grafos utilizando uma função de custo que combina o custo real do caminho
percorrido e uma estimativa heurística do custo até o objetivo. A heurística utilizada neste projeto é a distância de
Manhattan, que calcula a soma das distâncias horizontais e verticais até o ponto de destino. No código, os nós são
armazenados em uma fila de prioridade, sendo explorados com base no menor custo total (caminho percorrido + heurística).
Isso permite ao A* encontrar o caminho mais eficiente até o objetivo.

### Algoritmo Guloso:

A Busca Gulosa, ao contrário do A*, utiliza apenas a estimativa heurística para decidir qual nó explorar em seguida, sem
considerar o custo real do caminho já percorrido. Isso pode levar a soluções mais rápidas, mas não necessariamente as
ótimas. A heurística de distância de Manhattan é novamente utilizada para guiar a busca. No código, cada nó é explorado
com base na menor distância estimada ao objetivo, sem considerar o caminho já percorrido.

# Medições de Desempenho

### Tempo de execução

Para avaliar o tempo de execução, foi criado um script (time.cpp) que executa ambos os algoritmos 100 vezes e calcula a
média de cada execução. Esse tipo de avaliação foi escolhido para reduzir possíveis variações entre execuções,
permitindo uma melhor análise dos resultados.

O tempo de execução é uma variável que pode apresentar diferentes valores a depender do hardware onde o programa está
sendo executado. Dessa forma, o objetivo não é avaliar os resultados específicos obtidos, mas sim comparar ambos os
algoritmos de maneira proporcional.

# Consumo de memória

Para analisar o consumo de memória, foi decidido observar o número de elementos nas estruturas de dados. Para isso, foi
criado um script (memory.cpp) que monitora durante a execução o tamanho máximo atingido pela fila de prioridade
utilizada no A* e pela estrutura de dados da Busca Gulosa. Essa abordagem permite observar qual foi o consumo máximo de
memória exigido pelo algoritmo.

Para calcular o máximo de memória, basta multiplicar o maior número de elementos encontrado pelo tamanho da estrutura
armazenada, neste caso, valores inteiros.

# Completude

Para avaliar a completude dos algoritmos foi necessário apenas verificar se o objetivo final foi atingido após a
execução.

# Optimalidade

Para avaliar a optimalidade dos algoritmos, foi desenvolvido um script (path.cpp) que mostra o caminho encontrado após a
execução. Assim, é possível comparar o resultado obtido com a solução ótima do problema, que já é conhecida previamente.

# Resultados das medições de Desempenho

### Tempo de execução

Após a execução foram obtidos os seguintes valores.

| Algoritmo | Tempo Médio (µs) |
|-----------|------------------------------|
| A*        | 36                         |
| Guloso    | 56                         |

É possível observar que a Busca Gulosa termina sua execução mais rápido que o A*. Isso ocorre porque a Busca Gulosa
explora o nó com a menor estimativa de distância ao objetivo sem considerar o custo acumulado, o que pode levar a
caminhos subótimos mas mais rápidos de computar. O A*, por sua vez, busca o caminho mais eficiente, levando em
consideração tanto o custo real quanto a heurística.

### Consumo de memória

| Algoritmo | Máximo de elementos | Consumo de memória (Bytes) |
|-----------|---------------------|----------------------------|
| A*        | 3                   | 24                         |
| Guloso    | 3                   | 24                         |

O A*, por armazenar o caminho percorrido e a estimativa heurística, tende a utilizar mais memória em comparação à Busca
Gulosa, que mantém apenas o nó atual e sua estimativa. Porém, embora o A* utilize mais memória, ele garante a solução
ótima, enquanto a Busca Gulosa pode ser mais eficiente em termos de memória, mas com soluções potencialmente sub-ótimas.

# Completude

Observando a entrada, podemos verificar que a solução ótima seria a sequência: U V Q L M N I H C D E.

Foi observado que ambos os algoritmos conseguiram encontrar uma solução válida, conforme esperado pois tanto o A* quanto
a Busca Gulosa conseguiram encontrar o objetivo.

Abaixo seguem os caminhos encontrados por cada algoritmo.

```
A*:     U V Q L M N I H C D E 
Greedy: U V Q L M N I H C D 
```

# Optimalidade

Observando a entrada, podemos verificar que a solução ótima seria a sequência: U V Q L M N I H C D E.

Dessa forma, ao executar os algoritmos com essa entrada, podemos perceber que o A*, como esperado, encontra a solução
ótima. O mesmo é válido para a Busca Gulosa, porém, devido à sua natureza de apenas considerar a heurística, pode
ser que ele encontre uma solução que não é a ótima.

Abaixo seguem os caminhos encontrados por cada algoritmo.

A*: U V Q L M N I H C D E

Guloso: U V Q L M N I H C D E

Análise Comparativa dos Algoritmos

A complexidade temporal do A* pode ser O(b^d), onde b é o fator de ramificação (número médio de filhos por nó) e d é a
profundidade da solução ótima. No entanto, essa complexidade pode variar dependendo da qualidade da heurística
utilizada. Se a heurística for admissível (nunca superestimar o custo real do caminho) e consistente, o A* é ótimo e
completo, mas o tempo de execução pode crescer exponencialmente com o tamanho do espaço de busca.

A busca gulosa também pode ter uma complexidade temporal de O(b^m), onde m é a profundidade máxima do espaço de busca,
já que ela pode potencialmente explorar muitos nós ao seguir caminhos que parecem promissores com base na heurística. No
entanto, ao contrário do A*, a busca gulosa não considera o custo acumulado do caminho até o nó atual, apenas a
estimativa heurística de custo até o objetivo, o que pode levar a explorações menos eficientes em termos de encontrar o
caminho ótimo.

# Complexidade Espacial:

O A* pode ocupar mais espaço na memória, pois precisa manter uma fila de prioridade com os nós a serem explorados,
ponderados pelo custo total. Por sua vez, o algoritmo de  Busca Gulosa utiliza menos memória, pois só considera a 
heurística da distância ao objetivo sem manter o caminho percorrido.

# Aplicações e Características:

* A*: Ideal para encontrar o caminho mais curto em grafos ponderados, pois explora nós com base em custo real e
heurístico. É frequentemente usado em algoritmos de roteamento e na robótica, além de também ser amplamente utilizado
para resolver problemas como a determinação do menor caminho em mapas.

* Busca Gulosa: Útil em problemas onde a velocidade é mais crítica que a precisão, explorando caminhos mais rapidamente,
porém, recebendo resultados que são potencialmente podem ser sub-ótimos.

# Conclusão e Sugestões de Melhorias

Os algoritmos de busca em grafos, A* e Busca Gulosa, são ferramentas fundamentais na inteligência artificial e na
ciência da computação. Através deste trabalho, foi possível observar as diferenças de desempenho entre esses algoritmos
em termos de tempo de execução, consumo de memória, completude e optimalidade.

O A* demonstrou ser mais eficiente em termos de encontrar a solução ótima para o problema específico abordado, enquanto
a Busca Gulosa mostrou-se mais rápida mas com risco de soluções sub-ótimas. Esses resultados reforçam a importância de
escolher o algoritmo adequado para cada tipo de problema, considerando as características específicas do grafo e os
requisitos de desempenho.

Como sugestão de melhoria, é interessante avaliar o problema com outros algoritmos de busca e complementar as
comparações entre as diferentes alternativas, considerando aspectos como eficiência, precisão e complexidade. Além
disso, é recomendável executar os algoritmos contra diferentes matrizes, com tamanhos e configurações de caminhos
variados, permitindo avaliar o desempenho em cenários diversos e identificar os casos em que cada abordagem se destaca.
Essa análise ampliada pode fundamentar a escolha do algoritmo mais adequado para cada tipo de aplicação.
