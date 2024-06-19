function myFunction_Ares()
{
    var targetSheets = ["나동이"]; // List of target sheets

    for (var sheetName of targetSheets)
    {
        var sheet = SpreadsheetApp.getActiveSpreadsheet().getSheetByName(sheetName);


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
    }
}
