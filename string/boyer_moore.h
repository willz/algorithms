#ifndef INCNLUDED_BOYER_MOORE_H
#define INCNLUDED_BOYER_MOORE_H

#include <unordered_map>

template<class RandomAccessIterator>
typename std::enable_if<
	std::is_same<
		typename std::iterator_traits<RandomAccessIterator>::iterator_category,
		std::random_access_iterator_tag>::value,
	
class BoyerMoore {
public:
	BoyerMoore(RandomAccessIterator first, RandomAccessIterator last) {

	}

private:
	void BuildSkipTable();
	void BuildSuffixTable();
	std::unordered_map<xx, int> skip_table_;
	std::vector<int> suffix_table_;
};


#endif