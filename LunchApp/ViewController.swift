//
//  ViewController.swift
//  LunchApp
//
//  Created by hide on 2015/08/17.
//  Copyright (c) 2015年 byGeek01. All rights reserved.
//

import UIKit

class ViewController: UIViewController,UICollectionViewDelegateFlowLayout,UICollectionViewDelegate {
    
    
    
    @IBOutlet weak var menuNavCollectionView: MenuNavCollectionView!
    @IBOutlet weak var contentCollectionView: ContentCollectionView!
    //初期化処理
    //section1のセルを選択状態に設定
    override func viewDidLoad() {
        super.viewDidLoad()
        menuNavCollectionView.delegate = self
        menuNavCollectionView.selectItemAtIndexPath(NSIndexPath(forRow: 0, inSection: 1), animated: true, scrollPosition: .None)
        contentCollectionView.delegate = self
        
        let navBackButton = UIBarButtonItem()
        navBackButton.title = ""
        self.navigationItem.backBarButtonItem = navBackButton
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
    }
    

    //menucellのサイズを画面幅/3に設定する
    func collectionView(collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, sizeForItemAtIndexPath indexPath: NSIndexPath) -> CGSize {
        switch collectionView.tag {
        case 1:
            let cellSize = CGSize(width: collectionView.frame.width/3, height: collectionView.frame.height)
            return cellSize
        default:
            let cellSize = CGSize(width: collectionView.frame.width, height: collectionView.frame.height/5)
            return cellSize
        }
        
    }
    
    //menucellタップ時の処理
    func collectionView(collectionView: UICollectionView, didSelectItemAtIndexPath indexPath: NSIndexPath) {
        println("tapped#:\(indexPath.section)")
        
        //複数storyBoard間での画面遷移テスト
        var detailStoryBoard = UIStoryboard(name: "Detail", bundle: NSBundle.mainBundle())
        let detailViewController = detailStoryBoard.instantiateInitialViewController() as! DetailViewController
        self.navigationController?.pushViewController(detailViewController, animated: true)
        
        
        if indexPath.section == collectionView.numberOfSections()-2{
            
        }else{
            collectionView.scrollToItemAtIndexPath(indexPath, atScrollPosition: .CenteredHorizontally, animated:true)
        }
    }
    
}

