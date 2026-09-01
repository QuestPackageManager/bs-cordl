#pragma once
// IWYU pragma private; include "System\Security\Cryptography\RSACryptoServiceProvider.hpp"
#include "System/Security/Cryptography/zzzz__CspProviderFlags_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSA_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSACryptoServiceProvider_def.hpp"
#include "Mono/Security/Cryptography/zzzz__KeyPairPersistence_def.hpp"
#include "Mono/Security/Cryptography/zzzz__RSAManaged_def.hpp"
#include "System/Security/Cryptography/zzzz__CspParameters_def.hpp"
#include "System/Security/Cryptography/zzzz__RSAParameters_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.get_UseMachineKeyStore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Security::Cryptography::RSACryptoServiceProvider::get_UseMachineKeyStore)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b02c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), { "get_UseMachineKeyStore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::RSACryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b02208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::System::Security::Cryptography::CspParameters*)>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b02cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::CspParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(int32_t)>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b02ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(int32_t, ::System::Security::Cryptography::CspParameters*)>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5b02ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Security::Cryptography::CspParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.Common
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(int32_t, bool)>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::Common)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5b02d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), { "Common", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.Common
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::System::Security::Cryptography::CspParameters*)>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::Common)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5b02f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                                                                                           { "Common", {}, { ::i2c::type_of<::System::Security::Cryptography::CspParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)()>(&::System::Security::Cryptography::RSACryptoServiceProvider::Finalize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b03054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.get_KeySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::RSACryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::get_KeySize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b030a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.get_PublicOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSACryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::get_PublicOnly)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b030c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), { "get_PublicOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.EncryptValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::ArrayW<uint8_t>)>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::EncryptValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b030dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.ExportParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSAParameters (::System::Security::Cryptography::RSACryptoServiceProvider::*)(bool)>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::ExportParameters)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5b030f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.ImportParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::System::Security::Cryptography::RSAParameters)>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::ImportParameters)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5b0322c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.GetHashNameFromOID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::StringW)>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::GetHashNameFromOID)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5b03270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), { "GetHashNameFromOID", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.VerifyHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::ArrayW<uint8_t>, ::StringW, ::ArrayW<uint8_t>)>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::VerifyHash)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5b0345c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                                                             { "VerifyHash", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(bool)>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b0358c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSACryptoServiceProvider.OnKeyGenerated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSACryptoServiceProvider::*)(::System::Object*, ::System::EventArgs*)>(
    &::System::Security::Cryptography::RSACryptoServiceProvider::OnKeyGenerated)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b035e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                                                                                           { "OnKeyGenerated", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>() } })));
    return ___internal_method;
  }
};
constexpr ::Mono::Security::Cryptography::KeyPairPersistence*& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_store() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___store;
}
constexpr ::Mono::Security::Cryptography::KeyPairPersistence* const& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_store() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___store;
}
constexpr void System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_set_store(::Mono::Security::Cryptography::KeyPairPersistence* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___store = value;
}
constexpr bool& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_persistKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___persistKey;
}
constexpr bool const& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_persistKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___persistKey;
}
constexpr void System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_set_persistKey(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___persistKey = value;
}
constexpr bool& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_persisted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___persisted;
}
constexpr bool const& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_persisted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___persisted;
}
constexpr void System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_set_persisted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___persisted = value;
}
constexpr bool& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_privateKeyExportable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKeyExportable;
}
constexpr bool const& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_privateKeyExportable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privateKeyExportable;
}
constexpr void System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_set_privateKeyExportable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___privateKeyExportable = value;
}
constexpr bool& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_m_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_disposed;
}
constexpr bool const& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_m_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_disposed;
}
constexpr void System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_set_m_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_disposed = value;
}
constexpr ::Mono::Security::Cryptography::RSAManaged*& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_rsa() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rsa;
}
constexpr ::Mono::Security::Cryptography::RSAManaged* const& System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_get_rsa() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rsa;
}
constexpr void System::Security::Cryptography::RSACryptoServiceProvider::__cordl_internal_set_rsa(::Mono::Security::Cryptography::RSAManaged* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rsa = value;
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::setStaticF_s_UseMachineKeyStore(::System::Security::Cryptography::CspProviderFlags value) {
  ::cordl_internals::setStaticField<::System::Security::Cryptography::CspProviderFlags, "s_UseMachineKeyStore", ::System::Security::Cryptography::RSACryptoServiceProvider*>(
      std::forward<::System::Security::Cryptography::CspProviderFlags>(value));
}
inline ::System::Security::Cryptography::CspProviderFlags System::Security::Cryptography::RSACryptoServiceProvider::getStaticF_s_UseMachineKeyStore() {
  return ::cordl_internals::getStaticField<::System::Security::Cryptography::CspProviderFlags, "s_UseMachineKeyStore", ::System::Security::Cryptography::RSACryptoServiceProvider*>();
}
inline bool System::Security::Cryptography::RSACryptoServiceProvider::get_UseMachineKeyStore() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), { "get_UseMachineKeyStore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::_ctor(::System::Security::Cryptography::CspParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Security::Cryptography::CspParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::_ctor(int32_t dwKeySize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dwKeySize);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::_ctor(int32_t dwKeySize, ::System::Security::Cryptography::CspParameters* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Security::Cryptography::CspParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dwKeySize, parameters);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::Common(int32_t dwKeySize, bool parameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), { "Common", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dwKeySize, parameters);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::Common(::System::Security::Cryptography::CspParameters* p) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                                                                                         { "Common", {}, { ::i2c::type_of<::System::Security::Cryptography::CspParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::RSACryptoServiceProvider::get_KeySize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Security::Cryptography::RSACryptoServiceProvider::get_PublicOnly() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), { "get_PublicOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSACryptoServiceProvider::EncryptValue(::ArrayW<uint8_t> rgb) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rgb);
}
inline ::System::Security::Cryptography::RSAParameters System::Security::Cryptography::RSACryptoServiceProvider::ExportParameters(bool includePrivateParameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSAParameters>(this, ___internal_method, includePrivateParameters);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::ImportParameters(::System::Security::Cryptography::RSAParameters parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline ::StringW System::Security::Cryptography::RSACryptoServiceProvider::GetHashNameFromOID(::StringW oid) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), { "GetHashNameFromOID", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, oid);
}
inline bool System::Security::Cryptography::RSACryptoServiceProvider::VerifyHash(::ArrayW<uint8_t> rgbHash, ::StringW str, ::ArrayW<uint8_t> rgbSignature) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                                                           { "VerifyHash", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rgbHash, str, rgbSignature);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Security::Cryptography::RSACryptoServiceProvider::OnKeyGenerated(::System::Object* sender, ::System::EventArgs* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSACryptoServiceProvider*>(),
                                                                                         { "OnKeyGenerated", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::EventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::Security::Cryptography::RSACryptoServiceProvider* System::Security::Cryptography::RSACryptoServiceProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RSACryptoServiceProvider*>());
}
inline ::System::Security::Cryptography::RSACryptoServiceProvider* System::Security::Cryptography::RSACryptoServiceProvider::New_ctor(::System::Security::Cryptography::CspParameters* parameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RSACryptoServiceProvider*>(parameters));
}
inline ::System::Security::Cryptography::RSACryptoServiceProvider* System::Security::Cryptography::RSACryptoServiceProvider::New_ctor(int32_t dwKeySize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RSACryptoServiceProvider*>(dwKeySize));
}
inline ::System::Security::Cryptography::RSACryptoServiceProvider* System::Security::Cryptography::RSACryptoServiceProvider::New_ctor(int32_t dwKeySize,
                                                                                                                                      ::System::Security::Cryptography::CspParameters* parameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RSACryptoServiceProvider*>(dwKeySize, parameters));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RSACryptoServiceProvider::RSACryptoServiceProvider() {}
