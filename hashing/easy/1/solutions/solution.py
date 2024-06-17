def find_first_duplicate(nums):
    seen = set()
    for num in nums:
        if num in seen:
            return num
        seen.add(num)
    return -1

if __name__ == "__main__":
    n = int(input().strip())
    nums = list(map(int, input().strip().split()))
    result = find_first_duplicate(nums)
    print(result)
