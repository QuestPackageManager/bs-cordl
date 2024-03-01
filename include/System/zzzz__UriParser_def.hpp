#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__UriParser_def.hpp"
#include "System/zzzz__UriSyntaxFlags_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UriParser)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
struct UriComponents;
}
namespace System {
class UriFormatException;
}
namespace System {
struct UriFormat;
}
namespace System {
struct UriSyntaxFlags;
}
namespace System {
class Uri;
}
namespace System {
class __UriParser__BuiltInUriParser;
}
namespace System {
struct __UriParser__UriQuirksVersion;
}
// Forward declare root types
namespace System {
struct __UriParser__UriQuirksVersion;
}
namespace System {
class UriParser;
}
// Write type traits
MARK_VAL_T(::System::__UriParser__UriQuirksVersion);
MARK_REF_PTR_T(::System::UriParser);
// Type: ::UriQuirksVersion
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::UriParser::UriQuirksVersion
struct CORDL_TYPE __UriParser__UriQuirksVersion {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____UriParser__UriQuirksVersion_Unwrapped
  enum struct ____UriParser__UriQuirksVersion_Unwrapped : int32_t {
    __E_V2 = static_cast<int32_t>(0x2),
    __E_V3 = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____UriParser__UriQuirksVersion_Unwrapped() const noexcept {
    return static_cast<____UriParser__UriQuirksVersion_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UriParser__UriQuirksVersion();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __UriParser__UriQuirksVersion(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field V2 value: static_cast<int32_t>(0x2)
  static ::System::__UriParser__UriQuirksVersion const V2;

  /// @brief Field V3 value: static_cast<int32_t>(0x3)
  static ::System::__UriParser__UriQuirksVersion const V3;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__UriParser__UriQuirksVersion, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::__UriParser__UriQuirksVersion, value__) == 0x0, "Offset mismatch!");

} // namespace System
// Type: System::UriParser
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::UriParser*
class CORDL_TYPE UriParser : public ::System::Object {
public:
  // Declarations
  using BuiltInUriParser = ::System::__UriParser__BuiltInUriParser;

  using UriQuirksVersion = ::System::__UriParser__UriQuirksVersion;

  __declspec(property(get = get_DefaultPort)) int32_t DefaultPort;

  /// @brief Field FileSyntaxFlags, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FileSyntaxFlags, put = setStaticF_FileSyntaxFlags))::System::UriSyntaxFlags FileSyntaxFlags;

  /// @brief Field FileUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FileUri, put = setStaticF_FileUri))::System::UriParser* FileUri;

  __declspec(property(get = get_Flags))::System::UriSyntaxFlags Flags;

  /// @brief Field FtpUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FtpUri, put = setStaticF_FtpUri))::System::UriParser* FtpUri;

  /// @brief Field GopherUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GopherUri, put = setStaticF_GopherUri))::System::UriParser* GopherUri;

  /// @brief Field HttpSyntaxFlags, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_HttpSyntaxFlags, put = setStaticF_HttpSyntaxFlags))::System::UriSyntaxFlags HttpSyntaxFlags;

  /// @brief Field HttpUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HttpUri, put = setStaticF_HttpUri))::System::UriParser* HttpUri;

  /// @brief Field HttpsUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HttpsUri, put = setStaticF_HttpsUri))::System::UriParser* HttpsUri;

  __declspec(property(get = get_IsSimple)) bool IsSimple;

  /// @brief Field LdapUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_LdapUri, put = setStaticF_LdapUri))::System::UriParser* LdapUri;

  /// @brief Field MailToUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MailToUri, put = setStaticF_MailToUri))::System::UriParser* MailToUri;

  /// @brief Field NetPipeUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NetPipeUri, put = setStaticF_NetPipeUri))::System::UriParser* NetPipeUri;

  /// @brief Field NetTcpUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NetTcpUri, put = setStaticF_NetTcpUri))::System::UriParser* NetTcpUri;

  /// @brief Field NewsUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NewsUri, put = setStaticF_NewsUri))::System::UriParser* NewsUri;

  /// @brief Field NntpUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NntpUri, put = setStaticF_NntpUri))::System::UriParser* NntpUri;

  __declspec(property(get = get_SchemeName))::StringW SchemeName;

  /// @brief Field TelnetUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TelnetUri, put = setStaticF_TelnetUri))::System::UriParser* TelnetUri;

  /// @brief Field UuidUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UuidUri, put = setStaticF_UuidUri))::System::UriParser* UuidUri;

  /// @brief Field VsMacrosUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_VsMacrosUri, put = setStaticF_VsMacrosUri))::System::UriParser* VsMacrosUri;

  /// @brief Field WsUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_WsUri, put = setStaticF_WsUri))::System::UriParser* WsUri;

