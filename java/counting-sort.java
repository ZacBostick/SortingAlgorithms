public class CountingSort {
    public static void main(String[] args) {
        int[] arr = {5, 2, 9, 1, 5, 6};
        int[] sorted = countingSort(arr);
        for (int i : sorted) {
            System.out.print(i + " ");
        }
    }

    public static int[] countingSort(int[] arr) {
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;

        for(int num : arr) {
            if(num > max) max = num;
            if(num < min) min = num;
        }

        int range = max - min + 1;
        int[] count = new int[range];
        int[] output = new int[arr.length];

        for(int num : arr) {
            count[num - min]++;
        }

        for(int i = 1; i < count.length; i++) {
            count[i] += count[i-1];
        }

        for(int i = arr.length - 1; i >= 0; i--) {
            output[count[arr[i] - min] - 1] = arr[i];
            count[arr[i] - min]--;
        }

        return output;
    }
}
