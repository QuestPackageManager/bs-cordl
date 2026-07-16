#pragma once
// IWYU pragma private; include "System/TermInfoReader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TermInfoReader_def.hpp"
#include "System/zzzz__TermInfoNumbers_def.hpp"
#include "System/zzzz__TermInfoStrings_def.hpp"
//  Writing Method size for method: ::System::TermInfoReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TermInfoReader::*)(::StringW, ::StringW)>(&::System::TermInfoReader::_ctor)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5c96db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoReader*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TermInfoReader::*)(::StringW, ::ArrayW<uint8_t>)>(&::System::TermInfoReader::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c9704c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoReader*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoReader.DetermineVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TermInfoReader::*)(int16_t)>(&::System::TermInfoReader::DetermineVersion)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c9c134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoReader*>(), { "DetermineVersion", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoReader.ReadHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TermInfoReader::*)(::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::System::TermInfoReader::ReadHeader)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c9c040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoReader*>(), { "ReadHeader", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoReader.ReadNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TermInfoReader::*)(::ArrayW<uint8_t>, ::by_ref<int32_t>)>(&::System::TermInfoReader::ReadNames)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c9c100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoReader*>(), { "ReadNames", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoReader.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::TermInfoReader::*)(::System::TermInfoNumbers)>(&::System::TermInfoReader::Get)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c97954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoReader*>(), { "Get", {}, { ::i2c::type_of<::System::TermInfoNumbers>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoReader.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::TermInfoReader::*)(::System::TermInfoStrings)>(&::System::TermInfoReader::Get)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c978d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoReader*>(), { "Get", {}, { ::i2c::type_of<::System::TermInfoStrings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoReader.GetStringBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::TermInfoReader::*)(::System::TermInfoStrings)>(&::System::TermInfoReader::GetStringBytes)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c9aeac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoReader*>(), { "GetStringBytes", {}, { ::i2c::type_of<::System::TermInfoStrings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoReader.GetInt16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::System::TermInfoReader::*)(::ArrayW<uint8_t>, int32_t)>(&::System::TermInfoReader::GetInt16)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c9c1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoReader*>(), { "GetInt16", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoReader.GetString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::TermInfoReader::*)(::ArrayW<uint8_t>, int32_t)>(&::System::TermInfoReader::GetString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c9c21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoReader*>(), { "GetString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoReader.GetStringBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::TermInfoReader::*)(::ArrayW<uint8_t>, int32_t)>(&::System::TermInfoReader::GetStringBytes)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5c9c298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoReader*>(), { "GetStringBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::TermInfoReader::__cordl_internal_get_boolSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boolSize;
}
constexpr int32_t const& System::TermInfoReader::__cordl_internal_get_boolSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___boolSize;
}
constexpr void System::TermInfoReader::__cordl_internal_set_boolSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___boolSize = value;
}
constexpr int32_t& System::TermInfoReader::__cordl_internal_get_numSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numSize;
}
constexpr int32_t const& System::TermInfoReader::__cordl_internal_get_numSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numSize;
}
constexpr void System::TermInfoReader::__cordl_internal_set_numSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___numSize = value;
}
constexpr int32_t& System::TermInfoReader::__cordl_internal_get_strOffsets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strOffsets;
}
constexpr int32_t const& System::TermInfoReader::__cordl_internal_get_strOffsets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strOffsets;
}
constexpr void System::TermInfoReader::__cordl_internal_set_strOffsets(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strOffsets = value;
}
constexpr ::ArrayW<uint8_t>& System::TermInfoReader::__cordl_internal_get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr ::ArrayW<uint8_t> const& System::TermInfoReader::__cordl_internal_get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buffer;
}
constexpr void System::TermInfoReader::__cordl_internal_set_buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buffer = value;
}
constexpr int32_t& System::TermInfoReader::__cordl_internal_get_booleansOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___booleansOffset;
}
constexpr int32_t const& System::TermInfoReader::__cordl_internal_get_booleansOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___booleansOffset;
}
constexpr void System::TermInfoReader::__cordl_internal_set_booleansOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___booleansOffset = value;
}
constexpr int32_t& System::TermInfoReader::__cordl_internal_get_intOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intOffset;
}
constexpr int32_t const& System::TermInfoReader::__cordl_internal_get_intOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intOffset;
}
constexpr void System::TermInfoReader::__cordl_internal_set_intOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intOffset = value;
}
inline void System::TermInfoReader::_ctor(::StringW term, ::StringW filename) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoReader*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, term, filename);
}
inline void System::TermInfoReader::_ctor(::StringW term, ::ArrayW<uint8_t> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoReader*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, term, buffer);
}
inline void System::TermInfoReader::DetermineVersion(int16_t magic) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoReader*>(), { "DetermineVersion", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, magic);
}
inline void System::TermInfoReader::ReadHeader(::ArrayW<uint8_t> buffer, ::by_ref<int32_t> position) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoReader*>(), { "ReadHeader", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, position);
}
inline void System::TermInfoReader::ReadNames(::ArrayW<uint8_t> buffer, ::by_ref<int32_t> position) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoReader*>(), { "ReadNames", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, position);
}
inline int32_t System::TermInfoReader::Get(::System::TermInfoNumbers number) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoReader*>(), { "Get", {}, { ::i2c::type_of<::System::TermInfoNumbers>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, number);
}
inline ::StringW System::TermInfoReader::Get(::System::TermInfoStrings tstr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoReader*>(), { "Get", {}, { ::i2c::type_of<::System::TermInfoStrings>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, tstr);
}
inline ::ArrayW<uint8_t> System::TermInfoReader::GetStringBytes(::System::TermInfoStrings tstr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoReader*>(), { "GetStringBytes", {}, { ::i2c::type_of<::System::TermInfoStrings>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, tstr);
}
inline int16_t System::TermInfoReader::GetInt16(::ArrayW<uint8_t> buffer, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoReader*>(), { "GetInt16", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method, buffer, offset);
}
inline ::StringW System::TermInfoReader::GetString(::ArrayW<uint8_t> buffer, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoReader*>(), { "GetString", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, buffer, offset);
}
inline ::ArrayW<uint8_t> System::TermInfoReader::GetStringBytes(::ArrayW<uint8_t> buffer, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::TermInfoReader*>(), { "GetStringBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, buffer, offset);
}
inline ::System::TermInfoReader* System::TermInfoReader::New_ctor(::StringW term, ::StringW filename) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TermInfoReader*>(term, filename));
}
inline ::System::TermInfoReader* System::TermInfoReader::New_ctor(::StringW term, ::ArrayW<uint8_t> buffer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TermInfoReader*>(term, buffer));
}
// Ctor Parameters []
constexpr ::System::TermInfoReader::TermInfoReader() {}
