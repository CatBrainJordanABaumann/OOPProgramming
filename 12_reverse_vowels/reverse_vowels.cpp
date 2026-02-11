#include <iostream>
#include <string>

void reverse(std::string& str);
void reverseVowels(std::string& str);

int main(void) {
    std::string s("01 - 40\n:sArutciL\n)2.11 retpihC( sceseB ratneoP ,)7.21 ,6.21(\
sritcoV ,)7 ratpehC( syurri ,)6-ritpohC( snuetcneF ,)5-ratpahC( spaeL ,)4-\
ritpehC( sgnertS dne sratcurihC\n:sratpohC kiubtxeT\n)doksa ab llaw snuetsioq \
01( .skrim 01 :skreM lateT\n.setonom 02 raf ,sselC \
gnarad ,)yedsandiW( 6202/11/20 :ameT & otoD\n.ssalc yedsundiW roa ne 2 zAaQ aveh \
et gnoog ire aw ,ridnamer kceuq e");
    reverseVowels(s);
    reverse(s);
    std::cout << s << std::endl;
    return 0;
}

void reverse(std::string& str) {
    // Let's ignore that I'm pretty sure that a function exists for this in std
    for (int i = 0; i < str.size() / 2; i++)
        std::swap(str[i], str[str.size() - i - 1]);
}

constexpr bool Y_IS_VOWEL = false;

bool isVowel(char chr) {
    chr = tolower(chr);
    return chr == 'a' || chr == 'e'
        || chr == 'i' || chr == 'o'
        || chr == 'u'
        || (chr == 'y' && Y_IS_VOWEL);
}

int nextVowelHelper(int currentIndex, int offset, const std::string& str) {
    do currentIndex += offset;
    while (!isVowel(str[currentIndex])
        && currentIndex >= 0 && currentIndex < str.size());

    return currentIndex;
}

void reverseVowels(std::string& str) {
    for (int left_index = nextVowelHelper(-1, 1, str), right_index = nextVowelHelper(str.size(), -1, str); left_index < right_index;
        left_index = nextVowelHelper(left_index, 1, str),
        right_index = nextVowelHelper(right_index, -1, str))
        std::swap(str[left_index], str[right_index]);
}