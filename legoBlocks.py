def lego_blocks(n, m):
    MOD = 10**9 + 7
    row = [0] * (m + 1)

    # Configurações base
    if m >= 1:
        row[1] = 1
    if m >= 2:
        row[2] = 2
    if m >= 3:
        row[3] = 4
    if m >= 4:
        row[4] = 8

    # Calcula as combinações para larguras a partir de 5
    for i in range(5, m + 1):
        row[i] = (row[i-1] + row[i-2] + row[i-3] + row[i-4]) % MOD

    T = row[:]

    # Calcula combinações totais para altura n
    for _ in range(2, n + 1):
        for j in range(m + 1):
            T[j] = (row[j] * T[j]) % MOD

    solid = [0] * (m + 1)
    # Único sólido com certeza é quando m = 1
    solid[1] = 1

    for w in range(m + 1):
        unsolid_sum = 0
        for i in range(w):
            unsolid_sum += (solid[i] * T[w - i]) % MOD
        solid[w] = (T[w] - unsolid_sum) % MOD

    return solid[m]