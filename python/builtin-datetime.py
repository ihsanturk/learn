from datetime import datetime

t = {
	"datestamp": '2015-03-11',
	"timestamp": '12:07:58',
	"timezone": '+0300'
}

formatter = '%Y-%m-%d %H:%M:%S %z'

d = f"{t['datestamp']} {t['timestamp']} {t['timezone']}"
# print(dir(datetime.strptime(d, formatter)))
# print(datetime.strptime(d, formatter).utctimetuple())

print(datetime.strptime(d, formatter))

