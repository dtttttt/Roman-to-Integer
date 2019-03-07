class Solution {
public:
    int romanToInt(string s) {
        std::map<char, int> Pair;
	Pair.insert(std::pair<char, int>('I', 1));
	Pair['V'] = 5;
	Pair['X'] = 10;
	Pair['L'] =50;
	Pair['C'] = 100;
	Pair['D'] = 500;
	Pair['M'] = 1000;
	int Resu = Pair[s.back()];
	int lastBit = 0;
	int LastSecBit = 0;
	int Length = s.length();
	if (Length==1)
	{
		return Pair[s.back()];
	} 
	else
	{
		for (int i = 0; i < Length - 1; i++)
		{
			lastBit = Pair[s.back()];
			LastSecBit = Pair[ s.at(s.length() - 2)];
			Resu = (LastSecBit >= lastBit ? (Resu + LastSecBit) : (Resu - LastSecBit));
			s.pop_back();
		}
	}
	
	return Resu;
    }
};