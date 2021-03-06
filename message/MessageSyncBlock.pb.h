// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageSyncBlock.proto

#ifndef PROTOBUF_MessageSyncBlock_2eproto__INCLUDED
#define PROTOBUF_MessageSyncBlock_2eproto__INCLUDED

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
#include "MessageBlockMeta.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_MessageSyncBlock_2eproto();
void protobuf_AssignDesc_MessageSyncBlock_2eproto();
void protobuf_ShutdownFile_MessageSyncBlock_2eproto();

class MessageSyncBlock;

// ===================================================================

class MessageSyncBlock : public ::google::protobuf::Message {
 public:
  MessageSyncBlock();
  virtual ~MessageSyncBlock();

  MessageSyncBlock(const MessageSyncBlock& from);

  inline MessageSyncBlock& operator=(const MessageSyncBlock& from) {
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
  static const MessageSyncBlock& default_instance();

  void Swap(MessageSyncBlock* other);

  // implements Message ----------------------------------------------

  MessageSyncBlock* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MessageSyncBlock& from);
  void MergeFrom(const MessageSyncBlock& from);
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

  // required int64 BlockCount = 1;
  inline bool has_blockcount() const;
  inline void clear_blockcount();
  static const int kBlockCountFieldNumber = 1;
  inline ::google::protobuf::int64 blockcount() const;
  inline void set_blockcount(::google::protobuf::int64 value);

  // repeated .MessageBlockMeta Blocks = 2;
  inline int blocks_size() const;
  inline void clear_blocks();
  static const int kBlocksFieldNumber = 2;
  inline const ::MessageBlockMeta& blocks(int index) const;
  inline ::MessageBlockMeta* mutable_blocks(int index);
  inline ::MessageBlockMeta* add_blocks();
  inline const ::google::protobuf::RepeatedPtrField< ::MessageBlockMeta >&
      blocks() const;
  inline ::google::protobuf::RepeatedPtrField< ::MessageBlockMeta >*
      mutable_blocks();

  // @@protoc_insertion_point(class_scope:MessageSyncBlock)
 private:
  inline void set_has_blockcount();
  inline void clear_has_blockcount();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 blockcount_;
  ::google::protobuf::RepeatedPtrField< ::MessageBlockMeta > blocks_;
  friend void  protobuf_AddDesc_MessageSyncBlock_2eproto();
  friend void protobuf_AssignDesc_MessageSyncBlock_2eproto();
  friend void protobuf_ShutdownFile_MessageSyncBlock_2eproto();

  void InitAsDefaultInstance();
  static MessageSyncBlock* default_instance_;
};
// ===================================================================


// ===================================================================

// MessageSyncBlock

// required int64 BlockCount = 1;
inline bool MessageSyncBlock::has_blockcount() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MessageSyncBlock::set_has_blockcount() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MessageSyncBlock::clear_has_blockcount() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MessageSyncBlock::clear_blockcount() {
  blockcount_ = GOOGLE_LONGLONG(0);
  clear_has_blockcount();
}
inline ::google::protobuf::int64 MessageSyncBlock::blockcount() const {
  // @@protoc_insertion_point(field_get:MessageSyncBlock.BlockCount)
  return blockcount_;
}
inline void MessageSyncBlock::set_blockcount(::google::protobuf::int64 value) {
  set_has_blockcount();
  blockcount_ = value;
  // @@protoc_insertion_point(field_set:MessageSyncBlock.BlockCount)
}

// repeated .MessageBlockMeta Blocks = 2;
inline int MessageSyncBlock::blocks_size() const {
  return blocks_.size();
}
inline void MessageSyncBlock::clear_blocks() {
  blocks_.Clear();
}
inline const ::MessageBlockMeta& MessageSyncBlock::blocks(int index) const {
  // @@protoc_insertion_point(field_get:MessageSyncBlock.Blocks)
  return blocks_.Get(index);
}
inline ::MessageBlockMeta* MessageSyncBlock::mutable_blocks(int index) {
  // @@protoc_insertion_point(field_mutable:MessageSyncBlock.Blocks)
  return blocks_.Mutable(index);
}
inline ::MessageBlockMeta* MessageSyncBlock::add_blocks() {
  // @@protoc_insertion_point(field_add:MessageSyncBlock.Blocks)
  return blocks_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::MessageBlockMeta >&
MessageSyncBlock::blocks() const {
  // @@protoc_insertion_point(field_list:MessageSyncBlock.Blocks)
  return blocks_;
}
inline ::google::protobuf::RepeatedPtrField< ::MessageBlockMeta >*
MessageSyncBlock::mutable_blocks() {
  // @@protoc_insertion_point(field_mutable_list:MessageSyncBlock.Blocks)
  return &blocks_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MessageSyncBlock_2eproto__INCLUDED
