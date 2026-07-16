#pragma once
// IWYU pragma private; include "Internal/Cryptography/Helpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Internal/Cryptography/zzzz__Helpers_def.hpp"
//  Writing Method size for method: ::Internal::Cryptography::Helpers.CloneByteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Internal::Cryptography::Helpers::CloneByteArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5ac57cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Cryptography::Helpers*>(), { "CloneByteArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::Helpers.ToHexArrayUpper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<char16_t> (*)(::ArrayW<uint8_t>)>(&::Internal::Cryptography::Helpers::ToHexArrayUpper)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5ac5844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Cryptography::Helpers*>(), { "ToHexArrayUpper", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::Helpers.ToHexStringUpper
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::Internal::Cryptography::Helpers::ToHexStringUpper)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ac5940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Cryptography::Helpers*>(), { "ToHexStringUpper", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Internal::Cryptography::Helpers.NibbleToHex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(uint8_t)>(&::Internal::Cryptography::Helpers::NibbleToHex)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ac5924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Cryptography::Helpers*>(), { "NibbleToHex", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> Internal::Cryptography::Helpers::CloneByteArray(::ArrayW<uint8_t> src) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Cryptography::Helpers*>(), { "CloneByteArray", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, src);
}
inline ::ArrayW<char16_t> Internal::Cryptography::Helpers::ToHexArrayUpper(::ArrayW<uint8_t> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Cryptography::Helpers*>(), { "ToHexArrayUpper", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>>(nullptr, ___internal_method, bytes);
}
inline ::StringW Internal::Cryptography::Helpers::ToHexStringUpper(::ArrayW<uint8_t> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Cryptography::Helpers*>(), { "ToHexStringUpper", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bytes);
}
inline char16_t Internal::Cryptography::Helpers::NibbleToHex(uint8_t b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Internal::Cryptography::Helpers*>(), { "NibbleToHex", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, b);
}
// Ctor Parameters []
constexpr ::Internal::Cryptography::Helpers::Helpers() {}
