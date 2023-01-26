#include <iostream>

using namespace std;

/*
DrawingTools
--
+kind: string
+price: float
+manufacturer: string
+numberInTheBox: int
--
+DrawingTools(kind: string, price: float, manufacturer: string, numberInTheBox: int)
+info():void
+vat():float
*/

class DrawingTools
{
public:
    string kind;
    float price;
    string manufacturer;
    int numberInTheBox;

    DrawingTools(string kindC, float priceC, string manufacturerC, int numberInTheBoxC)
    {
        kind = kindC;
        price = priceC;
        manufacturer = manufacturerC;
        numberInTheBox = numberInTheBoxC;
    }

    void info()
    {
        cout<<"Kind: "<<kind<<".\n";
        cout<<"Manufacturer: "<<manufacturer<<".\n";
        cout<<"In one box we have: "<<numberInTheBox<<" pieces.\n";
        cout<<"Price for the box: "<<price<<".\n";
    }

    float vat()
    {
        return 0.23 * price;
    }
    /*
    5% - 0.05
    54% - 0.54
    */
};

int main()
{
    DrawingTools pencils("coloured pencils", 20.22, "ABC", 10);
    pencils.info();
    cout<<"VAT 23% value: "<<pencils.vat()<<".\n";
    DrawingTools charcoals("Pressed Charcoal", 42.12, "Wooden Factory", 6);
    cout<<"\n";
    charcoals.info();
    cout<<"VAT 23% value: "<<charcoals.vat()<<".\n";
    return 0;
}
