#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RC2CryptoServiceProvider.hpp"
#include "System/Security/Cryptography/zzzz__KeySizes_impl.hpp"
#include "System/Security/Cryptography/zzzz__RC2_impl.hpp"
#include "System/Security/Cryptography/zzzz__RC2CryptoServiceProvider_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RC2CryptoServiceProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RC2CryptoServiceProvider::*)()>(&::System::Security::Cryptography::RC2CryptoServiceProvider::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5afac60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RC2CryptoServiceProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RC2CryptoServiceProvider.get_EffectiveKeySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::RC2CryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::RC2CryptoServiceProvider::get_EffectiveKeySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5afad24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RC2CryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::RC2CryptoServiceProvider*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RC2CryptoServiceProvider.CreateEncryptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::ICryptoTransform* (
    ::System::Security::Cryptography::RC2CryptoServiceProvider::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::RC2CryptoServiceProvider::CreateEncryptor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5afad2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RC2CryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::RC2CryptoServiceProvider*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RC2CryptoServiceProvider.CreateDecryptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::ICryptoTransform* (
    ::System::Security::Cryptography::RC2CryptoServiceProvider::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::RC2CryptoServiceProvider::CreateDecryptor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5afadf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RC2CryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::RC2CryptoServiceProvider*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RC2CryptoServiceProvider.GenerateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RC2CryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::RC2CryptoServiceProvider::GenerateKey)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5afaec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RC2CryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::RC2CryptoServiceProvider*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RC2CryptoServiceProvider.GenerateIV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RC2CryptoServiceProvider::*)()>(
    &::System::Security::Cryptography::RC2CryptoServiceProvider::GenerateIV)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5afaf44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RC2CryptoServiceProvider*>(),
                                                                                          { ::i2c::class_of<::System::Security::Cryptography::RC2CryptoServiceProvider*>(), 25 }));
    return ___internal_method;
  }
};
constexpr bool& System::Security::Cryptography::RC2CryptoServiceProvider::__cordl_internal_get_m_use40bitSalt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_use40bitSalt;
}
constexpr bool const& System::Security::Cryptography::RC2CryptoServiceProvider::__cordl_internal_get_m_use40bitSalt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_use40bitSalt;
}
constexpr void System::Security::Cryptography::RC2CryptoServiceProvider::__cordl_internal_set_m_use40bitSalt(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_use40bitSalt = value;
}
inline void System::Security::Cryptography::RC2CryptoServiceProvider::setStaticF_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*>, "s_legalKeySizes", ::System::Security::Cryptography::RC2CryptoServiceProvider*>(
      std::forward<::ArrayW<::System::Security::Cryptography::KeySizes*>>(value));
}
inline ::ArrayW<::System::Security::Cryptography::KeySizes*> System::Security::Cryptography::RC2CryptoServiceProvider::getStaticF_s_legalKeySizes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Security::Cryptography::KeySizes*>, "s_legalKeySizes", ::System::Security::Cryptography::RC2CryptoServiceProvider*>();
}
inline void System::Security::Cryptography::RC2CryptoServiceProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RC2CryptoServiceProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::RC2CryptoServiceProvider::get_EffectiveKeySize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RC2CryptoServiceProvider*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::RC2CryptoServiceProvider::CreateEncryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgbIV) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RC2CryptoServiceProvider*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*>(this, ___internal_method, rgbKey, rgbIV);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::RC2CryptoServiceProvider::CreateDecryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgbIV) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RC2CryptoServiceProvider*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*>(this, ___internal_method, rgbKey, rgbIV);
}
inline void System::Security::Cryptography::RC2CryptoServiceProvider::GenerateKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RC2CryptoServiceProvider*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::RC2CryptoServiceProvider::GenerateIV() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RC2CryptoServiceProvider*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::RC2CryptoServiceProvider* System::Security::Cryptography::RC2CryptoServiceProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RC2CryptoServiceProvider*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RC2CryptoServiceProvider::RC2CryptoServiceProvider() {}
