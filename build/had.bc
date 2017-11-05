; ModuleID = '../../cse231-proj1/extra/benchmarks/hadamard/hadamard_test.c'
target datalayout = "e-m:e-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

%struct._IO_FILE = type { i32, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, i8*, %struct._IO_marker*, %struct._IO_FILE*, i32, i32, i64, i16, i8, [1 x i8], i8*, i64, i8*, i8*, i8*, i8*, i64, i32, [20 x i8] }
%struct._IO_marker = type { %struct._IO_marker*, %struct._IO_FILE*, i32 }

@.str = private unnamed_addr constant [8 x i8] c"out.dat\00", align 1
@.str.1 = private unnamed_addr constant [2 x i8] c"w\00", align 1
@.str.2 = private unnamed_addr constant [4 x i8] c"%d\0A\00", align 1
@.str.3 = private unnamed_addr constant [29 x i8] c"diff -w out.dat out.gold.dat\00", align 1
@stdout = external global %struct._IO_FILE*, align 8
@.str.4 = private unnamed_addr constant [47 x i8] c"*********************************************\0A\00", align 1
@.str.5 = private unnamed_addr constant [47 x i8] c"FAIL: Output DOES NOT match the golden output\0A\00", align 1
@.str.6 = private unnamed_addr constant [45 x i8] c"*******************************************\0A\00", align 1
@.str.7 = private unnamed_addr constant [45 x i8] c"PASS: The output matches the golden output!\0A\00", align 1

; Function Attrs: nounwind uwtable
define i32 @main() #0 {
  %1 = alloca i32, align 4
  %fp = alloca %struct._IO_FILE*, align 8
  %input = alloca [128 x i16], align 16
  %i = alloca i32, align 4
  %output = alloca [128 x i16], align 16
  %j = alloca i32, align 4
  store i32 0, i32* %1, align 4
  %2 = call %struct._IO_FILE* @fopen(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.1, i32 0, i32 0))
  store %struct._IO_FILE* %2, %struct._IO_FILE** %fp, align 8
  store i32 0, i32* %i, align 4
  br label %3

; <label>:3                                       ; preds = %12, %0
  %4 = load i32, i32* %i, align 4
  %5 = icmp slt i32 %4, 128
  br i1 %5, label %6, label %15

; <label>:6                                       ; preds = %3
  %7 = load i32, i32* %i, align 4
  %8 = trunc i32 %7 to i16
  %9 = load i32, i32* %i, align 4
  %10 = sext i32 %9 to i64
  %11 = getelementptr inbounds [128 x i16], [128 x i16]* %input, i64 0, i64 %10
  store i16 %8, i16* %11, align 2
  br label %12

; <label>:12                                      ; preds = %6
  %13 = load i32, i32* %i, align 4
  %14 = add nsw i32 %13, 1
  store i32 %14, i32* %i, align 4
  br label %3

; <label>:15                                      ; preds = %3
  %16 = getelementptr inbounds [128 x i16], [128 x i16]* %output, i32 0, i32 0
  %17 = getelementptr inbounds [128 x i16], [128 x i16]* %input, i32 0, i32 0
  %18 = call i32 @fastWalshTransform(i16* %16, i16* %17, i16 zeroext 7)
  store i32 0, i32* %j, align 4
  br label %19

; <label>:19                                      ; preds = %30, %15
  %20 = load i32, i32* %j, align 4
  %21 = icmp slt i32 %20, 128
  br i1 %21, label %22, label %33

; <label>:22                                      ; preds = %19
  %23 = load %struct._IO_FILE*, %struct._IO_FILE** %fp, align 8
  %24 = load i32, i32* %j, align 4
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds [128 x i16], [128 x i16]* %output, i64 0, i64 %25
  %27 = load i16, i16* %26, align 2
  %28 = zext i16 %27 to i32
  %29 = call i32 (%struct._IO_FILE*, i8*, ...) @fprintf(%struct._IO_FILE* %23, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.2, i32 0, i32 0), i32 %28)
  br label %30

; <label>:30                                      ; preds = %22
  %31 = load i32, i32* %j, align 4
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %j, align 4
  br label %19

; <label>:33                                      ; preds = %19
  %34 = load %struct._IO_FILE*, %struct._IO_FILE** %fp, align 8
  %35 = call i32 @fclose(%struct._IO_FILE* %34)
  %36 = call i32 @system(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @.str.3, i32 0, i32 0))
  %37 = icmp ne i32 %36, 0
  br i1 %37, label %38, label %45

; <label>:38                                      ; preds = %33
  %39 = load %struct._IO_FILE*, %struct._IO_FILE** @stdout, align 8
  %40 = call i32 (%struct._IO_FILE*, i8*, ...) @fprintf(%struct._IO_FILE* %39, i8* getelementptr inbounds ([47 x i8], [47 x i8]* @.str.4, i32 0, i32 0))
  %41 = load %struct._IO_FILE*, %struct._IO_FILE** @stdout, align 8
  %42 = call i32 (%struct._IO_FILE*, i8*, ...) @fprintf(%struct._IO_FILE* %41, i8* getelementptr inbounds ([47 x i8], [47 x i8]* @.str.5, i32 0, i32 0))
  %43 = load %struct._IO_FILE*, %struct._IO_FILE** @stdout, align 8
  %44 = call i32 (%struct._IO_FILE*, i8*, ...) @fprintf(%struct._IO_FILE* %43, i8* getelementptr inbounds ([47 x i8], [47 x i8]* @.str.4, i32 0, i32 0))
  store i32 1, i32* %1, align 4
  br label %52

; <label>:45                                      ; preds = %33
  %46 = load %struct._IO_FILE*, %struct._IO_FILE** @stdout, align 8
  %47 = call i32 (%struct._IO_FILE*, i8*, ...) @fprintf(%struct._IO_FILE* %46, i8* getelementptr inbounds ([45 x i8], [45 x i8]* @.str.6, i32 0, i32 0))
  %48 = load %struct._IO_FILE*, %struct._IO_FILE** @stdout, align 8
  %49 = call i32 (%struct._IO_FILE*, i8*, ...) @fprintf(%struct._IO_FILE* %48, i8* getelementptr inbounds ([45 x i8], [45 x i8]* @.str.7, i32 0, i32 0))
  %50 = load %struct._IO_FILE*, %struct._IO_FILE** @stdout, align 8
  %51 = call i32 (%struct._IO_FILE*, i8*, ...) @fprintf(%struct._IO_FILE* %50, i8* getelementptr inbounds ([45 x i8], [45 x i8]* @.str.6, i32 0, i32 0))
  store i32 0, i32* %1, align 4
  br label %52

; <label>:52                                      ; preds = %45, %38
  %53 = load i32, i32* %1, align 4
  ret i32 %53
}

declare %struct._IO_FILE* @fopen(i8*, i8*) #1

declare i32 @fastWalshTransform(i16*, i16*, i16 zeroext) #1

declare i32 @fprintf(%struct._IO_FILE*, i8*, ...) #1

declare i32 @fclose(%struct._IO_FILE*) #1

declare i32 @system(i8*) #1

attributes #0 = { nounwind uwtable "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+fxsr,+mmx,+sse,+sse2" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+fxsr,+mmx,+sse,+sse2" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.ident = !{!0}

!0 = !{!"clang version 3.8.1-24 (tags/RELEASE_381/final)"}
