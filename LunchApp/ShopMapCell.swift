//
//  ShopMapCell.swift
//  LunchApp
//
//  Created by hide on 2015/08/19.
//  Copyright (c) 2015年 byGeek01. All rights reserved.
//

import UIKit
import MapKit

class ShopMapCell: UITableViewCell {

    @IBOutlet weak var mapView: MKMapView!
    @IBOutlet weak var coverView: UIView!
    @IBOutlet weak var addressLabel: UILabel!
    @IBOutlet weak var copyButton: UIButton!
    
    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
    }

    override func setSelected(selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }
    
}
