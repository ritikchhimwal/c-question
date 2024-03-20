using System;

class CustomCollection
{
    private string[] items = new string[5]; // Internal array to store items

    // Indexer
    public string this[int index]
    {
        get
        {
            if (index >= 0 && index < items.Length)
            {
                return items[index];
            }
            else
            {
                throw new IndexOutOfRangeException("Index is out of range.");
            }
        }
        set
        {
            if (index >= 0 && index < items.Length)
            {
                items[index] = value;
            }
            else
            {
                throw new IndexOutOfRangeException("Index is out of range.");
            }
        }
    }
}

class Program
{
    static void Main(string[] args)
    {
        CustomCollection collection = new CustomCollection();

        // Assigning values using indexer
        collection[0] = "Item 1";
        collection[1] = "Item 2";
        collection[2] = "Item 3";

        // Accessing values using indexer
        Console.WriteLine(collection[0]);
        Console.WriteLine(collection[1]);
        Console.WriteLine(collection[2]);
    }
}
