function getHoursMinutesSeconds(seconds) {
    if (seconds < 3600) {
        return new Date(seconds * 1000).toISOString().substring(14, 19);
    }
    else {
        return new Date(seconds * 1000).toISOString().substring(11, 19);
    }
}
console.log(getHoursMinutesSeconds(2543));
