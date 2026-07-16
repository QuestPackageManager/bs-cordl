#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonBinaryWriter.hpp"
#include "System/zzzz__DateTimeKind_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonBinaryWriter_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__DateTimeKind_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBinaryWriter.get_DateTimeKindHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeKind (::Newtonsoft::Json::Bson::BsonBinaryWriter::*)()>(
    &::Newtonsoft::Json::Bson::BsonBinaryWriter::get_DateTimeKindHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da88fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(), { "get_DateTimeKindHandling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBinaryWriter.set_DateTimeKindHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonBinaryWriter::*)(::System::DateTimeKind)>(
    &::Newtonsoft::Json::Bson::BsonBinaryWriter::set_DateTimeKindHandling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5da8904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(), { "set_DateTimeKindHandling", {}, { ::i2c::type_of<::System::DateTimeKind>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBinaryWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonBinaryWriter::*)(::System::IO::BinaryWriter*)>(&::Newtonsoft::Json::Bson::BsonBinaryWriter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5da890c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::BinaryWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBinaryWriter.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonBinaryWriter::*)()>(&::Newtonsoft::Json::Bson::BsonBinaryWriter::Flush)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5da891c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(), { "Flush", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBinaryWriter.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonBinaryWriter::*)()>(&::Newtonsoft::Json::Bson::BsonBinaryWriter::Close)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5da8938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(), { "Close", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBinaryWriter.WriteToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonBinaryWriter::*)(::Newtonsoft::Json::Bson::BsonToken*)>(
    &::Newtonsoft::Json::Bson::BsonBinaryWriter::WriteToken)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5da8954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(), { "WriteToken", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBinaryWriter.WriteTokenInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonBinaryWriter::*)(::Newtonsoft::Json::Bson::BsonToken*)>(
    &::Newtonsoft::Json::Bson::BsonBinaryWriter::WriteTokenInternal)> {
  constexpr static std::size_t size = 0xe4c;
  constexpr static std::size_t addrs = 0x5da919c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(), { "WriteTokenInternal", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonToken*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBinaryWriter.WriteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonBinaryWriter::*)(::StringW, int32_t, ::System::Nullable_1<int32_t>)>(
    &::Newtonsoft::Json::Bson::BsonBinaryWriter::WriteString)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5daa070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(),
                                                             { "WriteString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBinaryWriter.WriteUtf8Bytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Bson::BsonBinaryWriter::*)(::StringW, int32_t)>(&::Newtonsoft::Json::Bson::BsonBinaryWriter::WriteUtf8Bytes)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5daa1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(), { "WriteUtf8Bytes", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBinaryWriter.CalculateSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Bson::BsonBinaryWriter::*)(int32_t)>(&::Newtonsoft::Json::Bson::BsonBinaryWriter::CalculateSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5daa320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(), { "CalculateSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBinaryWriter.CalculateSizeWithLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Bson::BsonBinaryWriter::*)(int32_t, bool)>(&::Newtonsoft::Json::Bson::BsonBinaryWriter::CalculateSizeWithLength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5daa328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(), { "CalculateSizeWithLength", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBinaryWriter.CalculateSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Newtonsoft::Json::Bson::BsonBinaryWriter::*)(::Newtonsoft::Json::Bson::BsonToken*)>(
    &::Newtonsoft::Json::Bson::BsonBinaryWriter::CalculateSize)> {
  constexpr static std::size_t size = 0x820;
  constexpr static std::size_t addrs = 0x5da897c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(), { "CalculateSize", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonToken*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IO::BinaryWriter*& Newtonsoft::Json::Bson::BsonBinaryWriter::__cordl_internal_get__writer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
constexpr ::System::IO::BinaryWriter* const& Newtonsoft::Json::Bson::BsonBinaryWriter::__cordl_internal_get__writer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writer;
}
constexpr void Newtonsoft::Json::Bson::BsonBinaryWriter::__cordl_internal_set__writer(::System::IO::BinaryWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____writer = value;
}
constexpr ::ArrayW<uint8_t>& Newtonsoft::Json::Bson::BsonBinaryWriter::__cordl_internal_get__largeByteBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____largeByteBuffer;
}
constexpr ::ArrayW<uint8_t> const& Newtonsoft::Json::Bson::BsonBinaryWriter::__cordl_internal_get__largeByteBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____largeByteBuffer;
}
constexpr void Newtonsoft::Json::Bson::BsonBinaryWriter::__cordl_internal_set__largeByteBuffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____largeByteBuffer = value;
}
constexpr ::System::DateTimeKind& Newtonsoft::Json::Bson::BsonBinaryWriter::__cordl_internal_get__DateTimeKindHandling_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DateTimeKindHandling_k__BackingField;
}
constexpr ::System::DateTimeKind const& Newtonsoft::Json::Bson::BsonBinaryWriter::__cordl_internal_get__DateTimeKindHandling_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DateTimeKindHandling_k__BackingField;
}
constexpr void Newtonsoft::Json::Bson::BsonBinaryWriter::__cordl_internal_set__DateTimeKindHandling_k__BackingField(::System::DateTimeKind value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DateTimeKindHandling_k__BackingField = value;
}
inline void Newtonsoft::Json::Bson::BsonBinaryWriter::setStaticF_Encoding(::System::Text::Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Encoding*, "Encoding", ::Newtonsoft::Json::Bson::BsonBinaryWriter*>(std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* Newtonsoft::Json::Bson::BsonBinaryWriter::getStaticF_Encoding() {
  return ::cordl_internals::getStaticField<::System::Text::Encoding*, "Encoding", ::Newtonsoft::Json::Bson::BsonBinaryWriter*>();
}
inline ::System::DateTimeKind Newtonsoft::Json::Bson::BsonBinaryWriter::get_DateTimeKindHandling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(), { "get_DateTimeKindHandling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTimeKind>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonBinaryWriter::set_DateTimeKindHandling(::System::DateTimeKind value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(), { "set_DateTimeKindHandling", {}, { ::i2c::type_of<::System::DateTimeKind>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Bson::BsonBinaryWriter::_ctor(::System::IO::BinaryWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::BinaryWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void Newtonsoft::Json::Bson::BsonBinaryWriter::Flush() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(), { "Flush", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonBinaryWriter::Close() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(), { "Close", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonBinaryWriter::WriteToken(::Newtonsoft::Json::Bson::BsonToken* t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(), { "WriteToken", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void Newtonsoft::Json::Bson::BsonBinaryWriter::WriteTokenInternal(::Newtonsoft::Json::Bson::BsonToken* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(), { "WriteTokenInternal", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void Newtonsoft::Json::Bson::BsonBinaryWriter::WriteString(::StringW s, int32_t byteCount, ::System::Nullable_1<int32_t> calculatedlengthPrefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(),
                                                           { "WriteString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s, byteCount, calculatedlengthPrefix);
}
inline void Newtonsoft::Json::Bson::BsonBinaryWriter::WriteUtf8Bytes(::StringW s, int32_t byteCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(), { "WriteUtf8Bytes", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s, byteCount);
}
inline int32_t Newtonsoft::Json::Bson::BsonBinaryWriter::CalculateSize(int32_t stringByteCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(), { "CalculateSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, stringByteCount);
}
inline int32_t Newtonsoft::Json::Bson::BsonBinaryWriter::CalculateSizeWithLength(int32_t stringByteCount, bool includeSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(), { "CalculateSizeWithLength", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, stringByteCount, includeSize);
}
inline int32_t Newtonsoft::Json::Bson::BsonBinaryWriter::CalculateSize(::Newtonsoft::Json::Bson::BsonToken* t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(), { "CalculateSize", {}, { ::i2c::type_of<::Newtonsoft::Json::Bson::BsonToken*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, t);
}
inline ::Newtonsoft::Json::Bson::BsonBinaryWriter* Newtonsoft::Json::Bson::BsonBinaryWriter::New_ctor(::System::IO::BinaryWriter* writer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Bson::BsonBinaryWriter*>(writer));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Bson::BsonBinaryWriter::BsonBinaryWriter() {}
