def decrypt(color_codes):
    """Returns the decrypted message.

    Parameters
    ----------
    color_codes : list
        List of different color codes.

    Returns
    ------
    str
        The decrypted message.
    """
    result = ''
    for color in color_codes:
        c1, c2, c3 = color[:2], color[2:4], color[4:]
        result += chr(int(c1, 16)) + chr(int(c2, 16)) + chr(int(c3, 16))
    return result


def main():
    for _ in range(int(input())):
        input()
        color_codes = input().split()
        print(decrypt(color_codes))


if __name__ == "__main__":
    main()
