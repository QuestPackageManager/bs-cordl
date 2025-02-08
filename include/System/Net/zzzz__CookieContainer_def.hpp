#pragma once
// IWYU pragma private; include "System/Net/CookieContainer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CookieContainer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Net {
class CookieCollection;
}
namespace System::Net {
class Cookie;
}
namespace System::Net {
struct HeaderVariantInfo;
}
namespace System::Net {
class PathList;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class CookieContainer;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::CookieContainer);
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.CookieContainer
class CORDL_TYPE CookieContainer : public ::System::Object {
public:
  // Declarations
  /// @brief Field HeaderInfo, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_HeaderInfo, put = setStaticF_HeaderInfo)) ::ArrayW<::System::Net::HeaderVariantInfo, ::Array<::System::Net::HeaderVariantInfo>*> HeaderInfo;

  /// @brief Field m_count, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_count, put = __cordl_internal_set_m_count)) int32_t m_count;

  /// @brief Field m_domainTable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_domainTable, put = __cordl_internal_set_m_domainTable)) ::System::Collections::Hashtable* m_domainTable;

  /// @brief Field m_fqdnMyDomain, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_fqdnMyDomain, put = __cordl_internal_set_m_fqdnMyDomain)) ::StringW m_fqdnMyDomain;

  /// @brief Field m_maxCookieSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_maxCookieSize, put = __cordl_internal_set_m_maxCookieSize)) int32_t m_maxCookieSize;

  /// @brief Field m_maxCookies, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_maxCookies, put = __cordl_internal_set_m_maxCookies)) int32_t m_maxCookies;

  /// @brief Field m_maxCookiesPerDomain, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_maxCookiesPerDomain, put = __cordl_internal_set_m_maxCookiesPerDomain)) int32_t m_maxCookiesPerDomain;

  /// @brief Method Add, addr 0x44b54c4, size 0x804, virtual false, abstract: false, final false
  inline void Add(::System::Net::Cookie* cookie, bool throwOnError);

  /// @brief Method AddRemoveDomain, addr 0x44b53a0, size 0x124, virtual false, abstract: false, final false
  inline void AddRemoveDomain(::StringW key, ::System::Net::PathList* value);

  /// @brief Method AgeCookies, addr 0x44b6300, size 0x1538, virtual false, abstract: false, final false
  inline bool AgeCookies(::StringW domain);

  /// @brief Method BuildCookieCollectionFromDomainMatches, addr 0x44b8804, size 0x820, virtual false, abstract: false, final false
  inline void BuildCookieCollectionFromDomainMatches(::System::Uri* uri, bool isSecure, int32_t port, ::System::Net::CookieCollection* cookies,
                                                     ::System::Collections::Generic::List_1<::StringW>* domainAttribute, bool matchOnlyPlainCookie);

  /// @brief Method CookieCutter, addr 0x44b7c98, size 0x6dc, virtual false, abstract: false, final false
  inline ::System::Net::CookieCollection* CookieCutter(::System::Uri* uri, ::StringW headerName, ::StringW setCookieHeader, bool isThrow);

  /// @brief Method ExpireCollection, addr 0x44b7864, size 0x170, virtual false, abstract: false, final false
  inline int32_t ExpireCollection(::System::Net::CookieCollection* cc);

  /// @brief Method GetCookieHeader, addr 0x44b9258, size 0xcc, virtual false, abstract: false, final false
  inline ::StringW GetCookieHeader(::System::Uri* uri);

  /// @brief Method GetCookieHeader, addr 0x44b9324, size 0x398, virtual false, abstract: false, final false
  inline ::StringW GetCookieHeader(::System::Uri* uri, ::ByRef<::StringW> optCookie2);

  /// @brief Method InternalGetCookies, addr 0x44b8374, size 0x490, virtual false, abstract: false, final false
  inline ::System::Net::CookieCollection* InternalGetCookies(::System::Uri* uri);

  /// @brief Method IsLocalDomain, addr 0x44b79f8, size 0x2a0, virtual false, abstract: false, final false
  inline bool IsLocalDomain(::StringW host);

  /// @brief Method MergeUpdateCollections, addr 0x44b9048, size 0x210, virtual false, abstract: false, final false
  inline void MergeUpdateCollections(::System::Net::CookieCollection* destination, ::System::Net::CookieCollection* source, int32_t port, bool isSecure, bool isPlainOnly);

  static inline ::System::Net::CookieContainer* New_ctor();

  constexpr int32_t const& __cordl_internal_get_m_count() const;

  constexpr int32_t& __cordl_internal_get_m_count();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_m_domainTable() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_m_domainTable();

  constexpr ::StringW const& __cordl_internal_get_m_fqdnMyDomain() const;

  constexpr ::StringW& __cordl_internal_get_m_fqdnMyDomain();

  constexpr int32_t const& __cordl_internal_get_m_maxCookieSize() const;

  constexpr int32_t& __cordl_internal_get_m_maxCookieSize();

  constexpr int32_t const& __cordl_internal_get_m_maxCookies() const;

  constexpr int32_t& __cordl_internal_get_m_maxCookies();

  constexpr int32_t const& __cordl_internal_get_m_maxCookiesPerDomain() const;

  constexpr int32_t& __cordl_internal_get_m_maxCookiesPerDomain();

  constexpr void __cordl_internal_set_m_count(int32_t value);

  constexpr void __cordl_internal_set_m_domainTable(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_m_fqdnMyDomain(::StringW value);

  constexpr void __cordl_internal_set_m_maxCookieSize(int32_t value);

  constexpr void __cordl_internal_set_m_maxCookies(int32_t value);

  constexpr void __cordl_internal_set_m_maxCookiesPerDomain(int32_t value);

  /// @brief Method .ctor, addr 0x44b52a8, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::System::Net::HeaderVariantInfo, ::Array<::System::Net::HeaderVariantInfo>*> getStaticF_HeaderInfo();

  static inline void setStaticF_HeaderInfo(::ArrayW<::System::Net::HeaderVariantInfo, ::Array<::System::Net::HeaderVariantInfo>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CookieContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CookieContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CookieContainer(CookieContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CookieContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CookieContainer(CookieContainer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9650 };

  /// @brief Field m_domainTable, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___m_domainTable;

  /// @brief Field m_maxCookieSize, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_maxCookieSize;

  /// @brief Field m_maxCookies, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_maxCookies;

  /// @brief Field m_maxCookiesPerDomain, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_maxCookiesPerDomain;

  /// @brief Field m_count, offset: 0x24, size: 0x4, def value: None
  int32_t ___m_count;

  /// @brief Field m_fqdnMyDomain, offset: 0x28, size: 0x8, def value: None
  ::StringW ___m_fqdnMyDomain;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::CookieContainer, ___m_domainTable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieContainer, ___m_maxCookieSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieContainer, ___m_maxCookies) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieContainer, ___m_maxCookiesPerDomain) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieContainer, ___m_count) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Net::CookieContainer, ___m_fqdnMyDomain) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::CookieContainer, 0x30>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::CookieContainer);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CookieContainer*, "System.Net", "CookieContainer");