  /// @brief Field WssUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_WssUri, put = setStaticF_WssUri))::System::UriParser* WssUri;

  /// @brief Field m_Flags, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Flags, put = __cordl_internal_set_m_Flags))::System::UriSyntaxFlags m_Flags;

  /// @brief Field m_Port, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Port, put = __cordl_internal_set_m_Port)) int32_t m_Port;

  /// @brief Field m_Scheme, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Scheme, put = __cordl_internal_set_m_Scheme))::StringW m_Scheme;

  /// @brief Field m_Table, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_Table, put = setStaticF_m_Table))::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>* m_Table;

  /// @brief Field m_TempTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_TempTable, put = setStaticF_m_TempTable))::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>* m_TempTable;

  /// @brief Field m_UpdatableFlags, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UpdatableFlags, put = __cordl_internal_set_m_UpdatableFlags))::System::UriSyntaxFlags m_UpdatableFlags;

  /// @brief Field m_UpdatableFlagsUsed, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UpdatableFlagsUsed, put = __cordl_internal_set_m_UpdatableFlagsUsed)) bool m_UpdatableFlagsUsed;

  /// @brief Field s_QuirksVersion, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_QuirksVersion, put = setStaticF_s_QuirksVersion))::System::__UriParser__UriQuirksVersion s_QuirksVersion;

  /// @brief Method FindOrFetchAsUnknownV1Syntax, addr 0x2a35954, size 0x2f0, virtual false, abstract: false, final false
  static inline ::System::UriParser* FindOrFetchAsUnknownV1Syntax(::StringW lwrCaseScheme);

  /// @brief Method GetComponents, addr 0x2a34e34, size 0x22c, virtual true, abstract: false, final false
  inline ::StringW GetComponents(::System::Uri* uri, ::System::UriComponents components, ::System::UriFormat format);

  /// @brief Method GetSyntax, addr 0x2a317ec, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::UriParser* GetSyntax(::StringW lwrCaseScheme);

  /// @brief Method InFact, addr 0x2a318bc, size 0x1c, virtual false, abstract: false, final false
  inline bool InFact(::System::UriSyntaxFlags flags);

  /// @brief Method InitializeAndValidate, addr 0x2a34c08, size 0x28, virtual true, abstract: false, final false
  inline void InitializeAndValidate(::System::Uri* uri, ByRef<::System::UriFormatException*> parsingError);

  /// @brief Method InternalGetComponents, addr 0x2a35cb8, size 0xc, virtual false, abstract: false, final false
  inline ::StringW InternalGetComponents(::System::Uri* thisUri, ::System::UriComponents uriComponents, ::System::UriFormat uriFormat);

  /// @brief Method InternalIsBaseOf, addr 0x2a35cac, size 0xc, virtual false, abstract: false, final false
  inline bool InternalIsBaseOf(::System::Uri* thisBaseUri, ::System::Uri* uriLink);

  /// @brief Method InternalIsWellFormedOriginalString, addr 0x2a35cc4, size 0xc, virtual false, abstract: false, final false
  inline bool InternalIsWellFormedOriginalString(::System::Uri* thisUri);

  /// @brief Method InternalOnNewUri, addr 0x2a35c50, size 0x44, virtual false, abstract: false, final false
  inline ::System::UriParser* InternalOnNewUri();

  /// @brief Method InternalResolve, addr 0x2a35ca0, size 0xc, virtual false, abstract: false, final false
  inline ::StringW InternalResolve(::System::Uri* thisBaseUri, ::System::Uri* uriLink, ByRef<::System::UriFormatException*> parsingError);

  /// @brief Method InternalValidate, addr 0x2a35c94, size 0xc, virtual false, abstract: false, final false
  inline void InternalValidate(::System::Uri* thisUri, ByRef<::System::UriFormatException*> parsingError);

  /// @brief Method IsAllSet, addr 0x2a358e0, size 0x8, virtual false, abstract: false, final false
  inline bool IsAllSet(::System::UriSyntaxFlags flags);

  /// @brief Method IsBaseOf, addr 0x2a34e18, size 0x1c, virtual true, abstract: false, final false
  inline bool IsBaseOf(::System::Uri* baseUri, ::System::Uri* relativeUri);

  /// @brief Method IsFullMatch, addr 0x2a35884, size 0x5c, virtual false, abstract: false, final false
  inline bool IsFullMatch(::System::UriSyntaxFlags flags, ::System::UriSyntaxFlags expected);

  /// @brief Method IsWellFormedOriginalString, addr 0x2a35060, size 0x18, virtual true, abstract: false, final false
  inline bool IsWellFormedOriginalString(::System::Uri* uri);

  static inline ::System::UriParser* New_ctor(::System::UriSyntaxFlags flags);

  /// @brief Method NotAny, addr 0x2a318d8, size 0x8, virtual false, abstract: false, final false
  inline bool NotAny(::System::UriSyntaxFlags flags);

