def input_values(dict):
    while True:
        value = int(input("Entrez une nouvelle valeur :"))
        if value == 1000 :
            break
        elif value > 0:
            dict["valeurs positives"].append(value)
        elif value < 0:
            dict["valeurs négatives"].append(value)
        else:
            print("Valeur nulle saisie.")
        sort_while_inputing(dict)
            

def sort_while_inputing(dict):
    dict["valeurs positives"].sort()
    dict["valeurs négatives"].sort()
    print(dict)

dictionnaire = {
    "valeurs positives": [],
    "valeurs négatives": []
}
