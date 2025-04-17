def clean_hex_string(hex_str):
    """Remove '0x' if it exists and ensure it's 8 hex digits."""
    hex_str = hex_str.strip().lower()
    if hex_str.startswith("0x"):
        hex_str = hex_str[2:]
    return hex_str.zfill(8)  # pad with leading zeros if needed


def convert_to_little_endian_from_file(input_file, output_file=None):
    little_endian_bytes = []
    with open(input_file, 'r') as file:
        for line in file:
            hex_str = clean_hex_string(line)
            if len(hex_str) != 8:
                continue  # skip invalid lines

            inst_int = int(hex_str, 16)

            # Extract 4 bytes in little-endian order
            for i in range(4):
                byte = (inst_int >> (8 * i)) & 0xFF
                little_endian_bytes.append(byte)

    # Print or write result
    if output_file:
        with open(output_file, 'w') as out:
            for byte in little_endian_bytes:
                out.write(f"{byte:02x}\n")
    else:
        print("8-bit little-endian bytes:")
        for i, byte in enumerate(little_endian_bytes):
            print(f"{byte:02x}")


# === Usage ===
inputFile = input("Enter input file: ")
outputFile = input("Enter output file: ")
convert_to_little_endian_from_file(inputFile, outputFile)  # or specify output file like "output.hex"
