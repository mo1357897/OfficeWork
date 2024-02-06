--データの挿入
SET serverput ON

DECLARE

 syain_id_u          VARCHAR2(5);                /*社員番号*/
 name_u              VARCHAR2(10);               /*氏名*/
 hobby_u             VARCHAR2(10);                /*趣味*/

BEGIN
  syain_id_u := '&1'; --第一引数として社員番号を設定
  name_u := '&2';     --第二引数として氏名を設定
  hobby_u := '&3';     --第三引数として趣味を設定
  OUT_PARAM := TO_CHAR(SYSDATE, 'YYYYMMDD'); --作成日時を設定
  
  --データを挿入
  INSERT INTO dataTable (syain_id,name,hobby,created_at) VALUES (syain_id_u,name_u,hobby_u,OUT_PARAM);

--想定外のエラーが生じた場合にメッセージとして実行中にエラーが生じましたを表示
EXCEPTION
    WHEN OTHERS THEN
        DBMS_OUTPUT.PUT_LINE('実行中にエラーが生じました');
END;