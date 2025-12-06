public class SortColors // change the class name to solution {
    public void sortColors(int[] nums) {
        quicksort(nums, 0, nums.length-1);
    }

    public void quicksort(int[] arr, int left, int right){
        if(left < right){
            int pi = partition(arr, left, right);
            quicksort(arr, left, pi-1);
            quicksort(arr, pi+1, right);
        }
    }

    public int partition(int[] arr, int left, int right){
        int pivot = arr[right];

        int i = left - 1;

        for(int j = left; j < right; j++){
            if(arr[j] <= pivot){
                i = i + 1;

                int aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
            }

        }
        int aux = arr[i+1];
        arr[i+1] = arr[right];
        arr[right] = aux;

        return i+1;
    }
}
