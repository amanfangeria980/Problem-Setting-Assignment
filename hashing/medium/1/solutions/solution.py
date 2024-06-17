def are_anagrams(s1, s2):
    return sorted(s1) == sorted(s2)

if __name__ == "__main__":
    s1 = input().strip()
    s2 = input().strip()
    result = are_anagrams(s1, s2)
    print(result)
