//#include<iostream>
//#include"./Exper3.1.cpp"
//
//class InternetURL {
//private:
//	MyString _url;
//	MyString domain, domain_country, domain_type;
//public:
//	InternetURL() = default;
//	// =运算符会构造MyString对象
//	InternetURL(const char *url) {
//		_url = url;
//	}
//
//	//截取'/'之前的内容,否则直接返回
//	MyString GetDomain()const {
//		if (_url.Find('/'))
//			return _url.Mid(1, _url.Find('/') - 1);
//		else return _url;
//	}
//
//	//根据'.'逐步截取
//	MyString GetDomainCountry()const {
//		MyString domain = this->GetDomain();//get domain
//		MyString tmp = domain.Mid(domain.Find('.') + 1,
//			domain.getLen() - domain.Find('.'));//e.g:bit.edu.cn
//		tmp = tmp.Mid(tmp.Find('.') + 1,
//			tmp.getLen() - tmp.Find('.'));//e.g:edu.cn
//
//		//有没有DomainType
//		if (tmp.Find('.'))
//			return tmp.Mid(tmp.Find('.') + 1, tmp.getLen());
//		else return tmp;
//	}
//
//	//根据'.'逐步截取
//	MyString GetDomainType()const {
//		MyString domain = this->GetDomain();
//		MyString tmp = domain.Mid(domain.Find('.') + 1,
//			domain.getLen() - domain.Find('.'));//e.g:bit.edu.cn
//		tmp = tmp.Mid(tmp.Find('.') + 1,
//			tmp.getLen() - tmp.Find('.'));//e.g:edu.cn
//
//		//有没有DomainType
//		if (tmp.Find('.'))
//			return tmp.Mid(1, tmp.Find('.') - 1);
//		else return "No domain-type";
//	}
//};
//
//int main()
//{
//	InternetURL URL("www.bit.edu.cn/jwc/080329.html"), s2;
//	//InternetURL URL("www.baidu.com"), s2;
//
//	std::cout << URL.GetDomain() << std::endl;         // The result is:  www.bit.edu.cn
//
//	std::cout << URL.GetDomainCountry() << std::endl;  // The result is:  cn
//
//	std::cout << URL.GetDomainType() << std::endl;     // The result is:  edu
//
//	return 0;
//}