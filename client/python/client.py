
from bravado.requests_client import RequestsClient
from authentication import APIKeyAuthenticator
from bravado.client import SwaggerClient as UpbitClient


HOST = "https://api.upbit.com"
SPEC_URI = "https://raw.githubusercontent.com/uJhin/upbit-client/main/mapper/swg_mapper.json"


def Upbit(access_key: str = None, secret_key: str = None, **kwargs) -> UpbitClient:
    """
    Upbit Client
    Please read the official package document.
    package documents:

    - Base URL: https://api.upbit.com
    - Base Path: /v1
    - Upbit OPEN API Version: 1.1.6
    - Author: ujhin
    - Email: ujhin942@gmail.com
    - GitHub: https://github.com/uJhin
    - Official OPEN API Documents: https://docs.upbit.com
    - Official Support Email: open-api@upbit.com
    """

    arg_config = kwargs.get('config')
    arg_spec_uri = kwargs.get('spec_uri')
    config = {
        'also_return_response': True,
        'validate_responses': False,
        'use_models': False,
        'host': HOST
    } if not arg_config else arg_config
    spec_uri = SPEC_URI if not arg_spec_uri else arg_spec_uri

    if access_key and secret_key:

        request_client = RequestsClient()
        request_client.authenticator = APIKeyAuthenticator(
            config['host'], access_key, secret_key)

        return UpbitClient.from_url(
            spec_url=spec_uri, http_client=request_client, config=config)
    else:

        return UpbitClient.from_url(spec_url=spec_uri, config=config)