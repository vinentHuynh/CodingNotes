// instead of logging at each if else block, we can log the message at the end of the if else block
// useful in larger if else blocks to reduce lines
let logMessage = "default log";

if ('condition') {
    logMessage = "true condition log";
}
else if('condition2') {
    logMessage = "false condition log";
}

console.log(logMessage);
