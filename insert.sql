--テーブルの作成
CREATE TABLE employee(
	id      CHAR(5)      PRIMARY KEY,
	name    VARCHAR(10),
	sex     CHAR(2),
	section VARCHAR(10)
)

--テーブルへデータの登録
INSERT employee (id, name, sex, section) VALUES ('00001', '鈴木一郎', '男', '営業課')
INSERT employee (id, name, sex, section) VALUES ('00002', '田中二郎', '男', '総務課')
INSERT employee (id, name, sex, section) VALUES ('00003', '佐藤三郎', '男', '経理課')