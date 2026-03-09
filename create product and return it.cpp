//Marshon Sellers

#include <iostream>
using namespace std;

struct Product_Record 
{
    int product_id;
    float price;
};

Product_Record create_product(int product_id, float price) 
{
    Product_Record temp_product;

    temp_product.product_id = product_id;
    temp_product.price = price;

    return temp_product;
}

int main() {
    int product_id;
    float price;

    cin >> product_id;
    cin >> price;

    Product_Record product_main = create_product(product_id, price);

    cout << "Product ID: " << product_main.product_id << endl;
    cout << "Price: " << product_main.price << endl;

    return 0;
}