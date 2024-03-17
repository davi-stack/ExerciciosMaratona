def exp_modular(base, expoente, modulo):
    resultado = 1
    base = base % modulo  # Reduz a base para evitar estouro
    while expoente > 0:
        # Se o expoente for ímpar, multiplicamos o resultado atual pela base
        if expoente % 2 == 1:
            resultado = (resultado * base) % modulo
        # Dividimos o expoente pela metade e quadruplicamos a base
        expoente //= 2
        base = (base * base) % modulo
    return resultado

# Entrada de dados
b, e, m = map(int, input().split())

# Calcula o resultado usando exponenciação modular
resultado = exp_modular(b, e, m)

# Saída do resultado
print(resultado)
