# Gabarito de Atividade Somativa - Internet Industrial das Coisas

**Disciplina:** Internet Industrial das Coisas (IIoT)  
**Instituição:** SENAI Jandira  
**Período:** 1º Semestre 2026  
**Ano:** 2026

## Visão Geral

Este repositório contém o gabarito da atividade somativa da disciplina de Internet Industrial das Coisas. O projeto demonstra a aplicação prática de conceitos de IoT através da implementação de um sistema embarcado com comunicação em tempo real, utiliza linguagem C++ para programação do microcontrolador e plataforma Wokwi para prototipagem e simulação.

## Arquitetura do Sistema

### Componentes Principais

```
┌─────────────────────────────────────────────────────────────┐
│                    Sistema IIoT                              │
├─────────────────────────────────────────────────────────────┤
│                                                               │
│  ┌──────────────────┐         ┌──────────────────┐           │
│  │  Microcontrolador│         │   Sensores e     │           │
│  │   (ESP32/Arduino)│◄───────►│   Atuadores      │           │
│  │                  │         │                  │           │
│  │  - Processamento │         │  - Leitura dados │           │
│  │  - Lógica        │         │  - Atuação       │           │
│  │  - Comunicação   │         │  - Feedback      │           │
│  └──────────────────┘         └──────────────────┘           │
│           │                                                  │
│           │ Protocolo de Comunicação                         │
│           │ (Serial/Wi-Fi/LoRa)                              │
│           ▼                                                  │
│  ┌──────────────────────────────────────────┐                │
│  │        Camada de Aplicação/Controle      │                │
│  │  - Tratamento de dados                   │                │
│  │  - Ações automáticas                     │                │
│  │  - Monitoramento em tempo real           │                │
│  └──────────────────────────────────────────┘                │
│                                                              │
└─────────────────────────────────────────────────────────────┘
```
<img width="845" height="728" alt="image" src="https://github.com/user-attachments/assets/315cf3f0-69e3-4493-9425-5736fa64c467" />

### Fluxo de Dados

1. **Aquisição de Dados**: Os sensores capturam informações do ambiente (temperatura, umidade, luminosidade, etc.)
2. **Processamento**: O microcontrolador processa os dados utilizando algoritmos e lógica de controle
3. **Comunicação**: Os dados são transmitidos através de protocolos de comunicação adequados
4. **Ação**: Com base nos dados processados, atuadores realizam ações no sistema físico
5. **Feedback**: O sistema fornece feedback em tempo real do estado do sistema

## Tecnologias Utilizadas

### Linguagem de Programação

**C++ (100% do código)**

C++ foi escolhido para este projeto por oferecer:

- Controle de memória eficiente, essencial para sistemas embarcados com recursos limitados
- Performance em tempo real necessária para aplicações críticas
- Compatibilidade com bibliotecas padrão de microcontroladores
- Suporte a programação orientada a objetos, permitindo código modular e reutilizável
- Execução rápida com overhead mínimo

### Plataformas e Ferramentas

**Wokwi - Simulador Web**

- Simulação de circuitos eletrônicos em tempo real
- Ambiente visual para prototipagem sem necessidade de hardware físico
- Suporte a múltiplos microcontroladores (ESP32, Arduino, STM32, etc.)
- Ferramenta colaborativa para design de hardware

**Microcontrolador**

- Arquitetura x86/ARM com capacidade de processamento suficiente para aplicações IoT
- Portas GPIO para comunicação com sensores e atuadores
- Suporte a protocolos de comunicação (Serial, SPI, I2C, Wi-Fi)

### Bibliotecas e Dependências

Tipicamente utiliza:

- Bibliotecas padrão de C++ para manipulação de dados
- Bibliotecas específicas do microcontrolador para controle de GPIO
- Protocolos de comunicação implementados ou em bibliotecas especializadas

## Conceitos Aplicados

### 1. Internet das Coisas (IoT)

Princípios fundamentais implementados:

- **Conectividade**: Dispositivos conectados para troca de dados em tempo real
- **Sensoriamento**: Coleta contínua de dados do ambiente físico
- **Processamento Local**: Inteligência embarcada no dispositivo
- **Atuação**: Capacidade de interagir e modificar o ambiente

### 2. Sistemas Embarcados

Características exploradas:

- Execução determinística com restrições de tempo real
- Otimização de consumo de energia e recursos de memória
- Comunicação eficiente entre componentes
- Confiabilidade e tolerância a falhas

