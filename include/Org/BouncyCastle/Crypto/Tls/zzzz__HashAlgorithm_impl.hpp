#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\HashAlgorithm.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__HashAlgorithm_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HashAlgorithm.GetName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::HashAlgorithm::GetName)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x346b45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HashAlgorithm*>(), { "GetName", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HashAlgorithm.GetText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::HashAlgorithm::GetText)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x346b554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HashAlgorithm*>(), { "GetText", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HashAlgorithm.IsPrivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::HashAlgorithm::IsPrivate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x346b6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HashAlgorithm*>(), { "IsPrivate", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HashAlgorithm.IsRecognized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t)>(&::Org::BouncyCastle::Crypto::Tls::HashAlgorithm::IsRecognized)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x346b6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HashAlgorithm*>(), { "IsRecognized", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::HashAlgorithm._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::HashAlgorithm::*)()>(&::Org::BouncyCastle::Crypto::Tls::HashAlgorithm::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x346b6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HashAlgorithm*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW Org::BouncyCastle::Crypto::Tls::HashAlgorithm::GetName(uint8_t hashAlgorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HashAlgorithm*>(), { "GetName", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, hashAlgorithm);
}
inline ::StringW Org::BouncyCastle::Crypto::Tls::HashAlgorithm::GetText(uint8_t hashAlgorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HashAlgorithm*>(), { "GetText", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, hashAlgorithm);
}
inline bool Org::BouncyCastle::Crypto::Tls::HashAlgorithm::IsPrivate(uint8_t hashAlgorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HashAlgorithm*>(), { "IsPrivate", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hashAlgorithm);
}
inline bool Org::BouncyCastle::Crypto::Tls::HashAlgorithm::IsRecognized(uint8_t hashAlgorithm) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HashAlgorithm*>(), { "IsRecognized", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hashAlgorithm);
}
inline void Org::BouncyCastle::Crypto::Tls::HashAlgorithm::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::HashAlgorithm*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::HashAlgorithm* Org::BouncyCastle::Crypto::Tls::HashAlgorithm::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::HashAlgorithm*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::HashAlgorithm::HashAlgorithm() {}
