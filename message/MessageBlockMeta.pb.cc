// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageBlockMeta.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageBlockMeta.pb.h"

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

const ::google::protobuf::Descriptor* MessageBlockMeta_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MessageBlockMeta_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MessageBlockMeta_2eproto() {
  protobuf_AddDesc_MessageBlockMeta_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MessageBlockMeta.proto");
  GOOGLE_CHECK(file != NULL);
  MessageBlockMeta_descriptor_ = file->message_type(0);
  static const int MessageBlockMeta_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBlockMeta, status_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBlockMeta, path_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBlockMeta, size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBlockMeta, partid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBlockMeta, index_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBlockMeta, fileoffset_),
  };
  MessageBlockMeta_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MessageBlockMeta_descriptor_,
      MessageBlockMeta::default_instance_,
      MessageBlockMeta_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBlockMeta, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageBlockMeta, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MessageBlockMeta));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MessageBlockMeta_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MessageBlockMeta_descriptor_, &MessageBlockMeta::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MessageBlockMeta_2eproto() {
  delete MessageBlockMeta::default_instance_;
  delete MessageBlockMeta_reflection_;
}

void protobuf_AddDesc_MessageBlockMeta_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026MessageBlockMeta.proto\"q\n\020MessageBlock"
    "Meta\022\016\n\006Status\030\001 \002(\005\022\014\n\004Path\030\002 \002(\t\022\014\n\004Si"
    "ze\030\003 \002(\003\022\016\n\006PartId\030\004 \002(\003\022\r\n\005Index\030\005 \002(\003\022"
    "\022\n\nFileOffset\030\006 \002(\003", 139);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageBlockMeta.proto", &protobuf_RegisterTypes);
  MessageBlockMeta::default_instance_ = new MessageBlockMeta();
  MessageBlockMeta::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageBlockMeta_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageBlockMeta_2eproto {
  StaticDescriptorInitializer_MessageBlockMeta_2eproto() {
    protobuf_AddDesc_MessageBlockMeta_2eproto();
  }
} static_descriptor_initializer_MessageBlockMeta_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MessageBlockMeta::kStatusFieldNumber;
const int MessageBlockMeta::kPathFieldNumber;
const int MessageBlockMeta::kSizeFieldNumber;
const int MessageBlockMeta::kPartIdFieldNumber;
const int MessageBlockMeta::kIndexFieldNumber;
const int MessageBlockMeta::kFileOffsetFieldNumber;
#endif  // !_MSC_VER

MessageBlockMeta::MessageBlockMeta()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MessageBlockMeta)
}

void MessageBlockMeta::InitAsDefaultInstance() {
}

MessageBlockMeta::MessageBlockMeta(const MessageBlockMeta& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MessageBlockMeta)
}

void MessageBlockMeta::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  status_ = 0;
  path_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  size_ = GOOGLE_LONGLONG(0);
  partid_ = GOOGLE_LONGLONG(0);
  index_ = GOOGLE_LONGLONG(0);
  fileoffset_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MessageBlockMeta::~MessageBlockMeta() {
  // @@protoc_insertion_point(destructor:MessageBlockMeta)
  SharedDtor();
}

void MessageBlockMeta::SharedDtor() {
  if (path_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete path_;
  }
  if (this != default_instance_) {
  }
}

void MessageBlockMeta::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MessageBlockMeta::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MessageBlockMeta_descriptor_;
}

const MessageBlockMeta& MessageBlockMeta::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MessageBlockMeta_2eproto();
  return *default_instance_;
}

MessageBlockMeta* MessageBlockMeta::default_instance_ = NULL;

MessageBlockMeta* MessageBlockMeta::New() const {
  return new MessageBlockMeta;
}

