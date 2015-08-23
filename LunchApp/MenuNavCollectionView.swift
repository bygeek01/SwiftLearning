//
//  MenuNavCollectionView.swift
//  LunchApp
//
//  Created by hide on 2015/08/17.
//  Copyright (c) 2015年 byGeek01. All rights reserved.
//

import UIKit

class MenuNavCollectionView: UICollectionView,UICollectionViewDelegate,UICollectionViewDelegateFlowLayout {
    
    override init(frame: CGRect, collectionViewLayout layout: UICollectionViewLayout) {
        super.init(frame: frame, collectionViewLayout: layout)
    }
    
    //StoryBoard使用時の初期化処理
    required init(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
        self.delegate = self
    }
    
    override func layoutSubviews() {
        super.layoutSubviews()
        centreIfNeeded()
    }
    
    //無限スクロールできるようにoffsetを計算
    func centreIfNeeded() {
        let currentOffset         = contentOffset
        let contentWidth          = contentSize.width
        let centerOffsetX:CGFloat = (contentWidth - bounds.size.width)/2
        let distFromCentre        = Float(centerOffsetX-currentOffset.x)
                
        if fabsf(distFromCentre) > Float(contentWidth/4) {
            contentOffset = CGPoint(x: centerOffsetX, y: currentOffset.y)
            reloadData()
        }
    }
    
    //menucellのサイズを画面幅/3に設定する
    func collectionView(collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, sizeForItemAtIndexPath indexPath: NSIndexPath) -> CGSize {
        let cellSize = CGSize(width: collectionView.frame.width/3, height: collectionView.frame.height)
        return cellSize
    }
    
    //cellタップ時の処理
    func collectionView(collectionView: UICollectionView, didSelectItemAtIndexPath indexPath: NSIndexPath) {
        println("tapSetion:\(indexPath.section)")
    }
    
    
    
}
