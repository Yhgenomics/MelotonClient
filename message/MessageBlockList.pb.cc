// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageBlockList.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageBlockList.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* MessageBlockList_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MessageBlockList_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageBlockList_2eproto() {
  protobuf_AddDesc_MessageBlockList_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageBlockList.proto");
  GOOGLE_CHECK(file != NULL);
  MessageBlockList_descriptor_ = file->message_type(0);
  static const int MessageBlockList_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBlockList, blockcount_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBlockList, token_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBlockList, ip_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBlockList, port_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBlockList, size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBlockList, fileoffset_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBlockList, partid_),
  };
  MessageBlockList_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MessageBlockList_descriptor_,
      MessageBlockList::default_instance_,
      MessageBlockList_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBlockList, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBlockList, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MessageBlockList));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageBlockList_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MessageBlockList_descriptor_, &MessageBlockList::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageBlockList_2eproto() {
  delete MessageBlockList::default_instance_;
  delete MessageBlockList_reflection_;
}

void protobuf_AddDesc_MessageBlockList_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026MessageBlockList.proto\"\201\001\n\020MessageBloc"
    "kList\022\022\n\nBlockCount\030\001 \002(\005\022\r\n\005Token\030\002 \003(\t"
    "\022\n\n\002IP\030\003 \003(\t\022\014\n\004Port\030\004 \003(\005\022\014\n\004Size\030\005 \003(\003"
    "\022\022\n\nFileOffset\030\006 \003(\003\022\016\n\006PartId\030\007 \003(\003", 156);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageBlockList.proto", &protobuf_RegisterTypes);
  MessageBlockList::default_instance_ = new MessageBlockList();
  MessageBlockList::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageBlockList_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageBlockList_2eproto {
  StaticDescriptorInitializer_MessageBlockList_2eproto() {
    protobuf_AddDesc_MessageBlockList_2eproto();
  }
} static_descriptor_initializer_MessageBlockList_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MessageBlockList::kBlockCountFieldNumber;
const int MessageBlockList::kTokenFieldNumber;
const int MessageBlockList::kIPFieldNumber;
const int MessageBlockList::kPortFieldNumber;
const int MessageBlockList::kSizeFieldNumber;
const int MessageBlockList::kFileOffsetFieldNumber;
const int MessageBlockList::kPartIdFieldNumber;
#endif  // !_MSC_VER

MessageBlockList::MessageBlockList()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MessageBlockList)
}

void MessageBlockList::InitAsDefaultInstance() {
}

MessageBlockList::MessageBlockList(const MessageBlockList& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MessageBlockList)
}

void MessageBlockList::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  blockcount_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MessageBlockList::~MessageBlockList() {
  // @@protoc_insertion_point(destructor:MessageBlockList)
  SharedDtor();
}

void MessageBlockList::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MessageBlockList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MessageBlockList::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MessageBlockList_descriptor_;
}

const MessageBlockList& MessageBlockList::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageBlockList_2eproto();
  return *default_instance_;
}

MessageBlockList* MessageBlockList::default_instance_ = NULL;

MessageBlockList* MessageBlockList::New() const {
  return new MessageBlockList;
}

void MessageBlockList::Clear() {
  blockcount_ = 0;
  token_.Clear();
  ip_.Clear();
  port_.Clear();
  size_.Clear();
  fileoffset_.Clear();
  partid_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MessageBlockList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MessageBlockList)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 BlockCount = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &blockcount_)));
          set_has_blockcount();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_Token;
        break;
      }

      // repeated string Token = 2;
      case 2: {
        if (tag == 18) {
         parse_Token:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_token()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->token(this->token_size() - 1).data(),
            this->token(this->token_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "token");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_Token;
        if (input->ExpectTag(26)) goto parse_IP;
        break;
      }

      // repeated string IP = 3;
      case 3: {
        if (tag == 26) {
         parse_IP:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_ip()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->ip(this->ip_size() - 1).data(),
            this->ip(this->ip_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "ip");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_IP;
        if (input->ExpectTag(32)) goto parse_Port;
        break;
      }

      // repeated int32 Port = 4;
      case 4: {
        if (tag == 32) {
         parse_Port:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 32, input, this->mutable_port())));
        } else if (tag == 34) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_port())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_Port;
        if (input->ExpectTag(40)) goto parse_Size;
        break;
      }

      // repeated int64 Size = 5;
      case 5: {
        if (tag == 40) {
         parse_Size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 1, 40, input, this->mutable_size())));
        } else if (tag == 42) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, this->mutable_size())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_Size;
        if (input->ExpectTag(48)) goto parse_FileOffset;
        break;
      }

      // repeated int64 FileOffset = 6;
      case 6: {
        if (tag == 48) {
         parse_FileOffset:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 1, 48, input, this->mutable_fileoffset())));
        } else if (tag == 50) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, this->mutable_fileoffset())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_FileOffset;
        if (input->ExpectTag(56)) goto parse_PartId;
        break;
      }

      // repeated int64 PartId = 7;
      case 7: {
        if (tag == 56) {
         parse_PartId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 1, 56, input, this->mutable_partid())));
        } else if (tag == 58) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, this->mutable_partid())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(56)) goto parse_PartId;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:MessageBlockList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MessageBlockList)
  return false;
