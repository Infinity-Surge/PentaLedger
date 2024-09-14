#!/bin/bash
#
# Each of these requests should result in some kind of error


curl -i -H "Host: こんにちは"  http://localhost:4000/v1/healthcheck

curl -i localhost:4000/foo

curl -i localhost:4000/v1/company/abc

curl -i -X PUT localhost:4000/v1/healthcheck
