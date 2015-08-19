//
//  ContentTableViewCell.swift
//  LunchApp
//
//  Created by hide on 2015/08/18.
//  Copyright (c) 2015年 byGeek01. All rights reserved.
//

import UIKit

class ContentCollectionCell: UICollectionViewCell {
    
    @IBOutlet weak var imageView: UIImageView!
    @IBOutlet weak var coverView: UIView!
    @IBOutlet weak var separateView: UIView!
    @IBOutlet weak var menuLabel: UILabel!
    @IBOutlet weak var shopNameLabel: UILabel!
    
    override init(frame: CGRect) {
        super.init(frame: frame)
    }
    
    required init(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
    }
    

    
}

