//
//  SnsIconCell.swift
//  LunchApp
//
//  Created by hide on 2015/08/20.
//  Copyright (c) 2015年 byGeek01. All rights reserved.
//

import UIKit

class SnsIconCell: UITableViewCell {

    @IBOutlet weak var twitterButton: UIButton!
    @IBOutlet weak var facebookButton: UIButton!
    @IBOutlet weak var lineButton: UIButton!
    
    
    
    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
    }

    override func setSelected(selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }
    
}
