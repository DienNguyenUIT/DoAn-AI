#include<Windows.h>
void TextColor(int x)	// hàm chỉnh màu để xài tí xài cho text
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
}
// VD như gọi hàm Text(12) thì cứ nghĩa là từ chỗ gọi hàm trở đi toàn bộ text chuyển sang màu có mã là 12 ( màu đỏ)