#include <iostream>
#include <string>
#include <fstream>

std::string make_file_name(std::string str)
{
    for(int i = 0; i < (int)str.length(); i++)
        str[i] = std::toupper(str[i]);
    str += ".replace";
    return (str);
}

std::string zamena_teksta(std::string str, std::string s1, std::string s2)
{
    for (int i = 0; i < (int)str.length(); i++)
    {
        int j = 0;
        while (str[i + j] == s1[j] && j < (int)str.length())
            j++;
        if (s1[j] == '\0')
        {
            int k = 0;
            while(s2[k]!='\0')
            {
                str[i + k] = s2[k];
                k++;
            }
            i += ((int)s1.length() - 1);
        }
        
    }
    return(str);
}


int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error: incorrect number of parameters." << std::endl;
        return (0);
    }
    std::string old_file_name = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if (s1.length() != s2.length())
    {
        std::cout << "Error: line length if different" << std::endl;
        return (0);
    }
    std::string file_name = make_file_name(old_file_name);
    std::string str;

    std::ifstream fin;
    fin.open(old_file_name);
    std::ofstream fout;
    fout.open(file_name,std::ofstream::app);
    if (!fin.is_open())
    {
        std::cout << "Error: file opening error." << std::endl;
        return (0);
    }
    if (!fout.is_open())
    {
        std::cout << "Error: file creating error." << std::endl;
        return (0);
    }
    while (!fin.eof())
    {
        str = "";
        std::getline(fin, str);
        fout << zamena_teksta(str, s1, s2) << std::endl;
    }
    fin.close();
    return (0);


}