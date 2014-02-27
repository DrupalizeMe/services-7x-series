# DrupalSquare API Documenation.

## Get the checked in status

Lookup the current checked in status for the given user.

**GET** : api/v1/drupalsquare/:uid

- uid: (int) required
  The user id of the account to retrieve the checked in status for.

Example request:

`curl http://example.com/api/v1/drupalsquare/1 -H "Accept: application/json"`

Example response:

````
{
  "uid":"1",
  "name":"admin",
  "last_checkin":1393517016
}
````

## Set the checked in status

Set the checked in status for the specified user.

**POST** : api/v1/drupalsquare

- uid: (int) The user id to set checked in status for.
- date: (int) An optional unix timestamp representing the date to set as last checked in. If excluded will default to the current date and time.

Example request:

`curl http://example.com/api/v1/drupalsquare/checkin -X POST -H "Content-type: application/json" -H "Accept: application/json" -d '{"uid":1}'`

Example response:

````
TRUE
````












