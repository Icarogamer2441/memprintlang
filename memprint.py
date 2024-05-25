import sys

def interpret(code):
    lines = code.split("\n")
    memory = 26

    for line in lines:
        tokens = list(line)

        try:
            if tokens[0] == "#":
                pass
            else:
                for token in tokens:
                    if token == "*":
                        memory += 5
                    elif token == "+":
                        memory += 1
                    elif token == "-":
                        memory -= 1
                    elif token == "!":
                        memory -= 5
                    elif token == "&":
                        if memory == 26:
                            print("a", end="")
                        elif memory == 25:
                            print("b", end="")
                        elif memory == 24:
                            print("c", end="")
                        elif memory == 23:
                            print("d", end="")
                        elif memory == 22:
                            print("e", end="")
                        elif memory == 21:
                            print("f", end="")
                        elif memory == 20:
                            print("g", end="")
                        elif memory == 19:
                            print("h", end="")
                        elif memory == 18:
                            print("i", end="")
                        elif memory == 17:
                            print("j", end="")
                        elif memory == 16:
                            print("k", end="")
                        elif memory == 15:
                            print("l", end="")
                        elif memory == 14:
                            print("m", end="")
                        elif memory == 13:
                            print("n", end="")
                        elif memory == 12:
                            print("o", end="")
                        elif memory == 11:
                            print("p", end="")
                        elif memory == 10:
                            print("q", end="")
                        elif memory == 9:
                            print("r", end="")
                        elif memory == 8:
                            print("s", end="")
                        elif memory == 7:
                            print("t", end="")
                        elif memory == 6:
                            print("u", end="")
                        elif memory == 5:
                            print("v", end="")
                        elif memory == 4:
                            print("w", end="")
                        elif memory == 3:
                            print("x", end="")
                        elif memory == 2:
                            print("y", end="")
                        elif memory == 1:
                            print("z", end="")
                        elif memory == 27:
                            print(" ", end="")
                        elif memory == 28:
                            print("\n", end="")
                        elif memory == 29:
                            print("!", end="")
                        elif memory == 30:
                            print("?", end="")
                        elif memory == 31:
                            print(",", end="")
                        elif memory == 32:
                            print(".", end="")
                        elif memory == 33:
                            print("+", end="")
                        elif memory == 34:
                            print("-", end="")
                        elif memory == 35:
                            print("*", end="")
                        elif memory == 36:
                            print("&", end="")
                        elif memory == 37:
                            print("{", end="")
                        elif memory == 38:
                            print("}", end="")
                        elif memory == 39:
                            print("%", end="")
                        elif memory == 40:
                            print("[", end="")
                        elif memory == 41:
                            print("]", end="")
                        elif memory == 42:
                            print("=", end="")
                        elif memory == 43:
                            print(";", end="")
                        elif memory == 44:
                            print(":", end="")
                        elif memory == 45:
                            print("#", end="")
                        elif memory == 46:
                            print("$", end="")
                        elif memory == 47:
                            print("\"", end="")
                        elif memory == 48:
                            print("'", end="")
                        elif memory == 49:
                            print("~", end="")
                        elif memory == 50:
                            print("0", end="")
                        elif memory == 51:
                            print("1", end="")
                        elif memory == 52:
                            print("2", end="")
                        elif memory == 53:
                            print("3", end="")
                        elif memory == 54:
                            print("4", end="")
                        elif memory == 55:
                            print("5", end="")
                        elif memory == 56:
                            print("6", end="")
                        elif memory == 57:
                            print("7", end="")
                        elif memory == 58:
                            print("8", end="")
                        elif memory == 59:
                            print("9", end="")
                        elif memory == 60:
                            print(">", end="")
                        elif memory == 61:
                            print("<", end="")
                    elif token == "%":
                        print(memory)
        except IndexError:
            print("", end="")

if __name__ == "__main__":
    if len(sys.argv) == 1:
        print(f"Usage: {sys.argv[0]} <file>")
    else:
        if sys.argv[1].endswith(".lemem"):
            with open(sys.argv[1], "r") as f:
                interpret(f.read())
        else:
            print("Use .lemem file extension")
