//
//  ViewController.h
//  CellMoveable
//
//  Created by Lee on 17/2/7.
//  Copyright (c) 2017年 Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UICollectionViewDelegate, UICollectionViewDataSource>{
    
    NSMutableArray *_dataSource;    //声明数据源数组
}
@property (nonatomic, strong) UICollectionView *collectionView; //单元格视图

@end

