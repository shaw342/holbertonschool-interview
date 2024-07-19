#!/usr/bin/python3
"""
ValidUTF8 Module
"""
import codecs


def validUTF8(data):
    """
    Determine if a given data set represent a valid UTF-8 encoding
    """
    for num in data:
        if num < 0 or num > 255:
            return False
    try:
        codecs.decode(bytes(data), "utf-8")
        return True
    except UnicodeDecodeError:
        return False
