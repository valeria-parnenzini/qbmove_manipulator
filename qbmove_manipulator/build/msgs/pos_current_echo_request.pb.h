// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pos_current_echo_request.proto

#ifndef PROTOBUF_pos_5fcurrent_5fecho_5frequest_2eproto__INCLUDED
#define PROTOBUF_pos_5fcurrent_5fecho_5frequest_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace pos_current_echo_creator_msgs {
namespace msgs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_pos_5fcurrent_5fecho_5frequest_2eproto();
void protobuf_AssignDesc_pos_5fcurrent_5fecho_5frequest_2eproto();
void protobuf_ShutdownFile_pos_5fcurrent_5fecho_5frequest_2eproto();

class PosCurrentEchoRequest;

// ===================================================================

class PosCurrentEchoRequest : public ::google::protobuf::Message {
 public:
  PosCurrentEchoRequest();
  virtual ~PosCurrentEchoRequest();

  PosCurrentEchoRequest(const PosCurrentEchoRequest& from);

  inline PosCurrentEchoRequest& operator=(const PosCurrentEchoRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PosCurrentEchoRequest& default_instance();

  void Swap(PosCurrentEchoRequest* other);

  // implements Message ----------------------------------------------

  PosCurrentEchoRequest* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PosCurrentEchoRequest& from);
  void MergeFrom(const PosCurrentEchoRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required double pos_out_shaft = 1;
  inline bool has_pos_out_shaft() const;
  inline void clear_pos_out_shaft();
  static const int kPosOutShaftFieldNumber = 1;
  inline double pos_out_shaft() const;
  inline void set_pos_out_shaft(double value);

  // required double pos_mot_1 = 2;
  inline bool has_pos_mot_1() const;
  inline void clear_pos_mot_1();
  static const int kPosMot1FieldNumber = 2;
  inline double pos_mot_1() const;
  inline void set_pos_mot_1(double value);

  // required double pos_mot_2 = 3;
  inline bool has_pos_mot_2() const;
  inline void clear_pos_mot_2();
  static const int kPosMot2FieldNumber = 3;
  inline double pos_mot_2() const;
  inline void set_pos_mot_2(double value);

  // required double curr_mot_1 = 4;
  inline bool has_curr_mot_1() const;
  inline void clear_curr_mot_1();
  static const int kCurrMot1FieldNumber = 4;
  inline double curr_mot_1() const;
  inline void set_curr_mot_1(double value);

  // required double curr_mot_2 = 5;
  inline bool has_curr_mot_2() const;
  inline void clear_curr_mot_2();
  static const int kCurrMot2FieldNumber = 5;
  inline double curr_mot_2() const;
  inline void set_curr_mot_2(double value);

  // @@protoc_insertion_point(class_scope:pos_current_echo_creator_msgs.msgs.PosCurrentEchoRequest)
 private:
  inline void set_has_pos_out_shaft();
  inline void clear_has_pos_out_shaft();
  inline void set_has_pos_mot_1();
  inline void clear_has_pos_mot_1();
  inline void set_has_pos_mot_2();
  inline void clear_has_pos_mot_2();
  inline void set_has_curr_mot_1();
  inline void clear_has_curr_mot_1();
  inline void set_has_curr_mot_2();
  inline void clear_has_curr_mot_2();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  double pos_out_shaft_;
  double pos_mot_1_;
  double pos_mot_2_;
  double curr_mot_1_;
  double curr_mot_2_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_pos_5fcurrent_5fecho_5frequest_2eproto();
  friend void protobuf_AssignDesc_pos_5fcurrent_5fecho_5frequest_2eproto();
  friend void protobuf_ShutdownFile_pos_5fcurrent_5fecho_5frequest_2eproto();

  void InitAsDefaultInstance();
  static PosCurrentEchoRequest* default_instance_;
};
// ===================================================================


// ===================================================================

// PosCurrentEchoRequest

// required double pos_out_shaft = 1;
inline bool PosCurrentEchoRequest::has_pos_out_shaft() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PosCurrentEchoRequest::set_has_pos_out_shaft() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PosCurrentEchoRequest::clear_has_pos_out_shaft() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PosCurrentEchoRequest::clear_pos_out_shaft() {
  pos_out_shaft_ = 0;
  clear_has_pos_out_shaft();
}
inline double PosCurrentEchoRequest::pos_out_shaft() const {
  return pos_out_shaft_;
}
inline void PosCurrentEchoRequest::set_pos_out_shaft(double value) {
  set_has_pos_out_shaft();
  pos_out_shaft_ = value;
}

// required double pos_mot_1 = 2;
inline bool PosCurrentEchoRequest::has_pos_mot_1() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PosCurrentEchoRequest::set_has_pos_mot_1() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PosCurrentEchoRequest::clear_has_pos_mot_1() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PosCurrentEchoRequest::clear_pos_mot_1() {
  pos_mot_1_ = 0;
  clear_has_pos_mot_1();
}
inline double PosCurrentEchoRequest::pos_mot_1() const {
  return pos_mot_1_;
}
inline void PosCurrentEchoRequest::set_pos_mot_1(double value) {
  set_has_pos_mot_1();
  pos_mot_1_ = value;
}

// required double pos_mot_2 = 3;
inline bool PosCurrentEchoRequest::has_pos_mot_2() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PosCurrentEchoRequest::set_has_pos_mot_2() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PosCurrentEchoRequest::clear_has_pos_mot_2() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PosCurrentEchoRequest::clear_pos_mot_2() {
  pos_mot_2_ = 0;
  clear_has_pos_mot_2();
}
inline double PosCurrentEchoRequest::pos_mot_2() const {
  return pos_mot_2_;
}
inline void PosCurrentEchoRequest::set_pos_mot_2(double value) {
  set_has_pos_mot_2();
  pos_mot_2_ = value;
}

// required double curr_mot_1 = 4;
inline bool PosCurrentEchoRequest::has_curr_mot_1() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PosCurrentEchoRequest::set_has_curr_mot_1() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PosCurrentEchoRequest::clear_has_curr_mot_1() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PosCurrentEchoRequest::clear_curr_mot_1() {
  curr_mot_1_ = 0;
  clear_has_curr_mot_1();
}
inline double PosCurrentEchoRequest::curr_mot_1() const {
  return curr_mot_1_;
}
inline void PosCurrentEchoRequest::set_curr_mot_1(double value) {
  set_has_curr_mot_1();
  curr_mot_1_ = value;
}

// required double curr_mot_2 = 5;
inline bool PosCurrentEchoRequest::has_curr_mot_2() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void PosCurrentEchoRequest::set_has_curr_mot_2() {
  _has_bits_[0] |= 0x00000010u;
}
inline void PosCurrentEchoRequest::clear_has_curr_mot_2() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void PosCurrentEchoRequest::clear_curr_mot_2() {
  curr_mot_2_ = 0;
  clear_has_curr_mot_2();
}
inline double PosCurrentEchoRequest::curr_mot_2() const {
  return curr_mot_2_;
}
inline void PosCurrentEchoRequest::set_curr_mot_2(double value) {
  set_has_curr_mot_2();
  curr_mot_2_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace pos_current_echo_creator_msgs

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_pos_5fcurrent_5fecho_5frequest_2eproto__INCLUDED
