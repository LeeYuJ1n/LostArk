function myFunction()
{
    var targetSheets = ["카단", "니나브", "태연이숙제", "지호숙제", "문의"]; // List of target sheets

    for (var sheetName of targetSheets)
    {
        var sheet = SpreadsheetApp.getActiveSpreadsheet().getSheetByName(sheetName);

        if (sheet)
        {
            var sheet = SpreadsheetApp.getActiveSpreadsheet().getSheetByName("카단");

            sheet.getRange("C3:I3").setValue(false); // 일일 숙제 : 길드 연구 지원(LeeYuJin)
            sheet.getRange("C4:I4").setValue(false); // 일일 숙제 : 길드 연구 지원(LeeYuJinAsha)
            sheet.getRange("C5:I5").setValue(false); // 일일 숙제 : 길드 연구 지원(LeeYuJinAbel)
            sheet.getRange("C6:I6").setValue(false); // 일일 숙제 : 길드 연구 지원(LeeYuJinPure)
            sheet.getRange("C7:I7").setValue(false); // 일일 숙제 : 길드 연구 지원(LeeYuJinElin)
            sheet.getRange("C8:I8").setValue(false); // 일일 숙제 : 길드 연구 지원(LeeYuJinMoon)

            // 체크박스 데이터 변경(카던, 가토) - LeeYuJin
            sheet.getRange("K3").setValue(false); // 카오스 던전, 가디언 토벌(목요일)
            sheet.getRange("M3").setValue(false); // 카오스 던전, 가디언 토벌(토요일)
            sheet.getRange("O3").setValue(false); // 카오스 던전, 가디언 토벌(월요일)

            // 체크박스 데이터 변경 - LeeYuJinAsha
            sheet.getRange("J4").setValue(false); // 카오스 던전, 가디언 토벌(수요일)
            sheet.getRange("L4").setValue(false); // 카오스 던전, 가디언 토벌(금요일)
            sheet.getRange("N4").setValue(false); // 카오스 던전, 가디언 토벌(일요일)

            // 체크박스 데이터 변경 - LeeYuJinAbel
            sheet.getRange("K5").setValue(false); // 카오스 던전, 가디언 토벌(목요일)
            sheet.getRange("M5").setValue(false); // 카오스 던전, 가디언 토벌(목요일)
            sheet.getRange("O5").setValue(false); // 카오스 던전, 가디언 토벌(목요일)

            // 체크박스 데이터 변경 - LeeYuJinPure
            sheet.getRange("L6").setValue(false); // 카오스 던전, 가디언 토벌(금요일)
            sheet.getRange("N6").setValue(false); // 카오스 던전, 가디언 토벌(일요일)
            sheet.getRange("P6").setValue(false); // 카오스 던전, 가디언 토벌(화요일)

            // 체크박스 데이터 변경 - LeeYuJinElin
            sheet.getRange("K7").setValue(false); // 카오스 던전, 가디언 토벌(목요일)
            sheet.getRange("M7").setValue(false); // 카오스 던전, 가디언 토벌(토요일)
            sheet.getRange("O7").setValue(false); // 카오스 던전, 가디언 토벌(월요일)

            // 체크박스 데이터 변경 - LeeYuJinDear
            sheet.getRange("L8").setValue(false); // 카오스 던전, 가디언 토벌(금요일)
            sheet.getRange("N8").setValue(false); // 카오스 던전, 가디언 토벌(일요일)
            sheet.getRange("P8").setValue(false); // 카오스 던전, 가디언 토벌(화요일)

            // 체크박스 데이터 변경 - 카오스 게이트
            sheet.getRange("Q3").setValue(false); // 카오스 게이트(목요일)
            sheet.getRange("R3").setValue(false); // 카오스 게이트(목요일)
            sheet.getRange("S3").setValue(false); // 카오스 게이트(목요일)
            sheet.getRange("T3").setValue(false); // 카오스 게이트(목요일)

            // 체크박스 데이터 변경 - 길드의뢰 : 위험 해역 돌파
            sheet.getRange("U3").setValue(false); // LeeYuJin
            sheet.getRange("U4").setValue(false); // LeeYuJinAsha
            sheet.getRange("U5").setValue(false); // LeeYuJinAbel
            sheet.getRange("U6").setValue(false); // LeeYuJinPure
            sheet.getRange("U7").setValue(false); // LeeYuJinElin
            sheet.getRange("U8").setValue(false); // LeeYuJinDear


            // 체크박스 데이터 변경 - 길드의뢰 : 해적 주화 수집
            sheet.getRange("W3").setValue(false);

            // 체크박스 데이터 변경 - 도전 어비스 던전, 도전 가디언 토벌
            sheet.getRange("X3").setValue(false); // 도전 어비스 던전
            sheet.getRange("Y3").setValue(false); // 도전 가디언 토벌

            // 체크박스 데이터 변경 - 길드의뢰
            sheet.getRange("C30").setValue(false); // LeeYuJin
            sheet.getRange("C31").setValue(false); // LeeYuJinAsha
            sheet.getRange("C32").setValue(false); // LeeYuJinAbel
            sheet.getRange("C33").setValue(false); // LeeYuJinPure
            sheet.getRange("C34").setValue(false); // LeeYuJinElin
            sheet.getRange("C35").setValue(false); // LeeYuJinDear

            // 체크박스 데이터 변경 - 주간 에포나 의뢰
            sheet.getRange("E30").setValue(false); // LeeYuJin
            sheet.getRange("E31").setValue(false); // LeeYuJinAsha
            sheet.getRange("E32").setValue(false); // LeeYuJinAbel
            sheet.getRange("E33").setValue(false); // LeeYuJinPure
            sheet.getRange("E34").setValue(false); // LeeYuJinElin
            sheet.getRange("E35").setValue(false); // LeeYuJinDear

            // 체크박스 데이터 변경 - 혈석 교환
            sheet.getRange("I30").setValue("미교환"); // LeeYuJin
            sheet.getRange("I31").setValue("미교환"); // LeeYuJinAsha
            sheet.getRange("I32").setValue("미교환"); // LeeYuJinAbel
            sheet.getRange("I33").setValue("미교환"); // LeeYuJinPure
            sheet.getRange("I34").setValue("미교환"); // LeeYuJinElin
            sheet.getRange("I35").setValue("미교환"); // LeeYuJinDear

            //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■  

            // 체크박스 데이터 변경 - 내실 / 호감도 / 주간 숙제

            // LeeYuJinAbel
            sheet.getRange("T30").setValue(false); // LeeYuJinAbel - 로웬(레갸르방크 대평원) : 실마엘 수정 퀘스트 / 교환
            sheet.getRange("T31").setValue(false); // LeeYuJinAbel - Empty
            sheet.getRange("T32").setValue(false); // LeeYuJinAbel - Empty
            sheet.getRange("T33").setValue(false); // LeeYuJinAbel - Empty
            sheet.getRange("T34").setValue(false); // LeeYuJinAbel - Empty
            sheet.getRange("T35").setValue(false); // LeeYuJinAbel - Empty

            // LeeYuJinPure
            sheet.getRange("Q30").setValue(false); // LeeYuJinPure - 베른 남부 : 카드 경험치
            sheet.getRange("Q31").setValue(false); // LeeYuJinPure - 마리의 비밀 상점 : 전체 ~ 희귀 팩 골드로 구매
            sheet.getRange("Q32").setValue(false); // LeeYuJinPure - Empty
            sheet.getRange("Q33").setValue(false); // LeeYuJinPure - Empty
            sheet.getRange("Q34").setValue(false); // LeeYuJinPure - Empty
            sheet.getRange("Q35").setValue(false); // LeeYuJinPure - Empty

            //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

            // 드롭다운 데이터 변경

            // LeeYuJin
            // ◆ 어비스 레이드
            sheet.getRange("C12").setValue("참여가능");    // 어비스 레이드 : 아르고스

            // ◆ 군단장 레이드
            sheet.getRange("G12").setValue("참여가능");    // 마수 군단장 : 발탄
            sheet.getRange("J12").setValue("참여가능");    // 욕망 군단장 : 비아키스
            sheet.getRange("N12").setValue("참여가능");    // 광기 군단장 : 쿠크세이튼
            sheet.getRange("Q12").setValue("나동이님");    // 몽환 군단장 : 아브렐슈드
            sheet.getRange("S12").setValue("나동이님");    // 질병 군단장 : 일리아칸
            sheet.getRange("U12").setValue("참여가능(G)"); // 어둠 군단장 : 카멘
            
            // ◆ 카제로스 레이드
            sheet.getRange("W12").setValue("참여가능(G)"); // 서막 : 붉어진 백여의 나선
            
            // ◆ 에픽 레이드
            sheet.getRange("Z12").setValue("참여가능(G)"); // 폭풍의 지휘관 : 베히모스

            // ◆ 어비스 던전
            sheet.getRange("C21").setValue("참여가능");    // 8종(고대 유적 엘베리아, 몽환의 궁전, 오만의 방주, 오레하의 우물)
            sheet.getRange("G21").setValue("참여가능");    // 낙원의 문
            sheet.getRange("J21").setValue("나동이님");    // 카양겔(노말기준)
            sheet.getRange("N21").setValue("참여가능");    // 혼돈의 상아탑(노말기준)

            // ◆ 군단장 레이드 스페셜
            // Empty

            // ◆ 에브니 큐브
            sheet.getRange("Z3").setValue("5 금제");

            //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

            // LeeYuJinAsha
            // ◆ 어비스 레이드
            sheet.getRange("C13").setValue("참여가능");    // 어비스 레이드 : 아르고스

            // ◆ 군단장 레이드
            sheet.getRange("G13").setValue("참여가능");    // 마수 군단장 : 발탄
            sheet.getRange("J13").setValue("참여가능");    // 욕망 군단장 : 비아키스
            sheet.getRange("N13").setValue("참여가능");    // 광기 군단장 : 쿠크세이튼
            sheet.getRange("Q13").setValue("참여가능(G)"); // 몽환 군단장 : 아브렐슈드
            sheet.getRange("S13").setValue("참여가능(G)"); // 질병 군단장 : 일리아칸

            // ◆ 카제로스 레이드
            
            // ◆ 에픽 레이드

            // ◆ 어비스 던전
            sheet.getRange("C22").setValue("참여가능");    // 8종(고대 유적 엘베리아, 몽환의 궁전, 오만의 방주, 오레하의 우물)
            sheet.getRange("G22").setValue("참여가능");    // 낙원의 문
            sheet.getRange("J22").setValue("참여가능(G)"); // 카양겔(노말기준)
            sheet.getRange("N22").setValue("1600");        // 혼돈의 상아탑(노말기준)

            // ◆ 군단장 레이드 스페셜
            // Empty

            // ◆ 에브니 큐브
            sheet.getRange("Z4").setValue("4 금제");    // 제 3 금제

            //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

            // LeeYuJinAbel
            // ◆ 어비스 레이드
            sheet.getRange("C14").setValue("참여가능");    // 어비스 레이드 : 아르고스

            // ◆ 군단장 레이드
            sheet.getRange("G14").setValue("참여가능");    // 마수 군단장 : 발탄
            sheet.getRange("J14").setValue("참여가능");    // 욕망 군단장 : 비아키스
            sheet.getRange("N14").setValue("참여가능");    // 광기 군단장 : 쿠크세이튼
            sheet.getRange("Q14").setValue("참여가능(G)"); // 몽환 군단장 : 아브렐슈드
            sheet.getRange("S14").setValue("참여가능(G)"); // 몽환 군단장 : 아브렐슈드

            // ◆ 카제로스 레이드

            // ◆ 에픽 레이드

            // ◆ 어비스 던전
            sheet.getRange("C23").setValue("참여가능");    // 8종(고대 유적 엘베리아, 몽환의 궁전, 오만의 방주, 오레하의 우물)
            sheet.getRange("G23").setValue("참여가능");    // 낙원의 문
            sheet.getRange("J23").setValue("참여가능(G)"); // 카양겔(노말기준)
            sheet.getRange("N23").setValue("1600");       // 혼돈의 상아탑(노말기준)

            // ◆ 군단장 레이드 스페셜
            // Empty

            // ◆ 에브니 큐브
            sheet.getRange("Z5").setValue("4 금제");     // 제 4 금제

            //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

            // LeeYuJinPure
            // ◆ 어비스 레이드
            sheet.getRange("C15").setValue("참여가능");    // 어비스 레이드 : 아르고스

            // ◆ 군단장 레이드
            sheet.getRange("G15").setValue("참여가능");    // 마수 군단장 : 발탄
            sheet.getRange("J15").setValue("참여가능");    // 욕망 군단장 : 비아키스
            sheet.getRange("N15").setValue("참여가능");    // 광기 군단장 : 쿠크세이튼
            sheet.getRange("Q15").setValue("참여가능(G)"); // 몽환 군단장 : 아브렐슈드
            sheet.getRange("S15").setValue("참여가능(G)"); // 질병 군단장 : 일리아칸

            // ◆ 카제로스 레이드

            // ◆ 에픽 레이드

            // ◆ 어비스 던전
            sheet.getRange("C24").setValue("참여가능");    // 8종(고대 유적 엘베리아, 몽환의 궁전, 오만의 방주, 오레하의 우물)
            sheet.getRange("G24").setValue("참여가능");    // 낙원의 문
            sheet.getRange("J24").setValue("참여가능");    // 카양겔(노말기준)
            sheet.getRange("N24").setValue("참여가능(G)"); // 혼돈의 상아탑(노말기준)

            // ◆ 군단장 레이드 스페셜
            sheet.getRange("S15").setValue("참여가능(G)"); // 일리아칸 에피데믹

            // ◆ 에브니 큐브
            sheet.getRange("Z6").setValue("4 금제");     // 제 4 금제

            //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

            // LeeYuJinElin
            // ◆ 어비스 레이드
            sheet.getRange("C16").setValue("참여가능");    // 어비스 레이드 : 아르고스

            // ◆ 군단장 레이드
            sheet.getRange("G16").setValue("참여가능");    // 마수 군단장 : 발탄
            sheet.getRange("J16").setValue("참여가능");    // 욕망 군단장 : 비아키스
            sheet.getRange("N16").setValue("참여가능(G)"); // 광기 군단장 : 쿠크세이튼
            sheet.getRange("Q16").setValue("나동이님");    // 몽환 군단장 : 아브렐슈드

            // ◆ 카제로스 레이드

            // ◆ 에픽 레이드

            // ◆ 어비스 던전
            sheet.getRange("C25").setValue("참여가능");    // 8종(고대 유적 엘베리아, 몽환의 궁전, 오만의 방주, 오레하의 우물)
            sheet.getRange("G25").setValue("참여가능");    // 낙원의 문
            sheet.getRange("J25").setValue("참여가능(G)"); // 카양겔(노말기준)
            sheet.getRange("N25").setValue("1600");       // 혼돈의 상아탑(노말기준)

            // ◆ 군단장 레이드 스페셜
            // Empty

            // ◆ 에브니 큐브
            sheet.getRange("Z7").setValue("3 금제");     // 제 3 금제

            //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

            // LeeYuJinDear
            // ◆ 어비스 레이드
            sheet.getRange("C17").setValue("참여가능");    // 어비스 레이드 : 아르고스

            // ◆ 군단장 레이드
            sheet.getRange("G17").setValue("참여가능");    // 마수 군단장 : 발탄
            sheet.getRange("J17").setValue("참여가능");    // 욕망 군단장 : 비아키스
            sheet.getRange("N17").setValue("참여가능");    // 광기 군단장 : 쿠크세이튼
            sheet.getRange("Q17").setValue("나동이님");    // 몽환 군단장 : 아브렐슈드
            sheet.getRange("S17").setValue("참여가능");    // 질병 군단장 : 일리아칸
            sheet.getRange("U17").setValue("나동이님");    // 어둠 군단장 : 카멘
            
            // ◆ 카제로스 레이드
            sheet.getRange("W17").setValue("참여가능(G)"); // 욕망 군단장 : 에키드나

            // ◆ 에픽 레이드

            // ◆ 어비스 던전
            sheet.getRange("C26").setValue("참여가능");    // 8종(고대 유적 엘베리아, 몽환의 궁전, 오만의 방주, 오레하의 우물)
            sheet.getRange("G26").setValue("참여가능");    // 낙원의 문
            sheet.getRange("J26").setValue("나동이님");    // 카양겔(노말기준)
            sheet.getRange("N26").setValue("참여가능(G)"); // 혼돈의 상아탑(노말기준)

            // ◆ 군단장 레이드 스페셜
            // Empty

            // ◆ 에브니 큐브
            sheet.getRange("Z8").setValue("5 금제");       // 제 5 금제

            //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

            // 주간 길드 보상
            sheet.getRange("I30:J34").setValue("미교환");
            sheet.getRange("I35").setValue("미교환"); // LeeYuJinMoon

            // 숫자 데이터 변경
            sheet.getRange("G30:H35").setValue("");
        }
    }




















    if (sheet)
    {
        var sheet = SpreadsheetApp.getActiveSpreadsheet().getSheetByName("니나브");

        sheet.getRange("C3:I3").setValue(false); // 일일 숙제 : 길드 연구 지원(LeeYuJin)
        sheet.getRange("C4:I4").setValue(false); // 일일 숙제 : 길드 연구 지원(LeeYuJinAsha)
        sheet.getRange("C5:I5").setValue(false); // 일일 숙제 : 길드 연구 지원(LeeYuJinAbel)
        sheet.getRange("C6:I6").setValue(false); // 일일 숙제 : 길드 연구 지원(LeeYuJinPure)
        sheet.getRange("C7:I7").setValue(false); // 일일 숙제 : 길드 연구 지원(LeeYuJinElin)
        sheet.getRange("C8:I8").setValue(false); // 일일 숙제 : 길드 연구 지원(LeeYuJinMoon)

        // 체크박스 데이터 변경(카던, 가토) - LeeYuJin
        sheet.getRange("K3").setValue(false); // 카오스 던전, 가디언 토벌(목요일)
        sheet.getRange("M3").setValue(false); // 카오스 던전, 가디언 토벌(토요일)
        sheet.getRange("O3").setValue(false); // 카오스 던전, 가디언 토벌(월요일)

        // 체크박스 데이터 변경 - LeeYuJinAsha
        sheet.getRange("J4").setValue(false); // 카오스 던전, 가디언 토벌(수요일)
        sheet.getRange("L4").setValue(false); // 카오스 던전, 가디언 토벌(금요일)
        sheet.getRange("N4").setValue(false); // 카오스 던전, 가디언 토벌(일요일)

        // 체크박스 데이터 변경 - LeeYuJinAbel
        sheet.getRange("K5").setValue(false); // 카오스 던전, 가디언 토벌(목요일)
        sheet.getRange("M5").setValue(false); // 카오스 던전, 가디언 토벌(목요일)
        sheet.getRange("O5").setValue(false); // 카오스 던전, 가디언 토벌(목요일)

        // 체크박스 데이터 변경 - LeeYuJinPure
        sheet.getRange("L6").setValue(false); // 카오스 던전, 가디언 토벌(금요일)
        sheet.getRange("N6").setValue(false); // 카오스 던전, 가디언 토벌(일요일)
        sheet.getRange("P6").setValue(false); // 카오스 던전, 가디언 토벌(화요일)

        // 체크박스 데이터 변경 - LeeYuJinElin
        sheet.getRange("K7").setValue(false); // 카오스 던전, 가디언 토벌(목요일)
        sheet.getRange("M7").setValue(false); // 카오스 던전, 가디언 토벌(토요일)
        sheet.getRange("O7").setValue(false); // 카오스 던전, 가디언 토벌(월요일)

        // 체크박스 데이터 변경 - LeeYuJinDear
        sheet.getRange("L8").setValue(false); // 카오스 던전, 가디언 토벌(금요일)
        sheet.getRange("N8").setValue(false); // 카오스 던전, 가디언 토벌(일요일)
        sheet.getRange("P8").setValue(false); // 카오스 던전, 가디언 토벌(화요일)

        // 체크박스 데이터 변경 - 카오스 게이트
        sheet.getRange("Q3").setValue(false); // 카오스 게이트(목요일)
        sheet.getRange("R3").setValue(false); // 카오스 게이트(목요일)
        sheet.getRange("S3").setValue(false); // 카오스 게이트(목요일)
        sheet.getRange("T3").setValue(false); // 카오스 게이트(목요일)

        // 체크박스 데이터 변경 - 길드의뢰 : 위험 해역 돌파
        sheet.getRange("U3").setValue(false); // LeeYuJin
        sheet.getRange("U4").setValue(false); // LeeYuJinAsha
        sheet.getRange("U5").setValue(false); // LeeYuJinAbel
        sheet.getRange("U6").setValue(false); // LeeYuJinPure
        sheet.getRange("U7").setValue(false); // LeeYuJinElin
        sheet.getRange("U8").setValue(false); // LeeYuJinDear


        // 체크박스 데이터 변경 - 길드의뢰 : 해적 주화 수집
        sheet.getRange("W3").setValue(false);

        // 체크박스 데이터 변경 - 도전 어비스 던전, 도전 가디언 토벌
        sheet.getRange("X3").setValue(false); // 도전 어비스 던전
        sheet.getRange("Y3").setValue(false); // 도전 가디언 토벌

        // 체크박스 데이터 변경 - 길드의뢰
        sheet.getRange("C30").setValue(false); // LeeYuJin
        sheet.getRange("C31").setValue(false); // LeeYuJinAsha
        sheet.getRange("C32").setValue(false); // LeeYuJinAbel
        sheet.getRange("C33").setValue(false); // LeeYuJinPure
        sheet.getRange("C34").setValue(false); // LeeYuJinElin
        sheet.getRange("C35").setValue(false); // LeeYuJinDear

        // 체크박스 데이터 변경 - 주간 에포나 의뢰
        sheet.getRange("E30").setValue(false); // LeeYuJin
        sheet.getRange("E31").setValue(false); // LeeYuJinAsha
        sheet.getRange("E32").setValue(false); // LeeYuJinAbel
        sheet.getRange("E33").setValue(false); // LeeYuJinPure
        sheet.getRange("E34").setValue(false); // LeeYuJinElin
        sheet.getRange("E35").setValue(false); // LeeYuJinDear

        // 체크박스 데이터 변경 - 혈석 교환
        sheet.getRange("I30").setValue("미교환"); // LeeYuJin
        sheet.getRange("I31").setValue("미교환"); // LeeYuJinAsha
        sheet.getRange("I32").setValue("미교환"); // LeeYuJinAbel
        sheet.getRange("I33").setValue("미교환"); // LeeYuJinPure
        sheet.getRange("I34").setValue("미교환"); // LeeYuJinElin
        sheet.getRange("I35").setValue("미교환"); // LeeYuJinDear

        //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■  

        // 체크박스 데이터 변경 - 내실 / 호감도 / 주간 숙제

        // LeeYuJin - None

        // LeeYuJin Asha - None

        // LeeYuJinAbel
        sheet.getRange("T30").setValue(false); // LeeYuJinAbel - 로웬(레갸르방크 대평원) : 실마엘 수정 퀘스트 / 교환
        sheet.getRange("T31").setValue(false); // LeeYuJinAbel - Empty
        sheet.getRange("T32").setValue(false); // LeeYuJinAbel - Empty
        sheet.getRange("T33").setValue(false); // LeeYuJinAbel - Empty
        sheet.getRange("T34").setValue(false); // LeeYuJinAbel - Empty
        sheet.getRange("T35").setValue(false); // LeeYuJinAbel - Empty

        // LeeYuJinElin - None

        //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

        // 드롭다운 데이터 변경

        // LeeYuJinNIDO
        // ◆ 어비스 레이드
        sheet.getRange("C12").setValue("참여가능");    // 어비스 레이드 : 아르고스

        // ◆ 군단장 레이드
        sheet.getRange("G12").setValue("참여가능");    // 마수 군단장 : 발탄
        sheet.getRange("J12").setValue("참여가능");    // 욕망 군단장 : 비아키스
        sheet.getRange("N12").setValue("참여가능(G)"); // 광기 군단장 : 쿠크세이튼
        sheet.getRange("Q12").setValue("참여가능(G)"); // 몽환 군단장 : 아브렐슈드
        sheet.getRange("S12").setValue("1580");        // 질병 군단장 : 일리아칸

        // ◆ 카제로스 레이드

        // ◆ 에픽 레이드

        // ◆ 어비스 던전
        sheet.getRange("C21").setValue("참여가능");    // 8종(고대 유적 엘베리아, 몽환의 궁전, 오만의 방주, 오레하의 우물)
        sheet.getRange("G21").setValue("참여가능");    // 낙원의 문
        sheet.getRange("J21").setValue("참여가능(G)"); // 카양겔(노말기준)
        sheet.getRange("N21").setValue("1600");        // 혼돈의 상아탑(노말기준)

        // ◆ 군단장 레이드 스페셜
        // Empty

        // ◆ 에브니 큐브
        sheet.getRange("Z3").setValue("3 금제");  // 제 2 금제

        //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

        // LeeYuJinLuna
        // ◆ 어비스 레이드
        sheet.getRange("C13").setValue("1385");    // 어비스 레이드 : 아르고스

        // ◆ 군단장 레이드
        sheet.getRange("G13").setValue("1445");    // 마수 군단장 : 발탄
        sheet.getRange("J13").setValue("1460");    // 욕망 군단장 : 비아키스
        sheet.getRange("N13").setValue("1475");    // 광기 군단장 : 쿠크세이튼
        sheet.getRange("Q13").setValue("1490");    // 몽환 군단장 : 아브렐슈드

        // ◆ 카제로스 레이드

        // ◆ 에픽 레이드

        // ◆ 어비스 던전
        sheet.getRange("C22").setValue("참여가능"); // 8종(고대 유적 엘베리아, 몽환의 궁전, 오만의 방주, 오레하의 우물)
        sheet.getRange("G22").setValue("참여가능"); // 낙원의 문
        sheet.getRange("J22").setValue("1540");     // 카양겔(노말기준)
        sheet.getRange("N22").setValue("1600");     // 혼돈의 상아탑(노말기준)

        // ◆ 군단장 레이드 스페셜
        // Empty

        // ◆ 에브니 큐브
        sheet.getRange("Z4").setValue("1 금제");     // 제 1 금제

        //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

        // LeeYuJinAura
        // ◆ 어비스 레이드
        sheet.getRange("C14").setValue("참여가능");       // 어비스 레이드 : 아르고스

        // ◆ 군단장 레이드
        sheet.getRange("G14").setValue("참여가능(G)");    // 마수 군단장 : 발탄
        sheet.getRange("J14").setValue("참여가능(G)");    // 욕망 군단장 : 비아키스
        sheet.getRange("N14").setValue("참여가능(G)");    // 광기 군단장 : 쿠크세이튼
        sheet.getRange("Q14").setValue("1490");           // 몽환 군단장 : 아브렐슈드

        // ◆ 카제로스 레이드

        // ◆ 에픽 레이드

        // ◆ 어비스 던전
        sheet.getRange("C23").setValue("참여가능");       // 8종(고대 유적 엘베리아, 몽환의 궁전, 오만의 방주, 오레하의 우물)
        sheet.getRange("G23").setValue("참여가능");       // 낙원의 문
        sheet.getRange("J23").setValue("1540");           // 카양겔(노말기준)
        sheet.getRange("N23").setValue("1600");           // 혼돈의 상아탑(노말기준)

        // ◆ 군단장 레이드 스페셜
        // Empty

        // ◆ 에브니 큐브
        sheet.getRange("Z5").setValue("1 금제");  // 제 1 금제

        //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

        // LeeYuJinLume
        // ◆ 어비스 레이드
        sheet.getRange("C15").setValue("참여가능");       // 어비스 레이드 : 아르고스

        // ◆ 군단장 레이드
        sheet.getRange("G15").setValue("참여가능(G)");    // 마수 군단장 : 발탄
        sheet.getRange("J15").setValue("참여가능(G)");    // 욕망 군단장 : 비아키스
        sheet.getRange("N15").setValue("참여가능(G)");    // 광기 군단장 : 쿠크세이튼
        sheet.getRange("Q15").setValue("1490");           // 몽환 군단장 : 아브렐슈드

        // ◆ 카제로스 레이드

        // ◆ 에픽 레이드

        // ◆ 어비스 던전
        sheet.getRange("C24").setValue("참여가능");       // 8종(고대 유적 엘베리아, 몽환의 궁전, 오만의 방주, 오레하의 우물)
        sheet.getRange("G24").setValue("참여가능");       // 낙원의 문
        sheet.getRange("J24").setValue("1540");           // 카양겔(노말기준)
        sheet.getRange("N24").setValue("1600");           // 혼돈의 상아탑(노말기준)

        // ◆ 군단장 레이드 스페셜
        sheet.getRange("S15").setValue("1580");           // 일리아칸 에피데믹

        // ◆ 에브니 큐브
        sheet.getRange("Z6").setValue("1 금제");          // 제 1 금제

        //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

        // ???
        // ◆ 어비스 레이드
        sheet.getRange("C16").setValue("1385");    // 어비스 레이드 : 아르고스

        // ◆ 군단장 레이드
        sheet.getRange("G16").setValue("1445");    // 마수 군단장 : 발탄
        sheet.getRange("J16").setValue("1460");    // 욕망 군단장 : 비아키스
        sheet.getRange("N16").setValue("1475");    // 광기 군단장 : 쿠크세이튼
        sheet.getRange("Q16").setValue("1490");    // 몽환 군단장 : 아브렐슈드

        // ◆ 카제로스 레이드

        // ◆ 에픽 레이드

        // ◆ 어비스 던전
        sheet.getRange("C25").setValue("참여가능"); // 8종(고대 유적 엘베리아, 몽환의 궁전, 오만의 방주, 오레하의 우물)
        sheet.getRange("G25").setValue("참여가능"); // 낙원의 문
        sheet.getRange("J25").setValue("1540");     // 카양겔(노말기준)
        sheet.getRange("N25").setValue("1600");     // 혼돈의 상아탑(노말기준)

        // ◆ 군단장 레이드 스페셜
        // Empty

        // ◆ 에브니 큐브
        sheet.getRange("Z7").setValue("1250");     // 제 0 금제

        //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

        // ???
        // ◆ 어비스 레이드
        sheet.getRange("C17").setValue("1385");    // 어비스 레이드 : 아르고스

        // ◆ 군단장 레이드
        sheet.getRange("G17").setValue("1445");    // 마수 군단장 : 발탄
        sheet.getRange("J17").setValue("1460");    // 욕망 군단장 : 비아키스
        sheet.getRange("N17").setValue("1475");    // 광기 군단장 : 쿠크세이튼
        sheet.getRange("Q17").setValue("1490");    // 몽환 군단장 : 아브렐슈드

        // ◆ 카제로스 레이드

        // ◆ 에픽 레이드

        // ◆ 어비스 던전
        sheet.getRange("C26").setValue("참여가능"); // 8종(고대 유적 엘베리아, 몽환의 궁전, 오만의 방주, 오레하의 우물)
        sheet.getRange("G26").setValue("참여가능"); // 낙원의 문
        sheet.getRange("J26").setValue("1540");     // 카양겔(노말기준)
        sheet.getRange("N26").setValue("1600");     // 혼돈의 상아탑(노말기준)

        // ◆ 군단장 레이드 스페셜
        // Empty

        // ◆ 에브니 큐브
        sheet.getRange("Z8").setValue("1250");     // 제 0 금제

        //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

        // 주간 길드 보상
        sheet.getRange("I30:J34").setValue("미교환");
        sheet.getRange("I35").setValue("미교환"); // LeeYuJinMoon

        // 숫자 데이터 변경
        sheet.getRange("G30:H35").setValue("");

        // 주간 초기화
        sheet.getRange("T30").setValue(false);
        sheet.getRange("T31").setValue(false);
        sheet.getRange("T32").setValue(false);
        sheet.getRange("T33").setValue(false);
        sheet.getRange("T34").setValue(false);
        sheet.getRange("T35").setValue(false);
        sheet.getRange("V30").setValue(false);
        sheet.getRange("V31").setValue(false);
        sheet.getRange("V32").setValue(false);
        sheet.getRange("V33").setValue(false);
        sheet.getRange("V34").setValue(false);
        sheet.getRange("V35").setValue(false);
    }






















    if (sheet)
    {
        var sheet = SpreadsheetApp.getActiveSpreadsheet().getSheetByName("태연이숙제");

        //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

        // 드롭다운 데이터 변경

        // NaEast
        // ◆ 어비스 레이드
        sheet.getRange("C12").setValue("참여가능");            // 어비스 레이드 : 아르고스

        // ◆ 군단장 레이드
        sheet.getRange("G12").setValue("참여가능");            // 마수 군단장 : 발탄
        sheet.getRange("J12").setValue("참여가능");            // 욕망 군단장 : 비아키스
        sheet.getRange("M12").setValue("참여가능");            // 광기 군단장 : 쿠크세이튼
        sheet.getRange("P12").setValue("참여가능");            // 몽환 군단장 : 아브렐슈드
        sheet.getRange("R12").setValue("참여가능");            // 질병 군단장 : 일리아칸
        sheet.getRange("T12").setValue("참여가능(G)");         // 어둠 군단장 : 카멘

        // ◆ 카제로스 레이드
        sheet.getRange("V12").setValue("참여가능(G)");         // 어둠 군단장 : 일리아칸

        // ◆ 에픽 레이드

        // ◆ 어비스 던전
        sheet.getRange("C21").setValue("참여가능");            // 8종(고대 유적 엘베리아, 몽환의 궁전, 오만의 방주, 오레하의 우물)
        sheet.getRange("G21").setValue("참여가능");            // 낙원의 문
        sheet.getRange("J21").setValue("참여가능");            // 카양겔(노말기준)
        sheet.getRange("M21").setValue("참여가능(G)");         // 혼돈의 상아탑(노말기준)

        // ◆ 에브니 큐브
        sheet.getRange("L3").setValue("4 금제");               // 제 4 금제

        //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

        // 페르소나동
        // ◆ 어비스 레이드
        sheet.getRange("C13").setValue("참여가능");        // 어비스 레이드 : 아르고스

        // ◆ 군단장 레이드
        sheet.getRange("G13").setValue("참여가능");        // 마수 군단장 : 발탄
        sheet.getRange("J13").setValue("참여가능");        // 욕망 군단장 : 비아키스
        sheet.getRange("M13").setValue("참여가능(G)");     // 광기 군단장 : 쿠크세이튼
        sheet.getRange("P13").setValue("참여가능(G)");     // 몽환 군단장 : 아브렐슈드
        sheet.getRange("R13").setValue("1580");            // 질병 군단장 : 일리아칸

        // ◆ 카제로스 레이드

        // ◆ 에픽 레이드

        // ◆ 어비스 던전
        sheet.getRange("C22").setValue("참여가능");        // 8종(고대 유적 엘베리아, 몽환의 궁전, 오만의 방주, 오레하의 우물)
        sheet.getRange("G22").setValue("참여가능");        // 낙원의 문
        sheet.getRange("J22").setValue("참여가능(G)");     // 카양겔(노말기준)
        sheet.getRange("M22").setValue("1600");            // 혼돈의 상아탑(노말기준)

        // ◆ 에브니 큐브
        sheet.getRange("L4").setValue("4 금제");           // 제 4 금제

        //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

        // 츄르이터나동
        // ◆ 어비스 레이드
        sheet.getRange("C14").setValue("참여가능");       // 어비스 레이드 : 아르고스

        // ◆ 군단장 레이드
        sheet.getRange("G14").setValue("참여가능");       // 마수 군단장 : 발탄
        sheet.getRange("J14").setValue("참여가능");       // 욕망 군단장 : 비아키스
        sheet.getRange("M14").setValue("참여가능(G)");    // 광기 군단장 : 쿠크세이튼
        sheet.getRange("P14").setValue("참여가능(G)");    // 몽환 군단장 : 아브렐슈드
        sheet.getRange("R14").setValue("1580");           // 질병 군단장 : 일리아칸

        // ◆ 카제로스 레이드

        // ◆ 에픽 레이드

        // ◆ 어비스 던전
        sheet.getRange("C23").setValue("참여가능");       // 8종(고대 유적 엘베리아, 몽환의 궁전, 오만의 방주, 오레하의 우물)
        sheet.getRange("G23").setValue("참여가능");       // 낙원의 문
        sheet.getRange("J23").setValue("참여가능(G)");    // 카양겔(노말기준)
        sheet.getRange("M23").setValue("1600");           // 혼돈의 상아탑(노말기준)

        // ◆ 에브니 큐브
        sheet.getRange("L5").setValue("3 금제");          // 제 3 금제

        //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

        // 나동이의헥토파스칼킥
        // ◆ 어비스 레이드
        sheet.getRange("C15").setValue("참여가능");       // 어비스 레이드 : 아르고스

        // ◆ 군단장 레이드
        sheet.getRange("G15").setValue("참여가능");       // 마수 군단장 : 발탄
        sheet.getRange("J15").setValue("참여가능");       // 욕망 군단장 : 비아키스
        sheet.getRange("M15").setValue("참여가능(G)");    // 광기 군단장 : 쿠크세이튼
        sheet.getRange("P15").setValue("참여가능(G)");    // 몽환 군단장 : 아브렐슈드
        sheet.getRange("R15").setValue("1580");           // 질병 군단장 : 일리아칸

        // ◆ 카제로스 레이드

        // ◆ 에픽 레이드

        // ◆ 어비스 던전
        sheet.getRange("C24").setValue("참여가능");       // 8종(고대 유적 엘베리아, 몽환의 궁전, 오만의 방주, 오레하의 우물)
        sheet.getRange("G24").setValue("참여가능");       // 낙원의 문
        sheet.getRange("J24").setValue("참여가능(G)");    // 카양겔(노말기준)
        sheet.getRange("M24").setValue("1600");           // 혼돈의 상아탑(노말기준)

        // ◆ 에브니 큐브
        sheet.getRange("L6").setValue("3 금제");          // 제 3 금제

        //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

        // 나동이의불타는메테오
        // ◆ 어비스 레이드 
        sheet.getRange("C16").setValue("참여가능");              // 어비스 레이드 : 아르고스

        // ◆ 군단장 레이드                              
        sheet.getRange("G16").setValue("참여가능");              // 마수 군단장 : 발탄
        sheet.getRange("J16").setValue("참여가능");              // 욕망 군단장 : 비아키스
        sheet.getRange("M16").setValue("참여가능(G)");           // 광기 군단장 : 쿠크세이튼
        sheet.getRange("P16").setValue("참여가능(G)");           // 몽환 군단장 : 아브렐슈드
        sheet.getRange("R16").setValue("1580");                  // 질병 군단장 : 일리아칸

        // ◆ 카제로스 레이드

        // ◆ 에픽 레이드

        // ◆ 어비스 던전                                   
        sheet.getRange("C25").setValue("참여가능");              // 8종(고대 유적 엘베리아, 몽환의 궁전, 오만의 방주, 오레하의 우물)
        sheet.getRange("G25").setValue("참여가능");              // 낙원의 문
        sheet.getRange("J25").setValue("참여가능(G)");           // 카양겔(노말기준)
        sheet.getRange("M25").setValue("1600");                  // 혼돈의 상아탑(노말기준)

        // ◆ 에브니 큐브
        sheet.getRange("L7").setValue("3 금제");                 // 제 3 금제

        //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

        // 악필나동
        // ◆ 어비스 레이드
        sheet.getRange("C17").setValue("참여가능");            // 어비스 레이드 : 아르고스

        // ◆ 군단장 레이드                                    
        sheet.getRange("G17").setValue("참여가능");            // 마수 군단장 : 발탄
        sheet.getRange("J17").setValue("참여가능");            // 욕망 군단장 : 비아키스
        sheet.getRange("M17").setValue("참여가능(G)");         // 광기 군단장 : 쿠크세이튼
        sheet.getRange("P17").setValue("참여가능(G)");         // 몽환 군단장 : 아브렐슈드
        sheet.getRange("R17").setValue("1580");                // 질병 군단장 : 일리아칸

        // ◆ 카제로스 레이드

        // ◆ 에픽 레이드

        // ◆ 어비스 던전                                      
        sheet.getRange("C26").setValue("참여가능");            // 8종(고대 유적 엘베리아, 몽환의 궁전, 오만의 방주, 오레하의 우물)
        sheet.getRange("G26").setValue("참여가능");            // 낙원의 문
        sheet.getRange("J26").setValue("참여가능(G)");         // 카양겔(노말기준)
        sheet.getRange("M26").setValue("1600");                // 혼돈의 상아탑(노말기준)

        // ◆ 에브니 큐브                                      
        sheet.getRange("L8").setValue("3 금제");               // 제 3 금제

        //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

        // 주간 길드 보상
        sheet.getRange("I30:J34").setValue("미교환");
        sheet.getRange("I35").setValue("미교환"); // LeeYuJinMoon

        // 숫자 데이터 변경
        sheet.getRange("G30:H35").setValue("");

        // 주간 초기화
        sheet.getRange("T30").setValue(false);
        sheet.getRange("T31").setValue(false);
        sheet.getRange("T32").setValue(false);
        sheet.getRange("T33").setValue(false);
        sheet.getRange("T34").setValue(false);
        sheet.getRange("T35").setValue(false);
        sheet.getRange("V30").setValue(false);
        sheet.getRange("V31").setValue(false);
        sheet.getRange("V32").setValue(false);
        sheet.getRange("V33").setValue(false);
        sheet.getRange("V34").setValue(false);
        sheet.getRange("V35").setValue(false);

        // 체크박스 데이터 변경 - 카오스 게이트
        sheet.getRange("C3").setValue(false); // 카오스 게이트(목요일)
        sheet.getRange("D3").setValue(false); // 카오스 게이트(목요일)
        sheet.getRange("E3").setValue(false); // 카오스 게이트(목요일)
        sheet.getRange("F3").setValue(false); // 카오스 게이트(목요일)

        // 체크박스 데이터 변경 - 길드의뢰 : 위험 해역 돌파
        sheet.getRange("G3").setValue(false);
        sheet.getRange("G4").setValue(false);
        sheet.getRange("G5").setValue(false);
        sheet.getRange("G6").setValue(false);
        sheet.getRange("G7").setValue(false);
        sheet.getRange("G8").setValue(false);


        // 체크박스 데이터 변경 - 길드의뢰 : 해적 주화 수집
        sheet.getRange("I3").setValue(false);

        // 체크박스 데이터 변경 - 도전 어비스 던전, 도전 가디언 토벌
        sheet.getRange("J3").setValue(false); // 도전 어비스 던전
        sheet.getRange("K3").setValue(false); // 도전 가디언 토벌

        // 체크박스 데이터 변경 - 길드의뢰
        sheet.getRange("C30").setValue(false);
        sheet.getRange("C31").setValue(false);
        sheet.getRange("C32").setValue(false);
        sheet.getRange("C33").setValue(false);
        sheet.getRange("C34").setValue(false);
        sheet.getRange("C35").setValue(false);

        // 체크박스 데이터 변경 - 주간 에포나 의뢰
        sheet.getRange("E30").setValue(false);
        sheet.getRange("E31").setValue(false);
        sheet.getRange("E32").setValue(false);
        sheet.getRange("E33").setValue(false);
        sheet.getRange("E34").setValue(false);
        sheet.getRange("E35").setValue(false);

        // 체크박스 데이터 변경 - 혈석 교환
        sheet.getRange("I30").setValue("미교환");
        sheet.getRange("I31").setValue("미교환");
        sheet.getRange("I32").setValue("미교환");
        sheet.getRange("I33").setValue("미교환");
        sheet.getRange("I34").setValue("미교환");
        sheet.getRange("I35").setValue("미교환");
    }











    


    if (sheet)
    {
        var sheet = SpreadsheetApp.getActiveSpreadsheet().getSheetByName("지호숙제");

        //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

        // aresarcana
        // 드롭다운 데이터 변경

        // ◆ 어비스 레이드
        sheet.getRange("C12").setValue("참여가능");            // 어비스 레이드 : 아르고스

        // ◆ 군단장 레이드
        sheet.getRange("G12").setValue("참여가능");            // 마수 군단장 : 발탄
        sheet.getRange("J12").setValue("참여가능");            // 욕망 군단장 : 비아키스
        sheet.getRange("M12").setValue("참여가능");            // 광기 군단장 : 쿠크세이튼
        sheet.getRange("P12").setValue("참여가능");            // 몽환 군단장 : 아브렐슈드
        sheet.getRange("R12").setValue("참여가능");            // 질병 군단장 : 일리아칸
        sheet.getRange("T12").setValue("참여가능(G)");         // 어둠 군단장 : 카멘

        // ◆ 카제로스 레이드
        sheet.getRange("V12").setValue("참여가능(G)");         // 욕망 군단장 : 에키드나

        // ◆ 에픽 레이드

        // ◆ 어비스 던전
        sheet.getRange("C21").setValue("참여가능");            // 8종(고대 유적 엘베리아, 몽환의 궁전, 오만의 방주, 오레하의 우물)
        sheet.getRange("G21").setValue("참여가능");            // 낙원의 문
        sheet.getRange("J21").setValue("참여가능");            // 카양겔(노말기준)
        sheet.getRange("M21").setValue("참여가능(G)");         // 혼돈의 상아탑(노말기준)

        // ◆ 에브니 큐브
        sheet.getRange("L3").setValue("5 금제");               // 제 5 금제

        //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

        // aresgunner
        // ◆ 어비스 레이드
        sheet.getRange("C13").setValue("참여가능");        // 어비스 레이드 : 아르고스

        // ◆ 군단장 레이드
        sheet.getRange("G13").setValue("참여가능");        // 마수 군단장 : 발탄
        sheet.getRange("J13").setValue("참여가능");        // 욕망 군단장 : 비아키스
        sheet.getRange("M13").setValue("참여가능");        // 광기 군단장 : 쿠크세이튼
        sheet.getRange("P13").setValue("참여가능(G)");     // 몽환 군단장 : 아브렐슈드
        sheet.getRange("R13").setValue("참여가능(G)");     // 질병 군단장 : 일리아칸

        // ◆ 카제로스 레이드

        // ◆ 에픽 레이드

        // ◆ 어비스 던전
        sheet.getRange("C22").setValue("참여가능");        // 8종(고대 유적 엘베리아, 몽환의 궁전, 오만의 방주, 오레하의 우물)
        sheet.getRange("G22").setValue("참여가능");        // 낙원의 문
        sheet.getRange("J22").setValue("참여가능(G)");     // 카양겔(노말기준)
        sheet.getRange("M22").setValue("참여가능(G)");     // 혼돈의 상아탑(노말기준)

        // ◆ 에브니 큐브
        sheet.getRange("L4").setValue("4 금제");           // 제 4 금제

        //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

        // 핫브레이크먹는쿨브레이커
        // ◆ 어비스 레이드
        sheet.getRange("C14").setValue("참여가능");       // 어비스 레이드 : 아르고스

        // ◆ 군단장 레이드
        sheet.getRange("G14").setValue("참여가능");       // 마수 군단장 : 발탄
        sheet.getRange("J14").setValue("참여가능");       // 욕망 군단장 : 비아키스
        sheet.getRange("M14").setValue("참여가능");       // 광기 군단장 : 쿠크세이튼
        sheet.getRange("P14").setValue("참여가능(G)");    // 몽환 군단장 : 아브렐슈드
        sheet.getRange("R14").setValue("참여가능(G)");    // 질병 군단장 : 일리아칸

        // ◆ 카제로스 레이드

        // ◆ 에픽 레이드

        // ◆ 어비스 던전
        sheet.getRange("C23").setValue("참여가능");       // 8종(고대 유적 엘베리아, 몽환의 궁전, 오만의 방주, 오레하의 우물)
        sheet.getRange("G23").setValue("참여가능");       // 낙원의 문
        sheet.getRange("J23").setValue("참여가능(G)");    // 카양겔(노말기준)
        sheet.getRange("M23").setValue("참여가능(G)");    // 혼돈의 상아탑(노말기준)

        // ◆ 에브니 큐브
        sheet.getRange("L5").setValue("4 금제");          // 제 4 금제

        //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

        // ares729
        // ◆ 어비스 레이드
        sheet.getRange("C15").setValue("참여가능");       // 어비스 레이드 : 아르고스

        // ◆ 군단장 레이드
        sheet.getRange("G15").setValue("참여가능");       // 마수 군단장 : 발탄
        sheet.getRange("J15").setValue("참여가능");       // 욕망 군단장 : 비아키스
        sheet.getRange("M15").setValue("참여가능");       // 광기 군단장 : 쿠크세이튼
        sheet.getRange("P15").setValue("참여가능(G)");    // 몽환 군단장 : 아브렐슈드
        sheet.getRange("R15").setValue("참여가능(G)");    // 질병 군단장 : 일리아칸

        // ◆ 카제로스 레이드

        // ◆ 에픽 레이드

        // ◆ 어비스 던전
        sheet.getRange("C24").setValue("참여가능");       // 8종(고대 유적 엘베리아, 몽환의 궁전, 오만의 방주, 오레하의 우물)
        sheet.getRange("G24").setValue("참여가능");       // 낙원의 문
        sheet.getRange("J24").setValue("참여가능(G)");    // 카양겔(노말기준)
        sheet.getRange("M24").setValue("1600");           // 혼돈의 상아탑(노말기준)

        // ◆ 에브니 큐브
        sheet.getRange("L6").setValue("4 금제");          // 제 4 금제

        //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

        // aressummoner
        // ◆ 어비스 레이드 
        sheet.getRange("C16").setValue("참여가능");              // 어비스 레이드 : 아르고스

        // ◆ 군단장 레이드                              
        sheet.getRange("G16").setValue("참여가능");              // 마수 군단장 : 발탄
        sheet.getRange("J16").setValue("참여가능");              // 욕망 군단장 : 비아키스
        sheet.getRange("M16").setValue("참여가능");              // 광기 군단장 : 쿠크세이튼
        sheet.getRange("P16").setValue("참여가능(G)");           // 몽환 군단장 : 아브렐슈드
        sheet.getRange("R16").setValue("참여가능(G)");           // 질병 군단장 : 일리아칸

        // ◆ 카제로스 레이드

        // ◆ 에픽 레이드

        // ◆ 어비스 던전                                   
        sheet.getRange("C25").setValue("참여가능");              // 8종(고대 유적 엘베리아, 몽환의 궁전, 오만의 방주, 오레하의 우물)
        sheet.getRange("G25").setValue("참여가능");              // 낙원의 문
        sheet.getRange("J25").setValue("참여가능(G)");           // 카양겔(노말기준)
        sheet.getRange("M25").setValue("1600");                  // 혼돈의 상아탑(노말기준)

        // ◆ 에브니 큐브
        sheet.getRange("L7").setValue("4 금제");                 // 제 4 금제

        //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

        // aresreaper
        // ◆ 어비스 레이드
        sheet.getRange("C17").setValue("참여가능");            // 어비스 레이드 : 아르고스

        // ◆ 군단장 레이드                                    
        sheet.getRange("G17").setValue("참여가능");            // 마수 군단장 : 발탄
        sheet.getRange("J17").setValue("참여가능");            // 욕망 군단장 : 비아키스
        sheet.getRange("M17").setValue("참여가능");            // 광기 군단장 : 쿠크세이튼
        sheet.getRange("P17").setValue("참여가능(G)");         // 몽환 군단장 : 아브렐슈드
        sheet.getRange("R17").setValue("참여가능(G)");         // 질병 군단장 : 일리아칸

        // ◆ 카제로스 레이드

        // ◆ 에픽 레이드

        // ◆ 어비스 던전                                      
        sheet.getRange("C26").setValue("참여가능");            // 8종(고대 유적 엘베리아, 몽환의 궁전, 오만의 방주, 오레하의 우물)
        sheet.getRange("G26").setValue("참여가능");            // 낙원의 문
        sheet.getRange("J26").setValue("참여가능(G)");         // 카양겔(노말기준)
        sheet.getRange("M26").setValue("1600");                // 혼돈의 상아탑(노말기준)

        // ◆ 에브니 큐브                                      
        sheet.getRange("L8").setValue("4 금제");               // 제 4 금제

        //■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■

        // 주간 길드 보상
        sheet.getRange("I30:J34").setValue("미교환");
        sheet.getRange("I35").setValue("미교환"); // LeeYuJinMoon

        // 숫자 데이터 변경
        sheet.getRange("G30:H35").setValue("");

        // 주간 초기화
        sheet.getRange("T30").setValue(false);
        sheet.getRange("T31").setValue(false);
        sheet.getRange("T32").setValue(false);
        sheet.getRange("T33").setValue(false);
        sheet.getRange("T34").setValue(false);
        sheet.getRange("T35").setValue(false);
        sheet.getRange("V30").setValue(false);
        sheet.getRange("V31").setValue(false);
        sheet.getRange("V32").setValue(false);
        sheet.getRange("V33").setValue(false);
        sheet.getRange("V34").setValue(false);
        sheet.getRange("V35").setValue(false);

        // 체크박스 데이터 변경 - 카오스 게이트
        sheet.getRange("C3").setValue(false); // 카오스 게이트(목요일)
        sheet.getRange("D3").setValue(false); // 카오스 게이트(목요일)
        sheet.getRange("E3").setValue(false); // 카오스 게이트(목요일)
        sheet.getRange("F3").setValue(false); // 카오스 게이트(목요일)

        // 체크박스 데이터 변경 - 길드의뢰 : 위험 해역 돌파
        sheet.getRange("G3").setValue(false);
        sheet.getRange("G4").setValue(false);
        sheet.getRange("G5").setValue(false);
        sheet.getRange("G6").setValue(false);
        sheet.getRange("G7").setValue(false);
        sheet.getRange("G8").setValue(false);


        // 체크박스 데이터 변경 - 길드의뢰 : 해적 주화 수집
        sheet.getRange("I3").setValue(false);

        // 체크박스 데이터 변경 - 도전 어비스 던전, 도전 가디언 토벌
        sheet.getRange("J3").setValue(false); // 도전 어비스 던전
        sheet.getRange("K3").setValue(false); // 도전 가디언 토벌

        // 체크박스 데이터 변경 - 길드의뢰
        sheet.getRange("C30").setValue(false);
        sheet.getRange("C31").setValue(false);
        sheet.getRange("C32").setValue(false);
        sheet.getRange("C33").setValue(false);
        sheet.getRange("C34").setValue(false);
        sheet.getRange("C35").setValue(false);

        // 체크박스 데이터 변경 - 주간 에포나 의뢰
        sheet.getRange("E30").setValue(false);
        sheet.getRange("E31").setValue(false);
        sheet.getRange("E32").setValue(false);
        sheet.getRange("E33").setValue(false);
        sheet.getRange("E34").setValue(false);
        sheet.getRange("E35").setValue(false);

        // 체크박스 데이터 변경 - 혈석 교환
        sheet.getRange("I30").setValue("미교환");
        sheet.getRange("I31").setValue("미교환");
        sheet.getRange("I32").setValue("미교환");
        sheet.getRange("I33").setValue("미교환");
        sheet.getRange("I34").setValue("미교환");
        sheet.getRange("I35").setValue("미교환");
    }














    if (sheet)
    {
        var sheet = SpreadsheetApp.getActiveSpreadsheet().getSheetByName("문의");

        // 문의 -> 내용 초기화
        sheet.getRange("C4:K33").setValue("");

        // 문의 -> 처리 근황 초기화
        sheet.getRange("L4:L33").setValue(false);
    }
}