#!/bin/bash
echo 此脚本用于检测CUIT选课页面是否开放选课，原理是检测访问页面返回的数据大小与最初访问返回的数据大小是否相等。
echo 此脚本仅适用于Linux Shell且并没有实际测试过可用性。按Ctrl+C可以结束程序。
echo 访问选课页面需要设置Cookies，现在请按提示开始设置。
echo 请先登录教务处，然后使用浏览器查看页面中的Cookies
read -p "请输入GSESSIONID/JSESSIONID的值：" SESSIONID
read -p "请输入semester.id的值：" semesterid
read -r -p "是否要将当前输入值永久保存在脚本中？[Y/n] " save
#判断用户输入
case $save in
[yY][eE][sS]|[yY])
#替换字符串
#Linux路径，不适用于Windows
thisPath=$(pwd)/$0
sed -i "4,25d" ${thisPath}
sed -i "s/\${SESSIONID}/${SESSIONID}/g ; s/\${semesterid}/${semesterid}/g" ${thisPath}
;;
[nN][oO]|[nN])
#do nothing
;;
*)
echo "无效输入"
exit 1
;;
esac
initial=$(curl http://jwgl.cuit.edu.cn/eams/stdElectCourse.action --cookie "GSESSIONID=${SESSIONID};JSESSIONID=${SESSIONID};semester.id=${semesterid}" -o /dev/null -s -w %{size_download})
while true
do	
	response=$(curl http://jwgl.cuit.edu.cn/eams/stdElectCourse.action --cookie "GSESSIONID=${SESSIONID};JSESSIONID=${SESSIONID};semester.id=${semesterid}" -o /dev/null -s -w %{size_download})
	echo $(date '+%Y年%m月%d日 %T') 最初数据大小是${initial}，当前数据大小是${response}
	if [ ${response} != ${initial} ]; then 
		echo "传输数据有变化！请留意选课"
	fi
	sleep 1
done
