std::vector<int> vec; for (int i = 0; i < 10; ++i) { vec.push_back(i); } for (int i = 0; i < vec.size(); ++i) { int val = vec[i]; if (val == 5) { vec.erase(vec.begin() + i); } }