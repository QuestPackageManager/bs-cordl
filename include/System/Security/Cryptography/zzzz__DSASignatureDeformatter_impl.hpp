#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DSASignatureDeformatter.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureDeformatter_impl.hpp"
#include "System/Security/Cryptography/zzzz__DSASignatureDeformatter_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureDeformatter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSASignatureDeformatter::*)()>(&::System::Security::Cryptography::DSASignatureDeformatter::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5af8b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSASignatureDeformatter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureDeformatter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSASignatureDeformatter::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(
    &::System::Security::Cryptography::DSASignatureDeformatter::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5af8b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSASignatureDeformatter*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureDeformatter.SetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSASignatureDeformatter::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(
    &::System::Security::Cryptography::DSASignatureDeformatter::SetKey)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5af8c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSASignatureDeformatter*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::DSASignatureDeformatter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureDeformatter.SetHashAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSASignatureDeformatter::*)(::StringW)>(
    &::System::Security::Cryptography::DSASignatureDeformatter::SetHashAlgorithm)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5af8d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSASignatureDeformatter*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::DSASignatureDeformatter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSASignatureDeformatter.VerifySignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::DSASignatureDeformatter::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::System::Security::Cryptography::DSASignatureDeformatter::VerifySignature)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5af8e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSASignatureDeformatter*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::DSASignatureDeformatter*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::DSA*& System::Security::Cryptography::DSASignatureDeformatter::__cordl_internal_get__dsaKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dsaKey;
}
constexpr ::System::Security::Cryptography::DSA* const& System::Security::Cryptography::DSASignatureDeformatter::__cordl_internal_get__dsaKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dsaKey;
}
constexpr void System::Security::Cryptography::DSASignatureDeformatter::__cordl_internal_set__dsaKey(::System::Security::Cryptography::DSA* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dsaKey = value;
}
constexpr ::StringW& System::Security::Cryptography::DSASignatureDeformatter::__cordl_internal_get__oid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oid;
}
constexpr ::StringW const& System::Security::Cryptography::DSASignatureDeformatter::__cordl_internal_get__oid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oid;
}
constexpr void System::Security::Cryptography::DSASignatureDeformatter::__cordl_internal_set__oid(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____oid = value;
}
inline void System::Security::Cryptography::DSASignatureDeformatter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSASignatureDeformatter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::DSASignatureDeformatter::_ctor(::System::Security::Cryptography::AsymmetricAlgorithm* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSASignatureDeformatter*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::AsymmetricAlgorithm*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void System::Security::Cryptography::DSASignatureDeformatter::SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::DSASignatureDeformatter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void System::Security::Cryptography::DSASignatureDeformatter::SetHashAlgorithm(::StringW strName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::DSASignatureDeformatter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strName);
}
inline bool System::Security::Cryptography::DSASignatureDeformatter::VerifySignature(::ArrayW<uint8_t> rgbHash, ::ArrayW<uint8_t> rgbSignature) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::DSASignatureDeformatter*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rgbHash, rgbSignature);
}
inline ::System::Security::Cryptography::DSASignatureDeformatter* System::Security::Cryptography::DSASignatureDeformatter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::DSASignatureDeformatter*>());
}
inline ::System::Security::Cryptography::DSASignatureDeformatter* System::Security::Cryptography::DSASignatureDeformatter::New_ctor(::System::Security::Cryptography::AsymmetricAlgorithm* key) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::DSASignatureDeformatter*>(key));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::DSASignatureDeformatter::DSASignatureDeformatter() {}
