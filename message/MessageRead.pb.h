// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageRead.proto

#ifndef PROTOBUF_MessageRead_2eproto__INCLUDED
#define PROTOBUF_MessageRead_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_MessageRead_2eproto();
void protobuf_AssignDesc_MessageRead_2eproto();
void protobuf_ShutdownFile_MessageRead_2eproto();

class MessageRead;

// ===================================================================

class MessageRead : public ::google::protobuf::Message {
 public:
  MessageRead();
  virtual ~MessageRead();

  MessageRead(const MessageRead& from);

  inline MessageRead& operator=(const MessageRead& from) {
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
  static const MessageRead& default_instance();

  void Swap(MessageRead* other);

  // implements Message ----------------------------------------------

  MessageRead* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MessageRead& from);
  void MergeFrom(const MessageRead& from);
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

  // required string Token = 1;
  inline bool has_token() const;
  inline void clear_token();
  static const int kTokenFieldNumber = 1;
  inline const ::std::string& token() const;
  inline void set_token(const ::std::string& value);
  inline void set_token(const char* value);
  inline void set_token(const char* value, size_t size);
  inline ::std::string* mutable_token();
  inline ::std::string* release_token();
  inline void set_allocated_token(::std::string* token);

  // required int64 Offset = 2;
  inline bool has_offset() const;
  inline void clear_offset();
  static const int kOffsetFieldNumber = 2;
  inline ::google::protobuf::int64 offset() const;
  inline void set_offset(::google::protobuf::int64 value);

  // required int64 Size = 3;
  inline bool has_size() const;
  inline void clear_size();
  static const int kSizeFieldNumber = 3;
  inline ::google::protobuf::int64 size() const;
  inline void set_size(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:MessageRead)
 private:
  inline void set_has_token();
  inline void clear_has_token();
  inline void set_has_offset();
  inline void clear_has_offset();
  inline void set_has_size();
  inline void clear_has_size();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* token_;
  ::google::protobuf::int64 offset_;
  ::google::protobuf::int64 size_;
  friend void  protobuf_AddDesc_MessageRead_2eproto();
  friend void protobuf_AssignDesc_MessageRead_2eproto();
  friend void protobuf_ShutdownFile_MessageRead_2eproto();

  void InitAsDefaultInstance();
  static MessageRead* default_instance_;
};
// ===================================================================


// ===================================================================

// MessageRead

// required string Token = 1;
inline bool MessageRead::has_token() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MessageRead::set_has_token() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MessageRead::clear_has_token() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MessageRead::clear_token() {
  if (token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_->clear();
  }
  clear_has_token();
}
inline const ::std::string& MessageRead::token() const {
  // @@protoc_insertion_point(field_get:MessageRead.Token)
  return *token_;
}
inline void MessageRead::set_token(const ::std::string& value) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::std::string;
  }
  token_->assign(value);
  // @@protoc_insertion_point(field_set:MessageRead.Token)
}
inline void MessageRead::set_token(const char* value) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::std::string;
  }
  token_->assign(value);
  // @@protoc_insertion_point(field_set_char:MessageRead.Token)
}
inline void MessageRead::set_token(const char* value, size_t size) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::std::string;
  }
  token_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:MessageRead.Token)
}
inline ::std::string* MessageRead::mutable_token() {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:MessageRead.Token)
  return token_;
}
inline ::std::string* MessageRead::release_token() {
  clear_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = token_;
    token_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void MessageRead::set_allocated_token(::std::string* token) {
  if (token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete token_;
  }
  if (token) {
    set_has_token();
    token_ = token;
  } else {
    clear_has_token();
    token_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:MessageRead.Token)
}

// required int64 Offset = 2;
inline bool MessageRead::has_offset() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MessageRead::set_has_offset() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MessageRead::clear_has_offset() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MessageRead::clear_offset() {
  offset_ = GOOGLE_LONGLONG(0);
  clear_has_offset();
}
inline ::google::protobuf::int64 MessageRead::offset() const {
  // @@protoc_insertion_point(field_get:MessageRead.Offset)
  return offset_;
}
inline void MessageRead::set_offset(::google::protobuf::int64 value) {
  set_has_offset();
  offset_ = value;
  // @@protoc_insertion_point(field_set:MessageRead.Offset)
}

// required int64 Size = 3;
inline bool MessageRead::has_size() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MessageRead::set_has_size() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MessageRead::clear_has_size() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MessageRead::clear_size() {
  size_ = GOOGLE_LONGLONG(0);
  clear_has_size();
}
inline ::google::protobuf::int64 MessageRead::size() const {
  // @@protoc_insertion_point(field_get:MessageRead.Size)
  return size_;
}
inline void MessageRead::set_size(::google::protobuf::int64 value) {
  set_has_size();
  size_ = value;
  // @@protoc_insertion_point(field_set:MessageRead.Size)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MessageRead_2eproto__INCLUDED
