#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\ServerSrpParams.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__ServerSrpParams_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerSrpParams._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::ServerSrpParams::*)(::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*,
                                                                                                                   ::ArrayW<uint8_t>, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Crypto::Tls::ServerSrpParams::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x346f88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerSrpParams*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                                 ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerSrpParams.get_B
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Tls::ServerSrpParams::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::ServerSrpParams::get_B)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346f914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerSrpParams*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerSrpParams*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerSrpParams.get_G
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Tls::ServerSrpParams::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::ServerSrpParams::get_G)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346f91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerSrpParams*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerSrpParams*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerSrpParams.get_N
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Crypto::Tls::ServerSrpParams::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::ServerSrpParams::get_N)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346f924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerSrpParams*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerSrpParams*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerSrpParams.get_S
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::ServerSrpParams::*)()>(&::Org::BouncyCastle::Crypto::Tls::ServerSrpParams::get_S)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346f92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerSrpParams*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerSrpParams*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerSrpParams.Encode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::ServerSrpParams::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Crypto::Tls::ServerSrpParams::Encode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x346f934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerSrpParams*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerSrpParams*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::ServerSrpParams.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::ServerSrpParams* (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Crypto::Tls::ServerSrpParams::Parse)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x346f9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerSrpParams*>(), { "Parse", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Tls::ServerSrpParams::__cordl_internal_get_m_N() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_N;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Tls::ServerSrpParams::__cordl_internal_get_m_N() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_N;
}
constexpr void Org::BouncyCastle::Crypto::Tls::ServerSrpParams::__cordl_internal_set_m_N(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_N = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Tls::ServerSrpParams::__cordl_internal_get_m_g() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_g;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Tls::ServerSrpParams::__cordl_internal_get_m_g() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_g;
}
constexpr void Org::BouncyCastle::Crypto::Tls::ServerSrpParams::__cordl_internal_set_m_g(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_g = value;
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Crypto::Tls::ServerSrpParams::__cordl_internal_get_m_B() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_B;
}
constexpr ::Org::BouncyCastle::Math::BigInteger* const& Org::BouncyCastle::Crypto::Tls::ServerSrpParams::__cordl_internal_get_m_B() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_B;
}
constexpr void Org::BouncyCastle::Crypto::Tls::ServerSrpParams::__cordl_internal_set_m_B(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_B = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::ServerSrpParams::__cordl_internal_get_m_s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_s;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::ServerSrpParams::__cordl_internal_get_m_s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_s;
}
constexpr void Org::BouncyCastle::Crypto::Tls::ServerSrpParams::__cordl_internal_set_m_s(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_s = value;
}
inline void Org::BouncyCastle::Crypto::Tls::ServerSrpParams::_ctor(::Org::BouncyCastle::Math::BigInteger* N, ::Org::BouncyCastle::Math::BigInteger* g, ::ArrayW<uint8_t> s,
                                                                   ::Org::BouncyCastle::Math::BigInteger* B) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerSrpParams*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>(),
                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Math::BigInteger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, N, g, s, B);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Tls::ServerSrpParams::get_B() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerSrpParams*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Tls::ServerSrpParams::get_G() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerSrpParams*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Tls::ServerSrpParams::get_N() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerSrpParams*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::ServerSrpParams::get_S() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerSrpParams*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::ServerSrpParams::Encode(::System::IO::Stream* output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerSrpParams*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, output);
}
inline ::Org::BouncyCastle::Crypto::Tls::ServerSrpParams* Org::BouncyCastle::Crypto::Tls::ServerSrpParams::Parse(::System::IO::Stream* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::ServerSrpParams*>(), { "Parse", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::ServerSrpParams*>(nullptr, ___internal_method, input);
}
inline ::Org::BouncyCastle::Crypto::Tls::ServerSrpParams* Org::BouncyCastle::Crypto::Tls::ServerSrpParams::New_ctor(::Org::BouncyCastle::Math::BigInteger* N, ::Org::BouncyCastle::Math::BigInteger* g,
                                                                                                                    ::ArrayW<uint8_t> s, ::Org::BouncyCastle::Math::BigInteger* B) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::ServerSrpParams*>(N, g, s, B));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::ServerSrpParams::ServerSrpParams() {}
