def timeConversion(s):
    # Write your code here
    hours, minutes, seconds = map(int, s[:-2].split(":"))
    meridian = s[-2:]

    if meridian == "PM" and hours != 12:
        hours += 12
    elif meridian == "AM" and hours == 12:
        hours = 0

    return f"{hours:02d}:{minutes:02d}:{seconds:02d}"