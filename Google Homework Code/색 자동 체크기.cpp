function changeColors()
{
    const ss = SpreadsheetApp.getActiveSpreadsheet();
    const targetSheetNames = ["�ϳ���", "ī��", "��ȣ����"];
    const today = new Date();
    const dayOfWeek = today.getDay();

    targetSheetNames.forEach(sheetName = > 
    {
        const sheet = ss.getSheetByName(sheetName);

        if (sheet)
        {
            var sheet = SpreadsheetApp.getActiveSpreadsheet().getSheetByName("ī��");
            var sheet = SpreadsheetApp.getActiveSpreadsheet().getSheetByName("�ϳ���");

            const j3 = sheet.getRange("J3");
            const l3 = sheet.getRange("L3");
            const n3 = sheet.getRange("N3");
            const p3 = sheet.getRange("P3");

            const k4 = sheet.getRange("K4");
            const m4 = sheet.getRange("M4");
            const o4 = sheet.getRange("O4");
            const p4 = sheet.getRange("P4");

            const j5 = sheet.getRange("J5");
            const l5 = sheet.getRange("L5");
            const n5 = sheet.getRange("N5");
            const p5 = sheet.getRange("P5");

            const j6 = sheet.getRange("J6");
            const k6 = sheet.getRange("K6");
            const m6 = sheet.getRange("M6");
            const o6 = sheet.getRange("O6");

            const j7 = sheet.getRange("J7");
            const l7 = sheet.getRange("L7");
            const n7 = sheet.getRange("N7");
            const p7 = sheet.getRange("P7");

            const j8 = sheet.getRange("j8");
            const k8 = sheet.getRange("k8");
            const m8 = sheet.getRange("m8");
            const o8 = sheet.getRange("o8");

            if (dayOfWeek == = 4)                // �����
            {
                k4.setBackground("#696969");
                k6.setBackground("#696969");
                k8.setBackground("#696969");
            }
            else if (dayOfWeek == = 6)           // �����
            {
                m4.setBackground("#696969");
                m6.setBackground("#696969");
                m8.setBackground("#696969");
            }
            else if (dayOfWeek == = 1)           // ������
            {
                o4.setBackground("#696969");
                o6.setBackground("#696969");
                o8.setBackground("#696969");
            }
            else if (dayOfWeek == = 2)           // ȭ����
            {
                p3.setBackground("#696969");
                p4.setBackground("#696969");
                p5.setBackground("#696969");
                p7.setBackground("#696969");
            }
            else if (dayOfWeek == = 3)           // ������
            {
                j3.setBackground("#696969");
                j5.setBackground("#696969");
                j6.setBackground("#696969");
                j7.setBackground("#696969");
                j8.setBackground("#696969");
            }
            else if (dayOfWeek == = 5)           // �ݿ���
            {
                l3.setBackground("#696969");
                l5.setBackground("#696969");
                l7.setBackground("#696969");
            }
            else if (dayOfWeek == = 0)           // �Ͽ���
            {
                n3.setBackground("#696969");
                n7.setBackground("#696969");
                n5.setBackground("#696969");
            }
        }
    });
}
