

define dso_local i32 @main() #0 {
    %retval = alloca i32, align 4
    %a = alloca i32, align 4
    %b = alloca [3 x i32], align 4
    %var1 = alloca i32, align 4
    %var2 = alloca i32, align 4
    %var4 = alloca [3 x [2 x i32]], align 4
    %var5 = alloca float, align 4
    %res = alloca i32, align 4
    
    store i32 0, i32* %retval, align 4
    store i32 1, i32* %a, align 4
    %11 = bitcast [3 x i32]* %b to i8*
    call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 4 %11, i8* align 4 bitcast ([3 x i32]* @__const.main.b to i8*), i64 12, i1 false)
    store i32 2, i32* %var1, align 4
    store i32 2, i32* %var2, align 4
    store float 0x40019999A0000000, float* %var3, align 4
    %12 = bitcast [3 x [2 x i32]]* %var4 to i8*
    call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 16 %12, i8* align 16 bitcast ([3 x [2 x i32]]* @__const.main.var4 to i8*), i64 24, i1 false)
    %13 = load float, float* %var2, align 4
    %14 = load i32, i32* %var2, align 4
    %15 = sitofp i32 %14 to float
    %16 = fadd float %13, %15
    store float %16, float* %var5, align 4
    br label %29

29:                                               ; preds = %23
    %30 = load i32, i32* %var2, align 4
    %31 = load i32, i32* %var1, align 4
    %32 = call i32 @getnum(i32 noundef %30, i32 noundef %31)
    store i32 %32, i32* %res, align 4
    ret i32 0   
}