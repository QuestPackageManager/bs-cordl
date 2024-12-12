#pragma once
// IWYU pragma private; include "Mono/Security/X509/SafeBag.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__SafeBag_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::SafeBag._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::SafeBag::*)(::StringW, ::Mono::Security::ASN1*)>(
    &::Mono::Security::X509::SafeBag::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3c326ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::SafeBag*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::SafeBag.get_BagOID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::X509::SafeBag::*)()>(&::Mono::Security::X509::SafeBag::get_BagOID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c326d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::SafeBag*>::get(), "get_BagOID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::SafeBag.get_ASN1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::ASN1* (::Mono::Security::X509::SafeBag::*)()>(&::Mono::Security::X509::SafeBag::get_ASN1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c326e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::SafeBag*>::get(), "get_ASN1",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Mono::Security::X509::SafeBag::__cordl_internal_get__bagOID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bagOID;
}
constexpr ::StringW const& Mono::Security::X509::SafeBag::__cordl_internal_get__bagOID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bagOID;
}
constexpr void Mono::Security::X509::SafeBag::__cordl_internal_set__bagOID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bagOID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Security::ASN1*& Mono::Security::X509::SafeBag::__cordl_internal_get__asn1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asn1;
}
constexpr ::Mono::Security::ASN1* const& Mono::Security::X509::SafeBag::__cordl_internal_get__asn1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asn1;
}
constexpr void Mono::Security::X509::SafeBag::__cordl_internal_set__asn1(::Mono::Security::ASN1* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____asn1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Mono::Security::X509::SafeBag::_ctor(::StringW bagOID, ::Mono::Security::ASN1* asn1) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::SafeBag*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bagOID, asn1);
}
inline ::StringW Mono::Security::X509::SafeBag::get_BagOID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::SafeBag*>::get(), "get_BagOID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Mono::Security::ASN1* Mono::Security::X509::SafeBag::get_ASN1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::SafeBag*>::get(), "get_ASN1",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::ASN1*, false>(this, ___internal_method);
}
inline ::Mono::Security::X509::SafeBag* Mono::Security::X509::SafeBag::New_ctor(::StringW bagOID, ::Mono::Security::ASN1* asn1) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::X509::SafeBag*>(bagOID, asn1));
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::SafeBag::SafeBag() {}
