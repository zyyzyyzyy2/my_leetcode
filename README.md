# Leetcode 刷题笔记

## 数组部分

### 1. 两数之和（easy）
1. 暴力解：双for循环
2. 查表法：借助map解决 -> fast, but costy

### 2. 寻找两个正序数组的中位数（hard）
1. 暴力解：双指针
2. 更暴力解：合并数组，排序，找到中位数

### 3. 盛最多水的容器（medium）
1. 暴力解：双for循环 -> 超时
2. 双指针：总是挪小的那一个

### 4. 三数之和（medium）
1. 固定一个数，求后面的两数之和 -> 310/312 超时
2. 遍历，双指针，重复情况处理
   
### 5. 最接近的三数之和（medium）
1. 单端单固定遍历，双指针

### 6. 四数之和（medium）
1. 单端双固定遍历，双指针（注意剪枝）

### 7. 删除有序数组中的重复项（easy）
1. 遍历数组，比较指针（双指针）

### 8. 移除元素（easy）
1. 双指针