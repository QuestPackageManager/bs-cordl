#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\RevocationKey.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__RevocationKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__RevocationKeyTag_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RevocationKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::RevocationKey::*)(bool, bool, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::RevocationKey::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3695620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationKey*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RevocationKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::RevocationKey::*)(
    bool, ::Org::BouncyCastle::Bcpg::RevocationKeyTag, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::RevocationKey::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3695638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationKey*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::RevocationKeyTag>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RevocationKey.CreateData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::Org::BouncyCastle::Bcpg::RevocationKeyTag, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::RevocationKey::CreateData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3695678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationKey*>(),
                                                             { "CreateData",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Bcpg::RevocationKeyTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(),
                                                                 ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RevocationKey.get_SignatureClass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::RevocationKeyTag (::Org::BouncyCastle::Bcpg::RevocationKey::*)()>(
    &::Org::BouncyCastle::Bcpg::RevocationKey::get_SignatureClass)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3695728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationKey*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationKey*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RevocationKey.get_Algorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag (::Org::BouncyCastle::Bcpg::RevocationKey::*)()>(
    &::Org::BouncyCastle::Bcpg::RevocationKey::get_Algorithm)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3695750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationKey*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationKey*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::RevocationKey.GetFingerprint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::RevocationKey::*)()>(&::Org::BouncyCastle::Bcpg::RevocationKey::GetFingerprint)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x369577c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationKey*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationKey*>(), 6 }));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Bcpg::RevocationKey::_ctor(bool isCritical, bool isLongLength, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationKey*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCritical, isLongLength, data);
}
inline void Org::BouncyCastle::Bcpg::RevocationKey::_ctor(bool isCritical, ::Org::BouncyCastle::Bcpg::RevocationKeyTag signatureClass, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm,
                                                          ::ArrayW<uint8_t> fingerprint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationKey*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<bool>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::RevocationKeyTag>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isCritical, signatureClass, keyAlgorithm, fingerprint);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::RevocationKey::CreateData(::Org::BouncyCastle::Bcpg::RevocationKeyTag signatureClass, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm,
                                                                            ::ArrayW<uint8_t> fingerprint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationKey*>(),
                                                           { "CreateData",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Bcpg::RevocationKeyTag>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(),
                                                               ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, signatureClass, keyAlgorithm, fingerprint);
}
inline ::Org::BouncyCastle::Bcpg::RevocationKeyTag Org::BouncyCastle::Bcpg::RevocationKey::get_SignatureClass() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationKey*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::RevocationKeyTag>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag Org::BouncyCastle::Bcpg::RevocationKey::get_Algorithm() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationKey*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::RevocationKey::GetFingerprint() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::RevocationKey*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::RevocationKey* Org::BouncyCastle::Bcpg::RevocationKey::New_ctor(bool isCritical, bool isLongLength, ::ArrayW<uint8_t> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::RevocationKey*>(isCritical, isLongLength, data));
}
inline ::Org::BouncyCastle::Bcpg::RevocationKey* Org::BouncyCastle::Bcpg::RevocationKey::New_ctor(bool isCritical, ::Org::BouncyCastle::Bcpg::RevocationKeyTag signatureClass,
                                                                                                  ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::ArrayW<uint8_t> fingerprint) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::RevocationKey*>(isCritical, signatureClass, keyAlgorithm, fingerprint));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::RevocationKey::RevocationKey() {}
