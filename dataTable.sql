--個人情報管理テーブルの作成
Create Table dataTable (
syain_id          VARCHAR2(5)      PRIMARY KEY, /*社員番号*/
name              VARCHAR2(10)     PRIMARY KEY, /*氏名*/
hobby             VARCHAR2(10),               /*趣味*/
created_at        VARCHAR2(10),               /*作成日時*/
updated_at        VARCHAR2(10)                /*更新日時*/

);
