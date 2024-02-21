verbe = input (print ("Entrez un verbe du premier groupe"))
if verbe.endswith("ger"):
    print ("Le verbe", verbe, "est du premier groupe")
    print ("Sa conjugaison au présent simple est :")
    present = {
        "je": verbe[:-2] + "e",
        "tu": verbe[:-2] + "es",
        "il/elle": verbe[:-2] + "e",
        "nous": verbe[:-2] + "ons",
        "vous": verbe[:-2] + "ez",
        "ils/elles": verbe[:-2] + "ent"
    }
    for pronom, conjugaison in present.items():
        print (pronom, conjugaison)
elif verbe.endswith("er"):
    print ("Le verbe", verbe, "est du premier groupe")
    print ("Sa conjugaison au présent simple est :")
    present = {
        "je": verbe[:-3] + "ge",
        "tu": verbe[:-3] + "ges",
        "il/elle": verbe[:-3] + "ge",
        "nous": verbe[:-3] + "geons",
        "vous": verbe[:-3] + "gez",
        "ils/elles": verbe[:-3] + "gent"
    }
    for pronom, conjugaison in present.items():
        print (pronom, conjugaison)
else:
    print ("Le verbe", verbe, "n'est pas du premier groupe")