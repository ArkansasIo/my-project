# Internet Data Package — NDF Test Fixture

## Purpose
`internet_data_package.ndf` is a synthetic NDF draft fixture for describing HTTP/HTTPS request test cases and expected response properties.

## Safety and test behavior
- The fixture itself performs no network requests.
- `example.com` is used for stable illustrative GET tests.
- `httpbin.org` is an optional third-party echo endpoint; its availability is not guaranteed.
- Do not send credentials, tokens, private data, or destructive requests from automated tests.
- Treat expected status codes as assertions to verify when the test runner executes, not as guaranteed live facts.
- Apply timeouts, redirect limits, response-size caps, and host allowlists in any future runner.

## Fields
- `case_id`: unique test identifier.
- `protocol`, `method`, `host`, `path`: request description.
- `content_type`: expected/request content type metadata.
- `expected_status`, `expected_mime`, `expected_contains`: response assertions.
- `timeout_ms`: per-request timeout.
- `follow_redirects`: `0` or `1`.

## Current compatibility
This file uses the original NDF draft syntax (pipe-delimited key/value records and `[VALIDATION]`/`[STORAGE]` sections). It is a test fixture for the NDF concept; it is not directly compatible with the separate MDF 0.1 compiler without an adapter/parser update.
