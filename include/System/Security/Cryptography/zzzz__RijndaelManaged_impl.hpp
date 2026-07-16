#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RijndaelManaged.hpp"
#include "System/Security/Cryptography/zzzz__Rijndael_impl.hpp"
#include "System/Security/Cryptography/zzzz__RijndaelManaged_def.hpp"
#include "System/Security/Cryptography/zzzz__CipherMode_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__RijndaelManagedTransformMode_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManaged._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RijndaelManaged::*)()>(&::System::Security::Cryptography::RijndaelManaged::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5afb210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RijndaelManaged*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManaged.CreateEncryptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::ICryptoTransform* (
    ::System::Security::Cryptography::RijndaelManaged::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::RijndaelManaged::CreateEncryptor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5afb29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RijndaelManaged*>(), { ::i2c::class_of<::System::Security::Cryptography::RijndaelManaged*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManaged.CreateDecryptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::ICryptoTransform* (
    ::System::Security::Cryptography::RijndaelManaged::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Security::Cryptography::RijndaelManaged::CreateDecryptor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5afb3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RijndaelManaged*>(), { ::i2c::class_of<::System::Security::Cryptography::RijndaelManaged*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManaged.GenerateKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RijndaelManaged::*)()>(&::System::Security::Cryptography::RijndaelManaged::GenerateKey)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5afb3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RijndaelManaged*>(), { ::i2c::class_of<::System::Security::Cryptography::RijndaelManaged*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManaged.GenerateIV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RijndaelManaged::*)()>(&::System::Security::Cryptography::RijndaelManaged::GenerateIV)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5afb3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RijndaelManaged*>(), { ::i2c::class_of<::System::Security::Cryptography::RijndaelManaged*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RijndaelManaged.NewEncryptor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::ICryptoTransform* (
    ::System::Security::Cryptography::RijndaelManaged::*)(::ArrayW<uint8_t>, ::System::Security::Cryptography::CipherMode, ::ArrayW<uint8_t>, int32_t,
                                                          ::System::Security::Cryptography::RijndaelManagedTransformMode)>(&::System::Security::Cryptography::RijndaelManaged::NewEncryptor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5afb2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RijndaelManaged*>(),
                                                { "NewEncryptor",
                                                  {},
                                                  { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Security::Cryptography::CipherMode>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Security::Cryptography::RijndaelManagedTransformMode>() } })));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::RijndaelManaged::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RijndaelManaged*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::RijndaelManaged::CreateEncryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgbIV) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RijndaelManaged*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*>(this, ___internal_method, rgbKey, rgbIV);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::RijndaelManaged::CreateDecryptor(::ArrayW<uint8_t> rgbKey, ::ArrayW<uint8_t> rgbIV) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RijndaelManaged*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*>(this, ___internal_method, rgbKey, rgbIV);
}
inline void System::Security::Cryptography::RijndaelManaged::GenerateKey() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RijndaelManaged*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::RijndaelManaged::GenerateIV() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Cryptography::RijndaelManaged*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::RijndaelManaged::NewEncryptor(::ArrayW<uint8_t> rgbKey, ::System::Security::Cryptography::CipherMode mode,
                                                                                                                         ::ArrayW<uint8_t> rgbIV, int32_t feedbackSize,
                                                                                                                         ::System::Security::Cryptography::RijndaelManagedTransformMode encryptMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Cryptography::RijndaelManaged*>(),
                                                           { "NewEncryptor",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Security::Cryptography::CipherMode>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Security::Cryptography::RijndaelManagedTransformMode>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*>(this, ___internal_method, rgbKey, mode, rgbIV, feedbackSize, encryptMode);
}
inline ::System::Security::Cryptography::RijndaelManaged* System::Security::Cryptography::RijndaelManaged::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RijndaelManaged*>());
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RijndaelManaged::RijndaelManaged() {}
