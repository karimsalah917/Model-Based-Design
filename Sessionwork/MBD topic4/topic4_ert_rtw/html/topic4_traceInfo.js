function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "topic4"};
	this.sidHashMap["topic4"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "topic4:5"};
	this.sidHashMap["topic4:5"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "topic4:7"};
	this.sidHashMap["topic4:7"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In3"] = {sid: "topic4:8"};
	this.sidHashMap["topic4:8"] = {rtwname: "<Root>/In3"};
	this.rtwnameHashMap["<Root>/In4"] = {sid: "topic4:9"};
	this.sidHashMap["topic4:9"] = {rtwname: "<Root>/In4"};
	this.rtwnameHashMap["<Root>/Bus Creator"] = {sid: "topic4:3"};
	this.sidHashMap["topic4:3"] = {rtwname: "<Root>/Bus Creator"};
	this.rtwnameHashMap["<Root>/Bus Creator1"] = {sid: "topic4:10"};
	this.sidHashMap["topic4:10"] = {rtwname: "<Root>/Bus Creator1"};
	this.rtwnameHashMap["<Root>/Bus Creator2"] = {sid: "topic4:12"};
	this.sidHashMap["topic4:12"] = {rtwname: "<Root>/Bus Creator2"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "topic4:13"};
	this.sidHashMap["topic4:13"] = {rtwname: "<Root>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
