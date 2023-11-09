# eb_proj7_DSP

## 資料蒐集
1. 使用Mbed_main/main_data_collect.cpp中的程式，放入之前HW2的截取on-board sensor的專案中，以100Hz截取480筆資料。原始資料檔案為
   - data_acc_static_modified.txt (為x y z軸的3D accelerators靜態資料)
   - data_acc_intense_1.txt (為x y z軸的3D accelerators動態資料)
2. 將資料存取之後，匯入firPlot.m中，用matlab來計算通過fir filter，得到matlab跑出的reference data，可以利用這個資料當作ref，並與stm32處理之後的data進行比較

## stm32 DSP運算
1. 使用Mbed OS File -> New Program -> empty Mbed OS program
2. 將Mbed_main/main.cpp 及 Mbed_main/arm_fir_data.c，放入專案中
3. arm_fir_data.c中有兩個array，第一個是放原始資料，也就是在"資料蒐集"的step1得到的資料；第二個ref則是放matlab算出的參考資料，為"資料蒐集"的step2得到，作為和stm32運算結果的比較。
4. 
