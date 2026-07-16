#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DESCryptoServiceProvider.hpp"
#include "System/Security/Cryptography/zzzz__DES_impl.hpp"
#include "System/Security/Cryptography/zzzz__DESCryptoServiceProvider_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::DESCryptoServiceProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DESCryptoServiceProvider::*)()>(&::System::Security::Cryptography::DESCryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5af797c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DESCryptoServiceProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DESCryptoServiceProvider.CreateEncryptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::ICryptoTransform* (
    ::System::Security::Cryptography::DESCryptoServiceProvider::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::DESCryptoServiceProvider::CreateEncryptor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5af7ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DESCryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::DESCryptoServiceProvider*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DESCryptoServiceProvider.CreateDecryptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::ICryptoTransform* (
    ::System::Security::Cryptography::DESCryptoServiceProvider::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::DESCryptoServiceProvider::CreateDecryptor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5af7cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DESCryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::DESCryptoServiceProvider*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DESCryptoServiceProvider.GenerateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DESCryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::DESCryptoServiceProvider::GenerateKey)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5af7e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DESCryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::DESCryptoServiceProvider*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::DESCryptoServiceProvider.GenerateIV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::DESCryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::DESCryptoServiceProvider::GenerateIV)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5af7eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DESCryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::DESCryptoServiceProvider*>(), 25 }));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::DESCryptoServiceProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::DESCryptoServiceProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::DESCryptoServiceProvider::CreateEncryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgbIV) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::DESCryptoServiceProvider*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*>(this, ___internal_method, rgbKey, rgbIV);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::DESCryptoServiceProvider::CreateDecryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgbIV) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::DESCryptoServiceProvider*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*>(this, ___internal_method, rgbKey, rgbIV);
}
inline void System::Security::Cryptography::DESCryptoServiceProvider::GenerateKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::DESCryptoServiceProvider*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::DESCryptoServiceProvider::GenerateIV() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::DESCryptoServiceProvider*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::DESCryptoServiceProvider* System::Security::Cryptography::DESCryptoServiceProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::DESCryptoServiceProvider*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::DESCryptoServiceProvider::DESCryptoServiceProvider() {}
