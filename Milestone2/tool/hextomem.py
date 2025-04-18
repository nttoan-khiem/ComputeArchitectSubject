def convert_to_little_endian_from_file(input_file, output_file=None):
    with open(input_file, 'r') as file:
        counter = 0
        for line in file:
            line = line.rstrip('\n')
            line = "mem[" + str(counter) + "] <= 8'h" + line + ";"
            print(line)
            counter += 1


# === Usage ===
inputFile = input("Enter input file: ")
convert_to_little_endian_from_file(inputFile)  # or specify output file like "output.hex"
