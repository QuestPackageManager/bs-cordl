#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__CertificateConfirmationContent_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__CertConfirmContent_def.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__CertificateStatus_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__DefaultDigestAlgorithmIdentifierFinder_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateConfirmationContent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cmp::CertificateConfirmationContent::*)(
    ::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent*)>(&::Org::BouncyCastle::Cmp::CertificateConfirmationContent::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x11d5388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateConfirmationContent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateConfirmationContent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cmp::CertificateConfirmationContent::*)(
    ::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent*, ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*)>(&::Org::BouncyCastle::Cmp::CertificateConfirmationContent::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x11d53b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateConfirmationContent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateConfirmationContent.ToAsn1Structure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* (::Org::BouncyCastle::Cmp::CertificateConfirmationContent::*)()>(
    &::Org::BouncyCastle::Cmp::CertificateConfirmationContent::ToAsn1Structure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11d53dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateConfirmationContent*>::get(),
                                                                               "ToAsn1Structure", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateConfirmationContent.GetStatusMessages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Cmp::CertificateStatus*, ::Array<::Org::BouncyCastle::Cmp::CertificateStatus*>*> (
    ::Org::BouncyCastle::Cmp::CertificateConfirmationContent::*)()>(&::Org::BouncyCastle::Cmp::CertificateConfirmationContent::GetStatusMessages)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x11d53e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateConfirmationContent*>::get(),
                                                                               "GetStatusMessages", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*& Org::BouncyCastle::Cmp::CertificateConfirmationContent::__cordl_internal_get_digestAlgFinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestAlgFinder;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*> const&
Org::BouncyCastle::Cmp::CertificateConfirmationContent::__cordl_internal_get_digestAlgFinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___digestAlgFinder;
}
constexpr void Org::BouncyCastle::Cmp::CertificateConfirmationContent::__cordl_internal_set_digestAlgFinder(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___digestAlgFinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent*& Org::BouncyCastle::Cmp::CertificateConfirmationContent::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent*> const& Org::BouncyCastle::Cmp::CertificateConfirmationContent::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void Org::BouncyCastle::Cmp::CertificateConfirmationContent::__cordl_internal_set_content(::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___content)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Cmp::CertificateConfirmationContent* Org::BouncyCastle::Cmp::CertificateConfirmationContent::New_ctor(::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* content) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cmp::CertificateConfirmationContent*>(content));
}
inline void Org::BouncyCastle::Cmp::CertificateConfirmationContent::_ctor(::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* content) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateConfirmationContent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, content);
}
inline ::Org::BouncyCastle::Cmp::CertificateConfirmationContent*
Org::BouncyCastle::Cmp::CertificateConfirmationContent::New_ctor(::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* content,
                                                                 ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Cmp::CertificateConfirmationContent*>(content, digestAlgFinder));
}
inline void Org::BouncyCastle::Cmp::CertificateConfirmationContent::_ctor(::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* content,
                                                                          ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateConfirmationContent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, content, digestAlgFinder);
}
inline ::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent* Org::BouncyCastle::Cmp::CertificateConfirmationContent::ToAsn1Structure() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateConfirmationContent*>::get(),
                                                                             "ToAsn1Structure", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::CertConfirmContent*, false>(this, ___internal_method);
}
inline ::ArrayW<::Org::BouncyCastle::Cmp::CertificateStatus*, ::Array<::Org::BouncyCastle::Cmp::CertificateStatus*>*> Org::BouncyCastle::Cmp::CertificateConfirmationContent::GetStatusMessages() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateConfirmationContent*>::get(),
                                                                             "GetStatusMessages", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Cmp::CertificateStatus*, ::Array<::Org::BouncyCastle::Cmp::CertificateStatus*>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cmp::CertificateConfirmationContent::CertificateConfirmationContent() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
