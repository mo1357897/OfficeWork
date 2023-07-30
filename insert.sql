--テーブルの作成
CREATE OR REPLACE TABLE employee(
	id            CHAR(5)      PRIMARY KEY,
	name          VARCHAR(10),
	sex           CHAR(2),
	section       VARCHAR(10),
    CRE_DATE_TIME VARCHAR(20)
);

--現在日時取得
variable nowdatetime VARCHAR2(20); /*変数nowdatetimeを宣言*/
execute :nowdatetime := select GETDATE(); /*現在日時を取得し、取得した値をnowdatetimeに格納*/

--テーブルへデータの登録
INSERT employee (id, name, sex, section,CRE_DATE_TIME) VALUES ('00001', '鈴木一郎', '男', :nowdatetime);