/*
 * Copyright(c) Live2D Inc. All rights reserved.
 *
 * Use of this source code is governed by the Live2D Open Software license
 * that can be found at http://live2d.com/eula/live2d-open-software-license-agreement_en.html.
 */

#ifndef LAppPal_h
#define LAppPal_h

#import <CubismFramework.hpp>
#import <string>

/**
 * @brief プラットフォーム依存機能を抽象化する Cubism Platform Abstraction Layer.
 *
 * ファイル読み込みや時刻取得等のプラットフォームに依存する関数をまとめる
 *
 */
class LAppPal
{
public:
    /**
     * @brief ファイルをバイトデータとして読み込む
     *
     * ファイルをバイトデータとして読み込む
     *
     * @param[in]   filePath    読み込み対象ファイルのパス
     * @param[out]  outSize     ファイルサイズ
     * @return                  バイトデータ
     */
    static Csm::csmByte* LoadFileAsBytes(const std::string filePath, Csm::csmSizeInt* outSize);
    
    
    /**
     * @brief バイトデータを解放する
     *
     * バイトデータを解放する
     *
     * @param[in]   byteData    解放したいバイトデータ
     */
    static void ReleaseBytes(Csm::csmByte* byteData);
    
    /**
     * @brief ログを出力する
     *
     * ログを出力する
     *
     * @param[in]   format  書式付文字列
     * @param[in]   ...     (可変長引数)文字列
     *
     */
    static void PrintLog(const Csm::csmChar* format, ...);
    
    /**
     * @brief メッセージを出力する
     *
     * メッセージを出力する
     *
     * @param[in]   message  文字列
     *
     */
    static void PrintMessage(const Csm::csmChar* message);
};

#endif /* LAppPal_h */
