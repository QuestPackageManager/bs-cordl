#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/X509/zzzz__X509Store_def.hpp"
#include "Mono/Security/X509/zzzz__X509CertificateCollection_def.hpp"
#include "Mono/Security/X509/zzzz__X509Certificate_def.hpp"
#include "Mono/Security/X509/zzzz__X509Crl_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::X509Store._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::X509Store::*)(::StringW, bool, bool)>(&::Mono::Security::X509::X509Store::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x241d3c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.get_Certificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509CertificateCollection* (::Mono::Security::X509::X509Store::*)()>(
    &::Mono::Security::X509::X509Store::get_Certificates)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x241d408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(), "get_Certificates",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.get_Crls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (::Mono::Security::X509::X509Store::*)()>(
    &::Mono::Security::X509::X509Store::get_Crls)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x241d604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(), "get_Crls",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Mono::Security::X509::X509Store::*)(::StringW)>(
    &::Mono::Security::X509::X509Store::Load)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x241d854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.LoadCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Certificate* (::Mono::Security::X509::X509Store::*)(::StringW)>(
    &::Mono::Security::X509::X509Store::LoadCertificate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x241da60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(), "LoadCertificate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.LoadCrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Crl* (::Mono::Security::X509::X509Store::*)(::StringW)>(
    &::Mono::Security::X509::X509Store::LoadCrl)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x241dad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(), "LoadCrl", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.CheckStore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::X509Store::*)(::StringW, bool)>(&::Mono::Security::X509::X509Store::CheckStore)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x241db40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(), "CheckStore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.BuildCertificatesCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509CertificateCollection* (::Mono::Security::X509::X509Store::*)(::StringW)>(
    &::Mono::Security::X509::X509Store::BuildCertificatesCollection)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x241d430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(), "BuildCertificatesCollection",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Store.BuildCrlsCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (::Mono::Security::X509::X509Store::*)(::StringW)>(
    &::Mono::Security::X509::X509Store::BuildCrlsCollection)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x241d694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(), "BuildCrlsCollection", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Mono::Security::X509::X509Store::__cordl_internal_get__storePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____storePath;
}
constexpr ::StringW const& Mono::Security::X509::X509Store::__cordl_internal_get__storePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____storePath;
}
constexpr void Mono::Security::X509::X509Store::__cordl_internal_set__storePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____storePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Security::X509::X509CertificateCollection*& Mono::Security::X509::X509Store::__cordl_internal_get__certificates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certificates;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509CertificateCollection*> const& Mono::Security::X509::X509Store::__cordl_internal_get__certificates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____certificates;
}
constexpr void Mono::Security::X509::X509Store::__cordl_internal_set__certificates(::Mono::Security::X509::X509CertificateCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____certificates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& Mono::Security::X509::X509Store::__cordl_internal_get__crls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crls;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& Mono::Security::X509::X509Store::__cordl_internal_get__crls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crls;
}
constexpr void Mono::Security::X509::X509Store::__cordl_internal_set__crls(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____crls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Mono::Security::X509::X509Store::__cordl_internal_get__crl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crl;
}
constexpr bool const& Mono::Security::X509::X509Store::__cordl_internal_get__crl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____crl;
}
constexpr void Mono::Security::X509::X509Store::__cordl_internal_set__crl(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____crl = value;
}
constexpr bool& Mono::Security::X509::X509Store::__cordl_internal_get__newFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newFormat;
}
constexpr bool const& Mono::Security::X509::X509Store::__cordl_internal_get__newFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newFormat;
}
constexpr void Mono::Security::X509::X509Store::__cordl_internal_set__newFormat(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____newFormat = value;
}
inline ::Mono::Security::X509::X509Store* Mono::Security::X509::X509Store::New_ctor(::StringW path, bool crl, bool newFormat) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Mono::Security::X509::X509Store*>(path, crl, newFormat));
}
inline void Mono::Security::X509::X509Store::_ctor(::StringW path, bool crl, bool newFormat) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path, crl, newFormat);
}
inline ::Mono::Security::X509::X509CertificateCollection* Mono::Security::X509::X509Store::get_Certificates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(), "get_Certificates",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509CertificateCollection*, false>(this, ___internal_method);
}
inline ::System::Collections::ArrayList* Mono::Security::X509::X509Store::get_Crls() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(), "get_Crls",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Mono::Security::X509::X509Store::Load(::StringW filename) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, filename);
}
inline ::Mono::Security::X509::X509Certificate* Mono::Security::X509::X509Store::LoadCertificate(::StringW filename) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(), "LoadCertificate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Certificate*, false>(this, ___internal_method, filename);
}
inline ::Mono::Security::X509::X509Crl* Mono::Security::X509::X509Store::LoadCrl(::StringW filename) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(), "LoadCrl", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509Crl*, false>(this, ___internal_method, filename);
}
inline bool Mono::Security::X509::X509Store::CheckStore(::StringW path, bool throwException) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(), "CheckStore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, path, throwException);
}
inline ::Mono::Security::X509::X509CertificateCollection* Mono::Security::X509::X509Store::BuildCertificatesCollection(::StringW storeName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(), "BuildCertificatesCollection",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509CertificateCollection*, false>(this, ___internal_method, storeName);
}
inline ::System::Collections::ArrayList* Mono::Security::X509::X509Store::BuildCrlsCollection(::StringW storeName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Store*>::get(), "BuildCrlsCollection", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(this, ___internal_method, storeName);
}
// Ctor Parameters []
constexpr ::Mono::Security::X509::X509Store::X509Store() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