void MessageBlockMeta::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<MessageBlockMeta*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 63) {
    ZR_(size_, status_);
    if (has_path()) {
      if (path_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        path_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MessageBlockMeta::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MessageBlockMeta)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 Status = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &status_)));
          set_has_status();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_Path;
        break;
      }

      // required string Path = 2;
      case 2: {
        if (tag == 18) {
         parse_Path:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_path()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->path().data(), this->path().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "path");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_Size;
        break;
      }

      // required int64 Size = 3;
      case 3: {
        if (tag == 24) {
         parse_Size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &size_)));
          set_has_size();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_PartId;
        break;
      }

      // required int64 PartId = 4;
      case 4: {
        if (tag == 32) {
         parse_PartId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &partid_)));
          set_has_partid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_Index;
        break;
      }

      // required int64 Index = 5;
      case 5: {
        if (tag == 40) {
         parse_Index:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &index_)));
          set_has_index();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_FileOffset;
        break;
      }

      // required int64 FileOffset = 6;
      case 6: {
        if (tag == 48) {
         parse_FileOffset:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &fileoffset_)));
          set_has_fileoffset();
        } else {
          goto handle_unusual;
        }
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
  // @@protoc_insertion_point(parse_success:MessageBlockMeta)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MessageBlockMeta)
  return false;
#undef DO_
}

void MessageBlockMeta::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MessageBlockMeta)
  // required int32 Status = 1;
  if (has_status()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->status(), output);
  }

  // required string Path = 2;
  if (has_path()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->path().data(), this->path().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "path");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->path(), output);
  }

  // required int64 Size = 3;
  if (has_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->size(), output);
  }

  // required int64 PartId = 4;
  if (has_partid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->partid(), output);
  }

  // required int64 Index = 5;
  if (has_index()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->index(), output);
  }

  // required int64 FileOffset = 6;
  if (has_fileoffset()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(6, this->fileoffset(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MessageBlockMeta)
}

::google::protobuf::uint8* MessageBlockMeta::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MessageBlockMeta)
  // required int32 Status = 1;
  if (has_status()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->status(), target);
  }

  // required string Path = 2;
  if (has_path()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->path().data(), this->path().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "path");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->path(), target);
  }

  // required int64 Size = 3;
  if (has_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->size(), target);
  }

  // required int64 PartId = 4;
  if (has_partid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->partid(), target);
  }

  // required int64 Index = 5;
  if (has_index()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, this->index(), target);
  }

  // required int64 FileOffset = 6;
  if (has_fileoffset()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(6, this->fileoffset(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MessageBlockMeta)
  return target;
}

int MessageBlockMeta::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 Status = 1;
    if (has_status()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->status());
    }

    // required string Path = 2;
    if (has_path()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->path());
    }

    // required int64 Size = 3;
    if (has_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->size());
    }

    // required int64 PartId = 4;
    if (has_partid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->partid());
    }

    // required int64 Index = 5;
    if (has_index()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->index());
    }

    // required int64 FileOffset = 6;
    if (has_fileoffset()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->fileoffset());
    }

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

void MessageBlockMeta::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MessageBlockMeta* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MessageBlockMeta*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MessageBlockMeta::MergeFrom(const MessageBlockMeta& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_status()) {
      set_status(from.status());
    }
    if (from.has_path()) {
      set_path(from.path());
    }
    if (from.has_size()) {
      set_size(from.size());
    }
    if (from.has_partid()) {
      set_partid(from.partid());
    }
    if (from.has_index()) {
      set_index(from.index());
    }
    if (from.has_fileoffset()) {
      set_fileoffset(from.fileoffset());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MessageBlockMeta::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MessageBlockMeta::CopyFrom(const MessageBlockMeta& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageBlockMeta::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000003f) != 0x0000003f) return false;

  return true;
}

void MessageBlockMeta::Swap(MessageBlockMeta* other) {
  if (other != this) {
    std::swap(status_, other->status_);
    std::swap(path_, other->path_);
    std::swap(size_, other->size_);
    std::swap(partid_, other->partid_);
    std::swap(index_, other->index_);
    std::swap(fileoffset_, other->fileoffset_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MessageBlockMeta::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MessageBlockMeta_descriptor_;
  metadata.reflection = MessageBlockMeta_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
