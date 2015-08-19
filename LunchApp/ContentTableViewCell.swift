//
//  ContentTableViewCell.swift
//  LunchApp
//
//  Created by hide on 2015/08/18.
//  Copyright (c) 2015年 byGeek01. All rights reserved.
//

import UIKit

class ContentTableViewCell: UICollectionViewCell {

    @IBOutlet weak var menuImageView: UIImageView!
    @IBOutlet weak var coverView: UIView!
    @IBOutlet weak var menuLabel: UILabel!
    @IBOutlet weak var separateView: UIView!
    @IBOutlet weak var shopNameLabel: UILabel!
    
    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
    }
    
}
