#pragma once
// IWYU pragma private; include "System/Net/Cookie.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__CookieVariant_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Cookie)
namespace System::Collections {
class IComparer;
}
namespace System::Net {
class Comparer;
}
namespace System::Net {
struct CookieVariant;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class Cookie;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Cookie);
// Type: System.Net::Cookie
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 154, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::Cookie*
class CORDL_TYPE Cookie : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Comment, put = set_Comment)) ::StringW Comment;

  __declspec(property(put = set_CommentUri)) ::System::Uri* CommentUri;

  __declspec(property(put = set_Discard)) bool Discard;

  __declspec(property(get = get_Domain, put = set_Domain)) ::StringW Domain;

  __declspec(property(get = get_DomainKey)) ::StringW DomainKey;

  __declspec(property(get = get_Expired)) bool Expired;

  __declspec(property(put = set_Expires)) ::System::DateTime Expires;

  __declspec(property(put = set_HttpOnly)) bool HttpOnly;

  /// @brief Field IsQuotedDomain, offset 0x99, size 0x1
  __declspec(property(get = __cordl_internal_get_IsQuotedDomain, put = __cordl_internal_set_IsQuotedDomain)) bool IsQuotedDomain;

  /// @brief Field IsQuotedVersion, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get_IsQuotedVersion, put = __cordl_internal_set_IsQuotedVersion)) bool IsQuotedVersion;

  __declspec(property(get = get_Name, put = set_Name)) ::StringW Name;

  __declspec(property(get = get_Path, put = set_Path)) ::StringW Path;

  __declspec(property(get = get_Plain)) bool Plain;

  __declspec(property(get = get_Port, put = set_Port)) ::StringW Port;

  __declspec(property(get = get_PortList)) ::ArrayW<int32_t, ::Array<int32_t>*> PortList;

  /// @brief Field PortSplitDelimiters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PortSplitDelimiters, put = setStaticF_PortSplitDelimiters)) ::ArrayW<char16_t, ::Array<char16_t>*> PortSplitDelimiters;

  /// @brief Field Reserved2Name, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Reserved2Name, put = setStaticF_Reserved2Name)) ::ArrayW<char16_t, ::Array<char16_t>*> Reserved2Name;

  /// @brief Field Reserved2Value, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Reserved2Value, put = setStaticF_Reserved2Value)) ::ArrayW<char16_t, ::Array<char16_t>*> Reserved2Value;

  __declspec(property(get = get_Secure, put = set_Secure)) bool Secure;

  __declspec(property(get = get_Value, put = set_Value)) ::StringW Value;

  __declspec(property(get = get_Variant)) ::System::Net::CookieVariant Variant;

  __declspec(property(get = get_Version, put = set_Version)) int32_t Version;

  __declspec(property(get = get__Domain)) ::StringW _Domain;

  __declspec(property(get = get__Path)) ::StringW _Path;

  __declspec(property(get = get__Port)) ::StringW _Port;

  __declspec(property(get = get__Version)) ::StringW _Version;

  /// @brief Field m_comment, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_comment, put = __cordl_internal_set_m_comment)) ::StringW m_comment;

  /// @brief Field m_commentUri, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_commentUri, put = __cordl_internal_set_m_commentUri)) ::System::Uri* m_commentUri;

  /// @brief Field m_cookieVariant, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_cookieVariant, put = __cordl_internal_set_m_cookieVariant)) ::System::Net::CookieVariant m_cookieVariant;

  /// @brief Field m_discard, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_m_discard, put = __cordl_internal_set_m_discard)) bool m_discard;

  /// @brief Field m_domain, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_domain, put = __cordl_internal_set_m_domain)) ::StringW m_domain;

  /// @brief Field m_domainKey, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_domainKey, put = __cordl_internal_set_m_domainKey)) ::StringW m_domainKey;

  /// @brief Field m_domain_implicit, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_domain_implicit, put = __cordl_internal_set_m_domain_implicit)) bool m_domain_implicit;

  /// @brief Field m_expires, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_expires, put = __cordl_internal_set_m_expires)) ::System::DateTime m_expires;

  /// @brief Field m_httpOnly, offset 0x71, size 0x1
  __declspec(property(get = __cordl_internal_get_m_httpOnly, put = __cordl_internal_set_m_httpOnly)) bool m_httpOnly;

  /// @brief Field m_name, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_name, put = __cordl_internal_set_m_name)) ::StringW m_name;

  /// @brief Field m_path, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_path, put = __cordl_internal_set_m_path)) ::StringW m_path;

  /// @brief Field m_path_implicit, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_m_path_implicit, put = __cordl_internal_set_m_path_implicit)) bool m_path_implicit;

  /// @brief Field m_port, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_port, put = __cordl_internal_set_m_port)) ::StringW m_port;

  /// @brief Field m_port_implicit, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_m_port_implicit, put = __cordl_internal_set_m_port_implicit)) bool m_port_implicit;

  /// @brief Field m_port_list, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_port_list, put = __cordl_internal_set_m_port_list)) ::ArrayW<int32_t, ::Array<int32_t>*> m_port_list;

  /// @brief Field m_secure, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_m_secure, put = __cordl_internal_set_m_secure)) bool m_secure;

  /// @brief Field m_timeStamp, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_timeStamp, put = __cordl_internal_set_m_timeStamp)) ::System::DateTime m_timeStamp;

  /// @brief Field m_value, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_value, put = __cordl_internal_set_m_value)) ::StringW m_value;

  /// @brief Field m_version, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_m_version, put = __cordl_internal_set_m_version)) int32_t m_version;

  /// @brief Field staticComparer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_staticComparer, put = setStaticF_staticComparer)) ::System::Net::Comparer* staticComparer;

  /// @brief Method DomainCharsTest, addr 0x444af74, size 0xb4, virtual false, abstract: false, final false
  static inline bool DomainCharsTest(::StringW name);

  /// @brief Method Equals, addr 0x444b6b8, size 0xd0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* comparand);

  /// @brief Method GetComparer, addr 0x444b660, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::IComparer* GetComparer();

  /// @brief Method GetHashCode, addr 0x444b788, size 0x160, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method InternalSetName, addr 0x444a338, size 0x100, virtual false, abstract: false, final false
  inline bool InternalSetName(::StringW value);

  /// @brief Method IsDomainEqualToHost, addr 0x444a548, size 0x58, virtual false, abstract: false, final false
  static inline bool IsDomainEqualToHost(::StringW domain, ::StringW host);

  static inline ::System::Net::Cookie* New_ctor();

  /// @brief Method ToString, addr 0x444b8e8, size 0x24c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method VerifySetDefaults, addr 0x444a5a0, size 0x9d4, virtual false, abstract: false, final false
  inline bool VerifySetDefaults(::System::Net::CookieVariant variant, ::System::Uri* uri, bool isLocalDomain, ::StringW localDomain, bool set_default, bool isThrow);

  constexpr bool const& __cordl_internal_get_IsQuotedDomain() const;

  constexpr bool& __cordl_internal_get_IsQuotedDomain();

  constexpr bool const& __cordl_internal_get_IsQuotedVersion() const;

  constexpr bool& __cordl_internal_get_IsQuotedVersion();

  constexpr ::StringW const& __cordl_internal_get_m_comment() const;

  constexpr ::StringW& __cordl_internal_get_m_comment();

  constexpr ::System::Uri*& __cordl_internal_get_m_commentUri();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __cordl_internal_get_m_commentUri() const;

  constexpr ::System::Net::CookieVariant const& __cordl_internal_get_m_cookieVariant() const;

  constexpr ::System::Net::CookieVariant& __cordl_internal_get_m_cookieVariant();

  constexpr bool const& __cordl_internal_get_m_discard() const;

  constexpr bool& __cordl_internal_get_m_discard();

  constexpr ::StringW const& __cordl_internal_get_m_domain() const;

  constexpr ::StringW& __cordl_internal_get_m_domain();

  constexpr ::StringW const& __cordl_internal_get_m_domainKey() const;

  constexpr ::StringW& __cordl_internal_get_m_domainKey();

  constexpr bool const& __cordl_internal_get_m_domain_implicit() const;

  constexpr bool& __cordl_internal_get_m_domain_implicit();

  constexpr ::System::DateTime const& __cordl_internal_get_m_expires() const;

  constexpr ::System::DateTime& __cordl_internal_get_m_expires();

  constexpr bool const& __cordl_internal_get_m_httpOnly() const;

  constexpr bool& __cordl_internal_get_m_httpOnly();

  constexpr ::StringW const& __cordl_internal_get_m_name() const;

  constexpr ::StringW& __cordl_internal_get_m_name();

  constexpr ::StringW const& __cordl_internal_get_m_path() const;

  constexpr ::StringW& __cordl_internal_get_m_path();

  constexpr bool const& __cordl_internal_get_m_path_implicit() const;

  constexpr bool& __cordl_internal_get_m_path_implicit();

  constexpr ::StringW const& __cordl_internal_get_m_port() const;

  constexpr ::StringW& __cordl_internal_get_m_port();

  constexpr bool const& __cordl_internal_get_m_port_implicit() const;

  constexpr bool& __cordl_internal_get_m_port_implicit();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_port_list() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_port_list();

  constexpr bool const& __cordl_internal_get_m_secure() const;

  constexpr bool& __cordl_internal_get_m_secure();

  constexpr ::System::DateTime const& __cordl_internal_get_m_timeStamp() const;

  constexpr ::System::DateTime& __cordl_internal_get_m_timeStamp();

  constexpr ::StringW const& __cordl_internal_get_m_value() const;

  constexpr ::StringW& __cordl_internal_get_m_value();

  constexpr int32_t const& __cordl_internal_get_m_version() const;

  constexpr int32_t& __cordl_internal_get_m_version();

  constexpr void __cordl_internal_set_IsQuotedDomain(bool value);

  constexpr void __cordl_internal_set_IsQuotedVersion(bool value);

  constexpr void __cordl_internal_set_m_comment(::StringW value);

  constexpr void __cordl_internal_set_m_commentUri(::System::Uri* value);

  constexpr void __cordl_internal_set_m_cookieVariant(::System::Net::CookieVariant value);

  constexpr void __cordl_internal_set_m_discard(bool value);

  constexpr void __cordl_internal_set_m_domain(::StringW value);

  constexpr void __cordl_internal_set_m_domainKey(::StringW value);

  constexpr void __cordl_internal_set_m_domain_implicit(bool value);

  constexpr void __cordl_internal_set_m_expires(::System::DateTime value);

  constexpr void __cordl_internal_set_m_httpOnly(bool value);

  constexpr void __cordl_internal_set_m_name(::StringW value);

  constexpr void __cordl_internal_set_m_path(::StringW value);

  constexpr void __cordl_internal_set_m_path_implicit(bool value);

  constexpr void __cordl_internal_set_m_port(::StringW value);

  constexpr void __cordl_internal_set_m_port_implicit(bool value);

  constexpr void __cordl_internal_set_m_port_list(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_secure(bool value);

  constexpr void __cordl_internal_set_m_timeStamp(::System::DateTime value);

  constexpr void __cordl_internal_set_m_value(::StringW value);

  constexpr void __cordl_internal_set_m_version(int32_t value);

  /// @brief Method .ctor, addr 0x4449e44, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_PortSplitDelimiters();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_Reserved2Name();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_Reserved2Value();

  static inline ::System::Net::Comparer* getStaticF_staticComparer();

  /// @brief Method get_Comment, addr 0x4449f24, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Comment();

  /// @brief Method get_Domain, addr 0x4449fa4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Domain();

  /// @brief Method get_DomainKey, addr 0x444b4bc, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_DomainKey();

  /// @brief Method get_Expired, addr 0x444a0fc, size 0xb8, virtual false, abstract: false, final false
  inline bool get_Expired();

  /// @brief Method get_Name, addr 0x444a1bc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Path, addr 0x444a438, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Path();

  /// @brief Method get_Plain, addr 0x444a0ec, size 0x10, virtual false, abstract: false, final false
  inline bool get_Plain();

  /// @brief Method get_Port, addr 0x444b028, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Port();

  /// @brief Method get_PortList, addr 0x444b360, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_PortList();

  /// @brief Method get_Secure, addr 0x444b430, size 0x8, virtual false, abstract: false, final false
  inline bool get_Secure();

  /// @brief Method get_Value, addr 0x444b444, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method get_Variant, addr 0x444b4b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::CookieVariant get_Variant();

  /// @brief Method get_Version, addr 0x444b4d8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Method get__Domain, addr 0x444a020, size 0xcc, virtual false, abstract: false, final false
  inline ::StringW get__Domain();

  /// @brief Method get__Path, addr 0x444a4ac, size 0x9c, virtual false, abstract: false, final false
  inline ::StringW get__Path();

  /// @brief Method get__Port, addr 0x444b368, size 0xc8, virtual false, abstract: false, final false
  inline ::StringW get__Port();

  /// @brief Method get__Version, addr 0x444b554, size 0x10c, virtual false, abstract: false, final false
  inline ::StringW get__Version();

  static inline void setStaticF_PortSplitDelimiters(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_Reserved2Name(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_Reserved2Value(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_staticComparer(::System::Net::Comparer* value);

  /// @brief Method set_Comment, addr 0x4449f2c, size 0x58, virtual false, abstract: false, final false
  inline void set_Comment(::StringW value);

  /// @brief Method set_CommentUri, addr 0x4449f84, size 0x8, virtual false, abstract: false, final false
  inline void set_CommentUri(::System::Uri* value);

  /// @brief Method set_Discard, addr 0x4449f98, size 0xc, virtual false, abstract: false, final false
  inline void set_Discard(bool value);

  /// @brief Method set_Domain, addr 0x4449fac, size 0x74, virtual false, abstract: false, final false
  inline void set_Domain(::StringW value);

  /// @brief Method set_Expires, addr 0x444a1b4, size 0x8, virtual false, abstract: false, final false
  inline void set_Expires(::System::DateTime value);

  /// @brief Method set_HttpOnly, addr 0x4449f8c, size 0xc, virtual false, abstract: false, final false
  inline void set_HttpOnly(bool value);

  /// @brief Method set_Name, addr 0x444a1c4, size 0x174, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_Path, addr 0x444a440, size 0x6c, virtual false, abstract: false, final false
  inline void set_Path(::StringW value);

  /// @brief Method set_Port, addr 0x444b030, size 0x330, virtual false, abstract: false, final false
  inline void set_Port(::StringW value);

  /// @brief Method set_Secure, addr 0x444b438, size 0xc, virtual false, abstract: false, final false
  inline void set_Secure(bool value);

  /// @brief Method set_Value, addr 0x444b44c, size 0x68, virtual false, abstract: false, final false
  inline void set_Value(::StringW value);

  /// @brief Method set_Version, addr 0x444b4e0, size 0x74, virtual false, abstract: false, final false
  inline void set_Version(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Cookie();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Cookie", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Cookie(Cookie&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Cookie", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Cookie(Cookie const&) = delete;

  /// @brief Field m_comment, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_comment;

  /// @brief Field m_commentUri, offset: 0x18, size: 0x8, def value: None
  ::System::Uri* ___m_commentUri;

  /// @brief Field m_cookieVariant, offset: 0x20, size: 0x4, def value: None
  ::System::Net::CookieVariant ___m_cookieVariant;

  /// @brief Field m_discard, offset: 0x24, size: 0x1, def value: None
  bool ___m_discard;

  /// @brief Field m_domain, offset: 0x28, size: 0x8, def value: None
  ::StringW ___m_domain;

  /// @brief Field m_domain_implicit, offset: 0x30, size: 0x1, def value: None
  bool ___m_domain_implicit;

  /// @brief Field m_expires, offset: 0x38, size: 0x8, def value: None
  ::System::DateTime ___m_expires;

  /// @brief Field m_name, offset: 0x40, size: 0x8, def value: None
  ::StringW ___m_name;

  /// @brief Field m_path, offset: 0x48, size: 0x8, def value: None
  ::StringW ___m_path;

  /// @brief Field m_path_implicit, offset: 0x50, size: 0x1, def value: None
  bool ___m_path_implicit;

  /// @brief Field m_port, offset: 0x58, size: 0x8, def value: None
  ::StringW ___m_port;

  /// @brief Field m_port_implicit, offset: 0x60, size: 0x1, def value: None
  bool ___m_port_implicit;

  /// @brief Field m_port_list, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_port_list;

  /// @brief Field m_secure, offset: 0x70, size: 0x1, def value: None
  bool ___m_secure;

  /// @brief Field m_httpOnly, offset: 0x71, size: 0x1, def value: None
  bool ___m_httpOnly;

  /// @brief Field m_timeStamp, offset: 0x78, size: 0x8, def value: None
  ::System::DateTime ___m_timeStamp;

  /// @brief Field m_value, offset: 0x80, size: 0x8, def value: None
  ::StringW ___m_value;

  /// @brief Field m_version, offset: 0x88, size: 0x4, def value: None
  int32_t ___m_version;

  /// @brief Field m_domainKey, offset: 0x90, size: 0x8, def value: None
  ::StringW ___m_domainKey;

  /// @brief Field IsQuotedVersion, offset: 0x98, size: 0x1, def value: None
  bool ___IsQuotedVersion;

  /// @brief Field IsQuotedDomain, offset: 0x99, size: 0x1, def value: None
  bool ___IsQuotedDomain;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9611 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Cookie, 0xa0>, "Size mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_comment) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_commentUri) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_cookieVariant) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_discard) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_domain) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_domain_implicit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_expires) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_name) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_path) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_path_implicit) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_port) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_port_implicit) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_port_list) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_secure) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_httpOnly) == 0x71, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_timeStamp) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_value) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_version) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___m_domainKey) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___IsQuotedVersion) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Net::Cookie, ___IsQuotedDomain) == 0x99, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::Cookie);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cookie*, "System.Net", "Cookie");
