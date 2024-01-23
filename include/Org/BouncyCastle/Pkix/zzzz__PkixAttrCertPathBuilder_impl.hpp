#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixAttrCertPathBuilder_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixBuilderParameters_def.hpp"
#include "Org/BouncyCastle/Pkix/zzzz__PkixCertPathBuilderResult_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__IX509AttributeCertificate_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder.Build
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* (
    ::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::*)(::Org::BouncyCastle::Pkix::PkixBuilderParameters*)>(&::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::Build)> {
  constexpr static std::size_t size = 0xee0;
  constexpr static std::size_t addrs = 0x10e876c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder.Build
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* (
    ::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::*)(::Org::BouncyCastle::X509::IX509AttributeCertificate*, ::Org::BouncyCastle::X509::X509Certificate*,
                                                           ::Org::BouncyCastle::Pkix::PkixBuilderParameters*, ::System::Collections::IList*)>(
    &::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::Build)> {
  constexpr static std::size_t size = 0xc40;
  constexpr static std::size_t addrs = 0x10ea664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::IX509AttributeCertificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::*)()>(
    &::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10ebbfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Exception*& Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::__cordl_internal_get_certPathException() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certPathException;
}
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::__cordl_internal_get_certPathException() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___certPathException;
}
constexpr void Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::__cordl_internal_set_certPathException(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certPathException)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::Build(::Org::BouncyCastle::Pkix::PkixBuilderParameters* pkixParams) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*, false>(this, ___internal_method, pkixParams);
}
inline ::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult* Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::Build(::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert,
                                                                                                                     ::Org::BouncyCastle::X509::X509Certificate* tbvCert,
                                                                                                                     ::Org::BouncyCastle::Pkix::PkixBuilderParameters* pkixParams,
                                                                                                                     ::System::Collections::IList* tbvPath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder*>::get(), "Build", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::IX509AttributeCertificate*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Pkix::PkixBuilderParameters*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Pkix::PkixCertPathBuilderResult*, false>(this, ___internal_method, attrCert, tbvCert, pkixParams, tbvPath);
}
inline ::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder* Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder*>());
}
inline void Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Pkix::PkixAttrCertPathBuilder::PkixAttrCertPathBuilder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
