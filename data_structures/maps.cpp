/*
    Load Factor: Amount of data points vs the amount of storage
        data.len/storage.capacity
        Data is stored in a key, value pair:
            Key -> Hashable value and used for data lookup
            Value -> Value associated with a certain key
            Collision -> When two keys produce the same hash value
                Can be solved by using a linked list or a balanced tree
            Hash Function:
                    Needs to be consistent in hashing.
                    Custom hash functions are great when haviing insights into the keys


            Python Dictionaries are implemented using hash maps.
            Worst case: Searching O(n)
            Average case: O(1) 

            Direct addressing:
                    Must be able to allcoate an array that contains a position for every single key.

                    Number of keys stored is small relative to the total number of possible keys, hash tables become an effective alternative to directly addressing an array. Since hash tables uses an array of size proportional to the number of keys actually stored
            */



void createHash(){


}

struct HashTable {

    
}