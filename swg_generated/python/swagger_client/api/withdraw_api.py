# coding: utf-8

"""
    Upbit Open API

    ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com]   # noqa: E501

    OpenAPI spec version: 1.0.0
    Contact: ujhin942@gmail.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from __future__ import absolute_import

import re  # noqa: F401

# python 2 and python 3 compatibility library
import six

from swagger_client.api_client import ApiClient


class WithdrawApi(object):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    Ref: https://github.com/swagger-api/swagger-codegen
    """

    def __init__(self, api_client=None):
        if api_client is None:
            api_client = ApiClient()
        self.api_client = api_client

    def withdraw_chance(self, currency, **kwargs):  # noqa: E501
        """출금 가능 정보  # noqa: E501

        ## 해당 통화의 가능한 출금 정보를 확인한다.   # noqa: E501
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please pass async_req=True
        >>> thread = api.withdraw_chance(currency, async_req=True)
        >>> result = thread.get()

        :param async_req bool
        :param str currency: Currency Symbol  (required)
        :return: WithdrawChance
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('async_req'):
            return self.withdraw_chance_with_http_info(currency, **kwargs)  # noqa: E501
        else:
            (data) = self.withdraw_chance_with_http_info(currency, **kwargs)  # noqa: E501
            return data

    def withdraw_chance_with_http_info(self, currency, **kwargs):  # noqa: E501
        """출금 가능 정보  # noqa: E501

        ## 해당 통화의 가능한 출금 정보를 확인한다.   # noqa: E501
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please pass async_req=True
        >>> thread = api.withdraw_chance_with_http_info(currency, async_req=True)
        >>> result = thread.get()

        :param async_req bool
        :param str currency: Currency Symbol  (required)
        :return: WithdrawChance
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['currency']  # noqa: E501
        all_params.append('async_req')
        all_params.append('_return_http_data_only')
        all_params.append('_preload_content')
        all_params.append('_request_timeout')

        params = locals()
        for key, val in six.iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method withdraw_chance" % key
                )
            params[key] = val
        del params['kwargs']
        # verify the required parameter 'currency' is set
        if ('currency' not in params or
                params['currency'] is None):
            raise ValueError("Missing the required parameter `currency` when calling `withdraw_chance`")  # noqa: E501

        collection_formats = {}

        path_params = {}

        query_params = []
        if 'currency' in params:
            query_params.append(('currency', params['currency']))  # noqa: E501

        header_params = {}

        form_params = []
        local_var_files = {}

        body_params = None
        # HTTP header `Accept`
        header_params['Accept'] = self.api_client.select_header_accept(
            ['application/json'])  # noqa: E501

        # Authentication setting
        auth_settings = ['Bearer']  # noqa: E501

        return self.api_client.call_api(
            '/withdraws/chance', 'GET',
            path_params,
            query_params,
            header_params,
            body=body_params,
            post_params=form_params,
            files=local_var_files,
            response_type='WithdrawChance',  # noqa: E501
            auth_settings=auth_settings,
            async_req=params.get('async_req'),
            _return_http_data_only=params.get('_return_http_data_only'),
            _preload_content=params.get('_preload_content', True),
            _request_timeout=params.get('_request_timeout'),
            collection_formats=collection_formats)

    def withdraw_coin(self, currency, amount, address, **kwargs):  # noqa: E501
        """코인 출금하기  # noqa: E501

        ## 코인 출금을 요청한다.  **NOTE**: 바로출금 이용 시 유의사항  업비트 회원의 주소가 아닌 주소로 바로출금을 요청하는 경우, 출금이 정상적으로 수행되지 않습니다. 반드시 주소를 확인 후 출금을 진행하시기 바랍니다.   # noqa: E501
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please pass async_req=True
        >>> thread = api.withdraw_coin(currency, amount, address, async_req=True)
        >>> result = thread.get()

        :param async_req bool
        :param str currency: Currency 코드  (required)
        :param str amount: 출금 수량  (required)
        :param str address: 출금 가능 주소에 등록된 출금 주소  (required)
        :param str secondary_address: 2차 출금 주소 (필요한 코인에 한해서) 
        :param str transaction_type: 출금 유형 - default : 일반출금 - internal : 바로출금 
        :return: WithdrawCoin
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('async_req'):
            return self.withdraw_coin_with_http_info(currency, amount, address, **kwargs)  # noqa: E501
        else:
            (data) = self.withdraw_coin_with_http_info(currency, amount, address, **kwargs)  # noqa: E501
            return data

    def withdraw_coin_with_http_info(self, currency, amount, address, **kwargs):  # noqa: E501
        """코인 출금하기  # noqa: E501

        ## 코인 출금을 요청한다.  **NOTE**: 바로출금 이용 시 유의사항  업비트 회원의 주소가 아닌 주소로 바로출금을 요청하는 경우, 출금이 정상적으로 수행되지 않습니다. 반드시 주소를 확인 후 출금을 진행하시기 바랍니다.   # noqa: E501
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please pass async_req=True
        >>> thread = api.withdraw_coin_with_http_info(currency, amount, address, async_req=True)
        >>> result = thread.get()

        :param async_req bool
        :param str currency: Currency 코드  (required)
        :param str amount: 출금 수량  (required)
        :param str address: 출금 가능 주소에 등록된 출금 주소  (required)
        :param str secondary_address: 2차 출금 주소 (필요한 코인에 한해서) 
        :param str transaction_type: 출금 유형 - default : 일반출금 - internal : 바로출금 
        :return: WithdrawCoin
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['currency', 'amount', 'address', 'secondary_address', 'transaction_type']  # noqa: E501
        all_params.append('async_req')
        all_params.append('_return_http_data_only')
        all_params.append('_preload_content')
        all_params.append('_request_timeout')

        params = locals()
        for key, val in six.iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method withdraw_coin" % key
                )
            params[key] = val
        del params['kwargs']
        # verify the required parameter 'currency' is set
        if ('currency' not in params or
                params['currency'] is None):
            raise ValueError("Missing the required parameter `currency` when calling `withdraw_coin`")  # noqa: E501
        # verify the required parameter 'amount' is set
        if ('amount' not in params or
                params['amount'] is None):
            raise ValueError("Missing the required parameter `amount` when calling `withdraw_coin`")  # noqa: E501
        # verify the required parameter 'address' is set
        if ('address' not in params or
                params['address'] is None):
            raise ValueError("Missing the required parameter `address` when calling `withdraw_coin`")  # noqa: E501

        collection_formats = {}

        path_params = {}

        query_params = []

        header_params = {}

        form_params = []
        local_var_files = {}
        if 'currency' in params:
            form_params.append(('currency', params['currency']))  # noqa: E501
        if 'amount' in params:
            form_params.append(('amount', params['amount']))  # noqa: E501
        if 'address' in params:
            form_params.append(('address', params['address']))  # noqa: E501
        if 'secondary_address' in params:
            form_params.append(('secondary_address', params['secondary_address']))  # noqa: E501
        if 'transaction_type' in params:
            form_params.append(('transaction_type', params['transaction_type']))  # noqa: E501

        body_params = None
        # HTTP header `Accept`
        header_params['Accept'] = self.api_client.select_header_accept(
            ['application/json'])  # noqa: E501

        # HTTP header `Content-Type`
        header_params['Content-Type'] = self.api_client.select_header_content_type(  # noqa: E501
            ['multipart/form-data'])  # noqa: E501

        # Authentication setting
        auth_settings = ['Bearer']  # noqa: E501

        return self.api_client.call_api(
            '/withdraws/coin', 'POST',
            path_params,
            query_params,
            header_params,
            body=body_params,
            post_params=form_params,
            files=local_var_files,
            response_type='WithdrawCoin',  # noqa: E501
            auth_settings=auth_settings,
            async_req=params.get('async_req'),
            _return_http_data_only=params.get('_return_http_data_only'),
            _preload_content=params.get('_preload_content', True),
            _request_timeout=params.get('_request_timeout'),
            collection_formats=collection_formats)

    def withdraw_info(self, **kwargs):  # noqa: E501
        """개별 출금 조회  # noqa: E501

        ## 출금 UUID를 통해 개별 출금 정보를 조회한다.   # noqa: E501
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please pass async_req=True
        >>> thread = api.withdraw_info(async_req=True)
        >>> result = thread.get()

        :param async_req bool
        :param str uuid: 출금 UUID 
        :param str txid: 출금 TXID 
        :param str currency: Currency 코드 
        :return: Withdraw
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('async_req'):
            return self.withdraw_info_with_http_info(**kwargs)  # noqa: E501
        else:
            (data) = self.withdraw_info_with_http_info(**kwargs)  # noqa: E501
            return data

    def withdraw_info_with_http_info(self, **kwargs):  # noqa: E501
        """개별 출금 조회  # noqa: E501

        ## 출금 UUID를 통해 개별 출금 정보를 조회한다.   # noqa: E501
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please pass async_req=True
        >>> thread = api.withdraw_info_with_http_info(async_req=True)
        >>> result = thread.get()

        :param async_req bool
        :param str uuid: 출금 UUID 
        :param str txid: 출금 TXID 
        :param str currency: Currency 코드 
        :return: Withdraw
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['uuid', 'txid', 'currency']  # noqa: E501
        all_params.append('async_req')
        all_params.append('_return_http_data_only')
        all_params.append('_preload_content')
        all_params.append('_request_timeout')

        params = locals()
        for key, val in six.iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method withdraw_info" % key
                )
            params[key] = val
        del params['kwargs']

        collection_formats = {}

        path_params = {}

        query_params = []
        if 'uuid' in params:
            query_params.append(('uuid', params['uuid']))  # noqa: E501
        if 'txid' in params:
            query_params.append(('txid', params['txid']))  # noqa: E501
        if 'currency' in params:
            query_params.append(('currency', params['currency']))  # noqa: E501

        header_params = {}

        form_params = []
        local_var_files = {}

        body_params = None
        # HTTP header `Accept`
        header_params['Accept'] = self.api_client.select_header_accept(
            ['application/json'])  # noqa: E501

        # Authentication setting
        auth_settings = ['Bearer']  # noqa: E501

        return self.api_client.call_api(
            '/withdraw', 'GET',
            path_params,
            query_params,
            header_params,
            body=body_params,
            post_params=form_params,
            files=local_var_files,
            response_type='Withdraw',  # noqa: E501
            auth_settings=auth_settings,
            async_req=params.get('async_req'),
            _return_http_data_only=params.get('_return_http_data_only'),
            _preload_content=params.get('_preload_content', True),
            _request_timeout=params.get('_request_timeout'),
            collection_formats=collection_formats)

    def withdraw_info_all(self, **kwargs):  # noqa: E501
        """출금 리스트 조회  # noqa: E501

        ## 출금 리스트를 조회한다.   # noqa: E501
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please pass async_req=True
        >>> thread = api.withdraw_info_all(async_req=True)
        >>> result = thread.get()

        :param async_req bool
        :param str currency: Currency 코드 
        :param str state: 출금 상태 - submitting : 처리 중 - submitted : 처리 완료 - almost_accepted : 출금대기중 - rejected : 거부 - accepted : 승인됨 - processing : 처리 중 - done : 완료 - canceled : 취소됨 
        :param list[str] uuids: 출금 UUID의 목록 
        :param list[str] txids: 출금 TXID의 목록 
        :param float limit: 개수 제한 (default: 100, max: 100) 
        :param float page: 페이지 수, default: 1 
        :param str order_by: 정렬 방식 - asc : 오름차순 - desc : 내림차순 (default) 
        :return: list[Withdraw]
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('async_req'):
            return self.withdraw_info_all_with_http_info(**kwargs)  # noqa: E501
        else:
            (data) = self.withdraw_info_all_with_http_info(**kwargs)  # noqa: E501
            return data

    def withdraw_info_all_with_http_info(self, **kwargs):  # noqa: E501
        """출금 리스트 조회  # noqa: E501

        ## 출금 리스트를 조회한다.   # noqa: E501
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please pass async_req=True
        >>> thread = api.withdraw_info_all_with_http_info(async_req=True)
        >>> result = thread.get()

        :param async_req bool
        :param str currency: Currency 코드 
        :param str state: 출금 상태 - submitting : 처리 중 - submitted : 처리 완료 - almost_accepted : 출금대기중 - rejected : 거부 - accepted : 승인됨 - processing : 처리 중 - done : 완료 - canceled : 취소됨 
        :param list[str] uuids: 출금 UUID의 목록 
        :param list[str] txids: 출금 TXID의 목록 
        :param float limit: 개수 제한 (default: 100, max: 100) 
        :param float page: 페이지 수, default: 1 
        :param str order_by: 정렬 방식 - asc : 오름차순 - desc : 내림차순 (default) 
        :return: list[Withdraw]
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['currency', 'state', 'uuids', 'txids', 'limit', 'page', 'order_by']  # noqa: E501
        all_params.append('async_req')
        all_params.append('_return_http_data_only')
        all_params.append('_preload_content')
        all_params.append('_request_timeout')

        params = locals()
        for key, val in six.iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method withdraw_info_all" % key
                )
            params[key] = val
        del params['kwargs']

        collection_formats = {}

        path_params = {}

        query_params = []
        if 'currency' in params:
            query_params.append(('currency', params['currency']))  # noqa: E501
        if 'state' in params:
            query_params.append(('state', params['state']))  # noqa: E501
        if 'uuids' in params:
            query_params.append(('uuids', params['uuids']))  # noqa: E501
            collection_formats['uuids'] = 'multi'  # noqa: E501
        if 'txids' in params:
            query_params.append(('txids', params['txids']))  # noqa: E501
            collection_formats['txids'] = 'multi'  # noqa: E501
        if 'limit' in params:
            query_params.append(('limit', params['limit']))  # noqa: E501
        if 'page' in params:
            query_params.append(('page', params['page']))  # noqa: E501
        if 'order_by' in params:
            query_params.append(('order_by', params['order_by']))  # noqa: E501

        header_params = {}

        form_params = []
        local_var_files = {}

        body_params = None
        # HTTP header `Accept`
        header_params['Accept'] = self.api_client.select_header_accept(
            ['application/json'])  # noqa: E501

        # Authentication setting
        auth_settings = ['Bearer']  # noqa: E501

        return self.api_client.call_api(
            '/withdraws', 'GET',
            path_params,
            query_params,
            header_params,
            body=body_params,
            post_params=form_params,
            files=local_var_files,
            response_type='list[Withdraw]',  # noqa: E501
            auth_settings=auth_settings,
            async_req=params.get('async_req'),
            _return_http_data_only=params.get('_return_http_data_only'),
            _preload_content=params.get('_preload_content', True),
            _request_timeout=params.get('_request_timeout'),
            collection_formats=collection_formats)

    def withdraw_krw(self, amount, **kwargs):  # noqa: E501
        """원화 출금하기  # noqa: E501

        ## 원화 출금을 요청한다. 등록된 출금 계좌로 출금된다.   # noqa: E501
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please pass async_req=True
        >>> thread = api.withdraw_krw(amount, async_req=True)
        >>> result = thread.get()

        :param async_req bool
        :param str amount: 출금 원화 수량  (required)
        :return: Withdraw
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('async_req'):
            return self.withdraw_krw_with_http_info(amount, **kwargs)  # noqa: E501
        else:
            (data) = self.withdraw_krw_with_http_info(amount, **kwargs)  # noqa: E501
            return data

    def withdraw_krw_with_http_info(self, amount, **kwargs):  # noqa: E501
        """원화 출금하기  # noqa: E501

        ## 원화 출금을 요청한다. 등록된 출금 계좌로 출금된다.   # noqa: E501
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please pass async_req=True
        >>> thread = api.withdraw_krw_with_http_info(amount, async_req=True)
        >>> result = thread.get()

        :param async_req bool
        :param str amount: 출금 원화 수량  (required)
        :return: Withdraw
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['amount']  # noqa: E501
        all_params.append('async_req')
        all_params.append('_return_http_data_only')
        all_params.append('_preload_content')
        all_params.append('_request_timeout')

        params = locals()
        for key, val in six.iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method withdraw_krw" % key
                )
            params[key] = val
        del params['kwargs']
        # verify the required parameter 'amount' is set
        if ('amount' not in params or
                params['amount'] is None):
            raise ValueError("Missing the required parameter `amount` when calling `withdraw_krw`")  # noqa: E501

        collection_formats = {}

        path_params = {}

        query_params = []

        header_params = {}

        form_params = []
        local_var_files = {}
        if 'amount' in params:
            form_params.append(('amount', params['amount']))  # noqa: E501

        body_params = None
        # HTTP header `Accept`
        header_params['Accept'] = self.api_client.select_header_accept(
            ['application/json'])  # noqa: E501

        # HTTP header `Content-Type`
        header_params['Content-Type'] = self.api_client.select_header_content_type(  # noqa: E501
            ['multipart/form-data'])  # noqa: E501

        # Authentication setting
        auth_settings = ['Bearer']  # noqa: E501

        return self.api_client.call_api(
            '/withdraws/krw', 'POST',
            path_params,
            query_params,
            header_params,
            body=body_params,
            post_params=form_params,
            files=local_var_files,
            response_type='Withdraw',  # noqa: E501
            auth_settings=auth_settings,
            async_req=params.get('async_req'),
            _return_http_data_only=params.get('_return_http_data_only'),
            _preload_content=params.get('_preload_content', True),
            _request_timeout=params.get('_request_timeout'),
            collection_formats=collection_formats)
