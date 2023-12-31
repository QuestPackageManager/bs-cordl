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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8885))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __UriParser__UriQuirksVersion(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UriParser__UriQuirksVersion();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field V2 value: static_cast<int32_t>(0x2)
  static ::System::__UriParser__UriQuirksVersion const V2;

  /// @brief Field V3 value: static_cast<int32_t>(0x3)
  static ::System::__UriParser__UriQuirksVersion const V3;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8890)), TypeDefinitionIndex(TypeDefinitionIndex(8885))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8887))
// CS Name: ::System::UriParser*
class CORDL_TYPE UriParser : public ::System::Object {
public:
  // Declarations
  using BuiltInUriParser = ::System::__UriParser__BuiltInUriParser;

  using UriQuirksVersion = ::System::__UriParser__UriQuirksVersion;

  /// @brief Field m_Flags, offset 0x10, size 0x4
  __declspec(property(get = __get_m_Flags, put = __set_m_Flags))::System::UriSyntaxFlags m_Flags;

  /// @brief Field m_UpdatableFlags, offset 0x14, size 0x4
  __declspec(property(get = __get_m_UpdatableFlags, put = __set_m_UpdatableFlags))::System::UriSyntaxFlags m_UpdatableFlags;

  /// @brief Field m_UpdatableFlagsUsed, offset 0x18, size 0x1
  __declspec(property(get = __get_m_UpdatableFlagsUsed, put = __set_m_UpdatableFlagsUsed)) bool m_UpdatableFlagsUsed;

  /// @brief Field m_Port, offset 0x1c, size 0x4
  __declspec(property(get = __get_m_Port, put = __set_m_Port)) int32_t m_Port;

  /// @brief Field m_Scheme, offset 0x20, size 0x8
  __declspec(property(get = __get_m_Scheme, put = __set_m_Scheme))::StringW m_Scheme;

  /// @brief Field m_Table, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_Table, put = setStaticF_m_Table))::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>* m_Table;

  /// @brief Field m_TempTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_TempTable, put = setStaticF_m_TempTable))::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>* m_TempTable;

  /// @brief Field HttpUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HttpUri, put = setStaticF_HttpUri))::System::UriParser* HttpUri;

  /// @brief Field HttpsUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HttpsUri, put = setStaticF_HttpsUri))::System::UriParser* HttpsUri;

  /// @brief Field WsUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_WsUri, put = setStaticF_WsUri))::System::UriParser* WsUri;

  /// @brief Field WssUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_WssUri, put = setStaticF_WssUri))::System::UriParser* WssUri;

  /// @brief Field FtpUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FtpUri, put = setStaticF_FtpUri))::System::UriParser* FtpUri;

  /// @brief Field FileUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FileUri, put = setStaticF_FileUri))::System::UriParser* FileUri;

  /// @brief Field GopherUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GopherUri, put = setStaticF_GopherUri))::System::UriParser* GopherUri;

  /// @brief Field NntpUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NntpUri, put = setStaticF_NntpUri))::System::UriParser* NntpUri;

  /// @brief Field NewsUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NewsUri, put = setStaticF_NewsUri))::System::UriParser* NewsUri;

  /// @brief Field MailToUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MailToUri, put = setStaticF_MailToUri))::System::UriParser* MailToUri;

  /// @brief Field UuidUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UuidUri, put = setStaticF_UuidUri))::System::UriParser* UuidUri;

  /// @brief Field TelnetUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TelnetUri, put = setStaticF_TelnetUri))::System::UriParser* TelnetUri;

  /// @brief Field LdapUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_LdapUri, put = setStaticF_LdapUri))::System::UriParser* LdapUri;

  /// @brief Field NetTcpUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NetTcpUri, put = setStaticF_NetTcpUri))::System::UriParser* NetTcpUri;

  /// @brief Field NetPipeUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NetPipeUri, put = setStaticF_NetPipeUri))::System::UriParser* NetPipeUri;

  /// @brief Field VsMacrosUri, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_VsMacrosUri, put = setStaticF_VsMacrosUri))::System::UriParser* VsMacrosUri;

  /// @brief Field s_QuirksVersion, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_QuirksVersion, put = setStaticF_s_QuirksVersion))::System::__UriParser__UriQuirksVersion s_QuirksVersion;

