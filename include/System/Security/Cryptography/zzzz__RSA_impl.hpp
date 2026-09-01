#pragma once
// IWYU pragma private; include "System\Security\Cryptography\RSA.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_impl.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
#include "System/Security/Cryptography/zzzz__RSAParameters_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RSA._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSA::*)()>(&::System::Security::Cryptography::RSA::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b021a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSA*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSA* (*)()>(&::System::Security::Cryptography::RSA::Create)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b021a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSA*>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.EncryptValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::RSA::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::RSA::EncryptValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5b0221c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSA*>(), { ::i2c::class_of<::System::Security::Cryptography::RSA*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.FromXmlString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSA::*)(::StringW)>(&::System::Security::Cryptography::RSA::FromXmlString)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x5b0226c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSA*>(), { ::i2c::class_of<::System::Security::Cryptography::RSA*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.ToXmlString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Cryptography::RSA::*)(bool)>(&::System::Security::Cryptography::RSA::ToXmlString)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x5b02808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSA*>(), { ::i2c::class_of<::System::Security::Cryptography::RSA*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.ExportParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RSAParameters (::System::Security::Cryptography::RSA::*)(bool)>(
    &::System::Security::Cryptography::RSA::ExportParameters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSA*>(), { ::i2c::class_of<::System::Security::Cryptography::RSA*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RSA.ImportParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RSA::*)(::System::Security::Cryptography::RSAParameters)>(
    &::System::Security::Cryptography::RSA::ImportParameters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSA*>(), { ::i2c::class_of<::System::Security::Cryptography::RSA*>(), 12 }));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::RSA::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSA*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::RSA* System::Security::Cryptography::RSA::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RSA*>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSA*>(nullptr, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::RSA::EncryptValue(::ArrayW<uint8_t> rgb) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RSA*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, rgb);
}
inline void System::Security::Cryptography::RSA::FromXmlString(::StringW xmlString) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RSA*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlString);
}
inline ::StringW System::Security::Cryptography::RSA::ToXmlString(bool includePrivateParameters) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RSA*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, includePrivateParameters);
}
inline ::System::Security::Cryptography::RSAParameters System::Security::Cryptography::RSA::ExportParameters(bool includePrivateParameters) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RSA*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RSAParameters>(this, ___internal_method, includePrivateParameters);
}
inline void System::Security::Cryptography::RSA::ImportParameters(::System::Security::Cryptography::RSAParameters parameters) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RSA*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline ::System::Security::Cryptography::RSA* System::Security::Cryptography::RSA::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RSA*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RSA::RSA() {}
