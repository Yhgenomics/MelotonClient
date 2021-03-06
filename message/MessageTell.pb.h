// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageTell.proto

#ifndef PROTOBUF_MessageTell_2eproto__INCLUDED
#define PROTOBUF_MessageTell_2eproto__INCLUDED

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
void  protobuf_AddDesc_MessageTell_2eproto();
void protobuf_AssignDesc_MessageTell_2eproto();
void protobuf_ShutdownFile_MessageTell_2eproto();

class MessageTell;

// ===================================================================

class MessageTell : public ::google::protobuf::Message {
 public:
  MessageTell();
  virtual ~MessageTell();

  MessageTell(const MessageTell& from);

  inline MessageTell& operator=(const MessageTell& from) {
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
  static const MessageTell& default_instance();

  void Swap(MessageTell* other);

  // implements Message ----------------------------------------------

  MessageTell* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MessageTell& from);
  void MergeFrom(const MessageTell& from);
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

  // required string Path = 2;
  inline bool has_path() const;
  inline void clear_path();
  static const int kPathFieldNumber = 2;
  inline const ::std::string& path() const;
  inline void set_path(const ::std::string& value);
  inline void set_path(const char* value);
  inline void set_path(const char* value, size_t size);
  inline ::std::string* mutable_path();
  inline ::std::string* release_path();
  inline void set_allocated_path(::std::string* path);

  // @@protoc_insertion_point(class_scope:MessageTell)
 private:
  inline void set_has_token();
  inline void clear_has_token();
  inline void set_has_path();
  inline void clear_has_path();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* token_;
  ::std::string* path_;
  friend void  protobuf_AddDesc_MessageTell_2eproto();
  friend void protobuf_AssignDesc_MessageTell_2eproto();
  friend void protobuf_ShutdownFile_MessageTell_2eproto();

  void InitAsDefaultInstance();
  static MessageTell* default_instance_;
};
// ===================================================================


// ===================================================================

// MessageTell

// required string Token = 1;
inline bool MessageTell::has_token() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MessageTell::set_has_token() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MessageTell::clear_has_token() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MessageTell::clear_token() {
  if (token_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_->clear();
  }
  clear_has_token();
}
inline const ::std::string& MessageTell::token() const {
  // @@protoc_insertion_point(field_get:MessageTell.Token)
  return *token_;
}
inline void MessageTell::set_token(const ::std::string& value) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::std::string;
  }
  token_->assign(value);
  // @@protoc_insertion_point(field_set:MessageTell.Token)
}
inline void MessageTell::set_token(const char* value) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::std::string;
  }
  token_->assign(value);
  // @@protoc_insertion_point(field_set_char:MessageTell.Token)
}
inline void MessageTell::set_token(const char* value, size_t size) {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::std::string;
  }
  token_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:MessageTell.Token)
}
inline ::std::string* MessageTell::mutable_token() {
  set_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    token_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:MessageTell.Token)
  return token_;
}
inline ::std::string* MessageTell::release_token() {
  clear_has_token();
  if (token_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = token_;
    token_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void MessageTell::set_allocated_token(::std::string* token) {
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
  // @@protoc_insertion_point(field_set_allocated:MessageTell.Token)
}

// required string Path = 2;
inline bool MessageTell::has_path() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MessageTell::set_has_path() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MessageTell::clear_has_path() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MessageTell::clear_path() {
  if (path_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    path_->clear();
  }
  clear_has_path();
}
inline const ::std::string& MessageTell::path() const {
  // @@protoc_insertion_point(field_get:MessageTell.Path)
  return *path_;
}
inline void MessageTell::set_path(const ::std::string& value) {
  set_has_path();
  if (path_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    path_ = new ::std::string;
  }
  path_->assign(value);
  // @@protoc_insertion_point(field_set:MessageTell.Path)
}
inline void MessageTell::set_path(const char* value) {
  set_has_path();
  if (path_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    path_ = new ::std::string;
  }
  path_->assign(value);
  // @@protoc_insertion_point(field_set_char:MessageTell.Path)
}
inline void MessageTell::set_path(const char* value, size_t size) {
  set_has_path();
  if (path_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    path_ = new ::std::string;
  }
  path_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:MessageTell.Path)
}
inline ::std::string* MessageTell::mutable_path() {
  set_has_path();
  if (path_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    path_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:MessageTell.Path)
  return path_;
}
inline ::std::string* MessageTell::release_path() {
  clear_has_path();
  if (path_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = path_;
    path_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void MessageTell::set_allocated_path(::std::string* path) {
  if (path_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete path_;
  }
  if (path) {
    set_has_path();
    path_ = path;
  } else {
    clear_has_path();
    path_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:MessageTell.Path)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MessageTell_2eproto__INCLUDED
