#pragma once
// IWYU pragma private; include "Mono/Security/Authenticode/PrivateKey.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Authenticode/zzzz__PrivateKey_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
//  Writing Method size for method: ::Mono::Security::Authenticode::PrivateKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Authenticode::PrivateKey::*)(::ArrayW<uint8_t>, ::StringW)>(&::Mono::Security::Authenticode::PrivateKey::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5aa5a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::PrivateKey*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::PrivateKey.get_RSA
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSA* (::Mono::Security::Authenticode::PrivateKey::*)()>(
    &::Mono::Security::Authenticode::PrivateKey::get_RSA)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa5f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::PrivateKey*>(), { "get_RSA", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::PrivateKey.DeriveKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Authenticode::PrivateKey::*)(::ArrayW<uint8_t>, ::StringW)>(
    &::Mono::Security::Authenticode::PrivateKey::DeriveKey)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5aa5f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::PrivateKey*>(), { "DeriveKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::PrivateKey.Decode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::Authenticode::PrivateKey::*)(::ArrayW<uint8_t>, ::StringW)>(&::Mono::Security::Authenticode::PrivateKey::Decode)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x5aa5adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::PrivateKey*>(), { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::PrivateKey.CreateFromFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Authenticode::PrivateKey* (*)(::StringW)>(&::Mono::Security::Authenticode::PrivateKey::CreateFromFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aa604c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::PrivateKey*>(), { "CreateFromFile", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Authenticode::PrivateKey.CreateFromFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Authenticode::PrivateKey* (*)(::StringW, ::StringW)>(&::Mono::Security::Authenticode::PrivateKey::CreateFromFile)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5aa6054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::PrivateKey*>(), { "CreateFromFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr bool& Mono::Security::Authenticode::PrivateKey::__cordl_internal_get_encrypted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encrypted;
}
constexpr bool const& Mono::Security::Authenticode::PrivateKey::__cordl_internal_get_encrypted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encrypted;
}
constexpr void Mono::Security::Authenticode::PrivateKey::__cordl_internal_set_encrypted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encrypted = value;
}
constexpr ::System::Security::Cryptography::RSA*& Mono::Security::Authenticode::PrivateKey::__cordl_internal_get_rsa() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rsa;
}
constexpr ::System::Security::Cryptography::RSA* const& Mono::Security::Authenticode::PrivateKey::__cordl_internal_get_rsa() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rsa;
}
constexpr void Mono::Security::Authenticode::PrivateKey::__cordl_internal_set_rsa(::System::Security::Cryptography::RSA* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rsa = value;
}
constexpr bool& Mono::Security::Authenticode::PrivateKey::__cordl_internal_get_weak() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weak;
}
constexpr bool const& Mono::Security::Authenticode::PrivateKey::__cordl_internal_get_weak() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weak;
}
constexpr void Mono::Security::Authenticode::PrivateKey::__cordl_internal_set_weak(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___weak = value;
}
constexpr int32_t& Mono::Security::Authenticode::PrivateKey::__cordl_internal_get_keyType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyType;
}
constexpr int32_t const& Mono::Security::Authenticode::PrivateKey::__cordl_internal_get_keyType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyType;
}
constexpr void Mono::Security::Authenticode::PrivateKey::__cordl_internal_set_keyType(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyType = value;
}
inline void Mono::Security::Authenticode::PrivateKey::_ctor(::ArrayW<uint8_t> data, ::StringW password) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::PrivateKey*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, password);
}
inline ::System::Security::Cryptography::RSA* Mono::Security::Authenticode::PrivateKey::get_RSA() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::PrivateKey*>(), { "get_RSA", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::Authenticode::PrivateKey::DeriveKey(::ArrayW<uint8_t> salt, ::StringW password) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::PrivateKey*>(), { "DeriveKey", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, salt, password);
}
inline bool Mono::Security::Authenticode::PrivateKey::Decode(::ArrayW<uint8_t> pvk, ::StringW password) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::PrivateKey*>(), { "Decode", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pvk, password);
}
inline ::Mono::Security::Authenticode::PrivateKey* Mono::Security::Authenticode::PrivateKey::CreateFromFile(::StringW filename) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::PrivateKey*>(), { "CreateFromFile", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Authenticode::PrivateKey*>(nullptr, ___internal_method, filename);
}
inline ::Mono::Security::Authenticode::PrivateKey* Mono::Security::Authenticode::PrivateKey::CreateFromFile(::StringW filename, ::StringW password) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Authenticode::PrivateKey*>(), { "CreateFromFile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Authenticode::PrivateKey*>(nullptr, ___internal_method, filename, password);
}
inline ::Mono::Security::Authenticode::PrivateKey* Mono::Security::Authenticode::PrivateKey::New_ctor(::ArrayW<uint8_t> data, ::StringW password) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Authenticode::PrivateKey*>(data, password));
}
// Ctor Parameters []
constexpr ::Mono::Security::Authenticode::PrivateKey::PrivateKey() {}
