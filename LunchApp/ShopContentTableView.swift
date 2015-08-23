//
//  ShopContentTable.swift
//  LunchApp
//
//  Created by hide on 2015/08/19.
//  Copyright (c) 2015年 byGeek01. All rights reserved.
//

import UIKit

class ShopContentTableView: UITableView,UITableViewDelegate {
    
    override init(frame: CGRect, style: UITableViewStyle) {
        super.init(frame: frame, style: style)
    }
    
    required init(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
        self.delegate = self
        
        let menuImageNib = UINib(nibName: "MenuImageCell", bundle: NSBundle.mainBundle())
        let shopInfoNib = UINib(nibName: "ShopInfoCell", bundle: NSBundle.mainBundle())
        let mapNib = UINib(nibName: "ShopMapCell", bundle: NSBundle.mainBundle())
        let snsNib = UINib(nibName: "SnsIconCell", bundle: NSBundle.mainBundle())
        self.registerNib(menuImageNib, forCellReuseIdentifier: "menuImageCell")
        self.registerNib(shopInfoNib, forCellReuseIdentifier: "shopInfoCell")
        self.registerNib(mapNib, forCellReuseIdentifier: "shopMapCell")
        self.registerNib(snsNib, forCellReuseIdentifier: "snsIconCell")
    }
    
    func tableView(tableView: UITableView, heightForRowAtIndexPath indexPath: NSIndexPath) -> CGFloat {
        switch indexPath.row {
        case 0:
            let rowHeight = SettingConfig.screenHeight/3.5
            return rowHeight
        case 1:
            let rowHeight = SettingConfig.screenHeight/4
            return rowHeight
        case 2:
            let rowHeight = SettingConfig.screenHeight/2.5
            return rowHeight
        default :
            let rowHeight = CGFloat(80)
            return rowHeight
        }
    }

}
