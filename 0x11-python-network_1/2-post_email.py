#!/usr/bin/python3
"""
Takes in a URL and an email, sends a POST request to the passed URL with the
email as a parameter, and displays the body of the response (decoded in utf-8)
"""
import sys
import urllib.parse
import urllib.request


if __name__ == "__main__":
    url = sys.argv[1]
    dic = {"email": sys.argv[2]}
    qstring = urllib.parse.urlencode(dic).encode("ascii")
    requrl = urllib.request.Request(url, data=qstring)

    with urllib.request.urlopen(requrl) as response:
        print(response.read().decode("utf-8"))
