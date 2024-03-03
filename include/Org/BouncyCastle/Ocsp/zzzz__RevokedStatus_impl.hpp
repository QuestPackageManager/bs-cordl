#pragma once
#include "Org/BouncyCastle/Ocsp/zzzz__CertificateStatus_impl.hpp"
#include "Org/BouncyCastle/Ocsp/zzzz__RevokedStatus_def.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__RevokedInfo_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::RevokedStatus._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Ocsp::RevokedStatus::*)(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*)>(
    &::Org::BouncyCastle::Ocsp::RevokedStatus::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1115d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::RevokedStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::RevokedStatus._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Ocsp::RevokedStatus::*)(::System::DateTime, int32_t)>(
    &::Org::BouncyCastle::Ocsp::RevokedStatus::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x1115d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::RevokedStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::RevokedStatus.get_RevocationTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Org::BouncyCastle::Ocsp::RevokedStatus::*)()>(
    &::Org::BouncyCastle::Ocsp::RevokedStatus::get_RevocationTime)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x110fc24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::RevokedStatus*>::get(),
                                                                               "get_RevocationTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::RevokedStatus.get_HasRevocationReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Ocsp::RevokedStatus::*)()>(
    &::Org::BouncyCastle::Ocsp::RevokedStatus::get_HasRevocationReason)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x110fb90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::RevokedStatus*>::get(),
                                                                               "get_HasRevocationReason", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Ocsp::RevokedStatus.get_RevocationReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Ocsp::RevokedStatus::*)()>(
    &::Org::BouncyCastle::Ocsp::RevokedStatus::get_RevocationReason)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x110fbb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::RevokedStatus*>::get(),
                                                                               "get_RevocationReason", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*& Org::BouncyCastle::Ocsp::RevokedStatus::__cordl_internal_get_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*> const& Org::BouncyCastle::Ocsp::RevokedStatus::__cordl_internal_get_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___info;
}
constexpr void Org::BouncyCastle::Ocsp::RevokedStatus::__cordl_internal_set_info(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___info)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Ocsp::RevokedStatus* Org::BouncyCastle::Ocsp::RevokedStatus::New_ctor(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* info) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Ocsp::RevokedStatus*>(info));
}
inline void Org::BouncyCastle::Ocsp::RevokedStatus::_ctor(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* info) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::RevokedStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info);
}
inline ::Org::BouncyCastle::Ocsp::RevokedStatus* Org::BouncyCastle::Ocsp::RevokedStatus::New_ctor(::System::DateTime revocationDate, int32_t reason) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Ocsp::RevokedStatus*>(revocationDate, reason));
}
inline void Org::BouncyCastle::Ocsp::RevokedStatus::_ctor(::System::DateTime revocationDate, int32_t reason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::RevokedStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, revocationDate, reason);
}
inline ::System::DateTime Org::BouncyCastle::Ocsp::RevokedStatus::get_RevocationTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::RevokedStatus*>::get(),
                                                                             "get_RevocationTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Ocsp::RevokedStatus::get_HasRevocationReason() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::RevokedStatus*>::get(),
                                                                             "get_HasRevocationReason", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Ocsp::RevokedStatus::get_RevocationReason() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Ocsp::RevokedStatus*>::get(),
                                                                             "get_RevocationReason", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Ocsp::RevokedStatus::RevokedStatus() {}
