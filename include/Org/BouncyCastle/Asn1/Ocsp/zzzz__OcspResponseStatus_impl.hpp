#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ocsp/OcspResponseStatus.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerEnumerated_impl.hpp"
#include "Org/BouncyCastle/Asn1/Ocsp/zzzz__OcspResponseStatus_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerEnumerated_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::*)(int32_t)>(
    &::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2404224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::*)(::Org::BouncyCastle::Asn1::DerEnumerated*)>(
    &::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2403724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerEnumerated*>::get() })));
    return ___internal_method;
  }
};
inline void Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::_ctor(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::_ctor(::Org::BouncyCastle::Asn1::DerEnumerated* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerEnumerated*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus* Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::New_ctor(int32_t value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus*>(value));
}
inline ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus* Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::New_ctor(::Org::BouncyCastle::Asn1::DerEnumerated* value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus*>(value));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus::OcspResponseStatus() {}
