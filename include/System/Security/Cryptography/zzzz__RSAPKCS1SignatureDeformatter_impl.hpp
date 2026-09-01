#pragma once
// IWYU pragma private; include "System\Security\Cryptography\RSAPKCS1SignatureDeformatter.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureDeformatter_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSAPKCS1SignatureDeformatter_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1SignatureDeformatter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSAPKCS1SignatureDeformatter::*)()>(
    &::System::Security::Cryptography::RSAPKCS1SignatureDeformatter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b0f70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1SignatureDeformatter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSAPKCS1SignatureDeformatter::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(
    &::System::Security::Cryptography::RSAPKCS1SignatureDeformatter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b0f710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1SignatureDeformatter.SetHashAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSAPKCS1SignatureDeformatter::*)(::StringW)>(
    &::System::Security::Cryptography::RSAPKCS1SignatureDeformatter::SetHashAlgorithm)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b0f71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1SignatureDeformatter.SetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSAPKCS1SignatureDeformatter::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(
    &::System::Security::Cryptography::RSAPKCS1SignatureDeformatter::SetKey)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5b0f774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSAPKCS1SignatureDeformatter.VerifySignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSAPKCS1SignatureDeformatter::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::System::Security::Cryptography::RSAPKCS1SignatureDeformatter::VerifySignature)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5b0f86c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::RSA*& System::Security::Cryptography::RSAPKCS1SignatureDeformatter::__cordl_internal_get_rsa() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rsa;
}
constexpr ::System::Security::Cryptography::RSA* const& System::Security::Cryptography::RSAPKCS1SignatureDeformatter::__cordl_internal_get_rsa() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rsa;
}
constexpr void System::Security::Cryptography::RSAPKCS1SignatureDeformatter::__cordl_internal_set_rsa(::System::Security::Cryptography::RSA* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rsa = value;
}
constexpr ::StringW& System::Security::Cryptography::RSAPKCS1SignatureDeformatter::__cordl_internal_get_hashName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashName;
}
constexpr ::StringW const& System::Security::Cryptography::RSAPKCS1SignatureDeformatter::__cordl_internal_get_hashName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashName;
}
constexpr void System::Security::Cryptography::RSAPKCS1SignatureDeformatter::__cordl_internal_set_hashName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashName = value;
}
inline void System::Security::Cryptography::RSAPKCS1SignatureDeformatter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::RSAPKCS1SignatureDeformatter::_ctor(::System::Security::Cryptography::AsymmetricAlgorithm* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void System::Security::Cryptography::RSAPKCS1SignatureDeformatter::SetHashAlgorithm(::StringW strName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strName);
}
inline void System::Security::Cryptography::RSAPKCS1SignatureDeformatter::SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline bool System::Security::Cryptography::RSAPKCS1SignatureDeformatter::VerifySignature(::ArrayW<uint8_t> rgbHash, ::ArrayW<uint8_t> rgbSignature) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rgbHash, rgbSignature);
}
inline ::System::Security::Cryptography::RSAPKCS1SignatureDeformatter* System::Security::Cryptography::RSAPKCS1SignatureDeformatter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>());
}
inline ::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*
System::Security::Cryptography::RSAPKCS1SignatureDeformatter::New_ctor(::System::Security::Cryptography::AsymmetricAlgorithm* key) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RSAPKCS1SignatureDeformatter*>(key));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RSAPKCS1SignatureDeformatter::RSAPKCS1SignatureDeformatter() {}
