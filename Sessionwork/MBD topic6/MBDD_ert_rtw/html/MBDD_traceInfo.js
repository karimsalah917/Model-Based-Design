function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "MBDD"};
	this.sidHashMap["MBDD"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "MBDD:1"};
	this.sidHashMap["MBDD:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "MBDD:1"};
	this.sidHashMap["MBDD:1"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<S1>:4"] = {sid: "MBDD:1:4"};
	this.sidHashMap["MBDD:1:4"] = {rtwname: "<S1>:4"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
