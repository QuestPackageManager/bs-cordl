#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\Formatters\Binary\SerializationHeaderRecord.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryHeaderEnum_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerializationHeaderRecord_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryHeaderEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryParser_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryWriter_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b581ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::*)(
    ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum, int32_t, int32_t, int32_t, int32_t)>(
    &::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b581b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::*)(
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::Write)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b581d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>(),
                                                             { "Write", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord.GetInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t)>(&::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::GetInt32)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b58280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>(),
                                                                                           { "GetInt32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::*)(
    ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*)>(&::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::Read)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5b582f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>(),
                                                             { "Read", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord.Dump
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::*)()>(
    &::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::Dump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b58444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>(), { "Dump", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_binaryFormatterMajorVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryFormatterMajorVersion;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_binaryFormatterMajorVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryFormatterMajorVersion;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_set_binaryFormatterMajorVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binaryFormatterMajorVersion = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_binaryFormatterMinorVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryFormatterMinorVersion;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_binaryFormatterMinorVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryFormatterMinorVersion;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_set_binaryFormatterMinorVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binaryFormatterMinorVersion = value;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum&
System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_binaryHeaderEnum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryHeaderEnum;
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum const&
System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_binaryHeaderEnum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binaryHeaderEnum;
}
constexpr void
System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_set_binaryHeaderEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___binaryHeaderEnum = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_topId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topId;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_topId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_set_topId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___topId = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_headerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headerId;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_headerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headerId;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_set_headerId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headerId = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_majorVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___majorVersion;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_majorVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___majorVersion;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_set_majorVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___majorVersion = value;
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_minorVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minorVersion;
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_get_minorVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minorVersion;
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::__cordl_internal_set_minorVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minorVersion = value;
}
inline void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::_ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum, int32_t topId,
                                                                                                 int32_t headerId, int32_t majorVersion, int32_t minorVersion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binaryHeaderEnum, topId, headerId, majorVersion, minorVersion);
}
inline void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>(),
                                                           { "Write", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sout);
}
inline int32_t System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::GetInt32(::ArrayW<uint8_t> buffer, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>(),
                                                                                         { "GetInt32", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, buffer, index);
}
inline void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>(),
                                                                                         { "Read", {}, { ::i2c::type_of<::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline void System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::Dump() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>(), { "Dump", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord* System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>());
}
inline ::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*
System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::New_ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum, int32_t topId,
                                                                                        int32_t headerId, int32_t majorVersion, int32_t minorVersion) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord*>(binaryHeaderEnum, topId, headerId, majorVersion, minorVersion));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::Formatters::Binary::SerializationHeaderRecord::SerializationHeaderRecord() {}
