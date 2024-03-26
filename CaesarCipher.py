def caesarCipher(s, k):
    # Write your code here
    
    lower_case_alphabet = 'abcdefghijklmnopqrstuvwxyz'
    upper_case_alphabet = lower_case_alphabet.upper()
    result = ""
    
    for char in s:
        if char.isalpha():
            alphabet = lower_case_alphabet if char.islower() else upper_case_alphabet
            old_index = alphabet.find(char)
            new_index = (old_index + k) % 26
            encrypted = alphabet[new_index]
            result += encrypted
        else:
            result += char
    return result