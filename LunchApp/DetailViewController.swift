//
//  DetailViewController.swift
//  LunchApp
//
//  Created by hide on 2015/08/19.
//  Copyright (c) 2015年 byGeek01. All rights reserved.
//

import UIKit

class DetailViewController: UIViewController {

    @IBOutlet weak var shopContentTableView: ShopContentTableView!
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        //navigationを背景透明に設定
        self.navigationController?.navigationBar.translucent = true
        self.navigationController?.navigationBar.tintColor   = UIColor.whiteColor()
        self.navigationController?.navigationBar.setBackgroundImage(UIImage(), forBarMetrics: .Default)
        self.navigationController?.navigationBar.shadowImage = UIImage()
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    override func prefersStatusBarHidden() -> Bool {
        return true
    }
    

}
