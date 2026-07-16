#pragma once
// IWYU pragma private; include "System/Xml/Base64Encoder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__Base64Encoder_def.hpp"
//  Writing Method size for method: ::System::Xml::Base64Encoder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Base64Encoder::*)()>(&::System::Xml::Base64Encoder::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x618cef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Base64Encoder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Base64Encoder.WriteChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Base64Encoder::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Xml::Base64Encoder::WriteChars)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Base64Encoder*>(), { ::i2c::class_of<::System::Xml::Base64Encoder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Base64Encoder.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Base64Encoder::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Xml::Base64Encoder::Encode)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x618cf48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Base64Encoder*>(), { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Base64Encoder.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Base64Encoder::*)()>(&::System::Xml::Base64Encoder::Flush)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x618d290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Base64Encoder*>(), { "Flush", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Xml::Base64Encoder::__cordl_internal_get_leftOverBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftOverBytes;
}
constexpr ::ArrayW<uint8_t> const& System::Xml::Base64Encoder::__cordl_internal_get_leftOverBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftOverBytes;
}
constexpr void System::Xml::Base64Encoder::__cordl_internal_set_leftOverBytes(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftOverBytes = value;
}
constexpr int32_t& System::Xml::Base64Encoder::__cordl_internal_get_leftOverBytesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftOverBytesCount;
}
constexpr int32_t const& System::Xml::Base64Encoder::__cordl_internal_get_leftOverBytesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftOverBytesCount;
}
constexpr void System::Xml::Base64Encoder::__cordl_internal_set_leftOverBytesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftOverBytesCount = value;
}
constexpr ::ArrayW<char16_t>& System::Xml::Base64Encoder::__cordl_internal_get_charsLine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charsLine;
}
constexpr ::ArrayW<char16_t> const& System::Xml::Base64Encoder::__cordl_internal_get_charsLine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___charsLine;
}
constexpr void System::Xml::Base64Encoder::__cordl_internal_set_charsLine(::ArrayW<char16_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___charsLine = value;
}
inline void System::Xml::Base64Encoder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Base64Encoder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Base64Encoder::WriteChars(::ArrayW<char16_t> chars, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Base64Encoder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars, index, count);
}
inline void System::Xml::Base64Encoder::Encode(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Base64Encoder*>(), { "Encode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::Xml::Base64Encoder::Flush() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Base64Encoder*>(), { "Flush", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Base64Encoder* System::Xml::Base64Encoder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Base64Encoder*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Base64Encoder::Base64Encoder() {}
