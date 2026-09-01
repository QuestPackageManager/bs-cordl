#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\SecretKeyPacket.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SecretKeyPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__S2k_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SecretKeyPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::SecretKeyPacket::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(
    &::Org::BouncyCastle::Bcpg::SecretKeyPacket::_ctor)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x369b294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SecretKeyPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::SecretKeyPacket::*)(
    ::Org::BouncyCastle::Bcpg::PublicKeyPacket*, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::S2k*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::SecretKeyPacket::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x369fed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(),
                                                                 ::i2c::type_of<::Org::BouncyCastle::Bcpg::S2k*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SecretKeyPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::SecretKeyPacket::*)(
    ::Org::BouncyCastle::Bcpg::PublicKeyPacket*, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, int32_t, ::Org::BouncyCastle::Bcpg::S2k*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::SecretKeyPacket::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x369ff84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<::Org::BouncyCastle::Bcpg::S2k*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SecretKeyPacket.get_EncAlgorithm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag (::Org::BouncyCastle::Bcpg::SecretKeyPacket::*)()>(
    &::Org::BouncyCastle::Bcpg::SecretKeyPacket::get_EncAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a0028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(), { "get_EncAlgorithm", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SecretKeyPacket.get_S2kUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::SecretKeyPacket::*)()>(&::Org::BouncyCastle::Bcpg::SecretKeyPacket::get_S2kUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a0030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(), { "get_S2kUsage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SecretKeyPacket.GetIV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::SecretKeyPacket::*)()>(&::Org::BouncyCastle::Bcpg::SecretKeyPacket::GetIV)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x36a0038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(), { "GetIV", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SecretKeyPacket.get_S2k
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::S2k* (::Org::BouncyCastle::Bcpg::SecretKeyPacket::*)()>(&::Org::BouncyCastle::Bcpg::SecretKeyPacket::get_S2k)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a0098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(), { "get_S2k", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SecretKeyPacket.get_PublicKeyPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::PublicKeyPacket* (::Org::BouncyCastle::Bcpg::SecretKeyPacket::*)()>(
    &::Org::BouncyCastle::Bcpg::SecretKeyPacket::get_PublicKeyPacket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a00a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(), { "get_PublicKeyPacket", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SecretKeyPacket.GetSecretKeyData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::SecretKeyPacket::*)()>(&::Org::BouncyCastle::Bcpg::SecretKeyPacket::GetSecretKeyData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36a00a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(), { "GetSecretKeyData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SecretKeyPacket.GetEncodedContents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::SecretKeyPacket::*)()>(&::Org::BouncyCastle::Bcpg::SecretKeyPacket::GetEncodedContents)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x36a00b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(), { "GetEncodedContents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SecretKeyPacket.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::SecretKeyPacket::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(
    &::Org::BouncyCastle::Bcpg::SecretKeyPacket::Encode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x36a0218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyPacket*& Org::BouncyCastle::Bcpg::SecretKeyPacket::__cordl_internal_get_pubKeyPacket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pubKeyPacket;
}
constexpr ::Org::BouncyCastle::Bcpg::PublicKeyPacket* const& Org::BouncyCastle::Bcpg::SecretKeyPacket::__cordl_internal_get_pubKeyPacket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pubKeyPacket;
}
constexpr void Org::BouncyCastle::Bcpg::SecretKeyPacket::__cordl_internal_set_pubKeyPacket(::Org::BouncyCastle::Bcpg::PublicKeyPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pubKeyPacket = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Bcpg::SecretKeyPacket::__cordl_internal_get_secKeyData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secKeyData;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Bcpg::SecretKeyPacket::__cordl_internal_get_secKeyData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___secKeyData;
}
constexpr void Org::BouncyCastle::Bcpg::SecretKeyPacket::__cordl_internal_set_secKeyData(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___secKeyData = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::SecretKeyPacket::__cordl_internal_get_s2kUsage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s2kUsage;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::SecretKeyPacket::__cordl_internal_get_s2kUsage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s2kUsage;
}
constexpr void Org::BouncyCastle::Bcpg::SecretKeyPacket::__cordl_internal_set_s2kUsage(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s2kUsage = value;
}
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag& Org::BouncyCastle::Bcpg::SecretKeyPacket::__cordl_internal_get_encAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encAlgorithm;
}
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const& Org::BouncyCastle::Bcpg::SecretKeyPacket::__cordl_internal_get_encAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encAlgorithm;
}
constexpr void Org::BouncyCastle::Bcpg::SecretKeyPacket::__cordl_internal_set_encAlgorithm(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___encAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Bcpg::S2k*& Org::BouncyCastle::Bcpg::SecretKeyPacket::__cordl_internal_get_s2k() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s2k;
}
constexpr ::Org::BouncyCastle::Bcpg::S2k* const& Org::BouncyCastle::Bcpg::SecretKeyPacket::__cordl_internal_get_s2k() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s2k;
}
constexpr void Org::BouncyCastle::Bcpg::SecretKeyPacket::__cordl_internal_set_s2k(::Org::BouncyCastle::Bcpg::S2k* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s2k = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Bcpg::SecretKeyPacket::__cordl_internal_get_iv() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iv;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Bcpg::SecretKeyPacket::__cordl_internal_get_iv() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___iv;
}
constexpr void Org::BouncyCastle::Bcpg::SecretKeyPacket::__cordl_internal_set_iv(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___iv = value;
}
inline void Org::BouncyCastle::Bcpg::SecretKeyPacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgIn);
}
inline void Org::BouncyCastle::Bcpg::SecretKeyPacket::_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* pubKeyPacket, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                            ::Org::BouncyCastle::Bcpg::S2k* s2k, ::ArrayW<uint8_t> iv, ::ArrayW<uint8_t> secKeyData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(),
                                                               ::i2c::type_of<::Org::BouncyCastle::Bcpg::S2k*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pubKeyPacket, encAlgorithm, s2k, iv, secKeyData);
}
inline void Org::BouncyCastle::Bcpg::SecretKeyPacket::_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* pubKeyPacket, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                            int32_t s2kUsage, ::Org::BouncyCastle::Bcpg::S2k* s2k, ::ArrayW<uint8_t> iv, ::ArrayW<uint8_t> secKeyData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(), ::i2c::type_of<int32_t>(),
                              ::i2c::type_of<::Org::BouncyCastle::Bcpg::S2k*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pubKeyPacket, encAlgorithm, s2kUsage, s2k, iv, secKeyData);
}
inline ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag Org::BouncyCastle::Bcpg::SecretKeyPacket::get_EncAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(), { "get_EncAlgorithm", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::SecretKeyPacket::get_S2kUsage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(), { "get_S2kUsage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::SecretKeyPacket::GetIV() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(), { "GetIV", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::S2k* Org::BouncyCastle::Bcpg::SecretKeyPacket::get_S2k() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(), { "get_S2k", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::S2k*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::PublicKeyPacket* Org::BouncyCastle::Bcpg::SecretKeyPacket::get_PublicKeyPacket() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(), { "get_PublicKeyPacket", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::PublicKeyPacket*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::SecretKeyPacket::GetSecretKeyData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(), { "GetSecretKeyData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::SecretKeyPacket::GetEncodedContents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(), { "GetEncodedContents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::SecretKeyPacket::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgOut);
}
inline ::Org::BouncyCastle::Bcpg::SecretKeyPacket* Org::BouncyCastle::Bcpg::SecretKeyPacket::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(bcpgIn));
}
inline ::Org::BouncyCastle::Bcpg::SecretKeyPacket* Org::BouncyCastle::Bcpg::SecretKeyPacket::New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* pubKeyPacket,
                                                                                                      ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                                      ::Org::BouncyCastle::Bcpg::S2k* s2k, ::ArrayW<uint8_t> iv, ::ArrayW<uint8_t> secKeyData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(pubKeyPacket, encAlgorithm, s2k, iv, secKeyData));
}
inline ::Org::BouncyCastle::Bcpg::SecretKeyPacket* Org::BouncyCastle::Bcpg::SecretKeyPacket::New_ctor(::Org::BouncyCastle::Bcpg::PublicKeyPacket* pubKeyPacket,
                                                                                                      ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, int32_t s2kUsage,
                                                                                                      ::Org::BouncyCastle::Bcpg::S2k* s2k, ::ArrayW<uint8_t> iv, ::ArrayW<uint8_t> secKeyData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>(pubKeyPacket, encAlgorithm, s2kUsage, s2k, iv, secKeyData));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::SecretKeyPacket::SecretKeyPacket() {}
