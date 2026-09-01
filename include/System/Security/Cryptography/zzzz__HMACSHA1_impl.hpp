#pragma once
// IWYU pragma private; include "System\Security\Cryptography\HMACSHA1.hpp"
#include "System/Security/Cryptography/zzzz__HMAC_impl.hpp"
#include "System/Security/Cryptography/zzzz__HMACSHA1_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::HMACSHA1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::HMACSHA1::*)()>(&::System::Security::Cryptography::HMACSHA1::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5afb614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HMACSHA1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMACSHA1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::HMACSHA1::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::HMACSHA1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5afbd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HMACSHA1*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::HMACSHA1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::HMACSHA1::*)(::ArrayW<uint8_t>, bool)>(&::System::Security::Cryptography::HMACSHA1::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5afbd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HMACSHA1*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::HMACSHA1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HMACSHA1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::HMACSHA1::_ctor(::ArrayW<uint8_t> key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HMACSHA1*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void System::Security::Cryptography::HMACSHA1::_ctor(::ArrayW<uint8_t> key, bool useManagedSha1) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::HMACSHA1*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, useManagedSha1);
}
inline ::System::Security::Cryptography::HMACSHA1* System::Security::Cryptography::HMACSHA1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::HMACSHA1*>());
}
inline ::System::Security::Cryptography::HMACSHA1* System::Security::Cryptography::HMACSHA1::New_ctor(::ArrayW<uint8_t> key) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::HMACSHA1*>(key));
}
inline ::System::Security::Cryptography::HMACSHA1* System::Security::Cryptography::HMACSHA1::New_ctor(::ArrayW<uint8_t> key, bool useManagedSha1) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::HMACSHA1*>(key, useManagedSha1));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::HMACSHA1::HMACSHA1() {}
