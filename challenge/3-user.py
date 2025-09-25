#!/usr/bin/env python3
import hashlib
import os


class User:
    """Simple user with password hashing and validation."""

    def __init__(self):
        self.__password_hash = None
        self.__password_salt = None

    def set_password(self, password):
        if not isinstance(password, str) or password == "":
            self.__password_hash = None
            self.__password_salt = None
            return
        salt = os.urandom(16)
        self.__password_salt = salt
        self.__password_hash = hashlib.sha256(salt + password.encode("utf-8")).hexdigest()

    def is_valid_password(self, password):
        if self.__password_hash is None or self.__password_salt is None:
            return False
        if not isinstance(password, str):
            return False
        computed = hashlib.sha256(self.__password_salt + password.encode("utf-8")).hexdigest()
        return computed == self.__password_hash


if __name__ == "__main__":
    user = User()
    user.set_password("Holberton")
    assert user.is_valid_password("Holberton")
    assert not user.is_valid_password("Holberton!")


