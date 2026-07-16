#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/RSAManaged.hpp"
#include "System/Security/Cryptography/zzzz__RSA_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Mono/Security/Cryptography/zzzz__RSAManaged_def.hpp"
#include "Mono/Math/zzzz__BigInteger_def.hpp"
#include "Mono/Security/Cryptography/zzzz__RSAManaged_def.hpp"
#include "System/Security/Cryptography/zzzz__RSAParameters_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5abe0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler::*)(::System::Object*, ::System::EventArgs*)>(
    &::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5abe20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*>(),
                                                                                          { ::i2c::class_of<::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*>(), 13 }));
    return ___internal_method;
  }
};
inline void Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler::Invoke(::System::Object* sender, ::System::EventArgs* e) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler* Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler::New_ctor(::System::Object* object,
                                                                                                                                                        ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler::RSAManaged_KeyGeneratedEventHandler() {}
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::RSAManaged::*)(int32_t)>(&::Mono::Security::Cryptography::RSAManaged::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5abbe0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::RSAManaged::*)()>(&::Mono::Security::Cryptography::RSAManaged::Finalize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5abbed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), { ::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged.GenerateKeyPair
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::RSAManaged::*)()>(&::Mono::Security::Cryptography::RSAManaged::GenerateKeyPair)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5abbf24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), { "GenerateKeyPair", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged.get_KeySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Mono::Security::Cryptography::RSAManaged::*)()>(&::Mono::Security::Cryptography::RSAManaged::get_KeySize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5abc74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), { ::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged.get_PublicOnly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mono::Security::Cryptography::RSAManaged::*)()>(&::Mono::Security::Cryptography::RSAManaged::get_PublicOnly)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5abc7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), { "get_PublicOnly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged.EncryptValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Cryptography::RSAManaged::*)(::ArrayW<uint8_t>)>(
    &::Mono::Security::Cryptography::RSAManaged::EncryptValue)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5abc940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), { ::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged.ExportParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSAParameters (::Mono::Security::Cryptography::RSAManaged::*)(bool)>(
    &::Mono::Security::Cryptography::RSAManaged::ExportParameters)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5abcdf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), { ::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged.ImportParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::RSAManaged::*)(::System::Security::Cryptography::RSAParameters)>(
    &::Mono::Security::Cryptography::RSAManaged::ImportParameters)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x5abd25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), { ::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::RSAManaged::*)(bool)>(&::Mono::Security::Cryptography::RSAManaged::Dispose)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5abd690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), { ::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged.add_KeyGenerated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::RSAManaged::*)(::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*)>(
    &::Mono::Security::Cryptography::RSAManaged::add_KeyGenerated)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5abd898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(),
                                                             { "add_KeyGenerated", {}, { ::i2c::type_of<::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged.remove_KeyGenerated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mono::Security::Cryptography::RSAManaged::*)(::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*)>(
    &::Mono::Security::Cryptography::RSAManaged::remove_KeyGenerated)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5abd944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(),
                                                             { "remove_KeyGenerated", {}, { ::i2c::type_of<::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged.ToXmlString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Mono::Security::Cryptography::RSAManaged::*)(bool)>(&::Mono::Security::Cryptography::RSAManaged::ToXmlString)> {
  constexpr static std::size_t size = 0x6d4;
  constexpr static std::size_t addrs = 0x5abd9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), { ::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::RSAManaged.GetPaddedValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Cryptography::RSAManaged::*)(::Mono::Math::BigInteger*, int32_t)>(
    &::Mono::Security::Cryptography::RSAManaged::GetPaddedValue)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5abcce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(),
                                                                                           { "GetPaddedValue", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr bool& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_isCRTpossible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCRTpossible;
}
constexpr bool const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_isCRTpossible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isCRTpossible;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_isCRTpossible(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isCRTpossible = value;
}
constexpr bool& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_keyBlinding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyBlinding;
}
constexpr bool const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_keyBlinding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyBlinding;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_keyBlinding(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyBlinding = value;
}
constexpr bool& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_keypairGenerated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keypairGenerated;
}
constexpr bool const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_keypairGenerated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keypairGenerated;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_keypairGenerated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keypairGenerated = value;
}
constexpr bool& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_m_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_disposed;
}
constexpr bool const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_m_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_disposed;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_m_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_disposed = value;
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_d() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_d() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___d;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_d(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___d = value;
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_p() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_p() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___p;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_p(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___p = value;
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_q() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_q() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___q;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_q(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___q = value;
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_dp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dp;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_dp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dp;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_dp(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dp = value;
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_dq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dq;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_dq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dq;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_dq(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dq = value;
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_qInv() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qInv;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_qInv() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___qInv;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_qInv(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___qInv = value;
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_n() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___n;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_n() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___n;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_n(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___n = value;
}
constexpr ::Mono::Math::BigInteger*& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_e() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr ::Mono::Math::BigInteger* const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_e() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___e;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_e(::Mono::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___e = value;
}
constexpr ::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_KeyGenerated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KeyGenerated;
}
constexpr ::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler* const& Mono::Security::Cryptography::RSAManaged::__cordl_internal_get_KeyGenerated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___KeyGenerated;
}
constexpr void Mono::Security::Cryptography::RSAManaged::__cordl_internal_set_KeyGenerated(::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___KeyGenerated = value;
}
inline void Mono::Security::Cryptography::RSAManaged::_ctor(int32_t keySize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keySize);
}
inline void Mono::Security::Cryptography::RSAManaged::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mono::Security::Cryptography::RSAManaged::GenerateKeyPair() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), { "GenerateKeyPair", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Mono::Security::Cryptography::RSAManaged::get_KeySize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Mono::Security::Cryptography::RSAManaged::get_PublicOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), { "get_PublicOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::RSAManaged::EncryptValue(::ArrayW<uint8_t> rgb) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rgb);
}
inline ::System::Security::Cryptography::RSAParameters Mono::Security::Cryptography::RSAManaged::ExportParameters(bool includePrivateParameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSAParameters>(this, ___internal_method, includePrivateParameters);
}
inline void Mono::Security::Cryptography::RSAManaged::ImportParameters(::System::Security::Cryptography::RSAParameters parameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void Mono::Security::Cryptography::RSAManaged::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void Mono::Security::Cryptography::RSAManaged::add_KeyGenerated(::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(),
                                                           { "add_KeyGenerated", {}, { ::i2c::type_of<::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mono::Security::Cryptography::RSAManaged::remove_KeyGenerated(::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(),
                                                           { "remove_KeyGenerated", {}, { ::i2c::type_of<::Mono::Security::Cryptography::RSAManaged_KeyGeneratedEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Mono::Security::Cryptography::RSAManaged::ToXmlString(bool includePrivateParameters) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, includePrivateParameters);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::RSAManaged::GetPaddedValue(::Mono::Math::BigInteger* value, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::RSAManaged*>(),
                                                                                         { "GetPaddedValue", {}, { ::i2c::type_of<::Mono::Math::BigInteger*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, value, length);
}
inline ::Mono::Security::Cryptography::RSAManaged* Mono::Security::Cryptography::RSAManaged::New_ctor(int32_t keySize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mono::Security::Cryptography::RSAManaged*>(keySize));
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::RSAManaged::RSAManaged() {}
