# Trabalho de Arquitetura de Computadores

Repositório com os códigos-fonte, relatórios e materiais dos temas:
- **Tema 1:** Funcionamento da memória cache e técnicas de otimização
- **Tema 5:** Arquiteturas RISC vs. CISC

## Integrantes

- Arthur Freitas Araújo
- Arthur Martins Fonseca Dias
- Caio Seabra de Queiroz
- Marina Souza Ramos

**Disciplina:** Arquitetura de Computadores
**Professor:** Weldes Lima Oliveira
**Universidade Católica de Brasília (UCB)**

---

## Tema 1 — Memória Cache

### Código executável (PoC)

Os códigos em C da Prova de Conceito estão disponíveis para execução online no **OnlineGDB**:

🔗 **[Acessar OnlineGDB](https://onlinegdb.com/XNImfaDrZ)**

### Ambiente de teste

Os testes foram realizados em um ambiente **Linux Fedora**, com processador **Intel Core i5-12500H (12ª geração)**. As medições de tempo foram feitas com a função `clock()` da linguagem C, e os cache misses foram medidos com o comando `perf stat`.

### Como compilar e executar localmente

```bash
# Compilar o percurso linha por linha
gcc -O0 percurso_linha.c -o linha
./linha

# Compilar o percurso coluna por coluna
gcc -O0 percurso_coluna.c -o coluna
./coluna