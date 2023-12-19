#!/usr/bin/python3
def list_division(my_list_1, my_list_2, list_length):
    store = []
    for i in range(list_length):
        div = 0
        try:
            div = my_list_1[i] / my_list_2[i]
        except ZeroDivisionError:
            print("division by 0")
        except TypeError:
            print("wrong type")
        except IndexError:
            print("out of range")
        finally:
            store.append(div)
    return (store)
