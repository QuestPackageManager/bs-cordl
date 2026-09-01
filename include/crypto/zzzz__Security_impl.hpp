#pragma once
// IWYU pragma private; include "crypto\Security.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "crypto/zzzz__Security_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBufferedCipher_def.hpp"
//  Writing Method size for method: ::crypto::Security.ComputeHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::crypto::Security::ComputeHash)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x349f0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::crypto::Security*>(), { "ComputeHash", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::crypto::Security.Decrypt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW)>(&::crypto::Security::Decrypt)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x349f258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::crypto::Security*>(), { "Decrypt", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::crypto::Security.Encrypt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW, ::StringW)>(&::crypto::Security::Encrypt)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x349f584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::crypto::Security*>(), { "Encrypt", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::crypto::Security.GenerateText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::crypto::Security::GenerateText)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x349f678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::crypto::Security*>(), { "GenerateText", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::crypto::Security.CreateCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IBufferedCipher* (*)(bool, ::StringW, ::StringW)>(&::crypto::Security::CreateCipher)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x349f360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::crypto::Security*>(), { "CreateCipher", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::crypto::Security._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::crypto::Security::*)()>(&::crypto::Security::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x349f740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::crypto::Security*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW crypto::Security::ComputeHash(::StringW text, ::StringW salt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::crypto::Security*>(), { "ComputeHash", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, text, salt);
}
inline ::StringW crypto::Security::Decrypt(::StringW cipherText, ::StringW key, ::StringW iv) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::crypto::Security*>(), { "Decrypt", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, cipherText, key, iv);
}
inline ::StringW crypto::Security::Encrypt(::StringW plainText, ::StringW key, ::StringW iv) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::crypto::Security*>(), { "Encrypt", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, plainText, key, iv);
}
inline ::StringW crypto::Security::GenerateText(int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::crypto::Security*>(), { "GenerateText", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, size);
}
inline ::Org::BouncyCastle::Crypto::IBufferedCipher* crypto::Security::CreateCipher(bool isEncryption, ::StringW key, ::StringW iv) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::crypto::Security*>(), { "CreateCipher", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBufferedCipher*>(nullptr, ___internal_method, isEncryption, key, iv);
}
inline void crypto::Security::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::crypto::Security*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::crypto::Security* crypto::Security::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::crypto::Security*>());
}
// Ctor Parameters []
constexpr ::crypto::Security::Security() {}
