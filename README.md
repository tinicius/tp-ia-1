# tp-ia-1

## Descrição dos Algoritmos Implementados

O código apresentado implementa dois algoritmos clássicos de busca em grafos: a Busca em Largura (Breadth-First Search -
BFS) e a Busca em Profundidade (Depth-First Search - DFS). Ambos os algoritmos utilizados em aplicações de
inteligência artificial e na ciência da computação como um todo, especialmente em problemas que envolvem exploração de
caminhos.

### Busca em Largura (BFS):

O BFS é um algoritmo de busca que explora grafos começando de um nó raiz e explorando todos os seus vizinhos primeiro,
antes de mover-se para o próximo nível de vizinhança. Esse processo é realizado utilizando uma fila para gerenciar os
nós que serão visitados e sua ordem de visitação. No código, o nó inicial é colocado na fila e marcado como visitado. Em
seguida, o algoritmo remove o nó da frente da fila e explora todos os seus vizinhos não visitados, adicionando-os à fila
e marcando-os como visitados. Isso continua até que todos os nós acessíveis tenham sido processados.

### Busca em Profundidade (DFS):

A DFS, ao contrário da BFS, explora o grafo o mais fundo possível ao longo de cada ramificação antes de retroceder. Isso
é feito utilizando uma pilha, que pode ser implementada de forma iterativa (como foi implementada) ou recursiva. O nó
inicial é colocado na pilha e o algoritmo continua a explorar um caminho até que não haja mais vizinhos não visitados,
momento em que retorna para o nó anterior no caminho e explora outras opções. Este processo continua até que todos os
nós acessíveis tenham sido visitados.

## Resultados das medições de Desempenho

## Análise Comparativa dos Algoritmos

Ambos os algoritmos têm a mesma complexidade temporal de O(V+E), onde V é o número de vértices e E é o número de arestas
no grafo. No entanto, eles divergem na sua abordagem e no uso da memória.

Complexidade Espacial:

* A BFS pode ocupar mais espaço na memória, pois precisa manter uma fila com todos os nós do nível atual do grafo, o que
  poderia se tornar um problema em grafos muito largos.
* A DFS utiliza menos memória para grafos profundos, pois a pilha mantém apenas o caminho atual desde o nó raiz até o nó
  folha. No entanto, em grafos com grande profundidade, pode haver o risco de estouro de pilha.

Aplicações e Características:

* BFS: Ideal para encontrar o caminho mais curto em grafos não ponderados, pois explora nós por nível. É frequentemente
  usado em algoritmos de roteamento e para resolver problemas como a determinação do menor caminho.
* DFS: Útil em problemas que requerem a exploração completa de um caminho antes de tentar outro, como em busca de
  soluções em problemas de jogo e verificação de caminhos em labirintos.

## Conclusão e Sugestões de Melhorias

Os resultados dos tempos de execução apresentados no código são medidos em nanosegundos, mas, devido à simplicidade do
grafo, a diferença de tempo pode não ser significativa para avaliar o desempenho em grande escala. Ambos os algoritmos,
BFS e DFS, são adequados para cenários diferentes.

Possíveis Melhorias:

* Manejo de Componentes Desconexos: Expandir os algoritmos para lidar com grafos que não são totalmente conectados,
  garantindo que todos os componentes sejam visitados se necessário.

* Melhoria de Desempenho: Ainda que os algoritmos sejam eficientes para grafos pequenos, em grafos muito grandes,
  melhorias como otimizações na estrutura de dados usada para armazenar os estados visitados poderiam ser exploradas.

