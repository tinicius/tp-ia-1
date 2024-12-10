# Inteligência Artificial - Trabalho - Capítulo 3 e 4

Integrantes:

- Vinicius Alves Pereira
- César Henrique Resende Soares

## Introdução

Este projeto tem como objetivo explorar e comparar a eficiência e eficácia de dois algoritmos de busca aplicados à resolução de um problema de labirinto. O labirinto foi configurado como um grafo, onde cada nó possui uma letra, e o objetivo é sair do ponto U e chegar ao ponto E, considerando as paredes que desconectam uma parte da outra do grafo. É válido ressaltar que, no exemplo dado, o grafo como um todo é conexo. Este trabalho foi desenvolvido no contexto da disciplina de Inteligência Artificial do curso de Engenharia de Computação do CEFET-MG, Campus Divinópolis. Nele, foram comparados os termos de tempo de execução, consumo de memória, completude e optimalidade dos algoritmos BFS e DFS.

## Descrição dos Algoritmos Implementados

O código apresentado implementa dois algoritmos clássicos de busca em grafos: a Busca em Largura (Breadth-First Search - BFS) e a Busca em Profundidade (Depth-First Search - DFS). Ambos os algoritmos são utilizados em aplicações de inteligência artificial e na ciência da computação como um todo, especialmente em problemas que envolvem exploração de caminhos.

### Busca em Largura (BFS):

O BFS é um algoritmo de busca que explora grafos começando de um nó raiz e explorando todos os seus vizinhos primeiro, antes de mover-se para o próximo nível de vizinhança. Esse processo é realizado utilizando uma fila para gerenciar os nós que serão visitados e sua ordem de visitação. No código, o nó inicial é colocado na fila e marcado como visitado. Em seguida, o algoritmo remove o nó da frente da fila e explora todos os seus vizinhos não visitados, adicionando-os à fila e marcando-os como visitados. Isso continua até que todos os nós acessíveis tenham sido processados.

### Busca em Profundidade (DFS):

A DFS, ao contrário da BFS, explora o grafo o mais fundo possível ao longo de cada ramificação antes de retroceder. Isso é feito utilizando uma pilha, que pode ser implementada de forma iterativa (como foi implementada) ou recursiva. O nó inicial é colocado na pilha e o algoritmo continua a explorar um caminho até que não haja mais vizinhos não visitados, momento em que retorna para o nó anterior no caminho e explora outras opções. Este processo continua até que todos os nós acessíveis tenham sido visitados.

## Medições de Desempenho

### Tempo de execução

Para avaliar o tempo de execução, foi criado um script (`time.cpp`) que executa ambos os algoritmos 100 vezes e calcula a média de cada execução. Esse tipo de avaliação foi escolhido para reduzir possíveis variações entre execuções, permitindo uma melhor análise dos resultados.

O tempo de execução é uma variável que pode apresentar diferentes valores a depender do hardware onde o programa está sendo executado. Dessa forma, o objetivo não é avaliar os resultados específicos obtidos, mas sim comparar ambos os algoritmos de maneira proporcional.

### Consumo de memória

Para analisar o consumo de memória, foi decidido observar o número de elementos nas estruturas de dados. Criamos um script (`memory.cpp`) que monitora durante a execução o tamanho máximo atingido pela pilha ou pela fila durante a execução dos algoritmos. Essa abordagem permite observar qual foi o consumo máximo de memória exigido pelo algoritmo.

Para calcular o máximo de memória, basta multiplicar o maior número de elementos encontrado pelo tamanho da estrutura armazenada, neste caso, valores inteiros.

### Completude

Para avaliar a completude dos algoritmos foi necessário apenas verificar se o objetivo final foi atingido após a execução.

### Optimalidade

Para avaliar a optimalidade dos algoritmos, foi desenvolvido um script (`path.cpp`) que mostra o caminho encontrado após a execução. Assim, é possível comparar o resultado obtido com a solução ótima do problema, que já é conhecida previamente.

## Resultados das medições de Desempenho

### Tempo de execução

Após a execução foram obtidos os seguintes valores.

| Algoritmo | Tempo Médio (µs) |
| --------- | ---------------- |
| BFS       | 27               |
| DFS       | 47               |

É possível observar que a BFS termina sua execução aproximadamente 1.7 vezes mais rápido que a DFS. Isso ocorre devido a BFS encontrar o menor caminho evitando caminhos errados, além disso como há poucas possibilidades de movimento a BFS observa poucos elementos em cada nível. Diferentemente a DFS verifica um caminho errado até o final necessitando mais tempo para regredir e buscar outro caminho.

### Consumo de memória

