/**
 * Created by strawmanbobi
 * 2015-07-30
 */

// global inclusion
var orm = require('orm');
var dbOrm = require('../mini-poem/db/mysql/mysql_connection').mysqlDB;
var logger = require('../mini-poem/logging/logger4js').helper;

// local inclusion
var ErrorCode = require('../configuration/error_code');
var errorCode = new ErrorCode();

var Enums = require('../configuration/enums');
var enums = new Enums();

var IRProtocol = dbOrm.define('ir_protocol',
    {
        id: Number,
        name: String,
        type: Number,
        status: Number
    },
    {
        cache: false
    }
);

IRProtocol.createIRProtocol = function(protocol, callback) {
    var newProtocol = new IRProtocol({
        name: protocol.name,
        status: protocol.status,
        type: protocol.type
    });
    newProtocol.save(function(error, createdProtocol) {
        if(error) {
            logger.error('failed to create protocol : ' + error);
            callback(errorCode.FAILED, null);
        } else {
            logger.info('succeeded to create protocol');
            callback(errorCode.SUCCESS, createdProtocol);
        }
    });
};

IRProtocol.findIRProtocolByConditions = function(conditions, callback) {
    IRProtocol.find(conditions)
        .run(function (error, protocols) {
            if (error) {
                logger.error("find protocol error : " + error);
                callback(errorCode.FAILED, null);
            } else {
                logger.info("find protocol successfully, length of protocols = " + protocols.length);
                callback(errorCode.SUCCESS, protocols);
            }
        });
};

IRProtocol.listIRProtocols = function(conditions, from, count, sortField, callback) {
    if("id" == sortField && 0 != from) {
        conditions.id = orm.gt(from);
        IRProtocol.find(conditions).limit(parseInt(count)).orderRaw("?? ASC", [sortField])
            .run(function (listProtocolsErr, protocols) {
                if (listProtocolsErr) {
                    logger.error("list protocols error : " + listProtocolsErr);
                    callback(errorCode.FAILED, null);
                } else {
                    logger.info("list protocols successfully");
                    callback(errorCode.SUCCESS, protocols);
                }
            });
    } else {
        IRProtocol.find(conditions).limit(parseInt(count)).offset(parseInt(from)).orderRaw("?? ASC", [sortField])
            .run(function (listProtocolsErr, protocols) {
                if (listProtocolsErr) {
                    logger.error("list protocols error : " + listProtocolsErr);
                    callback(errorCode.FAILED, null);
                } else {
                    logger.info("list protocols successfully");
                    callback(errorCode.SUCCESS, protocols);
                }
            });
    }
};

IRProtocol.getIRProtocolByID = function(protocolID, callback) {
    IRProtocol.get(protocolID, function(error, protocol) {
        if (error) {
            logger.error("get protocol by ID error : " + error);
            callback(errorCode.FAILED, null);
        } else {
            logger.info("get protocol by ID successfully");
            callback(errorCode.SUCCESS, protocol);
        }
    });
};

module.exports = IRProtocol;