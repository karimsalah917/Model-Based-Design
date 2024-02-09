function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Factorial_using_for_loop"};
	this.sidHashMap["Factorial_using_for_loop"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Factorial_using_for_loop:11"};
	this.sidHashMap["Factorial_using_for_loop:11"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "Factorial_using_for_loop:7"};
	this.sidHashMap["Factorial_using_for_loop:7"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<Root>/Input"] = {sid: "Factorial_using_for_loop:24"};
	this.sidHashMap["Factorial_using_for_loop:24"] = {rtwname: "<Root>/Input"};
	this.rtwnameHashMap["<Root>/Input1"] = {sid: "Factorial_using_for_loop:26"};
	this.sidHashMap["Factorial_using_for_loop:26"] = {rtwname: "<Root>/Input1"};
	this.rtwnameHashMap["<Root>/For Iterator Subsystem"] = {sid: "Factorial_using_for_loop:11"};
	this.sidHashMap["Factorial_using_for_loop:11"] = {rtwname: "<Root>/For Iterator Subsystem"};
	this.rtwnameHashMap["<Root>/MATLAB Function"] = {sid: "Factorial_using_for_loop:7"};
	this.sidHashMap["Factorial_using_for_loop:7"] = {rtwname: "<Root>/MATLAB Function"};
	this.rtwnameHashMap["<Root>/Output"] = {sid: "Factorial_using_for_loop:23"};
	this.sidHashMap["Factorial_using_for_loop:23"] = {rtwname: "<Root>/Output"};
	this.rtwnameHashMap["<Root>/Output1"] = {sid: "Factorial_using_for_loop:25"};
	this.sidHashMap["Factorial_using_for_loop:25"] = {rtwname: "<Root>/Output1"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "Factorial_using_for_loop:12"};
	this.sidHashMap["Factorial_using_for_loop:12"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Constant2"] = {sid: "Factorial_using_for_loop:21"};
	this.sidHashMap["Factorial_using_for_loop:21"] = {rtwname: "<S1>/Constant2"};
	this.rtwnameHashMap["<S1>/Delay"] = {sid: "Factorial_using_for_loop:20"};
	this.sidHashMap["Factorial_using_for_loop:20"] = {rtwname: "<S1>/Delay"};
	this.rtwnameHashMap["<S1>/Divide"] = {sid: "Factorial_using_for_loop:18"};
	this.sidHashMap["Factorial_using_for_loop:18"] = {rtwname: "<S1>/Divide"};
	this.rtwnameHashMap["<S1>/For Iterator"] = {sid: "Factorial_using_for_loop:13"};
	this.sidHashMap["Factorial_using_for_loop:13"] = {rtwname: "<S1>/For Iterator"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "Factorial_using_for_loop:14"};
	this.sidHashMap["Factorial_using_for_loop:14"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S2>:1"] = {sid: "Factorial_using_for_loop:7:1"};
	this.sidHashMap["Factorial_using_for_loop:7:1"] = {rtwname: "<S2>:1"};
	this.rtwnameHashMap["<S2>:1:2"] = {sid: "Factorial_using_for_loop:7:1:2"};
	this.sidHashMap["Factorial_using_for_loop:7:1:2"] = {rtwname: "<S2>:1:2"};
	this.rtwnameHashMap["<S2>:1:3"] = {sid: "Factorial_using_for_loop:7:1:3"};
	this.sidHashMap["Factorial_using_for_loop:7:1:3"] = {rtwname: "<S2>:1:3"};
	this.rtwnameHashMap["<S2>:1:4"] = {sid: "Factorial_using_for_loop:7:1:4"};
	this.sidHashMap["Factorial_using_for_loop:7:1:4"] = {rtwname: "<S2>:1:4"};
	this.rtwnameHashMap["<S2>:1:5"] = {sid: "Factorial_using_for_loop:7:1:5"};
	this.sidHashMap["Factorial_using_for_loop:7:1:5"] = {rtwname: "<S2>:1:5"};
	this.rtwnameHashMap["<S2>:1:7"] = {sid: "Factorial_using_for_loop:7:1:7"};
	this.sidHashMap["Factorial_using_for_loop:7:1:7"] = {rtwname: "<S2>:1:7"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
