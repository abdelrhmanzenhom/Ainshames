#include "Search.h"
#include <fstream>
Search::Search()
{

}
void  Search::search(string Ustr) {

    Product b;

    for (int i = 1; i <= 6; i++) {
        if (i == 1) {
            fstream f("electro", ios::in);

            string str;
            int iddd;
            string abdo;
            string fo;
            int autid;

            while (f >> str >> abdo >> iddd >> fo >> autid) {
                int counter = 0;
                string strr = str.substr(0, Ustr.size());
                for (int i = 0; i < Ustr.size(); i++) {

                    if (Ustr[i] == str[i]) {
                        counter++;
                    }
                }


                if (counter == Ustr.size()) {

                    b.namee = str;
                    b.price = abdo;
                    b.quantity = iddd;
                    b.pic = fo;
                    b.id = autid;
                    S.push_back(b);
                }
            }
        }
        else if (i == 2) {
            fstream f("kitchen", ios::in);

            string str;
            int iddd;
            string abdo;
            string fo;
            int autid;

            while (f >> str >> abdo >> iddd >> fo >> autid) {
                int counter = 0;
                string strr = str.substr(0, Ustr.size());
                for (int i = 0; i < Ustr.size(); i++) {

                    if (Ustr[i] == str[i]) {
                        counter++;
                    }
                }
                if (counter == Ustr.size()) {

                    b.namee = str;
                    b.price = abdo;
                    b.quantity = iddd;
                    b.pic = fo;
                    b.id = autid;
                    S.push_back(b);
                }
            }

        }
        else if (i == 3) {
            fstream f("sports", ios::in);

            string str;
            int iddd;
            string abdo;
            string fo;
            int autid;

            while (f >> str >> abdo >> iddd >> fo >> autid) {
                int counter = 0;
                string strr = str.substr(0, Ustr.size());
                for (int i = 0; i < Ustr.size(); i++) {

                    if (Ustr[i] == str[i]) {
                        counter++;
                    }
                }

                if (counter == Ustr.size()) {

                    b.namee = str;
                    b.price = abdo;
                    b.quantity = iddd;
                    b.pic = fo;
                    b.id = autid;
                    S.push_back(b);
                }

            }
        }
        else if (i == 4) {
            fstream f("clothes", ios::in);

            string str;
            int iddd;
            string abdo;
            string fo;
            int autid;

            while (f >> str >> abdo >> iddd >> fo >> autid) {
                int counter = 0;
                string strr = str.substr(0, Ustr.size());
                for (int i = 0; i < Ustr.size(); i++) {

                    if (Ustr[i] == str[i]) {
                        counter++;
                    }
                }


                if (counter == Ustr.size()) {

                    b.namee = str;
                    b.price = abdo;
                    b.quantity = iddd;
                    b.pic = fo;
                    b.id = autid;
                    S.push_back(b);
                }
            }
        }
        else if (i == 5) {
            fstream f("food", ios::in);

            string str;
            int iddd;
            string abdo;
            string fo;
            int autid;

            while (f >> str >> abdo >> iddd >> fo >> autid) {
                int counter = 0;
                string strr = str.substr(0, Ustr.size());
                for (int i = 0; i < Ustr.size(); i++) {

                    if (Ustr[i] == str[i]) {
                        counter++;
                    }
                }


                if (counter == Ustr.size()) {

                    b.namee = str;
                    b.price = abdo;
                    b.quantity = iddd;
                    b.pic = fo;
                    b.id = autid;
                    S.push_back(b);
                }
            }
        }
        else if (i == 6) {
            fstream f("supermarket", ios::in);

            string str;
            int iddd;
            string abdo;
            string fo;
            int autid;

            while (f >> str >> abdo >> iddd >> fo >> autid) {
                int counter = 0;
                string strr = str.substr(0, Ustr.size());
                for (int i = 0; i < Ustr.size(); i++) {

                    if (Ustr[i] == str[i]) {
                        counter++;
                    }
                }


                if (counter == Ustr.size()) {

                    b.namee = str;
                    b.price = abdo;
                    b.quantity = iddd;
                    b.pic = fo;
                    b.id = autid;
                    S.push_back(b);
                }
            }
        }
        else {
            break;
        }
    }
}
int Product::product_id(int flag2) {
    int hh;
    int idd = 0;
    vector<int>s;
    switch (flag2)
    {
    case 1: {fstream f("electro", ios::in);
        string str, abdo;
        int iddd;
        string fo;

        while (f >> str >> abdo >> hh >> fo >> iddd) {

            s.push_back(iddd);

        }

        idd = s.size() + 1 + (flag2 * 100000);
        return idd;
        break; }
    case 2: {fstream f("food", ios::in);
        string str, abdo;
        int iddd;
        string fo;

        while (f >> str >> abdo >> hh >> fo >> iddd) {

            s.push_back(iddd);

        }

        idd = s.size() + 1 + (flag2 * 100000);
        return idd;
        break; }
    case 3: {fstream f("kitchen", ios::in);
        string str, abdo;
        int iddd;
        string fo;

        while (f >> str >> abdo >> hh >> fo >> iddd) {

            s.push_back(iddd);

        }

        idd = s.size() + 1 + (flag2 * 100000);
        return idd;
        break; }
    case 4: {fstream f("sports", ios::in);
        string str, abdo;
        int iddd;
        string fo;

        while (f >> str >> abdo >> hh >> fo >> iddd) {

            s.push_back(iddd);

        }

        idd = s.size() + 1 + (flag2 * 100000);
        return idd;
        break; }
    case 5: {fstream f("clothes", ios::in);
        string str, abdo;
        int iddd;
        string fo;

        while (f >> str >> abdo >> iddd >> fo) {

            s.push_back(iddd);

        }

        idd = s.size() + 1 + (flag2 * 100000);
        return idd;
        break; }
    case 6: {fstream f("supermarket", ios::in);
        string str, abdo;
        int iddd;
        string fo;

        while (f >> str >> abdo >> hh >> fo >> iddd) {

            s.push_back(iddd);

        }

        idd = s.size() + 1 + (flag2 * 100000);
        return idd;
        break; }

    }


}