  /// @brief Method OnNewUri, addr 0x2a34c04, size 0x4, virtual true, abstract: false, final false
  inline ::System::UriParser* OnNewUri();

  /// @brief Method Resolve, addr 0x2a34c30, size 0x1e8, virtual true, abstract: false, final false
  inline ::StringW Resolve(::System::Uri* baseUri, ::System::Uri* relativeUri, ByRef<::System::UriFormatException*> parsingError);

  constexpr ::System::UriSyntaxFlags const& __cordl_internal_get_m_Flags() const;

  constexpr ::System::UriSyntaxFlags& __cordl_internal_get_m_Flags();

  constexpr int32_t const& __cordl_internal_get_m_Port() const;

  constexpr int32_t& __cordl_internal_get_m_Port();

  constexpr ::StringW const& __cordl_internal_get_m_Scheme() const;

  constexpr ::StringW& __cordl_internal_get_m_Scheme();

  constexpr ::System::UriSyntaxFlags const& __cordl_internal_get_m_UpdatableFlags() const;

  constexpr ::System::UriSyntaxFlags& __cordl_internal_get_m_UpdatableFlags();

  constexpr bool const& __cordl_internal_get_m_UpdatableFlagsUsed() const;

  constexpr bool& __cordl_internal_get_m_UpdatableFlagsUsed();

  constexpr void __cordl_internal_set_m_Flags(::System::UriSyntaxFlags value);

  constexpr void __cordl_internal_set_m_Port(int32_t value);

  constexpr void __cordl_internal_set_m_Scheme(::StringW value);

  constexpr void __cordl_internal_set_m_UpdatableFlags(::System::UriSyntaxFlags value);

  constexpr void __cordl_internal_set_m_UpdatableFlagsUsed(bool value);

  /// @brief Method .ctor, addr 0x2a358e8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::UriSyntaxFlags flags);

  static inline ::System::UriSyntaxFlags getStaticF_FileSyntaxFlags();

  static inline ::System::UriParser* getStaticF_FileUri();

  static inline ::System::UriParser* getStaticF_FtpUri();

  static inline ::System::UriParser* getStaticF_GopherUri();

  static inline ::System::UriSyntaxFlags getStaticF_HttpSyntaxFlags();

  static inline ::System::UriParser* getStaticF_HttpUri();

  static inline ::System::UriParser* getStaticF_HttpsUri();

  static inline ::System::UriParser* getStaticF_LdapUri();

  static inline ::System::UriParser* getStaticF_MailToUri();

  static inline ::System::UriParser* getStaticF_NetPipeUri();

  static inline ::System::UriParser* getStaticF_NetTcpUri();

  static inline ::System::UriParser* getStaticF_NewsUri();

  static inline ::System::UriParser* getStaticF_NntpUri();

  static inline ::System::UriParser* getStaticF_TelnetUri();

  static inline ::System::UriParser* getStaticF_UuidUri();

  static inline ::System::UriParser* getStaticF_VsMacrosUri();

  static inline ::System::UriParser* getStaticF_WsUri();

  static inline ::System::UriParser* getStaticF_WssUri();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>* getStaticF_m_Table();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>* getStaticF_m_TempTable();

  static inline ::System::__UriParser__UriQuirksVersion getStaticF_s_QuirksVersion();

  /// @brief Method get_DefaultPort, addr 0x2a34bfc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_DefaultPort();

  /// @brief Method get_Flags, addr 0x2a3587c, size 0x8, virtual false, abstract: false, final false
  inline ::System::UriSyntaxFlags get_Flags();

  /// @brief Method get_IsSimple, addr 0x2a35c44, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsSimple();

  /// @brief Method get_SchemeName, addr 0x2a34bf4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SchemeName();

  /// @brief Method get_ShouldUseLegacyV2Quirks, addr 0x2a34a64, size 0x60, virtual false, abstract: false, final false
  static inline bool get_ShouldUseLegacyV2Quirks();

  static inline void setStaticF_FileSyntaxFlags(::System::UriSyntaxFlags value);

  static inline void setStaticF_FileUri(::System::UriParser* value);

  static inline void setStaticF_FtpUri(::System::UriParser* value);

  static inline void setStaticF_GopherUri(::System::UriParser* value);

  static inline void setStaticF_HttpSyntaxFlags(::System::UriSyntaxFlags value);

  static inline void setStaticF_HttpUri(::System::UriParser* value);

  static inline void setStaticF_HttpsUri(::System::UriParser* value);

  static inline void setStaticF_LdapUri(::System::UriParser* value);

  static inline void setStaticF_MailToUri(::System::UriParser* value);

  static inline void setStaticF_NetPipeUri(::System::UriParser* value);

