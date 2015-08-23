//
//  ShopContentTableViewCell.swift
//  LunchApp
//
//  Created by hide on 2015/08/19.
//  Copyright (c) 2015年 byGeek01. All rights reserved.
//

import UIKit

class ShopInfoCell: UITableViewCell {

    @IBOutlet weak var shopNameLabel: UILabel!
    @IBOutlet weak var descriptionLabel: UILabel!
    @IBOutlet weak var openIcon: UIImageView!
    @IBOutlet weak var openLabel: UILabel!
    @IBOutlet weak var closeIcon: UIImageView!
    @IBOutlet weak var closeLabel: UILabel!
    @IBOutlet weak var tellIcon: UIImageView!
    @IBOutlet weak var tellLabel: UILabel!
    @IBOutlet weak var starIcon: UIImageView!
    @IBOutlet weak var starLabel: UILabel!
    
    override func awakeFromNib() {
        super.awakeFromNib()
    }

    override func setSelected(selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)
    }

}
