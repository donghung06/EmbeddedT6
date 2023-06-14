<h1> EmbeddedT6 </h1>

<h2><b>Macro & Function</b></h2>

<h4><b>Macro:</b></h4>

- Chuyển văn bản code đầu vào nào đó thành văn bản code đầu ra theo ý mình muốn.
- Macro xảy ra ở quá trình tiền xử lý (Preprocessor)
- Lệnh #define có thể được sử dụng để tạo Marco

Lưu ý đây là đây là các chỉ thị tiền xử lý (không phải câu lệnh) nên không có dòng nào kết thúc bằng dấu chấm phẩy

VD: 	`#define tong(a, b) a+b`

	 #define CREATE_FUNC(name_func, cmd)   \
	 void name_func(){                     \
	      printf("%s\n", (char*)cmd);      \
		    
	 }

<h4><b>Function:</b></h4>

- Hàm có chức năng giải quyết một số vấn đề chuyên biệt cho chương trình chính. Hàm được gọi nhiều lần với các tham số khác nhau.
- Hàm là một đơn vị độc lập của chương trình, không cho phép xây dựng một hàm bên trong một hàm khác.
- Program counter (bộ đếm): là 1 thanh ghi quản lý bộ nhớ của lệnh sẽ được thực thi tiếp theo. CPU đọc địa chỉ của lệnh sẽ được thực thi tiếp theo được lưu trữ trong bộ đếm chương trình và thực thi nó theo trình tự.
- Stack pointer: lưu địa chỉ của item gần đây nhất được đặt trên ngăn xếp. (lưu địa chỉ ngẫu nhiên).



<h2><b>Compiler</b></h2>

Compiler là quá trình chuyển đổi từ ngôn ngữ bậc cao sang ngôn ngữ đích (ngôn ngữ máy) để máy tính có thể hiểu và thực thi. 

![image](https://github.com/donghung06/EmbeddedT6/assets/105506733/60f205d5-713e-479c-9482-4cfa3531eeff)

Quá trình được chia ra làm 4 giai đoạn chính:
<h4><b>Preprocessing (Tiền xử lý):</b></h4>

  -	Bộ tiền xử lý có nhiệm vụ thực hiện:  xóa bỏ các chú thích, comments; nhận mã nguồn; xử lý các chỉ thị tiền xử lý (bắt đầu bằng # như #include, #defỉne).
  
  -	Cú pháp thực hiện: `gcc -E main.c -o main.i`
  
Lưu ý: Trong 1 dự án thì lập trình viên có thể sử dụng nhiều thư viện khác nhau và khi họ muốn sử dụng thư viện nào thì họ #include thư viện đó vào file main.c . Khi Run thì chương trình sẽ chạy file main.c, sau khi quá trình tiền xử lý, ta sẽ có file main.i. File main.i sẽ gộp cả file main.c cùng với các thư viện mà lập trình viện đã #include vào file main.c. Từ đây, một số vấn đề có thể xảy ra ví dụ như việc trùng tên Biến toàn cục (Global variables) có thể sẽ khiến chương trình gặp lỗi khi biên dịch.

<h4><b>Compiler (Biên dịch) :</b></h4>

  -	Bước biên dịch được thực hiện trên mỗi output của bộ tiền xử lý. 
  
  -	Giai đoạn này sẽ chuyển từ ngôn ngữ C (file main.i) thành ngôn ngữ máy (file main.s).
  
  -	Cú pháp thực hiện: `gcc main.i -S -o main.s`
  
<h4><b>Assembler :</b></h4>

  -	Giai đoạn này sẽ dịch chương trình thành mã máy 0,1. 
 
  -	File main.s sẽ được chuyển thành file main.o
 
  -	Cú pháp thực hiện : `gcc -C main.s -o main.o`

<h4><b>Linker (Trình liên kết):</b></h4>
Giai đoạn này sẽ tạo thành chương trình đích duy nhất cảu quá trình biên dịch. Đầu ra có thể là thư viện hoặc file thực thi (executable file).

<h2><b>Pointer</b></h2>

<h4><b>Biến con trỏ (Pointer):</b></h4>


- Biến con trỏ: là các biến đặc biệt dùng để lưu trữ địa chỉ.	int *ptr = địa chỉ (&a)

- Khai báo biến con trỏ:   `Kiểu dữ liệu + Ký tự "*" + tên biến` (VD: `int *ptr`, `double *mm`)

- Con trỏ interger sẽ lưu được địa chỉ mà giá trị của địa chỉ đó có kiểu dữ liệu là interger

- Con trỏ void là 1 con trỏ đặc biệt. Nó có thể trỏ đến địa chỉ của tất cả các đối tượng

- Khi muốn đọc con trỏ void ta cần phải ép kiểu dữ liệu cho con trỏ. Cú pháp:  `(Kiểu dữ liệu + Ký tự "*") + Tên biến. VD: (int*)ptr`

Lưu ý: Khi khai báo con trỏ, ta phải khai báo địa chỉ của con trỏ. Nếu không con trỏ sẽ trỏ đến những địa chỉ bất kỳ khác có sử dụng trong chương trình. Điều này có thể gây lỗi khi chạy chương trình. Vì vậy khi khai báo con trỏ mà chưa sử dụng, ta phải gán con trỏ bằng con trỏ NULL. Con trỏ NULL là con trỏ đặc biệt, nó có giá trị và địa chỉ = 0.

<h4><b>Con trỏ hàm (Function Pointers):</b></h4>

- Con trỏ hàm trong C là con trỏ lưu trữ địa chỉ của một hàm. Ta có thể sử dụng nó để truy cập vào địa chỉ của hàm, cũng như thực thi các xử lý bên trong hàm đó.

- Cú pháp khai báo con trỏ hàm: `Kiểu dữ liệu + (Ký tự "*" + Tên con trỏ) + (para_type_1, para_type_2, para_type_3,...)`. Với các para_type_ là kiểu của các đối số (parameter) được truyền vào hàm. Lưu ý kiểu con trỏ phải giống với kiểu giá trị trả về của hàm mà nó gán địa chỉ.

- Cú pháp để gán địa chỉ của hàm cho con trỏ hàm: Tên con trỏ hàm = tên hàm (function) cần gán địa chỉ.