  /// @brief Field HttpSyntaxFlags, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_HttpSyntaxFlags, put = setStaticF_HttpSyntaxFlags))::System::UriSyntaxFlags HttpSyntaxFlags;

  /// @brief Field FileSyntaxFlags, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_FileSyntaxFlags, put = setStaticF_FileSyntaxFlags))::System::UriSyntaxFlags FileSyntaxFlags;

  __declspec(property(get = get_SchemeName))::StringW SchemeName;

  __declspec(property(get = get_DefaultPort)) int32_t DefaultPort;

  __declspec(property(get = get_Flags))::System::UriSyntaxFlags Flags;

  __declspec(property(get = get_IsSimple)) bool IsSimple;

  constexpr ::System::UriSyntaxFlags& __get_m_Flags();

  constexpr ::System::UriSyntaxFlags const& __get_m_Flags() const;

  constexpr void __set_m_Flags(::System::UriSyntaxFlags value);

  constexpr ::System::UriSyntaxFlags& __get_m_UpdatableFlags();

  constexpr ::System::UriSyntaxFlags const& __get_m_UpdatableFlags() const;

  constexpr void __set_m_UpdatableFlags(::System::UriSyntaxFlags value);

  constexpr bool& __get_m_UpdatableFlagsUsed();

  constexpr bool const& __get_m_UpdatableFlagsUsed() const;

  constexpr void __set_m_UpdatableFlagsUsed(bool value);

  constexpr int32_t& __get_m_Port();

  constexpr int32_t const& __get_m_Port() const;

  constexpr void __set_m_Port(int32_t value);

  constexpr ::StringW& __get_m_Scheme();

  constexpr ::StringW const& __get_m_Scheme() const;

  constexpr void __set_m_Scheme(::StringW value);

