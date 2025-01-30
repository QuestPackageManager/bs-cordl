#pragma once
// IWYU pragma private; include "System/Net/CookieContainer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__CookieContainer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Net/zzzz__CookieCollection_def.hpp"
#include "System/Net/zzzz__Cookie_def.hpp"
#include "System/Net/zzzz__HeaderVariantInfo_def.hpp"
#include "System/Net/zzzz__PathList_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::CookieContainer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CookieContainer::*)()>(&::System::Net::CookieContainer::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x44b2650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.AddRemoveDomain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CookieContainer::*)(::StringW, ::System::Net::PathList*)>(
    &::System::Net::CookieContainer::AddRemoveDomain)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x44b2748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get(), "AddRemoveDomain", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::PathList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CookieContainer::*)(::System::Net::Cookie*, bool)>(&::System::Net::CookieContainer::Add)> {
  constexpr static std::size_t size = 0x804;
  constexpr static std::size_t addrs = 0x44b286c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cookie*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.AgeCookies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::CookieContainer::*)(::StringW)>(&::System::Net::CookieContainer::AgeCookies)> {
  constexpr static std::size_t size = 0x1538;
  constexpr static std::size_t addrs = 0x44b36a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get(), "AgeCookies", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.ExpireCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::CookieContainer::*)(::System::Net::CookieCollection*)>(
    &::System::Net::CookieContainer::ExpireCollection)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x44b4c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get(), "ExpireCollection", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CookieCollection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.IsLocalDomain
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::CookieContainer::*)(::StringW)>(&::System::Net::CookieContainer::IsLocalDomain)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x44b4da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get(), "IsLocalDomain", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.CookieCutter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::CookieCollection* (::System::Net::CookieContainer::*)(::System::Uri*, ::StringW, ::StringW, bool)>(
    &::System::Net::CookieContainer::CookieCutter)> {
  constexpr static std::size_t size = 0x6dc;
  constexpr static std::size_t addrs = 0x44b5040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get(), "CookieCutter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.InternalGetCookies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::CookieCollection* (::System::Net::CookieContainer::*)(::System::Uri*)>(
    &::System::Net::CookieContainer::InternalGetCookies)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x44b571c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get(), "InternalGetCookies", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.BuildCookieCollectionFromDomainMatches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Net::CookieContainer::*)(::System::Uri*, bool, int32_t, ::System::Net::CookieCollection*, ::System::Collections::Generic::List_1<::StringW>*, bool)>(
        &::System::Net::CookieContainer::BuildCookieCollectionFromDomainMatches)> {
  constexpr static std::size_t size = 0x820;
  constexpr static std::size_t addrs = 0x44b5bac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get(), "BuildCookieCollectionFromDomainMatches", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CookieCollection*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.MergeUpdateCollections
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CookieContainer::*)(::System::Net::CookieCollection*, ::System::Net::CookieCollection*, int32_t,
                                                                                                                           bool, bool)>(&::System::Net::CookieContainer::MergeUpdateCollections)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x44b63f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get(), "MergeUpdateCollections", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CookieCollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CookieCollection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.GetCookieHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::CookieContainer::*)(::System::Uri*)>(&::System::Net::CookieContainer::GetCookieHeader)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x44b6600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get(), "GetCookieHeader", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.GetCookieHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::CookieContainer::*)(::System::Uri*, ::ByRef<::StringW>)>(
    &::System::Net::CookieContainer::GetCookieHeader)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x44b66cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get(), "GetCookieHeader", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Net::CookieContainer::__cordl_internal_get_m_domainTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_domainTable;
}
constexpr ::System::Collections::Hashtable* const& System::Net::CookieContainer::__cordl_internal_get_m_domainTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_domainTable;
}
constexpr void System::Net::CookieContainer::__cordl_internal_set_m_domainTable(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_domainTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::CookieContainer::__cordl_internal_get_m_maxCookieSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_maxCookieSize;
}
constexpr int32_t const& System::Net::CookieContainer::__cordl_internal_get_m_maxCookieSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_maxCookieSize;
}
constexpr void System::Net::CookieContainer::__cordl_internal_set_m_maxCookieSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_maxCookieSize = value;
}
constexpr int32_t& System::Net::CookieContainer::__cordl_internal_get_m_maxCookies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_maxCookies;
}
constexpr int32_t const& System::Net::CookieContainer::__cordl_internal_get_m_maxCookies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_maxCookies;
}
constexpr void System::Net::CookieContainer::__cordl_internal_set_m_maxCookies(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_maxCookies = value;
}
constexpr int32_t& System::Net::CookieContainer::__cordl_internal_get_m_maxCookiesPerDomain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_maxCookiesPerDomain;
}
constexpr int32_t const& System::Net::CookieContainer::__cordl_internal_get_m_maxCookiesPerDomain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_maxCookiesPerDomain;
}
constexpr void System::Net::CookieContainer::__cordl_internal_set_m_maxCookiesPerDomain(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_maxCookiesPerDomain = value;
}
constexpr int32_t& System::Net::CookieContainer::__cordl_internal_get_m_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_count;
}
constexpr int32_t const& System::Net::CookieContainer::__cordl_internal_get_m_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_count;
}
constexpr void System::Net::CookieContainer::__cordl_internal_set_m_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_count = value;
}
constexpr ::StringW& System::Net::CookieContainer::__cordl_internal_get_m_fqdnMyDomain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fqdnMyDomain;
}
constexpr ::StringW const& System::Net::CookieContainer::__cordl_internal_get_m_fqdnMyDomain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fqdnMyDomain;
}
constexpr void System::Net::CookieContainer::__cordl_internal_set_m_fqdnMyDomain(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_fqdnMyDomain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Net::CookieContainer::setStaticF_HeaderInfo(::ArrayW<::System::Net::HeaderVariantInfo, ::Array<::System::Net::HeaderVariantInfo>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Net::HeaderVariantInfo, ::Array<::System::Net::HeaderVariantInfo>*>, "HeaderInfo",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get>(
      std::forward<::ArrayW<::System::Net::HeaderVariantInfo, ::Array<::System::Net::HeaderVariantInfo>*>>(value));
}
inline ::ArrayW<::System::Net::HeaderVariantInfo, ::Array<::System::Net::HeaderVariantInfo>*> System::Net::CookieContainer::getStaticF_HeaderInfo() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Net::HeaderVariantInfo, ::Array<::System::Net::HeaderVariantInfo>*>, "HeaderInfo",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get>();
}
inline void System::Net::CookieContainer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::CookieContainer::AddRemoveDomain(::StringW key, ::System::Net::PathList* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get(), "AddRemoveDomain", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::PathList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline void System::Net::CookieContainer::Add(::System::Net::Cookie* cookie, bool throwOnError) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cookie*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cookie, throwOnError);
}
inline bool System::Net::CookieContainer::AgeCookies(::StringW domain) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get(), "AgeCookies", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, domain);
}
inline int32_t System::Net::CookieContainer::ExpireCollection(::System::Net::CookieCollection* cc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get(), "ExpireCollection", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CookieCollection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, cc);
}
inline bool System::Net::CookieContainer::IsLocalDomain(::StringW host) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get(), "IsLocalDomain", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, host);
}
inline ::System::Net::CookieCollection* System::Net::CookieContainer::CookieCutter(::System::Uri* uri, ::StringW headerName, ::StringW setCookieHeader, bool isThrow) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get(), "CookieCutter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::CookieCollection*, false>(this, ___internal_method, uri, headerName, setCookieHeader, isThrow);
}
inline ::System::Net::CookieCollection* System::Net::CookieContainer::InternalGetCookies(::System::Uri* uri) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get(), "InternalGetCookies", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::CookieCollection*, false>(this, ___internal_method, uri);
}
inline void System::Net::CookieContainer::BuildCookieCollectionFromDomainMatches(::System::Uri* uri, bool isSecure, int32_t port, ::System::Net::CookieCollection* cookies,
                                                                                 ::System::Collections::Generic::List_1<::StringW>* domainAttribute, bool matchOnlyPlainCookie) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get(), "BuildCookieCollectionFromDomainMatches", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CookieCollection*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uri, isSecure, port, cookies, domainAttribute, matchOnlyPlainCookie);
}
inline void System::Net::CookieContainer::MergeUpdateCollections(::System::Net::CookieCollection* destination, ::System::Net::CookieCollection* source, int32_t port, bool isSecure, bool isPlainOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get(), "MergeUpdateCollections", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CookieCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CookieCollection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, destination, source, port, isSecure, isPlainOnly);
}
inline ::StringW System::Net::CookieContainer::GetCookieHeader(::System::Uri* uri) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get(), "GetCookieHeader", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, uri);
}
inline ::StringW System::Net::CookieContainer::GetCookieHeader(::System::Uri* uri, ::ByRef<::StringW> optCookie2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieContainer*>::get(), "GetCookieHeader", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, uri, optCookie2);
}
inline ::System::Net::CookieContainer* System::Net::CookieContainer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::CookieContainer*>());
}
// Ctor Parameters []
constexpr ::System::Net::CookieContainer::CookieContainer() {}
