#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\Sig\SignatureExpirationTime.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/Sig/zzzz__SignatureExpirationTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime.TimeToBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(int64_t)>(&::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime::TimeToBytes)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3695be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime*>(), { "TimeToBytes", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime::*)(bool, bool, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3695c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime::*)(bool, int64_t)>(
    &::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3695c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime.get_Time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime::*)()>(&::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime::get_Time)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3695cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime*>(), { "get_Time", {}, {} })));
    return ___internal_method;
  }
};
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime::TimeToBytes(int64_t t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime*>(), { "TimeToBytes", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, t);
}
inline void Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime::_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critical, isLongLength, data);
}
inline void Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime::_ctor(bool critical, int64_t seconds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critical, seconds);
}
inline int64_t Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime::get_Time() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime*>(), { "get_Time", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime* Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime::New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t> data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime*>(critical, isLongLength, data));
}
inline ::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime* Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime::New_ctor(bool critical, int64_t seconds) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime*>(critical, seconds));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::Sig::SignatureExpirationTime::SignatureExpirationTime() {}
