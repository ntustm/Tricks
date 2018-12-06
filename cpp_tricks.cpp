
// namespace 
#ifdef __cpp_plus__
#define NS_START(na) namespace na {
#define NS_END  }
#define NS_USE(na) na::

#else
#define NS_START(na) 
#define NS_END  
#define NS_USE(na) 

#endif

