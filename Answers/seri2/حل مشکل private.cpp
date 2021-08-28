class Date {
public:
    Date(int d, int m, int y);
    void set_date(int d, int m, int y);
    void print_date();

    int get_day() { return day; }
    int get_month() { return month; }
    int get_year() { return year; }
private:
    int day;
    int month;
    int year;