| Algoritmo | Máximo de elementos | Consumo de memória (Bytes) |
| --------- | ------------------- | -------------------------- |
| BFS       | 3                   | 24                         |
| DFS       | 6                   | 48                         |

A BFS, por explorar todos os vizinhos de um nó antes de avançar para o próximo nível, tende a utilizar mais memória, pois a fila pode crescer significativamente. Já a DFS, por seguir um caminho até o fim antes de retroceder, geralmente utiliza menos memória, pois a pilha mantém apenas o caminho atual. Entretanto, nesse caso específico, a BFS teve um consumo significativamente menor de memória, a metade necessária pela DFS. Isso ocorreu porque a DFS acabou encontrando uma solução maior que a ótima, necessitando de mais memória. A BFS teve um consumo menor de memória devido ao número limitado de opções de movimento, ou seja, um baixo fator de ramificação do problema.

### Completude

Foi observado que ambos os algoritmos conseguiram encontrar uma solução válida, conforme esperado. Isso ocorre porque tanto a BFS quanto a DFS são algoritmos completos, ou seja, eles garantem encontrar um caminho se ele existir em um grafo finito.

### Optimalidade

Observando a entrada, podemos verificar que a solução ótima seria a sequência: `U V Q L M N I H C D E`.

Dessa forma, ao executar os algoritmos com essa entrada, podemos perceber que a BFS, como esperado, encontra a solução ótima. A DFS, porém, dependendo da ordem em que verifica as casas adjacentes, pode encontrar uma solução que não é a ótima.

Abaixo seguem os caminhos encontrados por cada algoritmo.

```
BFS: U V Q L M N I H C D E
DFS: U V X Y Z T S R M N I H C D E
```

## Análise Comparativa dos Algoritmos

Ambos os algoritmos têm a mesma complexidade temporal de O(V+E), onde V é o número de vértices e E é o número de arestas no grafo. No entanto, eles divergem na sua abordagem e no uso da memória.

Complexidade Espacial:

- A BFS pode ocupar mais espaço na memória, pois precisa manter uma fila com todos os nós do nível atual do grafo, o que poderia se tornar um problema em grafos muito largos.
- A DFS utiliza menos memória para grafos profundos, pois a pilha mantém apenas o caminho atual desde o nó raiz até o nó folha. No entanto, em grafos com grande profundidade, pode haver o risco de estouro de pilha.

Aplicações e Características:

- BFS: Ideal para encontrar o caminho mais curto em grafos não ponderados, pois explora nós por nível. É frequentemente usado em algoritmos de roteamento e para resolver problemas como a determinação do menor caminho.
- DFS: Útil em problemas que requerem a exploração completa de um caminho antes de tentar outro, como em busca de soluções em problemas de jogo e verificação de caminhos em labirintos.

Observamos que, neste problema, a busca em largura (BFS) apresentou um desempenho superior, garantindo uma solução ótima com menor custo de memória e em menor tempo. O baixo fator de ramificação do problema é uma das principais características que justificam esse resultado. Além disso, a busca em profundidade (DFS), por testar um caminho até o final, pode percorrer uma grande distância em um caminho errado. Esse problema é evitado na BFS, que sempre busca a solução mais curta.

## Conclusão e Sugestões de Melhorias

Os algoritmos de busca em grafos, BFS e DFS, são ferramentas fundamentais na inteligência artificial e na ciência da computação. Através deste trabalho, foi possível observar as diferenças de desempenho entre esses algoritmos em termos de tempo de execução, consumo de memória, completude e optimalidade.

A BFS demonstrou ser mais eficiente em termos de tempo e consumo de memória para o problema específico abordado, encontrando a solução ótima de forma mais rápida e com menor uso de recursos. A DFS, embora completa, pode não encontrar a solução ótima e tende a consumir mais memória em problemas com maior profundidade.

Esses resultados reforçam a importância de escolher o algoritmo adequado para cada tipo de problema, considerando as características específicas do grafo e os requisitos de desempenho. Para problemas que exigem a solução mais curta e possuem um baixo fator de ramificação, a BFS é a escolha mais indicada. Já a DFS pode ser mais adequada para problemas que requerem a exploração completa de caminhos ou em grafos com grande profundidade.

Como sugestão de melhoria, é interessante avaliar o problema com outros algoritmos de busca e complementar as comparações entre as diferentes alternativas, considerando aspectos como eficiência, precisão e complexidade. Além disso, é recomendável executar os algoritmos contra diferentes matrizes, com tamanhos e configurações de caminhos variados, permitindo avaliar o desempenho em cenários diversos e identificar os casos em que cada abordagem se destaca. Essa análise ampliada pode fundamentar a escolha do algoritmo mais adequado para cada tipo de aplicação.
