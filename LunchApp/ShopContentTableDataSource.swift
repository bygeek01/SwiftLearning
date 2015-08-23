//
//  ShopContentTableDataSource.swift
//  LunchApp
//
//  Created by hide on 2015/08/19.
//  Copyright (c) 2015年 byGeek01. All rights reserved.
//

import UIKit

class ShopContentTableDataSource: NSObject,UITableViewDataSource {

    override init() {
        super.init()
    }
    
    func numberOfSectionsInTableView(tableView: UITableView) -> Int {
        return 1
    }
    
    func tableView(tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return 4
    }
    
    func tableView(tableView: UITableView, cellForRowAtIndexPath indexPath: NSIndexPath) -> UITableViewCell {
        switch indexPath.row{
        case 0:
            let menuImageCell = tableView.dequeueReusableCellWithIdentifier("menuImageCell") as! MenuImageCell
            return menuImageCell
        case 1:
            let shopInfoCell = tableView.dequeueReusableCellWithIdentifier("shopInfoCell") as! ShopInfoCell
            return shopInfoCell
        case 2:
            let shopMapCell = tableView.dequeueReusableCellWithIdentifier("shopMapCell") as! ShopMapCell
            return shopMapCell
        default :
            let snsButtonCell = tableView.dequeueReusableCellWithIdentifier("snsIconCell") as! SnsIconCell
            return snsButtonCell
        }
        
    }
    
    
}
