function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["topic4.c:55c25"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["topic4.c:54"]=1;
    this.lineTraceFlag["topic4.c:55"]=1;
    this.lineTraceFlag["topic4.c:56"]=1;
    this.lineTraceFlag["topic4.c:57"]=1;
    this.lineTraceFlag["topic4.c:60"]=1;
    this.lineTraceFlag["topic4.h:38"]=1;
    this.lineTraceFlag["topic4.h:39"]=1;
    this.lineTraceFlag["topic4.h:40"]=1;
    this.lineTraceFlag["topic4.h:41"]=1;
    this.lineTraceFlag["topic4.h:46"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
