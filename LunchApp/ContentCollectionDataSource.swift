//
//  ContentTableCollectionDataSource.swift
//  LunchApp
//
//  Created by hide on 2015/08/18.
//  Copyright (c) 2015年 byGeek01. All rights reserved.
//

import UIKit

class ContentCollectionDataSource: NSObject,UICollectionViewDataSource {
   
    override init() {
        super.init()
    }
    
    func numberOfSectionsInCollectionView(collectionView: UICollectionView) -> Int {
        return 6
    }
    
    func collectionView(collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        return 5
    }
    
    func collectionView(collectionView: UICollectionView, cellForItemAtIndexPath indexPath: NSIndexPath) -> UICollectionViewCell {
        let contentCell = collectionView.dequeueReusableCellWithReuseIdentifier("contentCollectionCell", forIndexPath: indexPath) as! ContentCollectionCell
        contentCell.menuLabel.text = "menu\(indexPath.section)-\(indexPath.item)"
        contentCell.shopNameLabel.text = "shop\(indexPath.section)-\(indexPath.item)"
        return contentCell
    }
}
