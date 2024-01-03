#pragma once
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
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 154, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9119)), TypeDefinitionIndex(TypeDefinitionIndex(2368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9120))
// CS Name: ::System.Net::Cookie*
class CORDL_TYPE Cookie : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_comment, offset 0x10, size 0x8
  __declspec(property(get = __get_m_comment, put = __set_m_comment))::StringW m_comment;

  /// @brief Field m_commentUri, offset 0x18, size 0x8
  __declspec(property(get = __get_m_commentUri, put = __set_m_commentUri))::System::Uri* m_commentUri;

  /// @brief Field m_cookieVariant, offset 0x20, size 0x4
  __declspec(property(get = __get_m_cookieVariant, put = __set_m_cookieVariant))::System::Net::CookieVariant m_cookieVariant;

  /// @brief Field m_discard, offset 0x24, size 0x1
  __declspec(property(get = __get_m_discard, put = __set_m_discard)) bool m_discard;

  /// @brief Field m_domain, offset 0x28, size 0x8
  __declspec(property(get = __get_m_domain, put = __set_m_domain))::StringW m_domain;

  /// @brief Field m_domain_implicit, offset 0x30, size 0x1
  __declspec(property(get = __get_m_domain_implicit, put = __set_m_domain_implicit)) bool m_domain_implicit;

  /// @brief Field m_expires, offset 0x38, size 0x8
  __declspec(property(get = __get_m_expires, put = __set_m_expires))::System::DateTime m_expires;

  /// @brief Field m_name, offset 0x40, size 0x8
  __declspec(property(get = __get_m_name, put = __set_m_name))::StringW m_name;

  /// @brief Field m_path, offset 0x48, size 0x8
  __declspec(property(get = __get_m_path, put = __set_m_path))::StringW m_path;

  /// @brief Field m_path_implicit, offset 0x50, size 0x1
  __declspec(property(get = __get_m_path_implicit, put = __set_m_path_implicit)) bool m_path_implicit;

  /// @brief Field m_port, offset 0x58, size 0x8
  __declspec(property(get = __get_m_port, put = __set_m_port))::StringW m_port;

  /// @brief Field m_port_implicit, offset 0x60, size 0x1
  __declspec(property(get = __get_m_port_implicit, put = __set_m_port_implicit)) bool m_port_implicit;

  /// @brief Field m_port_list, offset 0x68, size 0x8
  __declspec(property(get = __get_m_port_list, put = __set_m_port_list))::ArrayW<int32_t, ::Array<int32_t>*> m_port_list;

  /// @brief Field m_secure, offset 0x70, size 0x1
  __declspec(property(get = __get_m_secure, put = __set_m_secure)) bool m_secure;

  /// @brief Field m_httpOnly, offset 0x71, size 0x1
  __declspec(property(get = __get_m_httpOnly, put = __set_m_httpOnly)) bool m_httpOnly;

  /// @brief Field m_timeStamp, offset 0x78, size 0x8
  __declspec(property(get = __get_m_timeStamp, put = __set_m_timeStamp))::System::DateTime m_timeStamp;

  /// @brief Field m_value, offset 0x80, size 0x8
  __declspec(property(get = __get_m_value, put = __set_m_value))::StringW m_value;

  /// @brief Field m_version, offset 0x88, size 0x4
  __declspec(property(get = __get_m_version, put = __set_m_version)) int32_t m_version;

  /// @brief Field m_domainKey, offset 0x90, size 0x8
  __declspec(property(get = __get_m_domainKey, put = __set_m_domainKey))::StringW m_domainKey;

  /// @brief Field IsQuotedVersion, offset 0x98, size 0x1
  __declspec(property(get = __get_IsQuotedVersion, put = __set_IsQuotedVersion)) bool IsQuotedVersion;

  /// @brief Field IsQuotedDomain, offset 0x99, size 0x1
  __declspec(property(get = __get_IsQuotedDomain, put = __set_IsQuotedDomain)) bool IsQuotedDomain;

  /// @brief Field PortSplitDelimiters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PortSplitDelimiters, put = setStaticF_PortSplitDelimiters))::ArrayW<char16_t, ::Array<char16_t>*> PortSplitDelimiters;

  /// @brief Field Reserved2Name, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Reserved2Name, put = setStaticF_Reserved2Name))::ArrayW<char16_t, ::Array<char16_t>*> Reserved2Name;

  /// @brief Field Reserved2Value, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Reserved2Value, put = setStaticF_Reserved2Value))::ArrayW<char16_t, ::Array<char16_t>*> Reserved2Value;

  /// @brief Field staticComparer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_staticComparer, put = setStaticF_staticComparer))::System::Net::Comparer* staticComparer;

  __declspec(property(get = get_Comment, put = set_Comment))::StringW Comment;

  __declspec(property(put = set_CommentUri))::System::Uri* CommentUri;

  __declspec(property(put = set_HttpOnly)) bool HttpOnly;

  __declspec(property(put = set_Discard)) bool Discard;

  __declspec(property(get = get_Domain, put = set_Domain))::StringW Domain;

  __declspec(property(get = get__Domain))::StringW _Domain;

  __declspec(property(get = get_Expired)) bool Expired;

  __declspec(property(put = set_Expires))::System::DateTime Expires;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  __declspec(property(get = get_Path, put = set_Path))::StringW Path;

  __declspec(property(get = get__Path))::StringW _Path;

  __declspec(property(get = get_Plain)) bool Plain;

  __declspec(property(get = get_Port, put = set_Port))::StringW Port;

  __declspec(property(get = get_PortList))::ArrayW<int32_t, ::Array<int32_t>*> PortList;

  __declspec(property(get = get__Port))::StringW _Port;

  __declspec(property(get = get_Secure, put = set_Secure)) bool Secure;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  __declspec(property(get = get_Variant))::System::Net::CookieVariant Variant;

  __declspec(property(get = get_DomainKey))::StringW DomainKey;

  __declspec(property(get = get_Version, put = set_Version)) int32_t Version;

  __declspec(property(get = get__Version))::StringW _Version;

  constexpr ::StringW& __get_m_comment();

  constexpr ::StringW const& __get_m_comment() const;

  constexpr void __set_m_comment(::StringW value);

  constexpr ::System::Uri*& __get_m_commentUri();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __get_m_commentUri() const;

  constexpr void __set_m_commentUri(::System::Uri* value);

  constexpr ::System::Net::CookieVariant& __get_m_cookieVariant();

  constexpr ::System::Net::CookieVariant const& __get_m_cookieVariant() const;

  constexpr void __set_m_cookieVariant(::System::Net::CookieVariant value);

  constexpr bool& __get_m_discard();

  constexpr bool const& __get_m_discard() const;

  constexpr void __set_m_discard(bool value);

  constexpr ::StringW& __get_m_domain();

  constexpr ::StringW const& __get_m_domain() const;

  constexpr void __set_m_domain(::StringW value);

  constexpr bool& __get_m_domain_implicit();

  constexpr bool const& __get_m_domain_implicit() const;

  constexpr void __set_m_domain_implicit(bool value);

  constexpr ::System::DateTime& __get_m_expires();

  constexpr ::System::DateTime const& __get_m_expires() const;

  constexpr void __set_m_expires(::System::DateTime value);

  constexpr ::StringW& __get_m_name();

  constexpr ::StringW const& __get_m_name() const;

  constexpr void __set_m_name(::StringW value);

  constexpr ::StringW& __get_m_path();

  constexpr ::StringW const& __get_m_path() const;

  constexpr void __set_m_path(::StringW value);

  constexpr bool& __get_m_path_implicit();

  constexpr bool const& __get_m_path_implicit() const;

  constexpr void __set_m_path_implicit(bool value);

  constexpr ::StringW& __get_m_port();

  constexpr ::StringW const& __get_m_port() const;

  constexpr void __set_m_port(::StringW value);

  constexpr bool& __get_m_port_implicit();

  constexpr bool const& __get_m_port_implicit() const;

  constexpr void __set_m_port_implicit(bool value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_m_port_list();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_m_port_list() const;

  constexpr void __set_m_port_list(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr bool& __get_m_secure();

  constexpr bool const& __get_m_secure() const;

  constexpr void __set_m_secure(bool value);

  constexpr bool& __get_m_httpOnly();

  constexpr bool const& __get_m_httpOnly() const;

  constexpr void __set_m_httpOnly(bool value);

  constexpr ::System::DateTime& __get_m_timeStamp();

  constexpr ::System::DateTime const& __get_m_timeStamp() const;

  constexpr void __set_m_timeStamp(::System::DateTime value);

  constexpr ::StringW& __get_m_value();

  constexpr ::StringW const& __get_m_value() const;

  constexpr void __set_m_value(::StringW value);

  constexpr int32_t& __get_m_version();

  constexpr int32_t const& __get_m_version() const;

  constexpr void __set_m_version(int32_t value);

  constexpr ::StringW& __get_m_domainKey();

  constexpr ::StringW const& __get_m_domainKey() const;

  constexpr void __set_m_domainKey(::StringW value);

  constexpr bool& __get_IsQuotedVersion();

  constexpr bool const& __get_IsQuotedVersion() const;

  constexpr void __set_IsQuotedVersion(bool value);

  constexpr bool& __get_IsQuotedDomain();

  constexpr bool const& __get_IsQuotedDomain() const;

  constexpr void __set_IsQuotedDomain(bool value);

  static inline void setStaticF_PortSplitDelimiters(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_PortSplitDelimiters();

  static inline void setStaticF_Reserved2Name(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_Reserved2Name();

  static inline void setStaticF_Reserved2Value(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_Reserved2Value();

  static inline void setStaticF_staticComparer(::System::Net::Comparer* value);

  static inline ::System::Net::Comparer* getStaticF_staticComparer();

  static inline ::System::Net::Cookie* New_ctor();

  /// @brief Method .ctor, addr 0x29aab18, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Comment, addr 0x29aabf8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Comment();

  /// @brief Method set_Comment, addr 0x29aac00, size 0x58, virtual false, abstract: false, final false
  inline void set_Comment(::StringW value);

  /// @brief Method set_CommentUri, addr 0x29aac58, size 0x8, virtual false, abstract: false, final false
  inline void set_CommentUri(::System::Uri* value);

  /// @brief Method set_HttpOnly, addr 0x29aac60, size 0xc, virtual false, abstract: false, final false
  inline void set_HttpOnly(bool value);

  /// @brief Method set_Discard, addr 0x29aac6c, size 0xc, virtual false, abstract: false, final false
  inline void set_Discard(bool value);

  /// @brief Method get_Domain, addr 0x29aac78, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Domain();

  /// @brief Method set_Domain, addr 0x29aac80, size 0x74, virtual false, abstract: false, final false
  inline void set_Domain(::StringW value);

  /// @brief Method get__Domain, addr 0x29aacf4, size 0xcc, virtual false, abstract: false, final false
  inline ::StringW get__Domain();

  /// @brief Method get_Expired, addr 0x29aadd0, size 0xb8, virtual false, abstract: false, final false
  inline bool get_Expired();

  /// @brief Method set_Expires, addr 0x29aae88, size 0x8, virtual false, abstract: false, final false
  inline void set_Expires(::System::DateTime value);

  /// @brief Method get_Name, addr 0x29aae90, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method set_Name, addr 0x29aae98, size 0x18c, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method InternalSetName, addr 0x29ab024, size 0x104, virtual false, abstract: false, final false
  inline bool InternalSetName(::StringW value);

  /// @brief Method get_Path, addr 0x29ab130, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Path();

  /// @brief Method set_Path, addr 0x29ab138, size 0x6c, virtual false, abstract: false, final false
  inline void set_Path(::StringW value);

  /// @brief Method get__Path, addr 0x29ab1a4, size 0x9c, virtual false, abstract: false, final false
  inline ::StringW get__Path();

  /// @brief Method get_Plain, addr 0x29aadc0, size 0x10, virtual false, abstract: false, final false
  inline bool get_Plain();

  /// @brief Method IsDomainEqualToHost, addr 0x29ab240, size 0x58, virtual false, abstract: false, final false
  static inline bool IsDomainEqualToHost(::StringW domain, ::StringW host);

  /// @brief Method VerifySetDefaults, addr 0x29ab298, size 0x9f0, virtual false, abstract: false, final false
  inline bool VerifySetDefaults(::System::Net::CookieVariant variant, ::System::Uri* uri, bool isLocalDomain, ::StringW localDomain, bool set_default, bool isThrow);

  /// @brief Method DomainCharsTest, addr 0x29abc88, size 0x9c, virtual false, abstract: false, final false
  static inline bool DomainCharsTest(::StringW name);

  /// @brief Method get_Port, addr 0x29abde8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Port();

  /// @brief Method set_Port, addr 0x29abdf0, size 0x334, virtual false, abstract: false, final false
  inline void set_Port(::StringW value);

  /// @brief Method get_PortList, addr 0x29ac124, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_PortList();

  /// @brief Method get__Port, addr 0x29ac12c, size 0xc8, virtual false, abstract: false, final false
  inline ::StringW get__Port();

  /// @brief Method get_Secure, addr 0x29ac1f4, size 0x8, virtual false, abstract: false, final false
  inline bool get_Secure();

  /// @brief Method set_Secure, addr 0x29ac1fc, size 0xc, virtual false, abstract: false, final false
  inline void set_Secure(bool value);

  /// @brief Method get_Value, addr 0x29ac208, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0x29ac210, size 0x68, virtual false, abstract: false, final false
  inline void set_Value(::StringW value);

  /// @brief Method get_Variant, addr 0x29ac278, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::CookieVariant get_Variant();

  /// @brief Method get_DomainKey, addr 0x29ac280, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_DomainKey();

  /// @brief Method get_Version, addr 0x29ac29c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Method set_Version, addr 0x29ac2a4, size 0x78, virtual false, abstract: false, final false
  inline void set_Version(int32_t value);

  /// @brief Method get__Version, addr 0x29ac31c, size 0xfc, virtual false, abstract: false, final false
  inline ::StringW get__Version();

  /// @brief Method GetComparer, addr 0x29ac418, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::IComparer* GetComparer();

  /// @brief Method Equals, addr 0x29ac470, size 0xd0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* comparand);

  /// @brief Method GetHashCode, addr 0x29ac540, size 0x268, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x29ac7a8, size 0x310, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "Cookie", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Cookie(Cookie&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Cookie", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Cookie(Cookie const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Cookie();

public:
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
