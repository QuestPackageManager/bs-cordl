#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/Sig/IssuerKeyId.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/zzzz__IssuerKeyId_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId.KeyIdToBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int64_t)>(&::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId::KeyIdToBytes)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3692650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId*>(), { "KeyIdToBytes", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId::*)(bool, bool, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3692728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId::*)(bool, int64_t)>(&::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3692740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId.get_KeyId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId::*)()>(&::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId::get_KeyId)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3692778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId*>(), { "get_KeyId", {}, {} })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::Sig::IssuerKeyId::KeyIdToBytes(int64_t keyId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId*>(), { "KeyIdToBytes", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, keyId);
}
inline void Org::BouncyCastle::Bcpg::Sig::IssuerKeyId::_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critical, isLongLength, data);
}
inline void Org::BouncyCastle::Bcpg::Sig::IssuerKeyId::_ctor(bool critical, int64_t keyId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critical, keyId);
}
inline int64_t Org::BouncyCastle::Bcpg::Sig::IssuerKeyId::get_KeyId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId*>(), { "get_KeyId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId* Org::BouncyCastle::Bcpg::Sig::IssuerKeyId::New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId*>(critical, isLongLength, data));
}
inline ::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId* Org::BouncyCastle::Bcpg::Sig::IssuerKeyId::New_ctor(bool critical, int64_t keyId) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId*>(critical, keyId));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::Sig::IssuerKeyId::IssuerKeyId() {}
