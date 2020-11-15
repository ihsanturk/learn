from datetime import datetime, timezone

t = { # example date string
	"datestamp": '2015-03-11',
	"timestamp": '12:07:58',
	"timezone": '+0300'
}

mydate = f"{t['datestamp']} {t['timestamp']} {t['timezone']}"

formatter = '%Y-%m-%d %H:%M:%S %z'
format_wo_timezone = '%Y-%m-%d %H:%M:%S'

now = lambda: datetime.now(timezone.utc)
print(f'now: {now()}')

print(datetime(2000, 1, 1, 0, 0, 0)) # this is UTC by default

dateobject = datetime.strptime(mydate, formatter)
print(dateobject)

dateobject_as_utc = dateobject.astimezone(tz=timezone.utc)
print(dateobject_as_utc)

dateobject_as_utc_wo_timezone = dateobject_as_utc.strftime(format_wo_timezone)
print(dateobject_as_utc_wo_timezone)

# print(dateobject.timetuple())
# print(dateobject_as_utc.timetuple())

# # datetime object methods
# methods = [m for m in dir(dateobject) if not m.startswith('_')]
# print(methods)

'astimezone'
'combine'
'ctime'
'date'
'day'
'dst'
'fold'
'fromisocalendar'
'fromisoformat'
'fromordinal'
'fromtimestamp'
'hour'
'isocalendar'
'isoformat'
'isoweekday'
'max'
'microsecond'
'min'
'minute'
'month'
'now'
'replace'
'resolution'
'second'
'strftime'
'strptime'
'time'
'timestamp'
'timetuple'
'timetz'
'today'
'toordinal'
'tzinfo'
'tzname'
'utcfromtimestamp'
'utcnow'
'utcoffset'
'utctimetuple'
'weekday'
'year'
