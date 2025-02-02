



#ifndef STRPRC_INCLUDED
#define STRPRC_INCLUDED



// this to replace a particular range in a string with another string in all text
/*
 *
 */


int replaceAll(std::string& str, const std::string& from, const std::string& to,std::size_t start=0)
{
    if(from.empty())
        return -1;

    std::size_t start_pos = start;
    while((start_pos = str.find(from, start_pos)) != std::string::npos)
    {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); // In case 'to' contains 'from', like replacing 'x' with 'yx'
    }
    return start_pos;
}


#endif
