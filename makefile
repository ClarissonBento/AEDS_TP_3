# Makefile para compilar um projeto com main.c, arquivos .c em sources/ e headers em headers/

# Variáveis
CC = gcc
CFLAGS = -Wall
SRCDIR = sources
HEADERSDIR = headers
SOURCES = $(wildcard $(SRCDIR)/*.c)
HEADERS = $(wildcard $(HEADERSDIR)/*.h)
TARGET = main

# Regra padrão
all: $(TARGET)
$(TARGET): $(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

# Regra para limpar arquivos intermediários e o executável
clean:
	rm -f $(TARGET)