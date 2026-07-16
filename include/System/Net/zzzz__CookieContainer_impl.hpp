#pragma once
// IWYU pragma private; include "System/Net/CookieContainer.hpp"
#include "System/Net/zzzz__HeaderVariantInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__CookieContainer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Net/zzzz__CookieCollection_def.hpp"
#include "System/Net/zzzz__Cookie_def.hpp"
#include "System/Net/zzzz__PathList_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::CookieContainer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieContainer::*)()>(&::System::Net::CookieContainer::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6417a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieContainer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.AddRemoveDomain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieContainer::*)(::StringW, ::System::Net::PathList*)>(&::System::Net::CookieContainer::AddRemoveDomain)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6417b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::CookieContainer*>(), { "AddRemoveDomain", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::PathList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieContainer::*)(::System::Net::Cookie*, bool)>(&::System::Net::CookieContainer::Add)> {
  constexpr static std::size_t size = 0x7f4;
  constexpr static std::size_t addrs = 0x6417c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieContainer*>(), { "Add", {}, { ::i2c::type_of<::System::Net::Cookie*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.AgeCookies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CookieContainer::*)(::StringW)>(&::System::Net::CookieContainer::AgeCookies)> {
  constexpr static std::size_t size = 0x1384;
  constexpr static std::size_t addrs = 0x6418a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieContainer*>(), { "AgeCookies", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.ExpireCollection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::CookieContainer::*)(::System::Net::CookieCollection*)>(&::System::Net::CookieContainer::ExpireCollection)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6419e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieContainer*>(), { "ExpireCollection", {}, { ::i2c::type_of<::System::Net::CookieCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.IsLocalDomain
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::CookieContainer::*)(::StringW)>(&::System::Net::CookieContainer::IsLocalDomain)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6419fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieContainer*>(), { "IsLocalDomain", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.CookieCutter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::CookieCollection* (::System::Net::CookieContainer::*)(::System::Uri*, ::StringW, ::StringW, bool)>(
    &::System::Net::CookieContainer::CookieCutter)> {
  constexpr static std::size_t size = 0x6d8;
  constexpr static std::size_t addrs = 0x641a1b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieContainer*>(),
                                                { "CookieCutter", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.InternalGetCookies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::CookieCollection* (::System::Net::CookieContainer::*)(::System::Uri*)>(&::System::Net::CookieContainer::InternalGetCookies)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x641a88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieContainer*>(), { "InternalGetCookies", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.BuildCookieCollectionFromDomainMatches
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::System::Net::CookieContainer::*)(::System::Uri*, bool, int32_t, ::System::Net::CookieCollection*, ::System::Collections::Generic::List_1<::StringW>*, bool)>(
        &::System::Net::CookieContainer::BuildCookieCollectionFromDomainMatches)> {
  constexpr static std::size_t size = 0x79c;
  constexpr static std::size_t addrs = 0x641ad40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieContainer*>(),
                                                { "BuildCookieCollectionFromDomainMatches",
                                                  {},
                                                  { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::CookieCollection*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.MergeUpdateCollections
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieContainer::*)(::System::Net::CookieCollection*, ::System::Net::CookieCollection*, int32_t, bool, bool)>(
    &::System::Net::CookieContainer::MergeUpdateCollections)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x641b4fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::CookieContainer*>(), { "MergeUpdateCollections",
                                                                                               {},
                                                                                               { ::i2c::type_of<::System::Net::CookieCollection*>(), ::i2c::type_of<::System::Net::CookieCollection*>(),
                                                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.GetCookieHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::CookieContainer::*)(::System::Uri*)>(&::System::Net::CookieContainer::GetCookieHeader)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x641b6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieContainer*>(), { "GetCookieHeader", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieContainer.GetCookieHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::CookieContainer::*)(::System::Uri*, ::by_ref<::StringW>)>(&::System::Net::CookieContainer::GetCookieHeader)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x641b7b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::CookieContainer*>(), { "GetCookieHeader", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
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
  this->___m_domainTable = value;
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
  this->___m_fqdnMyDomain = value;
}
inline void System::Net::CookieContainer::setStaticF_HeaderInfo(::ArrayW<::System::Net::HeaderVariantInfo> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Net::HeaderVariantInfo>, "HeaderInfo", ::System::Net::CookieContainer*>(std::forward<::ArrayW<::System::Net::HeaderVariantInfo>>(value));
}
inline ::ArrayW<::System::Net::HeaderVariantInfo> System::Net::CookieContainer::getStaticF_HeaderInfo() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Net::HeaderVariantInfo>, "HeaderInfo", ::System::Net::CookieContainer*>();
}
inline void System::Net::CookieContainer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieContainer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::CookieContainer::AddRemoveDomain(::StringW key, ::System::Net::PathList* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::CookieContainer*>(), { "AddRemoveDomain", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::PathList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void System::Net::CookieContainer::Add(::System::Net::Cookie* cookie, bool throwOnError) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieContainer*>(), { "Add", {}, { ::i2c::type_of<::System::Net::Cookie*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cookie, throwOnError);
}
inline bool System::Net::CookieContainer::AgeCookies(::StringW domain) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieContainer*>(), { "AgeCookies", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, domain);
}
inline int32_t System::Net::CookieContainer::ExpireCollection(::System::Net::CookieCollection* cc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieContainer*>(), { "ExpireCollection", {}, { ::i2c::type_of<::System::Net::CookieCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, cc);
}
inline bool System::Net::CookieContainer::IsLocalDomain(::StringW host) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieContainer*>(), { "IsLocalDomain", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, host);
}
inline ::System::Net::CookieCollection* System::Net::CookieContainer::CookieCutter(::System::Uri* uri, ::StringW headerName, ::StringW setCookieHeader, bool isThrow) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieContainer*>(),
                                              { "CookieCutter", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::CookieCollection*>(this, ___internal_method, uri, headerName, setCookieHeader, isThrow);
}
inline ::System::Net::CookieCollection* System::Net::CookieContainer::InternalGetCookies(::System::Uri* uri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieContainer*>(), { "InternalGetCookies", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::CookieCollection*>(this, ___internal_method, uri);
}
inline void System::Net::CookieContainer::BuildCookieCollectionFromDomainMatches(::System::Uri* uri, bool isSecure, int32_t port, ::System::Net::CookieCollection* cookies,
                                                                                 ::System::Collections::Generic::List_1<::StringW>* domainAttribute, bool matchOnlyPlainCookie) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieContainer*>(),
                                                           { "BuildCookieCollectionFromDomainMatches",
                                                             {},
                                                             { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::CookieCollection*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri, isSecure, port, cookies, domainAttribute, matchOnlyPlainCookie);
}
inline void System::Net::CookieContainer::MergeUpdateCollections(::System::Net::CookieCollection* destination, ::System::Net::CookieCollection* source, int32_t port, bool isSecure, bool isPlainOnly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::CookieContainer*>(), { "MergeUpdateCollections",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Net::CookieCollection*>(), ::i2c::type_of<::System::Net::CookieCollection*>(),
                                                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, source, port, isSecure, isPlainOnly);
}
inline ::StringW System::Net::CookieContainer::GetCookieHeader(::System::Uri* uri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieContainer*>(), { "GetCookieHeader", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, uri);
}
inline ::StringW System::Net::CookieContainer::GetCookieHeader(::System::Uri* uri, ::by_ref<::StringW> optCookie2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::CookieContainer*>(), { "GetCookieHeader", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, uri, optCookie2);
}
inline ::System::Net::CookieContainer* System::Net::CookieContainer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::CookieContainer*>());
}
// Ctor Parameters []
constexpr ::System::Net::CookieContainer::CookieContainer() {}
