/*
 * Upbit Open API
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.0.0
 * Contact: ujhin942@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 *
 * Swagger Codegen version: 2.4.18
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD.
    define(['expect.js', '../../src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require('../../src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.UpbitOpenApi);
  }
}(this, function(expect, UpbitOpenApi) {
  'use strict';

  var instance;

  describe('(package)', function() {
    describe('Wallet', function() {
      beforeEach(function() {
        instance = new UpbitOpenApi.Wallet();
      });

      it('should create an instance of Wallet', function() {
        // TODO: update the code to test Wallet
        expect(instance).to.be.a(UpbitOpenApi.Wallet);
      });

      it('should have the property currency (base name: "currency")', function() {
        // TODO: update the code to test the property currency
        expect(instance).to.have.property('currency');
        // expect(instance.currency).to.be(expectedValueLiteral);
      });

      it('should have the property walletState (base name: "wallet_state")', function() {
        // TODO: update the code to test the property walletState
        expect(instance).to.have.property('walletState');
        // expect(instance.walletState).to.be(expectedValueLiteral);
      });

      it('should have the property blockState (base name: "block_state")', function() {
        // TODO: update the code to test the property blockState
        expect(instance).to.have.property('blockState');
        // expect(instance.blockState).to.be(expectedValueLiteral);
      });

      it('should have the property blockHeight (base name: "block_height")', function() {
        // TODO: update the code to test the property blockHeight
        expect(instance).to.have.property('blockHeight');
        // expect(instance.blockHeight).to.be(expectedValueLiteral);
      });

      it('should have the property blockUpdatedAt (base name: "block_updated_at")', function() {
        // TODO: update the code to test the property blockUpdatedAt
        expect(instance).to.have.property('blockUpdatedAt');
        // expect(instance.blockUpdatedAt).to.be(expectedValueLiteral);
      });

    });
  });

}));
