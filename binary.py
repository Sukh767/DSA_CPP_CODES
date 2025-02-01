def generate_binary_consecutive_ones(a, b):
    def consecutive_ones(binary_str):
        return '11' in binary_str

    for num in range(a, b):  # Include 'a' in the range
        binary = bin(num)[2:]
        if len(binary) >= 3 and not consecutive_ones(binary):
            print(binary)

a, b = map(int, input().split())
generate_binary_consecutive_ones(a, b)
