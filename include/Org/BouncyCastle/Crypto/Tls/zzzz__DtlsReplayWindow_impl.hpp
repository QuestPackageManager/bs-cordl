#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\Tls\DtlsReplayWindow.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsReplayWindow_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow.ShouldDiscard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::*)(int64_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::ShouldDiscard)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x344a0e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*>(), { "ShouldDiscard", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow.ReportAuthenticated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::*)(int64_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::ReportAuthenticated)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x344a120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*>(), { "ReportAuthenticated", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::*)()>(&::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x344ba80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::*)()>(&::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3447fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int64_t& Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::__cordl_internal_get_mLatestConfirmedSeq() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mLatestConfirmedSeq;
}
constexpr int64_t const& Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::__cordl_internal_get_mLatestConfirmedSeq() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mLatestConfirmedSeq;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::__cordl_internal_set_mLatestConfirmedSeq(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mLatestConfirmedSeq = value;
}
constexpr int64_t& Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::__cordl_internal_get_mBitmap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBitmap;
}
constexpr int64_t const& Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::__cordl_internal_get_mBitmap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mBitmap;
}
constexpr void Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::__cordl_internal_set_mBitmap(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mBitmap = value;
}
inline bool Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::ShouldDiscard(int64_t seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*>(), { "ShouldDiscard", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::ReportAuthenticated(int64_t seq) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*>(), { "ReportAuthenticated", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow* Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::DtlsReplayWindow() {}
