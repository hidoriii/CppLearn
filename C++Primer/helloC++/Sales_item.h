class Sale_item
{
    int isbn; // 书本编号

    Sale_item();

    Sale_item(int isbn)
    {
        this->isbn = isbn;
    }

public:
    int isbn()
    {
        return isbn;
    }
};

Sale_item::Sale_item()
{
}