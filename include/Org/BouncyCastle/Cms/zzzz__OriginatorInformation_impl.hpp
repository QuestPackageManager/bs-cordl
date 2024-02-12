#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__OriginatorInformation_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OriginatorInfo_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorInformation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::OriginatorInformation::*)(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*)>(
    &::Org::BouncyCastle::Cms::OriginatorInformation::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x12339d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInformation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorInformation.GetCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Cms::OriginatorInformation::*)()>(
    &::Org::BouncyCastle::Cms::OriginatorInformation::GetCertificates)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x12339fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInformation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInformation*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorInformation.GetCrls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Cms::OriginatorInformation::*)()>(
    &::Org::BouncyCastle::Cms::OriginatorInformation::GetCrls)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x1233f08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInformation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInformation*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorInformation.ToAsn1Structure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* (::Org::BouncyCastle::Cms::OriginatorInformation::*)()>(
    &::Org::BouncyCastle::Cms::OriginatorInformation::ToAsn1Structure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1234414;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInformation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInformation*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*& Org::BouncyCastle::Cms::OriginatorInformation::__cordl_internal_get_originatorInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originatorInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*> const& Org::BouncyCastle::Cms::OriginatorInformation::__cordl_internal_get_originatorInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originatorInfo;
}
constexpr void Org::BouncyCastle::Cms::OriginatorInformation::__cordl_internal_set_originatorInfo(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___originatorInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Cms::OriginatorInformation* Org::BouncyCastle::Cms::OriginatorInformation::New_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cms::OriginatorInformation*>(originatorInfo));
}
inline void Org::BouncyCastle::Cms::OriginatorInformation::_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInformation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, originatorInfo);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::OriginatorInformation::GetCertificates() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInformation*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::OriginatorInformation::GetCrls() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInformation*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* Org::BouncyCastle::Cms::OriginatorInformation::ToAsn1Structure() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInformation*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::OriginatorInformation::OriginatorInformation() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
