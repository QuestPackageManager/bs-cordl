#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/PKCS1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Cryptography/zzzz__PKCS1_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS1.Compare
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Mono::Security::Cryptography::PKCS1::Compare)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5abae2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::PKCS1*>(), { "Compare", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS1.I2OSP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int32_t)>(&::Mono::Security::Cryptography::PKCS1::I2OSP)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5abae9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::PKCS1*>(), { "I2OSP", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS1.OS2IP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>)>(&::Mono::Security::Cryptography::PKCS1::OS2IP)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5abaf2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::PKCS1*>(), { "OS2IP", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS1.RSAVP1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Security::Cryptography::RSA*, ::ArrayW<uint8_t>)>(&::Mono::Security::Cryptography::PKCS1::RSAVP1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5abaffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::PKCS1*>(),
                                                             { "RSAVP1", {}, { ::i2c::type_of<::System::Security::Cryptography::RSA*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS1.Verify_v15
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Mono::Security::Cryptography::PKCS1::Verify_v15)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5abb014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::PKCS1*>(),
                                                             { "Verify_v15",
                                                               {},
                                                               { ::i2c::type_of<::System::Security::Cryptography::RSA*>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithm*>(),
                                                                 ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS1.Verify_v15
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Security::Cryptography::RSA*, ::StringW, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Mono::Security::Cryptography::PKCS1::Verify_v15)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5abb2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::PKCS1*>(), { "Verify_v15",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::System::Security::Cryptography::RSA*>(), ::i2c::type_of<::StringW>(),
                                                                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS1.Verify_v15
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool)>(
    &::Mono::Security::Cryptography::PKCS1::Verify_v15)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5abb098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::PKCS1*>(),
                                                             { "Verify_v15",
                                                               {},
                                                               { ::i2c::type_of<::System::Security::Cryptography::RSA*>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithm*>(),
                                                                 ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS1.Encode_v15
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::System::Security::Cryptography::HashAlgorithm*, ::ArrayW<uint8_t>, int32_t)>(
    &::Mono::Security::Cryptography::PKCS1::Encode_v15)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x5abb880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::PKCS1*>(),
                            { "Encode_v15", {}, { ::i2c::type_of<::System::Security::Cryptography::HashAlgorithm*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Cryptography::PKCS1.CreateFromName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::HashAlgorithm* (*)(::StringW)>(&::Mono::Security::Cryptography::PKCS1::CreateFromName)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x5abb444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::PKCS1*>(), { "CreateFromName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void Mono::Security::Cryptography::PKCS1::setStaticF_emptySHA1(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "emptySHA1", ::Mono::Security::Cryptography::PKCS1*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS1::getStaticF_emptySHA1() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "emptySHA1", ::Mono::Security::Cryptography::PKCS1*>();
}
inline void Mono::Security::Cryptography::PKCS1::setStaticF_emptySHA256(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "emptySHA256", ::Mono::Security::Cryptography::PKCS1*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS1::getStaticF_emptySHA256() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "emptySHA256", ::Mono::Security::Cryptography::PKCS1*>();
}
inline void Mono::Security::Cryptography::PKCS1::setStaticF_emptySHA384(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "emptySHA384", ::Mono::Security::Cryptography::PKCS1*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS1::getStaticF_emptySHA384() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "emptySHA384", ::Mono::Security::Cryptography::PKCS1*>();
}
inline void Mono::Security::Cryptography::PKCS1::setStaticF_emptySHA512(::ArrayW<uint8_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<uint8_t>, "emptySHA512", ::Mono::Security::Cryptography::PKCS1*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS1::getStaticF_emptySHA512() {
  return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "emptySHA512", ::Mono::Security::Cryptography::PKCS1*>();
}
inline bool Mono::Security::Cryptography::PKCS1::Compare(::ArrayW<uint8_t> array1, ::ArrayW<uint8_t> array2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::PKCS1*>(), { "Compare", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array1, array2);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS1::I2OSP(::ArrayW<uint8_t> x, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::PKCS1*>(), { "I2OSP", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, x, size);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS1::OS2IP(::ArrayW<uint8_t> x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::PKCS1*>(), { "OS2IP", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, x);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS1::RSAVP1(::System::Security::Cryptography::RSA* rsa, ::ArrayW<uint8_t> s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::PKCS1*>(),
                                                           { "RSAVP1", {}, { ::i2c::type_of<::System::Security::Cryptography::RSA*>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, rsa, s);
}
inline bool Mono::Security::Cryptography::PKCS1::Verify_v15(::System::Security::Cryptography::RSA* rsa, ::System::Security::Cryptography::HashAlgorithm* hash, ::ArrayW<uint8_t> hashValue,
                                                            ::ArrayW<uint8_t> signature) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::PKCS1*>(),
                                                           { "Verify_v15",
                                                             {},
                                                             { ::i2c::type_of<::System::Security::Cryptography::RSA*>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithm*>(),
                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rsa, hash, hashValue, signature);
}
inline bool Mono::Security::Cryptography::PKCS1::Verify_v15(::System::Security::Cryptography::RSA* rsa, ::StringW hashName, ::ArrayW<uint8_t> hashValue, ::ArrayW<uint8_t> signature) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Mono::Security::Cryptography::PKCS1*>(),
          { "Verify_v15", {}, { ::i2c::type_of<::System::Security::Cryptography::RSA*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rsa, hashName, hashValue, signature);
}
inline bool Mono::Security::Cryptography::PKCS1::Verify_v15(::System::Security::Cryptography::RSA* rsa, ::System::Security::Cryptography::HashAlgorithm* hash, ::ArrayW<uint8_t> hashValue,
                                                            ::ArrayW<uint8_t> signature, bool tryNonStandardEncoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::PKCS1*>(),
                                                           { "Verify_v15",
                                                             {},
                                                             { ::i2c::type_of<::System::Security::Cryptography::RSA*>(), ::i2c::type_of<::System::Security::Cryptography::HashAlgorithm*>(),
                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rsa, hash, hashValue, signature, tryNonStandardEncoding);
}
inline ::ArrayW<uint8_t> Mono::Security::Cryptography::PKCS1::Encode_v15(::System::Security::Cryptography::HashAlgorithm* hash, ::ArrayW<uint8_t> hashValue, int32_t emLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::PKCS1*>(),
                                       { "Encode_v15", {}, { ::i2c::type_of<::System::Security::Cryptography::HashAlgorithm*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, hash, hashValue, emLength);
}
inline ::System::Security::Cryptography::HashAlgorithm* Mono::Security::Cryptography::PKCS1::CreateFromName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Cryptography::PKCS1*>(), { "CreateFromName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::HashAlgorithm*>(nullptr, ___internal_method, name);
}
// Ctor Parameters []
constexpr ::Mono::Security::Cryptography::PKCS1::PKCS1() {}
