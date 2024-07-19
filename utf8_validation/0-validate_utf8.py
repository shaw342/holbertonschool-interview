#!/usr/bin/python3
import codecs


def validUTF8(data):

    for num in data:
        if num < 0 or num > 255:
            return False
    try:
        codecs.decode(bytes(data),"utf-8")
        return True
    except UnicodeDecodeError:
        return False
