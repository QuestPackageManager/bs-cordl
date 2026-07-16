#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsSessionImpl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSessionImpl_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SessionParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsSession_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::*)(::ArrayW<uint8_t>, ::Org::BouncyCastle::Crypto::Tls::SessionParameters*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x348e1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl.ExportSessionParameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::Tls::SessionParameters* (::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::ExportSessionParameters)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x348e2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl.get_SessionID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::get_SessionID)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x348e390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl.Invalidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::Invalidate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x348e3bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl.get_IsResumable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::*)()>(&::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::get_IsResumable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x348e3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl*>(), 11 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::__cordl_internal_get_mSessionID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSessionID;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::__cordl_internal_get_mSessionID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSessionID;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::__cordl_internal_set_mSessionID(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSessionID = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters*& Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::__cordl_internal_get_mSessionParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSessionParameters;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::SessionParameters* const& Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::__cordl_internal_get_mSessionParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mSessionParameters;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::__cordl_internal_set_mSessionParameters(::Org::BouncyCastle::Crypto::Tls::SessionParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mSessionParameters = value;
}
constexpr bool& Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::__cordl_internal_get_mResumable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mResumable;
}
constexpr bool const& Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::__cordl_internal_get_mResumable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mResumable;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::__cordl_internal_set_mResumable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mResumable = value;
}
inline void Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::_ctor(::ArrayW<uint8_t> sessionID, ::Org::BouncyCastle::Crypto::Tls::SessionParameters* sessionParameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sessionID, sessionParameters);
}
inline ::Org::BouncyCastle::Crypto::Tls::SessionParameters* Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::ExportSessionParameters() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::SessionParameters*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::get_SessionID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::Invalidate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::get_IsResumable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl* Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::New_ctor(::ArrayW<uint8_t> sessionID,
                                                                                                                  ::Org::BouncyCastle::Crypto::Tls::SessionParameters* sessionParameters) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl*>(sessionID, sessionParameters));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Tls::TlsSession"
constexpr Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::operator ::Org::BouncyCastle::Crypto::Tls::TlsSession*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSession*>(static_cast<void*>(this));
}
/// @brief Convert to "::Org::BouncyCastle::Crypto::Tls::TlsSession"
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSession* Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::i___Org__BouncyCastle__Crypto__Tls__TlsSession() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::Tls::TlsSession*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSessionImpl::TlsSessionImpl() {}