#undef DO_
}

void MessageBlockList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MessageBlockList)
  // required int32 BlockCount = 1;
  if (has_blockcount()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->blockcount(), output);
  }

  // repeated string Token = 2;
  for (int i = 0; i < this->token_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
    this->token(i).data(), this->token(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE,
    "token");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->token(i), output);
  }

  // repeated string IP = 3;
  for (int i = 0; i < this->ip_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
    this->ip(i).data(), this->ip(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE,
    "ip");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->ip(i), output);
  }

  // repeated int32 Port = 4;
  for (int i = 0; i < this->port_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      4, this->port(i), output);
  }

  // repeated int64 Size = 5;
  for (int i = 0; i < this->size_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(
      5, this->size(i), output);
  }

  // repeated int64 FileOffset = 6;
  for (int i = 0; i < this->fileoffset_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(
      6, this->fileoffset(i), output);
  }

  // repeated int64 PartId = 7;
  for (int i = 0; i < this->partid_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(
      7, this->partid(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MessageBlockList)
}

::google::protobuf::uint8* MessageBlockList::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MessageBlockList)
  // required int32 BlockCount = 1;
  if (has_blockcount()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->blockcount(), target);
  }

  // repeated string Token = 2;
  for (int i = 0; i < this->token_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->token(i).data(), this->token(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "token");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->token(i), target);
  }

  // repeated string IP = 3;
  for (int i = 0; i < this->ip_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->ip(i).data(), this->ip(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ip");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(3, this->ip(i), target);
  }

  // repeated int32 Port = 4;
  for (int i = 0; i < this->port_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(4, this->port(i), target);
  }

  // repeated int64 Size = 5;
  for (int i = 0; i < this->size_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt64ToArray(5, this->size(i), target);
  }

  // repeated int64 FileOffset = 6;
  for (int i = 0; i < this->fileoffset_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt64ToArray(6, this->fileoffset(i), target);
  }

  // repeated int64 PartId = 7;
  for (int i = 0; i < this->partid_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt64ToArray(7, this->partid(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MessageBlockList)
  return target;
}

int MessageBlockList::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 BlockCount = 1;
    if (has_blockcount()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->blockcount());
    }

  }
  // repeated string Token = 2;
  total_size += 1 * this->token_size();
  for (int i = 0; i < this->token_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->token(i));
  }

  // repeated string IP = 3;
  total_size += 1 * this->ip_size();
  for (int i = 0; i < this->ip_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->ip(i));
  }

  // repeated int32 Port = 4;
  {
    int data_size = 0;
    for (int i = 0; i < this->port_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->port(i));
    }
    total_size += 1 * this->port_size() + data_size;
  }

  // repeated int64 Size = 5;
  {
    int data_size = 0;
    for (int i = 0; i < this->size_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int64Size(this->size(i));
    }
    total_size += 1 * this->size_size() + data_size;
  }

  // repeated int64 FileOffset = 6;
  {
    int data_size = 0;
    for (int i = 0; i < this->fileoffset_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int64Size(this->fileoffset(i));
    }
    total_size += 1 * this->fileoffset_size() + data_size;
  }

  // repeated int64 PartId = 7;
  {
    int data_size = 0;
    for (int i = 0; i < this->partid_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int64Size(this->partid(i));
    }
    total_size += 1 * this->partid_size() + data_size;
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MessageBlockList::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MessageBlockList* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MessageBlockList*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MessageBlockList::MergeFrom(const MessageBlockList& from) {
  GOOGLE_CHECK_NE(&from, this);
  token_.MergeFrom(from.token_);
  ip_.MergeFrom(from.ip_);
  port_.MergeFrom(from.port_);
  size_.MergeFrom(from.size_);
  fileoffset_.MergeFrom(from.fileoffset_);
  partid_.MergeFrom(from.partid_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_blockcount()) {
      set_blockcount(from.blockcount());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MessageBlockList::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MessageBlockList::CopyFrom(const MessageBlockList& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageBlockList::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void MessageBlockList::Swap(MessageBlockList* other) {
  if (other != this) {
    std::swap(blockcount_, other->blockcount_);
    token_.Swap(&other->token_);
    ip_.Swap(&other->ip_);
    port_.Swap(&other->port_);
    size_.Swap(&other->size_);
    fileoffset_.Swap(&other->fileoffset_);
    partid_.Swap(&other->partid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MessageBlockList::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MessageBlockList_descriptor_;
  metadata.reflection = MessageBlockList_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)