function sortColors(nums: number[]): void {
    quicksort(nums, 0, nums.length-1)
};

function quicksort(arr: number[], left: number, right: number): void{
    if(left < right){
        let pi = partition(arr, left, right)
        quicksort(arr, left, pi-1)
        quicksort(arr, pi+1, right)
    }
}

function partition(arr: number[], left: number, right: number): number{
    let pivot: number = arr[right]

    let i: number = left - 1

    for(let j: number = left; j < right; j++){
        if(arr[j] <= pivot){
            i++
            let aux: number = arr[i]
            arr[i] = arr[j]
            arr[j] = aux
        }
    }

    let aux: number = arr[i+1]
    arr[i+1] = arr[right]
    arr[right] = aux

    return i+1
}
