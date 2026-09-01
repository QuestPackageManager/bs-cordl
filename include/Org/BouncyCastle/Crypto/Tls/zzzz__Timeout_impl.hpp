#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\Timeout.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Timeout_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Timeout._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::Timeout::*)(int64_t)>(&::Org::BouncyCastle::Crypto::Tls::Timeout::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3472584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Timeout*>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Timeout._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::Timeout::*)(int64_t, int64_t)>(&::Org::BouncyCastle::Crypto::Tls::Timeout::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x34725f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Timeout*>(), { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Timeout.RemainingMillis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Crypto::Tls::Timeout::*)(int64_t)>(&::Org::BouncyCastle::Crypto::Tls::Timeout::RemainingMillis)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3472668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Timeout*>(), { "RemainingMillis", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Timeout.ConstrainWaitMillis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::Org::BouncyCastle::Crypto::Tls::Timeout*, int64_t)>(&::Org::BouncyCastle::Crypto::Tls::Timeout::ConstrainWaitMillis)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x34726c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Timeout*>(),
                                         { "ConstrainWaitMillis", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::Timeout*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Timeout.ForWaitMillis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::Timeout* (*)(int32_t)>(&::Org::BouncyCastle::Crypto::Tls::Timeout::ForWaitMillis)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x34727a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Timeout*>(), { "ForWaitMillis", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Timeout.ForWaitMillis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::Timeout* (*)(int32_t, int64_t)>(&::Org::BouncyCastle::Crypto::Tls::Timeout::ForWaitMillis)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x347280c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Timeout*>(), { "ForWaitMillis", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Timeout.GetWaitMillis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Org::BouncyCastle::Crypto::Tls::Timeout*, int64_t)>(&::Org::BouncyCastle::Crypto::Tls::Timeout::GetWaitMillis)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3472774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Timeout*>(),
                                                             { "GetWaitMillis", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::Timeout*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::Timeout.HasExpired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Org::BouncyCastle::Crypto::Tls::Timeout*, int64_t)>(&::Org::BouncyCastle::Crypto::Tls::Timeout::HasExpired)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x34728e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Timeout*>(),
                                                             { "HasExpired", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::Timeout*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
constexpr int64_t& Org::BouncyCastle::Crypto::Tls::Timeout::__cordl_internal_get_durationMillis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___durationMillis;
}
constexpr int64_t const& Org::BouncyCastle::Crypto::Tls::Timeout::__cordl_internal_get_durationMillis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___durationMillis;
}
constexpr void Org::BouncyCastle::Crypto::Tls::Timeout::__cordl_internal_set_durationMillis(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___durationMillis = value;
}
constexpr int64_t& Org::BouncyCastle::Crypto::Tls::Timeout::__cordl_internal_get_startMillis() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startMillis;
}
constexpr int64_t const& Org::BouncyCastle::Crypto::Tls::Timeout::__cordl_internal_get_startMillis() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startMillis;
}
constexpr void Org::BouncyCastle::Crypto::Tls::Timeout::__cordl_internal_set_startMillis(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startMillis = value;
}
inline void Org::BouncyCastle::Crypto::Tls::Timeout::_ctor(int64_t durationMillis) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Timeout*>(), { ".ctor", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, durationMillis);
}
inline void Org::BouncyCastle::Crypto::Tls::Timeout::_ctor(int64_t durationMillis, int64_t currentTimeMillis) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Timeout*>(), { ".ctor", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, durationMillis, currentTimeMillis);
}
inline int64_t Org::BouncyCastle::Crypto::Tls::Timeout::RemainingMillis(int64_t currentTimeMillis) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Timeout*>(), { "RemainingMillis", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, currentTimeMillis);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::Timeout::ConstrainWaitMillis(int32_t waitMillis, ::Org::BouncyCastle::Crypto::Tls::Timeout* timeout, int64_t currentTimeMillis) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Timeout*>(),
                                              { "ConstrainWaitMillis", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::Timeout*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, waitMillis, timeout, currentTimeMillis);
}
inline ::Org::BouncyCastle::Crypto::Tls::Timeout* Org::BouncyCastle::Crypto::Tls::Timeout::ForWaitMillis(int32_t waitMillis) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Timeout*>(), { "ForWaitMillis", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::Timeout*>(nullptr, ___internal_method, waitMillis);
}
inline ::Org::BouncyCastle::Crypto::Tls::Timeout* Org::BouncyCastle::Crypto::Tls::Timeout::ForWaitMillis(int32_t waitMillis, int64_t currentTimeMillis) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Timeout*>(), { "ForWaitMillis", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::Timeout*>(nullptr, ___internal_method, waitMillis, currentTimeMillis);
}
inline int32_t Org::BouncyCastle::Crypto::Tls::Timeout::GetWaitMillis(::Org::BouncyCastle::Crypto::Tls::Timeout* timeout, int64_t currentTimeMillis) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Timeout*>(),
                                                           { "GetWaitMillis", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::Timeout*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, timeout, currentTimeMillis);
}
inline bool Org::BouncyCastle::Crypto::Tls::Timeout::HasExpired(::Org::BouncyCastle::Crypto::Tls::Timeout* timeout, int64_t currentTimeMillis) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::Timeout*>(),
                                                           { "HasExpired", {}, { ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::Timeout*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, timeout, currentTimeMillis);
}
inline ::Org::BouncyCastle::Crypto::Tls::Timeout* Org::BouncyCastle::Crypto::Tls::Timeout::New_ctor(int64_t durationMillis) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::Timeout*>(durationMillis));
}
inline ::Org::BouncyCastle::Crypto::Tls::Timeout* Org::BouncyCastle::Crypto::Tls::Timeout::New_ctor(int64_t durationMillis, int64_t currentTimeMillis) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::Timeout*>(durationMillis, currentTimeMillis));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::Timeout::Timeout() {}
