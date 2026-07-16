#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DSACryptoServiceProvider.hpp"
#include "System/Security/Cryptography/zzzz__DSA_impl.hpp"
#include "System/Security/Cryptography/zzzz__DSACryptoServiceProvider_def.hpp"
#include "Mono/Security/Cryptography/zzzz__DSAManaged_def.hpp"
#include "Mono/Security/Cryptography/zzzz__KeyPairPersistence_def.hpp"
#include "System/Security/Cryptography/zzzz__DSAParameters_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::DSACryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b088ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)(int32_t)>(
    &::System::Security::Cryptography::DSACryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b0aa7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.Common
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)(int32_t, bool)>(
    &::System::Security::Cryptography::DSACryptoServiceProvider::Common)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5b0aa8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), { "Common", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::DSACryptoServiceProvider::Finalize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b0ac98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.get_KeySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::DSACryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::DSACryptoServiceProvider::get_KeySize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b0ace8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.get_PublicOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::DSACryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::DSACryptoServiceProvider::get_PublicOnly)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b0ad04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), { "get_PublicOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.ExportParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::DSAParameters (::System::Security::Cryptography::DSACryptoServiceProvider::*)(bool)>(
    &::System::Security::Cryptography::DSACryptoServiceProvider::ExportParameters)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b0ad1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.ImportParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)(::System::Security::Cryptography::DSAParameters)>(
    &::System::Security::Cryptography::DSACryptoServiceProvider::ImportParameters)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b0adc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.VerifySignature
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::DSACryptoServiceProvider::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::System::Security::Cryptography::DSACryptoServiceProvider::VerifySignature)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b0ae04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)(bool)>(
    &::System::Security::Cryptography::DSACryptoServiceProvider::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b0ae20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DSACryptoServiceProvider.OnKeyGenerated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DSACryptoServiceProvider::*)(::System::Object*, ::System::EventArgs*)>(
    &::System::Security::Cryptography::DSACryptoServiceProvider::OnKeyGenerated)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b0ae78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                                                                                           { "OnKeyGenerated", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>() } })));
    return ___internal_method;
  }
};
constexpr ::Mono::Security::Cryptography::KeyPairPersistence*& System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_get_store() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___store;
}
constexpr ::Mono::Security::Cryptography::KeyPairPersistence* const& System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_get_store() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___store;
}
constexpr void System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_set_store(::Mono::Security::Cryptography::KeyPairPersistence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___store = value;
}
constexpr bool& System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_get_persistKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___persistKey;
}
constexpr bool const& System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_get_persistKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___persistKey;
}
constexpr void System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_set_persistKey(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___persistKey = value;
}
constexpr bool& System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_get_persisted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___persisted;
}
constexpr bool const& System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_get_persisted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___persisted;
}
constexpr void System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_set_persisted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___persisted = value;
}
constexpr bool& System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_get_privateKeyExportable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKeyExportable;
}
constexpr bool const& System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_get_privateKeyExportable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKeyExportable;
}
constexpr void System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_set_privateKeyExportable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___privateKeyExportable = value;
}
constexpr bool& System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_get_m_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_disposed;
}
constexpr bool const& System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_get_m_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_disposed;
}
constexpr void System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_set_m_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_disposed = value;
}
constexpr ::Mono::Security::Cryptography::DSAManaged*& System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_get_dsa() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dsa;
}
constexpr ::Mono::Security::Cryptography::DSAManaged* const& System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_get_dsa() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dsa;
}
constexpr void System::Security::Cryptography::DSACryptoServiceProvider::__cordl_internal_set_dsa(::Mono::Security::Cryptography::DSAManaged* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dsa = value;
}
inline void System::Security::Cryptography::DSACryptoServiceProvider::setStaticF_useMachineKeyStore(bool value) {
  ::cordl_internals::setStaticField<bool, "useMachineKeyStore", ::System::Security::Cryptography::DSACryptoServiceProvider*>(std::forward<bool>(value));
}
inline bool System::Security::Cryptography::DSACryptoServiceProvider::getStaticF_useMachineKeyStore() {
  return ::cordl_internals::getStaticField<bool, "useMachineKeyStore", ::System::Security::Cryptography::DSACryptoServiceProvider*>();
}
inline void System::Security::Cryptography::DSACryptoServiceProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::DSACryptoServiceProvider::_ctor(int32_t dwKeySize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dwKeySize);
}
inline void System::Security::Cryptography::DSACryptoServiceProvider::Common(int32_t dwKeySize, bool parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), { "Common", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dwKeySize, parameters);
}
inline void System::Security::Cryptography::DSACryptoServiceProvider::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::DSACryptoServiceProvider::get_KeySize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Security::Cryptography::DSACryptoServiceProvider::get_PublicOnly() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), { "get_PublicOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Security::Cryptography::DSAParameters System::Security::Cryptography::DSACryptoServiceProvider::ExportParameters(bool includePrivateParameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::DSAParameters>(this, ___internal_method, includePrivateParameters);
}
inline void System::Security::Cryptography::DSACryptoServiceProvider::ImportParameters(::System::Security::Cryptography::DSAParameters parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline bool System::Security::Cryptography::DSACryptoServiceProvider::VerifySignature(::ArrayW<uint8_t> rgbHash, ::ArrayW<uint8_t> rgbSignature) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rgbHash, rgbSignature);
}
inline void System::Security::Cryptography::DSACryptoServiceProvider::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Security::Cryptography::DSACryptoServiceProvider::OnKeyGenerated(::System::Object* sender, ::System::EventArgs* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DSACryptoServiceProvider*>(),
                                                                                         { "OnKeyGenerated", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::Security::Cryptography::DSACryptoServiceProvider* System::Security::Cryptography::DSACryptoServiceProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::DSACryptoServiceProvider*>());
}
inline ::System::Security::Cryptography::DSACryptoServiceProvider* System::Security::Cryptography::DSACryptoServiceProvider::New_ctor(int32_t dwKeySize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::DSACryptoServiceProvider*>(dwKeySize));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::DSACryptoServiceProvider::DSACryptoServiceProvider() {}
