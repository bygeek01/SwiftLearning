//
//  ContentTableCollectionView.swift
//  LunchApp
//
//  Created by hide on 2015/08/18.
//  Copyright (c) 2015年 byGeek01. All rights reserved.
//

import UIKit

class ContentCollectionView: UICollectionView {
    
    override init(frame: CGRect, collectionViewLayout layout: UICollectionViewLayout) {
        super.init(frame: frame, collectionViewLayout: layout)
    }
    
    //xibファイルでセルをカスタマイズした場合は、registerNibが必要
    required init(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
        var nib = UINib(nibName: "ContentCollectionCell", bundle: NSBundle.mainBundle())
        super.registerNib(nib, forCellWithReuseIdentifier: "contentCollectionCell")
    }
    
    //menucellのサイズを画面高/5に設定する
//    func collectionView(collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, sizeForItemAtIndexPath indexPath: NSIndexPath) -> CGSize {
//        println("\(collectionView.frame):collection.frame")
//        let cellSize = CGSize(width: collectionView.frame.width, height: collectionView.frame.height/5)
//        return cellSize
//    }
    

    
    

    
}
