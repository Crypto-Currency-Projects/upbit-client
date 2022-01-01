# coding: utf-8

"""
    Upbit Open API

    ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com]   # noqa: E501

    OpenAPI spec version: 1.0.0
    Contact: ujhin942@gmail.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


import pprint
import re  # noqa: F401

import six


class DepositCompleteResponse(object):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        'currency': 'str',
        'deposit_address': 'str',
        'secondary_address': 'str'
    }

    attribute_map = {
        'currency': 'currency',
        'deposit_address': 'deposit_address',
        'secondary_address': 'secondary_address'
    }

    def __init__(self, currency=None, deposit_address=None, secondary_address=None):  # noqa: E501
        """DepositCompleteResponse - a model defined in Swagger"""  # noqa: E501

        self._currency = None
        self._deposit_address = None
        self._secondary_address = None
        self.discriminator = None

        if currency is not None:
            self.currency = currency
        if deposit_address is not None:
            self.deposit_address = deposit_address
        if secondary_address is not None:
            self.secondary_address = secondary_address

    @property
    def currency(self):
        """Gets the currency of this DepositCompleteResponse.  # noqa: E501

        화폐를 의미하는 영문 대문자 코드  # noqa: E501

        :return: The currency of this DepositCompleteResponse.  # noqa: E501
        :rtype: str
        """
        return self._currency

    @currency.setter
    def currency(self, currency):
        """Sets the currency of this DepositCompleteResponse.

        화폐를 의미하는 영문 대문자 코드  # noqa: E501

        :param currency: The currency of this DepositCompleteResponse.  # noqa: E501
        :type: str
        """

        self._currency = currency

    @property
    def deposit_address(self):
        """Gets the deposit_address of this DepositCompleteResponse.  # noqa: E501

        입금 주소  # noqa: E501

        :return: The deposit_address of this DepositCompleteResponse.  # noqa: E501
        :rtype: str
        """
        return self._deposit_address

    @deposit_address.setter
    def deposit_address(self, deposit_address):
        """Sets the deposit_address of this DepositCompleteResponse.

        입금 주소  # noqa: E501

        :param deposit_address: The deposit_address of this DepositCompleteResponse.  # noqa: E501
        :type: str
        """

        self._deposit_address = deposit_address

    @property
    def secondary_address(self):
        """Gets the secondary_address of this DepositCompleteResponse.  # noqa: E501

        2차 입금 주소  # noqa: E501

        :return: The secondary_address of this DepositCompleteResponse.  # noqa: E501
        :rtype: str
        """
        return self._secondary_address

    @secondary_address.setter
    def secondary_address(self, secondary_address):
        """Sets the secondary_address of this DepositCompleteResponse.

        2차 입금 주소  # noqa: E501

        :param secondary_address: The secondary_address of this DepositCompleteResponse.  # noqa: E501
        :type: str
        """

        self._secondary_address = secondary_address

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value
        if issubclass(DepositCompleteResponse, dict):
            for key, value in self.items():
                result[key] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, DepositCompleteResponse):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
