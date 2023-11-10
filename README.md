## Exercício de Estruturas de Dados com Herança em C++

 Este projeto consiste na implementação de duas estruturas de dados distintas em C++:

    
    * Fila de Banco
    * Pilha de Provas
    * Pessoa: Classe base com os atributos Nome (string) e CPF (string).
    * ClienteBanco: Herda de Pessoa e adiciona os atributos NumeroDaConta (string) e Agencia (string).
    * FilaBanco: Implementa métodos para gerenciar uma fila de objetos ClienteBanco.

## Funcionalidades da FilaBanco

    * Adicionar clientes à fila (enqueue), exibindo nome, CPF, número da conta, agência e o número de clientes à frente.
    * Remover clientes da fila (dequeue) e indicar o nome do cliente removido e a quantidade restante na fila.
    * Listar clientes na fila (printQueue).
    * Checar se a fila está vazia (isEmpty).
    * Permitir a inserção de um cliente com atendimento prioritário (enqueuePriority).

* Pilha de Provas
* Classes Envolvidas

    * Pessoa: Classe base com os atributos Nome (string) e CPF (string).
    * Aluno: Herda de Pessoa e adiciona os atributos numeroMatricula (int) e curso (string).
    * Prova: Possui atributos como Disciplina (string), CodigoDaProva (string), Nota (float) e Aluno.
    * PilhaProvas: Implementa métodos para gerenciar uma pilha de objetos Prova.

## Funcionalidades da PilhaProvas

    * Empilhar provas (push) mostrando os dados da prova e o número de provas na pilha.
    * Desempilhar provas (pop) informando os detalhes da prova retirada e as que ainda estão na pilha.
    * Visualizar a prova no topo (top).
    * Verificar se a pilha de provas está vazia (isEmpty).

## Notas Importantes

    * As operações de adição e remoção devem obedecer às características de uma fila e uma pilha, respectivamente.
    * A gestão de memória deve ser feita manualmente, sem o uso de facilitadores como smart pointers.
    * Na FilaBanco, o cliente com atendimento prioritário pode ser adicionado em qualquer momento.
    * Teste todos os métodos para assegurar o funcionamento adequado de ambas as estruturas de dados.
## Contribuições
Contribuições são bem-vindas! Se você deseja contribuir para este projeto, siga estas etapas:

Faça um fork do repositório. Crie uma branch para a sua contribuição:
```bash
git checkout -b minha-contribuicao
```
Faça suas alterações e comite:
```bash
git commit -m "Adicionei recursos incríveis"
```
Envie suas alterações para o seu fork:
```bash
git push origin minha-contribuicao
```
Abra um pull request neste repositório original.

## Licença

Este projeto está licenciado sob a [Licença MIT](LICENSE). Veja o arquivo [LICENSE](LICENSE) para mais detalhes.

**Referencias** :

* [w3school](https://www.w3schools.com/cpp/default.asp)
* [cin.ignore(numeric_limits<streamsize>::max(), '\n')](https://www.tutorialspoint.com/what-is-the-use-of-cin-ignore-in-cplusplus)
* [lista encadeada](https://www.ime.usp.br/~coelho/mac0122-2012/aulas/aula10-3x2.pdf)


## Dados

**Autor:** Arthur De Oliveira Mendonça 

**Redes Sociais:**

* [GitHub](https://github.com/ImArthz)
* [Twitter](https://twitter.com/Im_Arthz)

**Contato:**

* [WhatsApp](https://api.whatsapp.com/send?phone=37988528423)
* [Discord](https://discordapp.com/users/imarthz)