### 3. Automação Industrial

Aplicações práticas:

- Monitoramento de processos industriais
- Controle automático baseado em lógica programada
- Coleta de dados para análise e otimização
- Resposta rápida a eventos críticos

### 4. Protocolos de Comunicação

Conceitos implementados:

- Serial: Comunicação simples ponto-a-ponto com dispositivos
- Transmissão de dados estruturados e confiáveis
- Sincronização entre componentes do sistema
- Tratamento de erros e validação de dados

### 5. Lógica de Controle

Implementações típicas:

- Comparadores de valores com limites de alarme
- Máquinas de estados para sequências de operação
- Temporizadores e contadores para eventos
- Tratamento de sinais digitais e analógicos

## Estrutura do Projeto

```
gabarito-iiot-senai/
├── README.md                    # Documentação principal
├── provas/                      # atividades somativas
│   ├── numero.ino               # Programa principal
│   ├── diagram.json           # Módulo do wokwi
├── gabarito-geral/                    # gabarito unificado
```

## Especificações Técnicas

### Requisitos de Hardware

- Microcontrolador com capacidade de processamento mínima de 160 MHz
- Memória RAM suficiente (mínimo 256 KB)
- Flash para armazenamento do programa
- Portas GPIO para I/O digital
- Canais ADC para leitura analógica (opcional)

### Requisitos de Software

- Compilador C++ compatível com arquitetura alvo
- SDK ou framework do microcontrolador
- Ferramentas de upload e debug
- Navegador web para simulação em Wokwi

### Performance

- Tempo de resposta: Inferior a 100ms para eventos críticos
- Taxa de amostragem de sensores: Configurável (típicamente 1-10 Hz)
- Consumo de memória: Otimizado para dispositivos com restrições

## Guia de Execução

### Executar na Simulação Wokwi

1. Acesse a plataforma Wokwi (https://wokwi.com)
2. Importe ou crie um novo projeto
3. Carregue o arquivo de configuração Wokwi (`wokwi.json`)
4. Copie o código C++ para o editor de código
5. Clique em "Start Simulation" para executar
6. Observe o comportamento dos componentes na visualização simulada

### Compilar e Fazer Upload em Hardware Real

1. Configure o ambiente de desenvolvimento (Arduino IDE, PlatformIO, etc.)
2. Selecione a placa e porta de comunicação corretas
3. Compile o código: `Compile` ou `Build`
4. Faça o upload: `Upload` ou `Flash`
5. Abra o Monitor Serial para visualizar saídas de debug

## Considerações de Design

### Eficiência de Energia

- Uso de sleep modes quando apropriado
- Minimização de operações de I/O frequentes
- Otimização de algoritmos para reduzir tempo de processamento

### Confiabilidade

- Validação de dados recebidos
- Tratamento de exceções e erros
- Timeouts para operações bloqueantes
- Redundância em leituras críticas

### Escalabilidade

- Código modular separado em arquivos específicos
- Possibilidade de extensão com novos sensores/atuadores
- Comunicação estruturada para integração com sistemas maiores

## Conhecimentos Técnicos Demonstrados

Este projeto aplica:

1. **Programação C++**: Implementação eficiente de algoritmos com controle fino de recursos
2. **Eletrônica Digital**: Compreensão de circuitos, microcontroladores e protocolos
3. **Sistemas em Tempo Real**: Execução determinística e resposta rápida a eventos
4. **Comunicação de Dados**: Protocolos, sincronização e integridade de informações
5. **Prototipagem e Simulação**: Validação de comportamento antes de implementação física
6. **Engenharia de Sistemas**: Integração de componentes de hardware e software
7. **Automação e Controle**: Lógica de decisão e atuação baseada em sensoriamento

## Referências e Recursos

### Documentação Oficial

- C++ Reference: https://en.cppreference.com
- Wokwi Documentation: https://docs.wokwi.com
- Arduino Documentation: https://www.arduino.cc/reference

### Padrões Industriais

- IEC 61131-3: Linguagens de programação para controle
- ISO/IEC/IEEE 42010: Arquitetura de software
- MQTT: Protocolo de comunicação leve para IoT

## Autor

Desenvolvido como gabarito da atividade somativa de Internet Industrial das Coisas.

SENAI Jandira - 1º Semestre 2026

## Licença

Este material é fornecido para fins educacionais.

---

**Última atualização**: 2026-05-15
