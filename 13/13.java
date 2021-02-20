class Solution {

    private static Map<Character, Integer> ranks = new HashMap<>() {{
        put('I', 1);
        put('V', 5);
        put('X', 10);
        put('L', 50);
        put('C', 100);
        put('D', 500);
        put('M', 1000);
    }};

    public int romanToInt(String s) {
        char[] arr = s.toCharArray();
        int res = 0;
        byte size = (byte) s.length();
        for (int i = 0; i < size; i++) {
            if (i < size - 1) {
                if (ranks.get(arr[i]) >= ranks.get(arr[i + 1])) {
                    res += ranks.get(arr[i]);
                } else {
                    res += ranks.get(arr[i + 1]) - ranks.get(arr[i]);
                    i++;
                }
            } else {
                res += ranks.get(arr[i]);
            }
        }
        return res;

    }
}