  static inline void setStaticF_m_Table(::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>* getStaticF_m_Table();

  static inline void setStaticF_m_TempTable(::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::UriParser*>* getStaticF_m_TempTable();

  static inline void setStaticF_HttpUri(::System::UriParser* value);

  static inline ::System::UriParser* getStaticF_HttpUri();

  static inline void setStaticF_HttpsUri(::System::UriParser* value);

  static inline ::System::UriParser* getStaticF_HttpsUri();

  static inline void setStaticF_WsUri(::System::UriParser* value);

  static inline ::System::UriParser* getStaticF_WsUri();

  static inline void setStaticF_WssUri(::System::UriParser* value);

  static inline ::System::UriParser* getStaticF_WssUri();

  static inline void setStaticF_FtpUri(::System::UriParser* value);

  static inline ::System::UriParser* getStaticF_FtpUri();

  static inline void setStaticF_FileUri(::System::UriParser* value);

  static inline ::System::UriParser* getStaticF_FileUri();

  static inline void setStaticF_GopherUri(::System::UriParser* value);

  static inline ::System::UriParser* getStaticF_GopherUri();

  static inline void setStaticF_NntpUri(::System::UriParser* value);

  static inline ::System::UriParser* getStaticF_NntpUri();

  static inline void setStaticF_NewsUri(::System::UriParser* value);

  static inline ::System::UriParser* getStaticF_NewsUri();

  static inline void setStaticF_MailToUri(::System::UriParser* value);

  static inline ::System::UriParser* getStaticF_MailToUri();

  static inline void setStaticF_UuidUri(::System::UriParser* value);

  static inline ::System::UriParser* getStaticF_UuidUri();

  static inline void setStaticF_TelnetUri(::System::UriParser* value);

  static inline ::System::UriParser* getStaticF_TelnetUri();

  static inline void setStaticF_LdapUri(::System::UriParser* value);

  static inline ::System::UriParser* getStaticF_LdapUri();

  static inline void setStaticF_NetTcpUri(::System::UriParser* value);

  static inline ::System::UriParser* getStaticF_NetTcpUri();

  static inline void setStaticF_NetPipeUri(::System::UriParser* value);

  static inline ::System::UriParser* getStaticF_NetPipeUri();

  static inline void setStaticF_VsMacrosUri(::System::UriParser* value);

  static inline ::System::UriParser* getStaticF_VsMacrosUri();

  static inline void setStaticF_s_QuirksVersion(::System::__UriParser__UriQuirksVersion value);

  static inline ::System::__UriParser__UriQuirksVersion getStaticF_s_QuirksVersion();

  static inline void setStaticF_HttpSyntaxFlags(::System::UriSyntaxFlags value);

  static inline ::System::UriSyntaxFlags getStaticF_HttpSyntaxFlags();

  static inline void setStaticF_FileSyntaxFlags(::System::UriSyntaxFlags value);

  static inline ::System::UriSyntaxFlags getStaticF_FileSyntaxFlags();

  /// @brief Method get_SchemeName, addr 0x294b07c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SchemeName();

  /// @brief Method get_DefaultPort, addr 0x294b084, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_DefaultPort();

  /// @brief Method OnNewUri, addr 0x294b08c, size 0x4, virtual true, abstract: false, final false
  inline ::System::UriParser* OnNewUri();

  /// @brief Method InitializeAndValidate, addr 0x294b090, size 0x28, virtual true, abstract: false, final false
  inline void InitializeAndValidate(::System::Uri* uri, ByRef<::System::UriFormatException*> parsingError);

  /// @brief Method Resolve, addr 0x294b0b8, size 0x1e8, virtual true, abstract: false, final false
  inline ::StringW Resolve(::System::Uri* baseUri, ::System::Uri* relativeUri, ByRef<::System::UriFormatException*> parsingError);

  /// @brief Method IsBaseOf, addr 0x294b2a0, size 0x1c, virtual true, abstract: false, final false
  inline bool IsBaseOf(::System::Uri* baseUri, ::System::Uri* relativeUri);

  /// @brief Method GetComponents, addr 0x294b2bc, size 0x22c, virtual true, abstract: false, final false
  inline ::StringW GetComponents(::System::Uri* uri, ::System::UriComponents components, ::System::UriFormat format);

  /// @brief Method IsWellFormedOriginalString, addr 0x294b4e8, size 0x18, virtual true, abstract: false, final false
  inline bool IsWellFormedOriginalString(::System::Uri* uri);

  /// @brief Method get_ShouldUseLegacyV2Quirks, addr 0x294aeec, size 0x60, virtual false, abstract: false, final false
  static inline bool get_ShouldUseLegacyV2Quirks();

  /// @brief Method get_Flags, addr 0x294bd04, size 0x8, virtual false, abstract: false, final false
  inline ::System::UriSyntaxFlags get_Flags();

  /// @brief Method NotAny, addr 0x2947d60, size 0x8, virtual false, abstract: false, final false
  inline bool NotAny(::System::UriSyntaxFlags flags);

  /// @brief Method InFact, addr 0x2947d44, size 0x1c, virtual false, abstract: false, final false
  inline bool InFact(::System::UriSyntaxFlags flags);

  /// @brief Method IsAllSet, addr 0x294bd68, size 0x8, virtual false, abstract: false, final false
  inline bool IsAllSet(::System::UriSyntaxFlags flags);

  /// @brief Method IsFullMatch, addr 0x294bd0c, size 0x5c, virtual false, abstract: false, final false
  inline bool IsFullMatch(::System::UriSyntaxFlags flags, ::System::UriSyntaxFlags expected);

  static inline ::System::UriParser* New_ctor(::System::UriSyntaxFlags flags);

  /// @brief Method .ctor, addr 0x294bd70, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::UriSyntaxFlags flags);

  /// @brief Method FindOrFetchAsUnknownV1Syntax, addr 0x294bddc, size 0x2f0, virtual false, abstract: false, final false
  static inline ::System::UriParser* FindOrFetchAsUnknownV1Syntax(::StringW lwrCaseScheme);

  /// @brief Method GetSyntax, addr 0x2947c74, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::UriParser* GetSyntax(::StringW lwrCaseScheme);

  /// @brief Method get_IsSimple, addr 0x294c0cc, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsSimple();

  /// @brief Method InternalOnNewUri, addr 0x294c0d8, size 0x44, virtual false, abstract: false, final false
  inline ::System::UriParser* InternalOnNewUri();

  /// @brief Method InternalValidate, addr 0x294c11c, size 0xc, virtual false, abstract: false, final false
  inline void InternalValidate(::System::Uri* thisUri, ByRef<::System::UriFormatException*> parsingError);

  /// @brief Method InternalResolve, addr 0x294c128, size 0xc, virtual false, abstract: false, final false
  inline ::StringW InternalResolve(::System::Uri* thisBaseUri, ::System::Uri* uriLink, ByRef<::System::UriFormatException*> parsingError);

  /// @brief Method InternalIsBaseOf, addr 0x294c134, size 0xc, virtual false, abstract: false, final false
  inline bool InternalIsBaseOf(::System::Uri* thisBaseUri, ::System::Uri* uriLink);

  /// @brief Method InternalGetComponents, addr 0x294c140, size 0xc, virtual false, abstract: false, final false
  inline ::StringW InternalGetComponents(::System::Uri* thisUri, ::System::UriComponents uriComponents, ::System::UriFormat uriFormat);

  /// @brief Method InternalIsWellFormedOriginalString, addr 0x294c14c, size 0xc, virtual false, abstract: false, final false
  inline bool InternalIsWellFormedOriginalString(::System::Uri* thisUri);

  // Ctor Parameters [CppParam { name: "", ty: "UriParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UriParser(UriParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UriParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UriParser(UriParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UriParser();

public:
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

  /// @brief Field SchemeOnlyFlags value: static_cast<int32_t>(0x10)
  static ::System::UriSyntaxFlags const SchemeOnlyFlags;

  /// @brief Field c_UpdatableFlags value: static_cast<int32_t>(0x2000000)
  static ::System::UriSyntaxFlags const c_UpdatableFlags;

  /// @brief Field NoDefaultPort offset 0xffffffff size 0x4
  static constexpr int32_t NoDefaultPort{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field c_InitialTableSize offset 0xffffffff size 0x4
  static constexpr int32_t c_InitialTableSize{ static_cast<int32_t>(0x19) };

  /// @brief Field c_MaxCapacity offset 0xffffffff size 0x4
  static constexpr int32_t c_MaxCapacity{ static_cast<int32_t>(0x200) };

  /// @brief Field UnknownV1SyntaxFlags value: static_cast<int32_t>(0x14f10ffe)
  static ::System::UriSyntaxFlags const UnknownV1SyntaxFlags;

  /// @brief Field FtpSyntaxFlags value: static_cast<int32_t>(0x15e00f5d)
  static ::System::UriSyntaxFlags const FtpSyntaxFlags;

  /// @brief Field VsmacrosSyntaxFlags value: static_cast<int32_t>(0x17d02fd1)
  static ::System::UriSyntaxFlags const VsmacrosSyntaxFlags;

  /// @brief Field GopherSyntaxFlags value: static_cast<int32_t>(0x14200f5d)
  static ::System::UriSyntaxFlags const GopherSyntaxFlags;

  /// @brief Field NewsSyntaxFlags value: static_cast<int32_t>(0x10000050)
  static ::System::UriSyntaxFlags const NewsSyntaxFlags;

  /// @brief Field NntpSyntaxFlags value: static_cast<int32_t>(0x14200f5d)
  static ::System::UriSyntaxFlags const NntpSyntaxFlags;

  /// @brief Field TelnetSyntaxFlags value: static_cast<int32_t>(0x14200f5d)
  static ::System::UriSyntaxFlags const TelnetSyntaxFlags;

  /// @brief Field LdapSyntaxFlags value: static_cast<int32_t>(0x14200ffd)
  static ::System::UriSyntaxFlags const LdapSyntaxFlags;

  /// @brief Field MailtoSyntaxFlags value: static_cast<int32_t>(0x14004ffc)
  static ::System::UriSyntaxFlags const MailtoSyntaxFlags;

  /// @brief Field NetPipeSyntaxFlags value: static_cast<int32_t>(0x17e00e71)
  static ::System::UriSyntaxFlags const NetPipeSyntaxFlags;

  /// @brief Field NetTcpSyntaxFlags value: static_cast<int32_t>(0x17e00e79)
  static ::System::UriSyntaxFlags const NetTcpSyntaxFlags;

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
