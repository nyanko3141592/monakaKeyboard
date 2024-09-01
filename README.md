# monakaKeyboard

monakaKeyboard は、自作キーボードのプロジェクトです。このリポジトリには、キーボードの設計ファイル、ファームウェア、キーキャップデザイン、ケースの 3D モデルなどが含まれています。

## プロジェクト構成

```
.
├── 3DModel
│   ├── Case
│   │   ├── bottomboard.stl
│   │   └── topboard.stl
│   └── keycap
│       ├── alphabet_keycap.stl
│       └── symbol_keycap.stl
├── 3x7
├── README.md
└── choco002
    ├── keyboard.json
    ├── keymaps
    │   └── default
    │       └── keymap.c
    └── readme.md
```

### 3DModel

- `Case/`  
  ケースの 3D モデルが含まれています。

  - `bottomboard.stl` - 底板の 3D モデル
  - `topboard.stl` - 上部パネルの 3D モデル

- `keycap/`  
  キーキャップの 3D モデルが含まれています。
  - `alphabet_keycap.stl` - アルファベットキー用キーキャップ
  - `symbol_keycap.stl` - シンボルキー用キーキャップ

### 3x7

3x7 キー配列の設計データが含まれています。
3x7/DisliKey.kicad_pro から kicad で開いて Gerber ファイルを発注することができます。

### choco002

QMK ファームウェアの設定ファイルが含まれています。

- `keyboard.json`  
  キーボードの設定ファイルです。

- `keymaps/`  
  キーマップの定義が含まれています。
  - `default/keymap.c` - デフォルトのキーマップ定義

## 使い方

### 3D モデルの印刷

`3DModel`ディレクトリ内の STL ファイルを 3D プリンターで印刷してください。ケースとキーキャップを含めた全ての部品を印刷することで、物理的なキーボードを組み立てることができます。

### QMK ファームウェアの設定

`choco002`ディレクトリ内のファイルを使用して、QMK ファームウェアをビルドおよびフラッシュします。キーマップはデフォルト設定で使用できますが、`keymap.c`ファイルを編集することでカスタマイズが可能です。

1. QMK CLI をインストールしていない場合は[こちら](https://docs.qmk.fm/#/ja/getting_started_build_tools)からインストールしてください。
2. `choco002`ディレクトリに移動し、次のコマンドを実行します。

   ```
   qmk compile -kb choco002 -km default
   qmk flash -kb choco002 -km default
   ```

## ライセンス

このプロジェクトは MIT ライセンスの下で公開されています。詳細は[LICENSE](./LICENSE)ファイルを参照してください。

## 貢献

貢献は大歓迎です！バグ報告やプルリクエストをお待ちしております。
