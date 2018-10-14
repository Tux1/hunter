.. spelling::

  cctz
  Datetime

Datetime
--------

 - :ref:`pkg.cctz` - library for translating between absolute and civil times using the rules of a time zone
 - :ref:`pkg.date` - library adding some new duration types, and new time_point types. It also adds "field" types such as year_month_day which is a struct {year, month, day}. And it provides convenient means to convert between the "field" types and the time_point types. It is also a complete parser of the IANA timezone database. It provides for an easy way to access all of the data in this database, using the types from `"date.h"` and `<chrono>`. The IANA database also includes data on leap seconds, and this library provides utilities to compute with that information as well.

