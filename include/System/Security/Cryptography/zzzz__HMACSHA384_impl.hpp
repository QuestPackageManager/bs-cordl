#pragma once
// IWYU pragma private; include "System\Security\Cryptography\HMACSHA384.hpp"
#include "System/Security/Cryptography/zzzz__HMAC_impl.hpp"
#include "System/Security/Cryptography/zzzz__HMACSHA384_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::HMACSHA384._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::HMACSHA384::*)()>(&::System::Security::Cryptography::HMACSHA384::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5afbec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HMACSHA384*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMACSHA384._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::HMACSHA384::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::HMACSHA384::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5afbee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HMACSHA384*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMACSHA384.get_BlockSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::HMACSHA384::*)()>(&::System::Security::Cryptography::HMACSHA384::get_BlockSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5afbfb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HMACSHA384*>(), { "get_BlockSize", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& System::Security::Cryptography::HMACSHA384::__cordl_internal_get_m_useLegacyBlockSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_useLegacyBlockSize;
}
constexpr bool const& System::Security::Cryptography::HMACSHA384::__cordl_internal_get_m_useLegacyBlockSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_useLegacyBlockSize;
}
constexpr void System::Security::Cryptography::HMACSHA384::__cordl_internal_set_m_useLegacyBlockSize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_useLegacyBlockSize = value;
}
inline void System::Security::Cryptography::HMACSHA384::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HMACSHA384*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::HMACSHA384::_ctor(::ArrayW<uint8_t> key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HMACSHA384*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline int32_t System::Security::Cryptography::HMACSHA384::get_BlockSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HMACSHA384*>(), { "get_BlockSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Security::Cryptography::HMACSHA384* System::Security::Cryptography::HMACSHA384::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::HMACSHA384*>());
}
inline ::System::Security::Cryptography::HMACSHA384* System::Security::Cryptography::HMACSHA384::New_ctor(::ArrayW<uint8_t> key) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::HMACSHA384*>(key));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::HMACSHA384::HMACSHA384() {}
