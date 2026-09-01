#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\IO\MacSink.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
#include "Org/BouncyCastle/Crypto/IO/zzzz__MacSink_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::MacSink._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::IO::MacSink::*)(::Org::BouncyCastle::Crypto::IMac*)>(&::Org::BouncyCastle::Crypto::IO::MacSink::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x33e6728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacSink*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::MacSink.get_Mac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IMac* (::Org::BouncyCastle::Crypto::IO::MacSink::*)()>(&::Org::BouncyCastle::Crypto::IO::MacSink::get_Mac)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33e6750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacSink*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacSink*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::MacSink.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::IO::MacSink::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::IO::MacSink::WriteByte)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x33e6758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacSink*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacSink*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::MacSink.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::IO::MacSink::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::IO::MacSink::Write)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x33e6810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacSink*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacSink*>(), 38 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IMac*& Org::BouncyCastle::Crypto::IO::MacSink::__cordl_internal_get_mMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMac;
}
constexpr ::Org::BouncyCastle::Crypto::IMac* const& Org::BouncyCastle::Crypto::IO::MacSink::__cordl_internal_get_mMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mMac;
}
constexpr void Org::BouncyCastle::Crypto::IO::MacSink::__cordl_internal_set_mMac(::Org::BouncyCastle::Crypto::IMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mMac = value;
}
inline void Org::BouncyCastle::Crypto::IO::MacSink::_ctor(::Org::BouncyCastle::Crypto::IMac* mac) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacSink*>(), { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mac);
}
inline ::Org::BouncyCastle::Crypto::IMac* Org::BouncyCastle::Crypto::IO::MacSink::get_Mac() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacSink*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IMac*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::IO::MacSink::WriteByte(uint8_t b) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacSink*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Crypto::IO::MacSink::Write(::ArrayW<uint8_t> buf, int32_t off, int32_t len) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacSink*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buf, off, len);
}
inline ::Org::BouncyCastle::Crypto::IO::MacSink* Org::BouncyCastle::Crypto::IO::MacSink::New_ctor(::Org::BouncyCastle::Crypto::IMac* mac) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::IO::MacSink*>(mac));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::IO::MacSink::MacSink() {}
