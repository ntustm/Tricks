
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

#define CTW_ASSERT(EXP) if(EXP){;} else { cerr<<__FILE__<<":"<<__LINE__<<#EXP<<" no satisfied. "<<endl; exit(-1);}
