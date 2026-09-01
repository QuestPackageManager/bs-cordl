#pragma once
// IWYU pragma private; include "System\Security\Cryptography\AsymmetricSignatureDeformatter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureDeformatter_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricSignatureDeformatter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricSignatureDeformatter::*)()>(
    &::System::Security::Cryptography::AsymmetricSignatureDeformatter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5af91ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricSignatureDeformatter.SetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricSignatureDeformatter::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(
    &::System::Security::Cryptography::AsymmetricSignatureDeformatter::SetKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricSignatureDeformatter.SetHashAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::AsymmetricSignatureDeformatter::*)(::StringW)>(
    &::System::Security::Cryptography::AsymmetricSignatureDeformatter::SetHashAlgorithm)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::AsymmetricSignatureDeformatter.VerifySignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::AsymmetricSignatureDeformatter::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::System::Security::Cryptography::AsymmetricSignatureDeformatter::VerifySignature)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>(), 6 }));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::AsymmetricSignatureDeformatter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::AsymmetricSignatureDeformatter::SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void System::Security::Cryptography::AsymmetricSignatureDeformatter::SetHashAlgorithm(::StringW strName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strName);
}
inline bool System::Security::Cryptography::AsymmetricSignatureDeformatter::VerifySignature(::ArrayW<uint8_t> rgbHash, ::ArrayW<uint8_t> rgbSignature) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rgbHash, rgbSignature);
}
inline ::System::Security::Cryptography::AsymmetricSignatureDeformatter* System::Security::Cryptography::AsymmetricSignatureDeformatter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::AsymmetricSignatureDeformatter*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::AsymmetricSignatureDeformatter::AsymmetricSignatureDeformatter() {}
