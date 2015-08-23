//
//  ViewController.swift
//  LunchApp
//
//  Created by hide on 2015/08/17.
//  Copyright (c) 2015年 byGeek01. All rights reserved.
//

import UIKit

class ViewController: UIViewController,UICollectionViewDelegate,UICollectionViewDelegateFlowLayout {
    
    @IBOutlet weak var menuNavCollectionView: MenuNavCollectionView!
    @IBOutlet weak var contentCollectionView: ContentCollectionView!
    
    
    //初期化処理
    override func viewDidLoad() {
        super.viewDidLoad()
        menuNavCollectionView.selectItemAtIndexPath(NSIndexPath(forRow: 0, inSection: 1), animated: true, scrollPosition: .None)
        contentCollectionView.delegate = self
        //navigationBar.backButtonの設定
        let navBackButton = UIBarButtonItem()
        navBackButton.title = ""
        self.navigationItem.backBarButtonItem = navBackButton
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }
    
    //cellタップ時の処理
    func collectionView(collectionView: UICollectionView, didSelectItemAtIndexPath indexPath: NSIndexPath) {
        println("taprow:\(indexPath.section)-\(indexPath.row)")
        let detailStoryBoard = UIStoryboard(name: "Detail", bundle: NSBundle.mainBundle())
        let detailVC = detailStoryBoard.instantiateInitialViewController() as! DetailViewController
        self.navigationController?.pushViewController(detailVC, animated: true)
    }
    
    //menucellのサイズを画面高/5に設定する
    func collectionView(collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, sizeForItemAtIndexPath indexPath: NSIndexPath) -> CGSize {
        println("\(collectionView.frame):collection.frame")
        let cellSize = CGSize(width: collectionView.frame.width, height: collectionView.frame.height/5)
        return cellSize
    }
    
    
}

