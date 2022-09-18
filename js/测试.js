auto.waitFor()
var appName = "今日校园";
launchApp(appName);
sleep(3000);


//寻找疫情信息手机按钮并点击
var xinxishouji = text("疫情信息收集").findOnce();
if (xinxishouji) {
    xinxishouji.click();
    sleep(1000);
}
else {
    toast("未检查到疫情信息收集按钮");
    //中止脚本
    exit();
}
function viewWeb(time) {
    gesture(1000, [300, 1000], [300, 300]);
    back();
}



if (xinxishouji) {
    xinxishouji.click();
    sleep(1000);
}
else {
    toast("未检查到疫情信息收集按钮");
    //中止脚本
    exit();
}

var riqi = text("2022-09-07").findOnce();
if (riqi) {
    riqi.click();
    sleep(1000);
}
else {
    toast("未检查到疫情信息收集按钮");
    //中止脚本
    exit();
}
function viewWeb(time) {
    gesture(1000, [300, 1000], [300, 300]);
    back();
}
