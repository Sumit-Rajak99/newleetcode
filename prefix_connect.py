prefix_count = Counter()

    for word in words:
        if len(word) >= k:
            prefix = word[:k]
            prefix_count[prefix] += 1

    ans = 0

    for count in prefix_count.values():
        if count >= 2:
            ans += 1

    return ans