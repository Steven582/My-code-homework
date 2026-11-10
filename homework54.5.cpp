#include<iostream>
#include<cstring>

using namespace std;

bool isDot(char *a);
bool isUnd(char *a);
bool isAlph(char *a);
bool isNum(char *a);
bool isAt(char *a);

int beforeat(char *a,char *start){
	int sum = 0;
    char *b = a - 1;          // 从 @ 前面一个字符开始
    
                                      // 向左走，只要没走到开头，且不是 '.' 和 '@'，就继续
    while (b >= start && !isDot(b) && !isAt(b)) {
        if (isAlph(b)) {
            sum++;                       // 遇到字母，合法前缀数量 +1
        }
        b--;
    }
    return sum;     
}

int afterat(char *a){
	char *b = a + 1;
    char *lastDot = nullptr;          // 记录最后一个点的位置
    
                                           // 向右走找点，直到遇到 '\0' 或者 其 他非法中断符（如 @）
    while (*b != '\0' && !isAt(b)) {
        if (isDot(b)) {
            lastDot = b;
        } else if (!isAlph(b) && !isNum(b) && !isUnd(b)) {
            break;                             // 遇到奇怪的符号，后 缀 直接中断
        }
        b++;
    }
    
                                 // 如果没有找到点，或者点后面没东西，说明后缀不合法
    if (lastDot == nullptr) return 0;
    
    // 从最后一个点之后开始统计字母数量
    int sum = 0;
    char *p = lastDot + 1;
    while (isAlph(p)) {
        sum++;
        p++;
    }
    return sum;
}


bool isUnd(char *a){return *a == '_';}

bool isDot(char *a){return *a == '.';}

bool isNum(char *a){return *a >= 48 && *a <= 57;}

bool isAlph(char *a){return *a >= 97 && *a <= 122;}

bool isAt(char *a){return *a == '@';}


int main()
{
	char em[200];
	cin>>em;
	
	int n = strlen(em);
	int type = 0;
	
	for (int i=0;i<n;i++){
		if ( isAt(&em[i]) ){
			type += beforeat(&em[i],&em[0]) * afterat(&em[i]);
		}
	}
	
	cout<<type;
	
}
