#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DtlsReplayWindow.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsReplayWindow_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow.ShouldDiscard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::*)(int64_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::ShouldDiscard)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x23f605c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*>::get(), "ShouldDiscard",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow.ReportAuthenticated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::*)(int64_t)>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::ReportAuthenticated)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x23f609c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*>::get(), "ReportAuthenticated",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23f7a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*>::get(),
                                                                               "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23f3d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*>::get(), "ShouldDiscard",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::ReportAuthenticated(int64_t seq) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*>::get(), "ReportAuthenticated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seq);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*>::get(),
                                                                             "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow* Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::DtlsReplayWindow::DtlsReplayWindow() {}
