/**
 * Autogenerated by Thrift Compiler (1.0.0-dev)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Paxos_TYPES_H
#define Paxos_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>





struct PaxosProposeStatus {
  enum type {
    PROMISE = 0,
    PROMISED_HIGHER_VERSION = 1,
    HAS_UNFINISHED_TRANSACTION = 2
  };
};

extern const std::map<int, const char*> _PaxosProposeStatus_VALUES_TO_NAMES;

struct PaxosAcceptStatus {
  enum type {
    ACCEPTED = 0,
    REJECTED = 1
  };
};

extern const std::map<int, const char*> _PaxosAcceptStatus_VALUES_TO_NAMES;

typedef struct _PaxosTransaction__isset {
  _PaxosTransaction__isset() : proposal(false), value(false) {}
  bool proposal;
  bool value;
} _PaxosTransaction__isset;

class PaxosTransaction {
 public:

  static const char* ascii_fingerprint; // = "727CAEA8265A5DE67DBC931F55CD8753";
  static const uint8_t binary_fingerprint[16]; // = {0x72,0x7C,0xAE,0xA8,0x26,0x5A,0x5D,0xE6,0x7D,0xBC,0x93,0x1F,0x55,0xCD,0x87,0x53};

  PaxosTransaction() : proposal(0), value() {
  }

  virtual ~PaxosTransaction() throw() {}

  int64_t proposal;
  std::string value;

  _PaxosTransaction__isset __isset;

  void __set_proposal(const int64_t val) {
    proposal = val;
  }

  void __set_value(const std::string& val) {
    value = val;
  }

  bool operator == (const PaxosTransaction & rhs) const
  {
    if (!(proposal == rhs.proposal))
      return false;
    if (!(value == rhs.value))
      return false;
    return true;
  }
  bool operator != (const PaxosTransaction &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const PaxosTransaction & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(PaxosTransaction &a, PaxosTransaction &b);

typedef struct _PaxosProposeArgs__isset {
  _PaxosProposeArgs__isset() : proposal(false) {}
  bool proposal;
} _PaxosProposeArgs__isset;

class PaxosProposeArgs {
 public:

  static const char* ascii_fingerprint; // = "56A59CE7FFAF82BCA8A19FAACDE4FB75";
  static const uint8_t binary_fingerprint[16]; // = {0x56,0xA5,0x9C,0xE7,0xFF,0xAF,0x82,0xBC,0xA8,0xA1,0x9F,0xAA,0xCD,0xE4,0xFB,0x75};

  PaxosProposeArgs() : proposal(0) {
  }

  virtual ~PaxosProposeArgs() throw() {}

  int64_t proposal;

  _PaxosProposeArgs__isset __isset;

  void __set_proposal(const int64_t val) {
    proposal = val;
  }

  bool operator == (const PaxosProposeArgs & rhs) const
  {
    if (!(proposal == rhs.proposal))
      return false;
    return true;
  }
  bool operator != (const PaxosProposeArgs &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const PaxosProposeArgs & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(PaxosProposeArgs &a, PaxosProposeArgs &b);

typedef struct _PaxosProposeResult__isset {
  _PaxosProposeResult__isset() : status(false), higherProposal(false), pendingTxn(false) {}
  bool status;
  bool higherProposal;
  bool pendingTxn;
} _PaxosProposeResult__isset;

class PaxosProposeResult {
 public:

  static const char* ascii_fingerprint; // = "F74CD25D6C6E498255364411DF922AB6";
  static const uint8_t binary_fingerprint[16]; // = {0xF7,0x4C,0xD2,0x5D,0x6C,0x6E,0x49,0x82,0x55,0x36,0x44,0x11,0xDF,0x92,0x2A,0xB6};

  PaxosProposeResult() : status((PaxosProposeStatus::type)0), higherProposal(0) {
  }

  virtual ~PaxosProposeResult() throw() {}

  PaxosProposeStatus::type status;
  int64_t higherProposal;
  PaxosTransaction pendingTxn;

  _PaxosProposeResult__isset __isset;

  void __set_status(const PaxosProposeStatus::type val) {
    status = val;
  }

  void __set_higherProposal(const int64_t val) {
    higherProposal = val;
    __isset.higherProposal = true;
  }

  void __set_pendingTxn(const PaxosTransaction& val) {
    pendingTxn = val;
    __isset.pendingTxn = true;
  }

  bool operator == (const PaxosProposeResult & rhs) const
  {
    if (!(status == rhs.status))
      return false;
    if (__isset.higherProposal != rhs.__isset.higherProposal)
      return false;
    else if (__isset.higherProposal && !(higherProposal == rhs.higherProposal))
      return false;
    if (__isset.pendingTxn != rhs.__isset.pendingTxn)
      return false;
    else if (__isset.pendingTxn && !(pendingTxn == rhs.pendingTxn))
      return false;
    return true;
  }
  bool operator != (const PaxosProposeResult &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const PaxosProposeResult & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(PaxosProposeResult &a, PaxosProposeResult &b);

typedef struct _PaxosAcceptArgs__isset {
  _PaxosAcceptArgs__isset() : txn(false) {}
  bool txn;
} _PaxosAcceptArgs__isset;

class PaxosAcceptArgs {
 public:

  static const char* ascii_fingerprint; // = "E7AEB48427C123903547CCDEAAD05614";
  static const uint8_t binary_fingerprint[16]; // = {0xE7,0xAE,0xB4,0x84,0x27,0xC1,0x23,0x90,0x35,0x47,0xCC,0xDE,0xAA,0xD0,0x56,0x14};

  PaxosAcceptArgs() {
  }

  virtual ~PaxosAcceptArgs() throw() {}

  PaxosTransaction txn;

  _PaxosAcceptArgs__isset __isset;

  void __set_txn(const PaxosTransaction& val) {
    txn = val;
  }

  bool operator == (const PaxosAcceptArgs & rhs) const
  {
    if (!(txn == rhs.txn))
      return false;
    return true;
  }
  bool operator != (const PaxosAcceptArgs &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const PaxosAcceptArgs & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(PaxosAcceptArgs &a, PaxosAcceptArgs &b);

typedef struct _PaxosAcceptResult__isset {
  _PaxosAcceptResult__isset() : status(false) {}
  bool status;
} _PaxosAcceptResult__isset;

class PaxosAcceptResult {
 public:

  static const char* ascii_fingerprint; // = "8BBB3D0C3B370CB38F2D1340BB79F0AA";
  static const uint8_t binary_fingerprint[16]; // = {0x8B,0xBB,0x3D,0x0C,0x3B,0x37,0x0C,0xB3,0x8F,0x2D,0x13,0x40,0xBB,0x79,0xF0,0xAA};

  PaxosAcceptResult() : status((PaxosAcceptStatus::type)0) {
  }

  virtual ~PaxosAcceptResult() throw() {}

  PaxosAcceptStatus::type status;

  _PaxosAcceptResult__isset __isset;

  void __set_status(const PaxosAcceptStatus::type val) {
    status = val;
  }

  bool operator == (const PaxosAcceptResult & rhs) const
  {
    if (!(status == rhs.status))
      return false;
    return true;
  }
  bool operator != (const PaxosAcceptResult &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const PaxosAcceptResult & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(PaxosAcceptResult &a, PaxosAcceptResult &b);



#endif
