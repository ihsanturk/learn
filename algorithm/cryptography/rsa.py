from rsa import *

(pub_key, priv_key) = key.newKeys(1)
message = b'hello'
crypto = encrypt(message, pub_key)
print(crypto)
