function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["task2.c:69c37"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["task2.c:69"]=1;
    this.lineTraceFlag["task2.c:73"]=1;
    this.lineTraceFlag["task2.c:76"]=1;
    this.lineTraceFlag["task2.c:81"]=1;
    this.lineTraceFlag["task2.c:84"]=1;
    this.lineTraceFlag["task2.c:102"]=1;
    this.lineTraceFlag["task2.h:45"]=1;
    this.lineTraceFlag["task2.h:50"]=1;
    this.lineTraceFlag["task2.h:55"]=1;
    this.lineTraceFlag["task2.h:60"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
