function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["AverageCalculator.c:38c23"]=1;
    this.traceFlag["AverageCalculator.c:39c23"]=1;
    this.traceFlag["AverageCalculator.c:40c23"]=1;
    this.traceFlag["AverageCalculator.c:51c47"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["AverageCalculator.c:38"]=1;
    this.lineTraceFlag["AverageCalculator.c:39"]=1;
    this.lineTraceFlag["AverageCalculator.c:40"]=1;
    this.lineTraceFlag["AverageCalculator.c:51"]=1;
    this.lineTraceFlag["AverageCalculator.h:38"]=1;
    this.lineTraceFlag["AverageCalculator.h:43"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