  static inline void setStaticF_NetTcpUri(::System::UriParser* value);

  static inline void setStaticF_NewsUri(::System::UriParser* value);

  static inline void setStaticF_NntpUri(::System::UriParser* value);

  static inline void setStaticF_TelnetUri(::System::UriParser* value);

  static inline void setStaticF_UuidUri(::System::UriParser* value);

  static inline void setStaticF_VsMacrosUri(::System::UriParser* value);

  static inline void setStaticF_WsUri(::System::UriParser* value);

  static inline void setStaticF_WssUri(::System::UriParser* value);

  static inline void setStaticF_m_Table(::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>* value);

  static inline void setStaticF_m_TempTable(::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>* value);

  static inline void setStaticF_s_QuirksVersion(::System::__UriParser__UriQuirksVersion value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UriParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UriParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UriParser(UriParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UriParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UriParser(UriParser const&) = delete;

  /// @brief Field m_Flags, offset: 0x10, size: 0x4, def value: None
  ::System::UriSyntaxFlags ___m_Flags;

  /// @brief Field m_UpdatableFlags, offset: 0x14, size: 0x4, def value: None
  ::System::UriSyntaxFlags ___m_UpdatableFlags;

  /// @brief Field m_UpdatableFlagsUsed, offset: 0x18, size: 0x1, def value: None
  bool ___m_UpdatableFlagsUsed;

  /// @brief Field m_Port, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_Port;

  /// @brief Field m_Scheme, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_Scheme;

  /// @brief Field FtpSyntaxFlags value: static_cast<int32_t>(0x15e00f5d)
  static ::System::UriSyntaxFlags const FtpSyntaxFlags;

  /// @brief Field GopherSyntaxFlags value: static_cast<int32_t>(0x14200f5d)
  static ::System::UriSyntaxFlags const GopherSyntaxFlags;

  /// @brief Field LdapSyntaxFlags value: static_cast<int32_t>(0x14200ffd)
  static ::System::UriSyntaxFlags const LdapSyntaxFlags;

  /// @brief Field MailtoSyntaxFlags value: static_cast<int32_t>(0x14004ffc)
  static ::System::UriSyntaxFlags const MailtoSyntaxFlags;

  /// @brief Field NetPipeSyntaxFlags value: static_cast<int32_t>(0x17e00e71)
  static ::System::UriSyntaxFlags const NetPipeSyntaxFlags;

  /// @brief Field NetTcpSyntaxFlags value: static_cast<int32_t>(0x17e00e79)
  static ::System::UriSyntaxFlags const NetTcpSyntaxFlags;

  /// @brief Field NewsSyntaxFlags value: static_cast<int32_t>(0x10000050)
  static ::System::UriSyntaxFlags const NewsSyntaxFlags;

  /// @brief Field NntpSyntaxFlags value: static_cast<int32_t>(0x14200f5d)
  static ::System::UriSyntaxFlags const NntpSyntaxFlags;

  /// @brief Field NoDefaultPort offset 0xffffffff size 0x4
  static constexpr int32_t NoDefaultPort{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field SchemeOnlyFlags value: static_cast<int32_t>(0x10)
  static ::System::UriSyntaxFlags const SchemeOnlyFlags;

  /// @brief Field TelnetSyntaxFlags value: static_cast<int32_t>(0x14200f5d)
  static ::System::UriSyntaxFlags const TelnetSyntaxFlags;

  /// @brief Field UnknownV1SyntaxFlags value: static_cast<int32_t>(0x14f10ffe)
  static ::System::UriSyntaxFlags const UnknownV1SyntaxFlags;

  /// @brief Field VsmacrosSyntaxFlags value: static_cast<int32_t>(0x17d02fd1)
  static ::System::UriSyntaxFlags const VsmacrosSyntaxFlags;

  /// @brief Field c_InitialTableSize offset 0xffffffff size 0x4
  static constexpr int32_t c_InitialTableSize{ static_cast<int32_t>(0x19) };

  /// @brief Field c_MaxCapacity offset 0xffffffff size 0x4
  static constexpr int32_t c_MaxCapacity{ static_cast<int32_t>(0x200) };

  /// @brief Field c_UpdatableFlags value: static_cast<int32_t>(0x2000000)
  static ::System::UriSyntaxFlags const c_UpdatableFlags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UriParser, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::UriParser, ___m_Flags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::UriParser, ___m_UpdatableFlags) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::UriParser, ___m_UpdatableFlagsUsed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::UriParser, ___m_Port) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::UriParser, ___m_Scheme) == 0x20, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::__UriParser__UriQuirksVersion, "System", "UriParser/UriQuirksVersion");
NEED_NO_BOX(::System::UriParser);
DEFINE_IL2CPP_ARG_TYPE(::System::UriParser*, "System", "UriParser");
