#include <stdio.h>                                                      
#include <stdbool.h>                                                    
                                                                        
int print_addr_value(unsigned char *p, size_t len){                     
    /*
     * print addr and value
     */
    size_t i;                                                           
    //printf(" %.2x", p);                                               
    for(i=0;i<len;i++){                                                 
        printf("%.2x ", &p[i]);                                         
        printf("%.2x ", p[i]);                                          
    }                                                                   
    printf("\n");                                                       
    return (int)p[0];                                                   
}                                                                       
                                                                        
void small2hex(unsigned char *x, size_t len){                           
    /*
     *print small to hex
     */
    size_t i = len;                                                     
    printf("small to hex = ");                                          
    do{                                                                 
        i--;                                                            
        printf("%.2x ", &x[i]);                                         
        printf("%.2x ", x[i]);                                          
    }while(i != 0);                                                     
    printf("\n");                                                       
}                                                                       
                                                                        
bool big_or_small(){                                                    
    /*
     * return bool
     * if small return 1 
     */
    int x = 12345;                                                     
    //print_addr_value(&x, sizeof(x));                                  
    int start = print_addr_value((unsigned char *)&x, sizeof(x));       
    bool is_small = start == 0x39;                                      
    if(is_small){                                                       
        small2hex((unsigned char *)&x, sizeof(x));                      
    }                                                                   
    printf("origin int = %d\n", x);
    printf("sizeof = %d \n\n-------------------------\n", sizeof(x));                
    return is_small;                                                                 
}                                                                                    
                                                                                     
void main(){                                                                         
    short num = 15;                                                                 
    bool is_small = big_or_small();                                                  
    if(is_small){                                                                    
        small2hex((unsigned char *)&num, sizeof(num));                              
    }else{                                                                           
        print_addr_value((unsigned char *)&num, sizeof(num));                        
    }                                                                                
    printf("%f\n", num);
}
