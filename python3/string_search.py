

# function for single word search
def word_search(documents, keyword):
    indices = []
    for i, doc in enumerate(documents):
        tokens = doc.split()
        normalized = [token.rstrip('.,').lower() for token in tokens]
        if keyword.lower() in normalized:
            indices.append(i)
    return indices


# function for multi word search
def multi_word_search(doc_list, keywords):
    keyword_to_indices = {} # creating an empty dictionary
    for keyword in keywords:
        keyword_to_indices[keyword] = word_search(doc_list, keyword)
    return keyword_to_indices


doc_list = ["The Learn Python Challenge Casinoxxx", "They bought a car Casino", "Casinoville"]
print(word_search(doc_list, 'casino'))


