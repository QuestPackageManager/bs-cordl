#pragma once
// IWYU pragma private; include "System/Uri.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__UriFormat_def.hpp"
#include "System/zzzz__UriIdnScope_def.hpp"
#include "System/zzzz__UriKind_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Uri)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
namespace System {
struct ParsingError;
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
struct UriHostNameType;
}
namespace System {
struct UriKind;
}
namespace System {
class UriParser;
}
namespace System {
struct Uri_Check;
}
namespace System {
struct Uri_Flags;
}
namespace System {
class Uri_MoreInfo;
}
namespace System {
struct Uri_Offset;
}
namespace System {
class Uri_UriInfo;
}
// Forward declare root types
namespace System {
struct Uri_Check;
}
namespace System {
struct Uri_Flags;
}
namespace System {
class Uri;
}
namespace System {
class Uri_MoreInfo;
}
namespace System {
class Uri_UriInfo;
}
namespace System {
struct Uri_Offset;
}
// Write type traits
MARK_VAL_T(::System::Uri_Check);
MARK_VAL_T(::System::Uri_Flags);
MARK_REF_PTR_T(::System::Uri);
MARK_REF_PTR_T(::System::Uri_MoreInfo);
MARK_REF_PTR_T(::System::Uri_UriInfo);
MARK_VAL_T(::System::Uri_Offset);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.Uri/Flags
struct CORDL_TYPE Uri_Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint64_t;

  /// @brief Nested struct __Uri_Flags_Unwrapped
  enum struct __Uri_Flags_Unwrapped : uint64_t {
    __E_Zero = static_cast<uint64_t>(0x0u),
    __E_SchemeNotCanonical = static_cast<uint64_t>(0x1u),
    __E_UserNotCanonical = static_cast<uint64_t>(0x2u),
    __E_HostNotCanonical = static_cast<uint64_t>(0x4u),
    __E_PortNotCanonical = static_cast<uint64_t>(0x8u),
    __E_PathNotCanonical = static_cast<uint64_t>(0x10u),
    __E_QueryNotCanonical = static_cast<uint64_t>(0x20u),
    __E_FragmentNotCanonical = static_cast<uint64_t>(0x40u),
    __E_CannotDisplayCanonical = static_cast<uint64_t>(0x7fu),
    __E_E_UserNotCanonical = static_cast<uint64_t>(0x80u),
    __E_E_HostNotCanonical = static_cast<uint64_t>(0x100u),
    __E_E_PortNotCanonical = static_cast<uint64_t>(0x200u),
    __E_E_PathNotCanonical = static_cast<uint64_t>(0x400u),
    __E_E_QueryNotCanonical = static_cast<uint64_t>(0x800u),
    __E_E_FragmentNotCanonical = static_cast<uint64_t>(0x1000u),
    __E_E_CannotDisplayCanonical = static_cast<uint64_t>(0x1f80u),
    __E_ShouldBeCompressed = static_cast<uint64_t>(0x2000u),
    __E_FirstSlashAbsent = static_cast<uint64_t>(0x4000u),
    __E_BackslashInPath = static_cast<uint64_t>(0x8000u),
    __E_IndexMask = static_cast<uint64_t>(0xffffu),
    __E_HostTypeMask = static_cast<uint64_t>(0x70000u),
    __E_HostNotParsed = static_cast<uint64_t>(0x0u),
    __E_IPv6HostType = static_cast<uint64_t>(0x10000u),
    __E_IPv4HostType = static_cast<uint64_t>(0x20000u),
    __E_DnsHostType = static_cast<uint64_t>(0x30000u),
    __E_UncHostType = static_cast<uint64_t>(0x40000u),
    __E_BasicHostType = static_cast<uint64_t>(0x50000u),
    __E_UnusedHostType = static_cast<uint64_t>(0x60000u),
    __E_UnknownHostType = static_cast<uint64_t>(0x70000u),
    __E_UserEscaped = static_cast<uint64_t>(0x80000u),
    __E_AuthorityFound = static_cast<uint64_t>(0x100000u),
    __E_HasUserInfo = static_cast<uint64_t>(0x200000u),
    __E_LoopbackHost = static_cast<uint64_t>(0x400000u),
    __E_NotDefaultPort = static_cast<uint64_t>(0x800000u),
    __E_UserDrivenParsing = static_cast<uint64_t>(0x1000000u),
    __E_CanonicalDnsHost = static_cast<uint64_t>(0x2000000u),
    __E_ErrorOrParsingRecursion = static_cast<uint64_t>(0x4000000u),
    __E_DosPath = static_cast<uint64_t>(0x8000000u),
    __E_UncPath = static_cast<uint64_t>(0x10000000u),
    __E_ImplicitFile = static_cast<uint64_t>(0x20000000u),
    __E_MinimalUriInfoSet = static_cast<uint64_t>(0x40000000u),
    __E_AllUriInfoSet = static_cast<uint64_t>(0x80000000u),
    __E_IdnHost = static_cast<uint64_t>(0x100000000u),
    __E_HasUnicode = static_cast<uint64_t>(0x200000000u),
    __E_HostUnicodeNormalized = static_cast<uint64_t>(0x400000000u),
    __E_RestUnicodeNormalized = static_cast<uint64_t>(0x800000000u),
    __E_UnicodeHost = static_cast<uint64_t>(0x1000000000u),
    __E_IntranetUri = static_cast<uint64_t>(0x2000000000u),
    __E_UseOrigUncdStrOffset = static_cast<uint64_t>(0x4000000000u),
    __E_UserIriCanonical = static_cast<uint64_t>(0x8000000000u),
    __E_PathIriCanonical = static_cast<uint64_t>(0x10000000000u),
    __E_QueryIriCanonical = static_cast<uint64_t>(0x20000000000u),
    __E_FragmentIriCanonical = static_cast<uint64_t>(0x40000000000u),
    __E_IriCanonical = static_cast<uint64_t>(0x78000000000u),
    __E_CompressedSlashes = static_cast<uint64_t>(0x100000000000u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Uri_Flags_Unwrapped() const noexcept {
    return static_cast<__Uri_Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint64_t() const noexcept {
    return static_cast<uint64_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Uri_Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr Uri_Flags(uint64_t value__) noexcept;

  /// @brief Field AllUriInfoSet value: U64(2147483648)
  static ::System::Uri_Flags const AllUriInfoSet;

  /// @brief Field AuthorityFound value: U64(1048576)
  static ::System::Uri_Flags const AuthorityFound;

  /// @brief Field BackslashInPath value: U64(32768)
  static ::System::Uri_Flags const BackslashInPath;

  /// @brief Field BasicHostType value: U64(327680)
  static ::System::Uri_Flags const BasicHostType;

  /// @brief Field CannotDisplayCanonical value: U64(127)
  static ::System::Uri_Flags const CannotDisplayCanonical;

  /// @brief Field CanonicalDnsHost value: U64(33554432)
  static ::System::Uri_Flags const CanonicalDnsHost;

  /// @brief Field CompressedSlashes value: U64(17592186044416)
  static ::System::Uri_Flags const CompressedSlashes;

  /// @brief Field DnsHostType value: U64(196608)
  static ::System::Uri_Flags const DnsHostType;

  /// @brief Field DosPath value: U64(134217728)
  static ::System::Uri_Flags const DosPath;

  /// @brief Field E_CannotDisplayCanonical value: U64(8064)
  static ::System::Uri_Flags const E_CannotDisplayCanonical;

  /// @brief Field E_FragmentNotCanonical value: U64(4096)
  static ::System::Uri_Flags const E_FragmentNotCanonical;

  /// @brief Field E_HostNotCanonical value: U64(256)
  static ::System::Uri_Flags const E_HostNotCanonical;

  /// @brief Field E_PathNotCanonical value: U64(1024)
  static ::System::Uri_Flags const E_PathNotCanonical;

  /// @brief Field E_PortNotCanonical value: U64(512)
  static ::System::Uri_Flags const E_PortNotCanonical;

  /// @brief Field E_QueryNotCanonical value: U64(2048)
  static ::System::Uri_Flags const E_QueryNotCanonical;

  /// @brief Field E_UserNotCanonical value: U64(128)
  static ::System::Uri_Flags const E_UserNotCanonical;

  /// @brief Field ErrorOrParsingRecursion value: U64(67108864)
  static ::System::Uri_Flags const ErrorOrParsingRecursion;

  /// @brief Field FirstSlashAbsent value: U64(16384)
  static ::System::Uri_Flags const FirstSlashAbsent;

  /// @brief Field FragmentIriCanonical value: U64(4398046511104)
  static ::System::Uri_Flags const FragmentIriCanonical;

  /// @brief Field FragmentNotCanonical value: U64(64)
  static ::System::Uri_Flags const FragmentNotCanonical;

  /// @brief Field HasUnicode value: U64(8589934592)
  static ::System::Uri_Flags const HasUnicode;

  /// @brief Field HasUserInfo value: U64(2097152)
  static ::System::Uri_Flags const HasUserInfo;

  /// @brief Field HostNotCanonical value: U64(4)
  static ::System::Uri_Flags const HostNotCanonical;

  /// @brief Field HostNotParsed value: U64(0)
  static ::System::Uri_Flags const HostNotParsed;

  /// @brief Field HostTypeMask value: U64(458752)
  static ::System::Uri_Flags const HostTypeMask;

  /// @brief Field HostUnicodeNormalized value: U64(17179869184)
  static ::System::Uri_Flags const HostUnicodeNormalized;

  /// @brief Field IPv4HostType value: U64(131072)
  static ::System::Uri_Flags const IPv4HostType;

  /// @brief Field IPv6HostType value: U64(65536)
  static ::System::Uri_Flags const IPv6HostType;

  /// @brief Field IdnHost value: U64(4294967296)
  static ::System::Uri_Flags const IdnHost;

  /// @brief Field ImplicitFile value: U64(536870912)
  static ::System::Uri_Flags const ImplicitFile;

  /// @brief Field IndexMask value: U64(65535)
  static ::System::Uri_Flags const IndexMask;

  /// @brief Field IntranetUri value: U64(137438953472)
  static ::System::Uri_Flags const IntranetUri;

  /// @brief Field IriCanonical value: U64(8246337208320)
  static ::System::Uri_Flags const IriCanonical;

  /// @brief Field LoopbackHost value: U64(4194304)
  static ::System::Uri_Flags const LoopbackHost;

  /// @brief Field MinimalUriInfoSet value: U64(1073741824)
  static ::System::Uri_Flags const MinimalUriInfoSet;

  /// @brief Field NotDefaultPort value: U64(8388608)
  static ::System::Uri_Flags const NotDefaultPort;

  /// @brief Field PathIriCanonical value: U64(1099511627776)
  static ::System::Uri_Flags const PathIriCanonical;

  /// @brief Field PathNotCanonical value: U64(16)
  static ::System::Uri_Flags const PathNotCanonical;

  /// @brief Field PortNotCanonical value: U64(8)
  static ::System::Uri_Flags const PortNotCanonical;

  /// @brief Field QueryIriCanonical value: U64(2199023255552)
  static ::System::Uri_Flags const QueryIriCanonical;

  /// @brief Field QueryNotCanonical value: U64(32)
  static ::System::Uri_Flags const QueryNotCanonical;

  /// @brief Field RestUnicodeNormalized value: U64(34359738368)
  static ::System::Uri_Flags const RestUnicodeNormalized;

  /// @brief Field SchemeNotCanonical value: U64(1)
  static ::System::Uri_Flags const SchemeNotCanonical;

  /// @brief Field ShouldBeCompressed value: U64(8192)
  static ::System::Uri_Flags const ShouldBeCompressed;

  /// @brief Field UncHostType value: U64(262144)
  static ::System::Uri_Flags const UncHostType;

  /// @brief Field UncPath value: U64(268435456)
  static ::System::Uri_Flags const UncPath;

  /// @brief Field UnicodeHost value: U64(68719476736)
  static ::System::Uri_Flags const UnicodeHost;

  /// @brief Field UnknownHostType value: U64(458752)
  static ::System::Uri_Flags const UnknownHostType;

  /// @brief Field UnusedHostType value: U64(393216)
  static ::System::Uri_Flags const UnusedHostType;

  /// @brief Field UseOrigUncdStrOffset value: U64(274877906944)
  static ::System::Uri_Flags const UseOrigUncdStrOffset;

  /// @brief Field UserDrivenParsing value: U64(16777216)
  static ::System::Uri_Flags const UserDrivenParsing;

  /// @brief Field UserEscaped value: U64(524288)
  static ::System::Uri_Flags const UserEscaped;

  /// @brief Field UserIriCanonical value: U64(549755813888)
  static ::System::Uri_Flags const UserIriCanonical;

  /// @brief Field UserNotCanonical value: U64(2)
  static ::System::Uri_Flags const UserNotCanonical;

  /// @brief Field Zero value: U64(0)
  static ::System::Uri_Flags const Zero;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9190 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field value__, offset: 0x0, size: 0x8, def value: None
  uint64_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Uri_Flags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Uri_Flags, 0x8>, "Size mismatch!");

} // namespace System
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.Uri/Offset
#pragma pack(push, 1)
struct CORDL_TYPE Uri_Offset {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Uri_Offset();

  // Ctor Parameters [CppParam { name: "Scheme", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "User", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Host",
  // ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "PortValue", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Path", ty: "uint16_t", modifiers: "",
  // def_value: None }, CppParam { name: "Query", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Fragment", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name:
  // "End", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr Uri_Offset(uint16_t Scheme, uint16_t User, uint16_t Host, uint16_t PortValue, uint16_t Path, uint16_t Query, uint16_t Fragment, uint16_t End) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9192 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Scheme, offset: 0x0, size: 0x2, def value: None
  uint16_t Scheme;

  /// @brief Field User, offset: 0x2, size: 0x2, def value: None
  uint16_t User;

  /// @brief Field Host, offset: 0x4, size: 0x2, def value: None
  uint16_t Host;

  /// @brief Field PortValue, offset: 0x6, size: 0x2, def value: None
  uint16_t PortValue;

  /// @brief Field Path, offset: 0x8, size: 0x2, def value: None
  uint16_t Path;

  /// @brief Field Query, offset: 0xa, size: 0x2, def value: None
  uint16_t Query;

  /// @brief Field Fragment, offset: 0xc, size: 0x2, def value: None
  uint16_t Fragment;

  /// @brief Field End, offset: 0xe, size: 0x2, def value: None
  uint16_t End;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::System::Uri_Offset, Scheme) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Uri_Offset, User) == 0x2, "Offset mismatch!");

static_assert(offsetof(::System::Uri_Offset, Host) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Uri_Offset, PortValue) == 0x6, "Offset mismatch!");

static_assert(offsetof(::System::Uri_Offset, Path) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Uri_Offset, Query) == 0xa, "Offset mismatch!");

static_assert(offsetof(::System::Uri_Offset, Fragment) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::Uri_Offset, End) == 0xe, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Uri_Offset, 0x10>, "Size mismatch!");

} // namespace System
// Dependencies System.Object, System.Uri::Offset
namespace System {
// Is value type: false
// CS Name: System.Uri/UriInfo
class CORDL_TYPE Uri_UriInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field DnsSafeHost, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_DnsSafeHost, put = __cordl_internal_set_DnsSafeHost)) ::StringW DnsSafeHost;

  /// @brief Field Host, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Host, put = __cordl_internal_set_Host)) ::StringW Host;

  /// @brief Field MoreInfo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_MoreInfo, put = __cordl_internal_set_MoreInfo)) ::System::Uri_MoreInfo* MoreInfo;

  /// @brief Field Offset, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_Offset, put = __cordl_internal_set_Offset)) ::System::Uri_Offset Offset;

  /// @brief Field ScopeId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ScopeId, put = __cordl_internal_set_ScopeId)) ::StringW ScopeId;

  /// @brief Field String, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_String, put = __cordl_internal_set_String)) ::StringW String;

  static inline ::System::Uri_UriInfo* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_DnsSafeHost() const;

  constexpr ::StringW& __cordl_internal_get_DnsSafeHost();

  constexpr ::StringW const& __cordl_internal_get_Host() const;

  constexpr ::StringW& __cordl_internal_get_Host();

  constexpr ::System::Uri_MoreInfo* const& __cordl_internal_get_MoreInfo() const;

  constexpr ::System::Uri_MoreInfo*& __cordl_internal_get_MoreInfo();

  constexpr ::System::Uri_Offset const& __cordl_internal_get_Offset() const;

  constexpr ::System::Uri_Offset& __cordl_internal_get_Offset();

  constexpr ::StringW const& __cordl_internal_get_ScopeId() const;

  constexpr ::StringW& __cordl_internal_get_ScopeId();

  constexpr ::StringW const& __cordl_internal_get_String() const;

  constexpr ::StringW& __cordl_internal_get_String();

  constexpr void __cordl_internal_set_DnsSafeHost(::StringW value);

  constexpr void __cordl_internal_set_Host(::StringW value);

  constexpr void __cordl_internal_set_MoreInfo(::System::Uri_MoreInfo* value);

  constexpr void __cordl_internal_set_Offset(::System::Uri_Offset value);

  constexpr void __cordl_internal_set_ScopeId(::StringW value);

  constexpr void __cordl_internal_set_String(::StringW value);

  /// @brief Method .ctor, addr 0x440c19c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Uri_UriInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Uri_UriInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Uri_UriInfo(Uri_UriInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Uri_UriInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Uri_UriInfo(Uri_UriInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9191 };

  /// @brief Field Host, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Host;

  /// @brief Field ScopeId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___ScopeId;

  /// @brief Field String, offset: 0x20, size: 0x8, def value: None
  ::StringW ___String;

  /// @brief Field Offset, offset: 0x28, size: 0x10, def value: None
  ::System::Uri_Offset ___Offset;

  /// @brief Field DnsSafeHost, offset: 0x38, size: 0x8, def value: None
  ::StringW ___DnsSafeHost;

  /// @brief Field MoreInfo, offset: 0x40, size: 0x8, def value: None
  ::System::Uri_MoreInfo* ___MoreInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Uri_UriInfo, ___Host) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Uri_UriInfo, ___ScopeId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Uri_UriInfo, ___String) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Uri_UriInfo, ___Offset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Uri_UriInfo, ___DnsSafeHost) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Uri_UriInfo, ___MoreInfo) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Uri_UriInfo, 0x48>, "Size mismatch!");

} // namespace System
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.Uri/MoreInfo
class CORDL_TYPE Uri_MoreInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field AbsoluteUri, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_AbsoluteUri, put = __cordl_internal_set_AbsoluteUri)) ::StringW AbsoluteUri;

  /// @brief Field Fragment, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Fragment, put = __cordl_internal_set_Fragment)) ::StringW Fragment;

  /// @brief Field Hash, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_Hash, put = __cordl_internal_set_Hash)) int32_t Hash;

  /// @brief Field Path, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Path, put = __cordl_internal_set_Path)) ::StringW Path;

  /// @brief Field Query, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Query, put = __cordl_internal_set_Query)) ::StringW Query;

  /// @brief Field RemoteUrl, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_RemoteUrl, put = __cordl_internal_set_RemoteUrl)) ::StringW RemoteUrl;

  static inline ::System::Uri_MoreInfo* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_AbsoluteUri() const;

  constexpr ::StringW& __cordl_internal_get_AbsoluteUri();

  constexpr ::StringW const& __cordl_internal_get_Fragment() const;

  constexpr ::StringW& __cordl_internal_get_Fragment();

  constexpr int32_t const& __cordl_internal_get_Hash() const;

  constexpr int32_t& __cordl_internal_get_Hash();

  constexpr ::StringW const& __cordl_internal_get_Path() const;

  constexpr ::StringW& __cordl_internal_get_Path();

  constexpr ::StringW const& __cordl_internal_get_Query() const;

  constexpr ::StringW& __cordl_internal_get_Query();

  constexpr ::StringW const& __cordl_internal_get_RemoteUrl() const;

  constexpr ::StringW& __cordl_internal_get_RemoteUrl();

  constexpr void __cordl_internal_set_AbsoluteUri(::StringW value);

  constexpr void __cordl_internal_set_Fragment(::StringW value);

  constexpr void __cordl_internal_set_Hash(int32_t value);

  constexpr void __cordl_internal_set_Path(::StringW value);

  constexpr void __cordl_internal_set_Query(::StringW value);

  constexpr void __cordl_internal_set_RemoteUrl(::StringW value);

  /// @brief Method .ctor, addr 0x440c1a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Uri_MoreInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Uri_MoreInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Uri_MoreInfo(Uri_MoreInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Uri_MoreInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Uri_MoreInfo(Uri_MoreInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9193 };

  /// @brief Field Path, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Path;

  /// @brief Field Query, offset: 0x18, size: 0x8, def value: None
  ::StringW ___Query;

  /// @brief Field Fragment, offset: 0x20, size: 0x8, def value: None
  ::StringW ___Fragment;

  /// @brief Field AbsoluteUri, offset: 0x28, size: 0x8, def value: None
  ::StringW ___AbsoluteUri;

  /// @brief Field Hash, offset: 0x30, size: 0x4, def value: None
  int32_t ___Hash;

  /// @brief Field RemoteUrl, offset: 0x38, size: 0x8, def value: None
  ::StringW ___RemoteUrl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Uri_MoreInfo, ___Path) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Uri_MoreInfo, ___Query) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Uri_MoreInfo, ___Fragment) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Uri_MoreInfo, ___AbsoluteUri) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Uri_MoreInfo, ___Hash) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Uri_MoreInfo, ___RemoteUrl) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Uri_MoreInfo, 0x40>, "Size mismatch!");

} // namespace System
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.Uri/Check
struct CORDL_TYPE Uri_Check {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Uri_Check_Unwrapped
  enum struct __Uri_Check_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_EscapedCanonical = static_cast<int32_t>(0x1),
    __E_DisplayCanonical = static_cast<int32_t>(0x2),
    __E_DotSlashAttn = static_cast<int32_t>(0x4),
    __E_DotSlashEscaped = static_cast<int32_t>(0x80),
    __E_BackslashInPath = static_cast<int32_t>(0x10),
    __E_ReservedFound = static_cast<int32_t>(0x20),
    __E_NotIriCanonical = static_cast<int32_t>(0x40),
    __E_FoundNonAscii = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Uri_Check_Unwrapped() const noexcept {
    return static_cast<__Uri_Check_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Uri_Check();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Uri_Check(int32_t value__) noexcept;

  /// @brief Field BackslashInPath value: I32(16)
  static ::System::Uri_Check const BackslashInPath;

  /// @brief Field DisplayCanonical value: I32(2)
  static ::System::Uri_Check const DisplayCanonical;

  /// @brief Field DotSlashAttn value: I32(4)
  static ::System::Uri_Check const DotSlashAttn;

  /// @brief Field DotSlashEscaped value: I32(128)
  static ::System::Uri_Check const DotSlashEscaped;

  /// @brief Field EscapedCanonical value: I32(1)
  static ::System::Uri_Check const EscapedCanonical;

  /// @brief Field FoundNonAscii value: I32(8)
  static ::System::Uri_Check const FoundNonAscii;

  /// @brief Field None value: I32(0)
  static ::System::Uri_Check const None;

  /// @brief Field NotIriCanonical value: I32(64)
  static ::System::Uri_Check const NotIriCanonical;

  /// @brief Field ReservedFound value: I32(32)
  static ::System::Uri_Check const ReservedFound;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9194 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Uri_Check, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Uri_Check, 0x4>, "Size mismatch!");

} // namespace System
// Dependencies System.Object, System.Runtime.Serialization.ISerializable, System.Uri::Flags, System.UriFormat, System.UriIdnScope, System.UriKind
namespace System {
// Is value type: false
// CS Name: System.Uri
class CORDL_TYPE Uri : public ::System::Object {
public:
  // Declarations
  using Check = ::System::Uri_Check;

  using Flags = ::System::Uri_Flags;

  using MoreInfo = ::System::Uri_MoreInfo;

  using Offset = ::System::Uri_Offset;

  using UriInfo = ::System::Uri_UriInfo;

  __declspec(property(get = get_AbsolutePath)) ::StringW AbsolutePath;

  __declspec(property(get = get_AbsoluteUri)) ::StringW AbsoluteUri;

  __declspec(property(get = get_AllowIdn)) bool AllowIdn;

  __declspec(property(get = get_Authority)) ::StringW Authority;

  __declspec(property(get = get_DnsSafeHost)) ::StringW DnsSafeHost;

  __declspec(property(get = get_Fragment)) ::StringW Fragment;

  __declspec(property(get = get_HasAuthority)) bool HasAuthority;

  /// @brief Field HexLowerChars, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_HexLowerChars, put = setStaticF_HexLowerChars)) ::ArrayW<char16_t, ::Array<char16_t>*> HexLowerChars;

  __declspec(property(get = get_Host)) ::StringW Host;

  __declspec(property(get = get_HostNameType)) ::System::UriHostNameType HostNameType;

  __declspec(property(get = get_HostType)) ::System::Uri_Flags HostType;

  __declspec(property(get = get_IsAbsoluteUri)) bool IsAbsoluteUri;

  __declspec(property(get = get_IsDefaultPort)) bool IsDefaultPort;

  __declspec(property(get = get_IsDosPath)) bool IsDosPath;

  __declspec(property(get = get_IsFile)) bool IsFile;

  __declspec(property(get = get_IsImplicitFile)) bool IsImplicitFile;

  __declspec(property(get = get_IsLoopback)) bool IsLoopback;

  __declspec(property(get = get_IsNotAbsoluteUri)) bool IsNotAbsoluteUri;

  __declspec(property(get = get_IsUnc)) bool IsUnc;

  __declspec(property(get = get_IsUncOrDosPath)) bool IsUncOrDosPath;

  __declspec(property(get = get_IsUncPath)) bool IsUncPath;

  /// @brief Field IsWindowsFileSystem, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_IsWindowsFileSystem, put = setStaticF_IsWindowsFileSystem)) bool IsWindowsFileSystem;

  __declspec(property(get = get_LocalPath)) ::StringW LocalPath;

  __declspec(property(get = get_OriginalString)) ::StringW OriginalString;

  __declspec(property(get = get_OriginalStringSwitched)) bool OriginalStringSwitched;

  __declspec(property(get = get_PathAndQuery)) ::StringW PathAndQuery;

  __declspec(property(get = get_Port)) int32_t Port;

  __declspec(property(get = get_PrivateAbsolutePath)) ::StringW PrivateAbsolutePath;

  __declspec(property(get = get_Query)) ::StringW Query;

  __declspec(property(get = get_Scheme)) ::StringW Scheme;

  /// @brief Field SchemeDelimiter, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SchemeDelimiter, put = setStaticF_SchemeDelimiter)) ::StringW SchemeDelimiter;

  __declspec(property(get = get_SecuredPathIndex)) uint16_t SecuredPathIndex;

  __declspec(property(get = get_Segments)) ::ArrayW<::StringW, ::Array<::StringW>*> Segments;

  __declspec(property(get = get_Syntax)) ::System::UriParser* Syntax;

  /// @brief Field UriSchemeFile, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UriSchemeFile, put = setStaticF_UriSchemeFile)) ::StringW UriSchemeFile;

  /// @brief Field UriSchemeFtp, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UriSchemeFtp, put = setStaticF_UriSchemeFtp)) ::StringW UriSchemeFtp;

  /// @brief Field UriSchemeGopher, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UriSchemeGopher, put = setStaticF_UriSchemeGopher)) ::StringW UriSchemeGopher;

  /// @brief Field UriSchemeHttp, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UriSchemeHttp, put = setStaticF_UriSchemeHttp)) ::StringW UriSchemeHttp;

  /// @brief Field UriSchemeHttps, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UriSchemeHttps, put = setStaticF_UriSchemeHttps)) ::StringW UriSchemeHttps;

  /// @brief Field UriSchemeMailto, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UriSchemeMailto, put = setStaticF_UriSchemeMailto)) ::StringW UriSchemeMailto;

  /// @brief Field UriSchemeNetPipe, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UriSchemeNetPipe, put = setStaticF_UriSchemeNetPipe)) ::StringW UriSchemeNetPipe;

  /// @brief Field UriSchemeNetTcp, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UriSchemeNetTcp, put = setStaticF_UriSchemeNetTcp)) ::StringW UriSchemeNetTcp;

  /// @brief Field UriSchemeNews, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UriSchemeNews, put = setStaticF_UriSchemeNews)) ::StringW UriSchemeNews;

  /// @brief Field UriSchemeNntp, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UriSchemeNntp, put = setStaticF_UriSchemeNntp)) ::StringW UriSchemeNntp;

  /// @brief Field UriSchemeWs, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UriSchemeWs, put = setStaticF_UriSchemeWs)) ::StringW UriSchemeWs;

  /// @brief Field UriSchemeWss, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UriSchemeWss, put = setStaticF_UriSchemeWss)) ::StringW UriSchemeWss;

  __declspec(property(get = get_UserDrivenParsing)) bool UserDrivenParsing;

  __declspec(property(get = get_UserEscaped)) bool UserEscaped;

  __declspec(property(get = get_UserInfo)) ::StringW UserInfo;

  /// @brief Field _WSchars, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__WSchars, put = setStaticF__WSchars)) ::ArrayW<char16_t, ::Array<char16_t>*> _WSchars;

  /// @brief Field m_DnsSafeHost, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DnsSafeHost, put = __cordl_internal_set_m_DnsSafeHost)) ::StringW m_DnsSafeHost;

  /// @brief Field m_Flags, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Flags, put = __cordl_internal_set_m_Flags)) ::System::Uri_Flags m_Flags;

  /// @brief Field m_Info, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Info, put = __cordl_internal_set_m_Info)) ::System::Uri_UriInfo* m_Info;

  /// @brief Field m_String, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_String, put = __cordl_internal_set_m_String)) ::StringW m_String;

  /// @brief Field m_Syntax, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Syntax, put = __cordl_internal_set_m_Syntax)) ::System::UriParser* m_Syntax;

  /// @brief Field m_iriParsing, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_iriParsing, put = __cordl_internal_set_m_iriParsing)) bool m_iriParsing;

  /// @brief Field m_originalUnicodeString, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_originalUnicodeString, put = __cordl_internal_set_m_originalUnicodeString)) ::StringW m_originalUnicodeString;

  /// @brief Field s_ConfigInitialized, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_ConfigInitialized, put = setStaticF_s_ConfigInitialized)) bool s_ConfigInitialized;

  /// @brief Field s_ConfigInitializing, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_ConfigInitializing, put = setStaticF_s_ConfigInitializing)) bool s_ConfigInitializing;

  /// @brief Field s_IdnScope, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_IdnScope, put = setStaticF_s_IdnScope)) ::System::UriIdnScope s_IdnScope;

  /// @brief Field s_IriParsing, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_IriParsing, put = setStaticF_s_IriParsing)) bool s_IriParsing;

  /// @brief Field s_initLock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_initLock, put = setStaticF_s_initLock)) ::System::Object* s_initLock;

  /// @brief Field useDotNetRelativeOrAbsolute, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_useDotNetRelativeOrAbsolute, put = setStaticF_useDotNetRelativeOrAbsolute)) bool useDotNetRelativeOrAbsolute;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method AllowIdnStatic, addr 0x43ba4b4, size 0xc8, virtual false, abstract: false, final false
  inline bool AllowIdnStatic(::System::UriParser* syntax, ::System::Uri_Flags flags);

  /// @brief Method CalculateCaseInsensitiveHashCode, addr 0x43bfc28, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t CalculateCaseInsensitiveHashCode(::StringW text);

  /// @brief Method CheckAuthorityHelper, addr 0x43c1524, size 0xe28, virtual false, abstract: false, final false
  inline uint16_t CheckAuthorityHelper(::cordl_internals::Ptr<char16_t> pString, uint16_t idx, uint16_t length, ::ByRef<::System::ParsingError> err, ::ByRef<::System::Uri_Flags> flags,
                                       ::System::UriParser* syntax, ::ByRef<::StringW> newHost);

  /// @brief Method CheckAuthorityHelperHandleAnyHostIri, addr 0x43c52e8, size 0x2c4, virtual false, abstract: false, final false
  inline void CheckAuthorityHelperHandleAnyHostIri(::cordl_internals::Ptr<char16_t> pString, int32_t startInput, int32_t end, bool iriParsing, bool hasUnicode, ::System::UriParser* syntax,
                                                   ::ByRef<::System::Uri_Flags> flags, ::ByRef<::StringW> newHost, ::ByRef<::System::ParsingError> err);

  /// @brief Method CheckAuthorityHelperHandleDnsIri, addr 0x43c4f94, size 0x354, virtual false, abstract: false, final false
  inline void CheckAuthorityHelperHandleDnsIri(::cordl_internals::Ptr<char16_t> pString, uint16_t start, int32_t end, int32_t startInput, bool iriParsing, bool hasUnicode, ::System::UriParser* syntax,
                                               ::StringW userInfoString, ::ByRef<::System::Uri_Flags> flags, ::ByRef<bool> justNormalized, ::ByRef<::StringW> newHost,
                                               ::ByRef<::System::ParsingError> err);

  /// @brief Method CheckCanonical, addr 0x43c2a2c, size 0x3fc, virtual false, abstract: false, final false
  inline ::System::Uri_Check CheckCanonical(::cordl_internals::Ptr<char16_t> str, ::ByRef<uint16_t> idx, uint16_t end, char16_t delim);

  /// @brief Method CheckForColonInFirstPathSegment, addr 0x43c0614, size 0xb8, virtual false, abstract: false, final false
  static inline bool CheckForColonInFirstPathSegment(::StringW uriString);

  /// @brief Method CheckForConfigLoad, addr 0x43c5ec4, size 0xe4, virtual false, abstract: false, final false
  inline bool CheckForConfigLoad(::StringW data);

  /// @brief Method CheckForEscapedUnreserved, addr 0x43c60d0, size 0x1c4, virtual false, abstract: false, final false
  inline bool CheckForEscapedUnreserved(::StringW data);

  /// @brief Method CheckForUnicode, addr 0x43c5fa8, size 0x128, virtual false, abstract: false, final false
  inline bool CheckForUnicode(::StringW data);

  /// @brief Method CheckKnownSchemes, addr 0x43c4a18, size 0x57c, virtual false, abstract: false, final false
  static inline bool CheckKnownSchemes(::cordl_internals::Ptr<int64_t> lptr, uint16_t nChars, ::ByRef<::System::UriParser*> syntax);

  /// @brief Method CheckSchemeName, addr 0x43bf824, size 0x140, virtual false, abstract: false, final false
  static inline bool CheckSchemeName(::StringW schemeName);

  /// @brief Method CheckSchemeSyntax, addr 0x43bcbc4, size 0x138, virtual false, abstract: false, final false
  static inline ::System::ParsingError CheckSchemeSyntax(::cordl_internals::Ptr<char16_t> ptr, uint16_t length, ::ByRef<::System::UriParser*> syntax);

  /// @brief Method CombineUri, addr 0x43bcd24, size 0x924, virtual false, abstract: false, final false
  static inline ::StringW CombineUri(::System::Uri* basePart, ::StringW relativePart, ::System::UriFormat uriFormat);

  /// @brief Method Compress, addr 0x43bec08, size 0x4d4, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> Compress(::ArrayW<char16_t, ::Array<char16_t>*> dest, uint16_t start, ::ByRef<int32_t> destLength, ::System::UriParser* syntax);

  /// @brief Method CreateHelper, addr 0x43c6294, size 0x260, virtual false, abstract: false, final false
  static inline ::System::Uri* CreateHelper(::StringW uriString, bool dontEscape, ::System::UriKind uriKind, ::ByRef<::System::UriFormatException*> e);

  /// @brief Method CreateHostString, addr 0x43bb834, size 0x3f4, virtual false, abstract: false, final false
  inline void CreateHostString();

  /// @brief Method CreateHostStringHelper, addr 0x43c2850, size 0x1dc, virtual false, abstract: false, final false
  static inline ::StringW CreateHostStringHelper(::StringW str, uint16_t idx, uint16_t end, ::ByRef<::System::Uri_Flags> flags, ::ByRef<::StringW> scopeId);

  /// @brief Method CreateThis, addr 0x43bbca8, size 0x1b8, virtual false, abstract: false, final false
  inline void CreateThis(::StringW uri, bool dontEscape, ::System::UriKind uriKind);

  /// @brief Method CreateThisFromUri, addr 0x43bc658, size 0x120, virtual false, abstract: false, final false
  inline void CreateThisFromUri(::System::Uri* otherUri);

  /// @brief Method CreateUri, addr 0x43bbfb4, size 0x188, virtual false, abstract: false, final false
  inline void CreateUri(::System::Uri* baseUri, ::StringW relativeUri, bool dontEscape);

  /// @brief Method CreateUriInfo, addr 0x43ba64c, size 0x588, virtual false, abstract: false, final false
  inline void CreateUriInfo(::System::Uri_Flags cF);

  /// @brief Method EnsureHostString, addr 0x43bb7d4, size 0x60, virtual false, abstract: false, final false
  inline void EnsureHostString(bool allowDnsOptimization);

  /// @brief Method EnsureParseRemaining, addr 0x43babd4, size 0x10, virtual false, abstract: false, final false
  inline void EnsureParseRemaining();

  /// @brief Method EnsureUriInfo, addr 0x43ba628, size 0x24, virtual false, abstract: false, final false
  inline ::System::Uri_UriInfo* EnsureUriInfo();

  /// @brief Method Equals, addr 0x43bffdc, size 0x584, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* comparand);

  /// @brief Method EscapeUnescapeIri, addr 0x43c49c8, size 0x50, virtual false, abstract: false, final false
  inline ::StringW EscapeUnescapeIri(::StringW input, int32_t start, int32_t end, ::System::UriComponents component);

  /// @brief Method EscapeUriString, addr 0x43c7044, size 0x128, virtual false, abstract: false, final false
  static inline ::StringW EscapeUriString(::StringW stringToEscape);

  /// @brief Method FindEndOfComponent, addr 0x43c4974, size 0x54, virtual false, abstract: false, final false
  inline void FindEndOfComponent(::StringW input, ::ByRef<uint16_t> idx, uint16_t end, char16_t delim);

  /// @brief Method FindEndOfComponent, addr 0x43c570c, size 0x98, virtual false, abstract: false, final false
  inline void FindEndOfComponent(::cordl_internals::Ptr<char16_t> str, ::ByRef<uint16_t> idx, uint16_t end, char16_t delim);

  /// @brief Method FromHex, addr 0x43bfa48, size 0xac, virtual false, abstract: false, final false
  static inline int32_t FromHex(char16_t digit);

  /// @brief Method GetCanonicalPath, addr 0x43c4304, size 0x670, virtual false, abstract: false, final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> GetCanonicalPath(::ArrayW<char16_t, ::Array<char16_t>*> dest, ::ByRef<int32_t> pos, ::System::UriFormat formatAs);

  /// @brief Method GetCombinedString, addr 0x43bc984, size 0x240, virtual false, abstract: false, final false
  static inline ::System::ParsingError GetCombinedString(::System::Uri* baseUri, ::StringW relativeStr, bool dontEscape, ::ByRef<::StringW> result);

  /// @brief Method GetComponents, addr 0x43c2e28, size 0x1c8, virtual false, abstract: false, final false
  inline ::StringW GetComponents(::System::UriComponents components, ::System::UriFormat format);

  /// @brief Method GetComponentsHelper, addr 0x43bfd94, size 0x214, virtual false, abstract: false, final false
  inline ::StringW GetComponentsHelper(::System::UriComponents uriComponents, ::System::UriFormat uriFormat);

  /// @brief Method GetEscapedParts, addr 0x43c2ff0, size 0xc8, virtual false, abstract: false, final false
  inline ::StringW GetEscapedParts(::System::UriComponents uriParts);

  /// @brief Method GetException, addr 0x43bd648, size 0x1a0, virtual false, abstract: false, final false
  static inline ::System::UriFormatException* GetException(::System::ParsingError err);

  /// @brief Method GetHashCode, addr 0x43bfaf4, size 0x134, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetHostViaCustomSyntax, addr 0x43c2420, size 0x430, virtual false, abstract: false, final false
  inline void GetHostViaCustomSyntax();

  /// @brief Method GetLocalPath, addr 0x43bdc98, size 0x5ec, virtual false, abstract: false, final false
  inline ::StringW GetLocalPath();

  /// @brief Method GetObjectData, addr 0x43bd8ec, size 0xd8, virtual false, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method GetParts, addr 0x43bd9c4, size 0x4, virtual false, abstract: false, final false
  inline ::StringW GetParts(::System::UriComponents uriParts, ::System::UriFormat formatAs);

  /// @brief Method GetRelativeSerializationString, addr 0x43c6740, size 0x21c, virtual false, abstract: false, final false
  inline ::StringW GetRelativeSerializationString(::System::UriFormat format);

  /// @brief Method GetUnescapedParts, addr 0x43bf0dc, size 0xd0, virtual false, abstract: false, final false
  inline ::StringW GetUnescapedParts(::System::UriComponents uriParts, ::System::UriFormat formatAs);

  /// @brief Method GetUriPartsFromUserString, addr 0x43c30b8, size 0x598, virtual false, abstract: false, final false
  inline ::StringW GetUriPartsFromUserString(::System::UriComponents uriParts);

  /// @brief Method InFact, addr 0x43ba60c, size 0x10, virtual false, abstract: false, final false
  inline bool InFact(::System::Uri_Flags flags);

  /// @brief Method InitializeUri, addr 0x43c59fc, size 0x4c8, virtual false, abstract: false, final false
  inline void InitializeUri(::System::ParsingError err, ::System::UriKind uriKind, ::ByRef<::System::UriFormatException*> e);

  /// @brief Method InitializeUriConfig, addr 0x43bea6c, size 0x19c, virtual false, abstract: false, final false
  static inline void InitializeUriConfig();

  /// @brief Method InternalEscapeString, addr 0x43c06cc, size 0xdc, virtual false, abstract: false, final false
  static inline ::StringW InternalEscapeString(::StringW rawString);

  /// @brief Method InternalIsWellFormedOriginalString, addr 0x43c69a0, size 0x468, virtual false, abstract: false, final false
  inline bool InternalIsWellFormedOriginalString();

  /// @brief Method IriParsingStatic, addr 0x43ba35c, size 0x8c, virtual false, abstract: false, final false
  static inline bool IriParsingStatic(::System::UriParser* syntax);

  /// @brief Method IsAsciiLetter, addr 0x43bf964, size 0x2c, virtual false, abstract: false, final false
  static inline bool IsAsciiLetter(char16_t character);

  /// @brief Method IsAsciiLetterOrDigit, addr 0x43bf990, size 0x7c, virtual false, abstract: false, final false
  static inline bool IsAsciiLetterOrDigit(char16_t character);

  /// @brief Method IsBaseOf, addr 0x43c71ac, size 0xb4, virtual false, abstract: false, final false
  inline bool IsBaseOf(::System::Uri* uri);

  /// @brief Method IsBaseOfHelper, addr 0x43c7260, size 0x1ec, virtual false, abstract: false, final false
  inline bool IsBaseOfHelper(::System::Uri* uriLink);

  /// @brief Method IsBidiControlCharacter, addr 0x43c59cc, size 0x30, virtual false, abstract: false, final false
  static inline bool IsBidiControlCharacter(char16_t ch);

  /// @brief Method IsGenDelim, addr 0x43bf7f4, size 0x30, virtual false, abstract: false, final false
  static inline bool IsGenDelim(char16_t ch);

  /// @brief Method IsHexDigit, addr 0x43bfa0c, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsHexDigit(char16_t character);

  /// @brief Method IsIntranet, addr 0x43ba588, size 0x8, virtual false, abstract: false, final false
  inline bool IsIntranet(::StringW schemeHost);

  /// @brief Method IsLWS, addr 0x43c14ec, size 0x38, virtual false, abstract: false, final false
  static inline bool IsLWS(char16_t ch);

  /// @brief Method IsWellFormedOriginalString, addr 0x43c695c, size 0x44, virtual false, abstract: false, final false
  inline bool IsWellFormedOriginalString();

  /// @brief Method IsWellFormedUriString, addr 0x43c6e08, size 0x9c, virtual false, abstract: false, final false
  static inline bool IsWellFormedUriString(::StringW uriString, ::System::UriKind uriKind);

  static inline ::System::Uri* New_ctor(::System::Uri* baseUri, ::StringW relativeUri);

  static inline ::System::Uri* New_ctor(::System::Uri* baseUri, ::System::Uri* relativeUri);

  static inline ::System::Uri* New_ctor(::System::Uri_Flags flags, ::System::UriParser* uriParser, ::StringW uri);

  static inline ::System::Uri* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  static inline ::System::Uri* New_ctor(::StringW uriString);

  static inline ::System::Uri* New_ctor(::StringW uriString, ::System::UriKind uriKind);

  /// @brief Method NotAny, addr 0x43ba4a4, size 0x10, virtual false, abstract: false, final false
  inline bool NotAny(::System::Uri_Flags flags);

  /// @brief Method ParseMinimal, addr 0x43c0dd8, size 0x80, virtual false, abstract: false, final false
  inline ::System::UriFormatException* ParseMinimal();

  /// @brief Method ParseRemaining, addr 0x43babe4, size 0xbf0, virtual false, abstract: false, final false
  inline void ParseRemaining();

  /// @brief Method ParseScheme, addr 0x43c07a8, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::ParsingError ParseScheme(::StringW uriString, ::ByRef<::System::Uri_Flags> flags, ::ByRef<::System::UriParser*> syntax);

  /// @brief Method ParseSchemeCheckImplicitFile, addr 0x43c087c, size 0x55c, virtual false, abstract: false, final false
  static inline uint16_t ParseSchemeCheckImplicitFile(::cordl_internals::Ptr<char16_t> uriString, uint16_t length, ::ByRef<::System::ParsingError> err, ::ByRef<::System::Uri_Flags> flags,
                                                      ::ByRef<::System::UriParser*> syntax);

  /// @brief Method PrivateParseMinimal, addr 0x43c0e58, size 0x694, virtual false, abstract: false, final false
  inline ::System::ParsingError PrivateParseMinimal();

  /// @brief Method PrivateParseMinimalIri, addr 0x43c234c, size 0xd4, virtual false, abstract: false, final false
  inline void PrivateParseMinimalIri(::StringW newHost, uint16_t idx);

  /// @brief Method ReCreateParts, addr 0x43c3650, size 0xcb4, virtual false, abstract: false, final false
  inline ::StringW ReCreateParts(::System::UriComponents parts, uint16_t nonCanonical, ::System::UriFormat formatAs);

  /// @brief Method ResolveHelper, addr 0x43bc13c, size 0x4d4, virtual false, abstract: false, final false
  static inline ::System::Uri* ResolveHelper(::System::Uri* baseUri, ::System::Uri* relativeUri, ::ByRef<::StringW> newUriString, ::ByRef<bool> userEscaped, ::ByRef<::System::UriFormatException*> e);

  /// @brief Method SetUserDrivenParsing, addr 0x43ba59c, size 0x14, virtual false, abstract: false, final false
  inline void SetUserDrivenParsing();

  /// @brief Method StaticInFact, addr 0x43ba61c, size 0xc, virtual false, abstract: false, final false
  static inline bool StaticInFact(::System::Uri_Flags allFlags, ::System::Uri_Flags checkFlags);

  /// @brief Method StaticIsFile, addr 0x43be988, size 0x18, virtual false, abstract: false, final false
  static inline bool StaticIsFile(::System::UriParser* syntax);

  /// @brief Method StaticNotAny, addr 0x43ba57c, size 0xc, virtual false, abstract: false, final false
  static inline bool StaticNotAny(::System::Uri_Flags allFlags, ::System::Uri_Flags checkFlags);

  /// @brief Method StripBidiControlCharacter, addr 0x43c55ac, size 0x160, virtual false, abstract: false, final false
  static inline ::StringW StripBidiControlCharacter(::cordl_internals::Ptr<char16_t> strToClean, int32_t start, int32_t length);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x43bd8e8, size 0x4, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method ToString, addr 0x43bfcc8, size 0xcc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryCreate, addr 0x43c64f4, size 0xd0, virtual false, abstract: false, final false
  static inline bool TryCreate(::System::Uri* baseUri, ::StringW relativeUri, ::ByRef<::System::Uri*> result);

  /// @brief Method TryCreate, addr 0x43c65c4, size 0x17c, virtual false, abstract: false, final false
  static inline bool TryCreate(::System::Uri* baseUri, ::System::Uri* relativeUri, ::ByRef<::System::Uri*> result);

  /// @brief Method TryCreate, addr 0x43c0560, size 0xb4, virtual false, abstract: false, final false
  static inline bool TryCreate(::StringW uriString, ::System::UriKind uriKind, ::ByRef<::System::Uri*> result);

  /// @brief Method UnescapeDataString, addr 0x43c6ea4, size 0x1a0, virtual false, abstract: false, final false
  static inline ::StringW UnescapeDataString(::StringW stringToUnescape);

  /// @brief Method UnescapeOnly, addr 0x43c57a4, size 0x21c, virtual false, abstract: false, final false
  static inline void UnescapeOnly(::cordl_internals::Ptr<char16_t> pch, int32_t start, ::ByRef<int32_t> end, char16_t ch1, char16_t ch2, char16_t ch3);

  constexpr ::StringW const& __cordl_internal_get_m_DnsSafeHost() const;

  constexpr ::StringW& __cordl_internal_get_m_DnsSafeHost();

  constexpr ::System::Uri_Flags const& __cordl_internal_get_m_Flags() const;

  constexpr ::System::Uri_Flags& __cordl_internal_get_m_Flags();

  constexpr ::System::Uri_UriInfo* const& __cordl_internal_get_m_Info() const;

  constexpr ::System::Uri_UriInfo*& __cordl_internal_get_m_Info();

  constexpr ::StringW const& __cordl_internal_get_m_String() const;

  constexpr ::StringW& __cordl_internal_get_m_String();

  constexpr ::System::UriParser* const& __cordl_internal_get_m_Syntax() const;

  constexpr ::System::UriParser*& __cordl_internal_get_m_Syntax();

  constexpr bool const& __cordl_internal_get_m_iriParsing() const;

  constexpr bool& __cordl_internal_get_m_iriParsing();

  constexpr ::StringW const& __cordl_internal_get_m_originalUnicodeString() const;

  constexpr ::StringW& __cordl_internal_get_m_originalUnicodeString();

  constexpr void __cordl_internal_set_m_DnsSafeHost(::StringW value);

  constexpr void __cordl_internal_set_m_Flags(::System::Uri_Flags value);

  constexpr void __cordl_internal_set_m_Info(::System::Uri_UriInfo* value);

  constexpr void __cordl_internal_set_m_String(::StringW value);

  constexpr void __cordl_internal_set_m_Syntax(::System::UriParser* value);

  constexpr void __cordl_internal_set_m_iriParsing(bool value);

  constexpr void __cordl_internal_set_m_originalUnicodeString(::StringW value);

  /// @brief Method .ctor, addr 0x43bbee4, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::System::Uri* baseUri, ::StringW relativeUri);

  /// @brief Method .ctor, addr 0x43bc778, size 0x20c, virtual false, abstract: false, final false
  inline void _ctor(::System::Uri* baseUri, ::System::Uri* relativeUri);

  /// @brief Method .ctor, addr 0x43c716c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Uri_Flags flags, ::System::UriParser* uriParser, ::StringW uri);

  /// @brief Method .ctor, addr 0x43bd7e8, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method .ctor, addr 0x43bbc28, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::StringW uriString);

  /// @brief Method .ctor, addr 0x43bbe60, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::StringW uriString, ::System::UriKind uriKind);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_HexLowerChars();

  static inline bool getStaticF_IsWindowsFileSystem();

  static inline ::StringW getStaticF_SchemeDelimiter();

  static inline ::StringW getStaticF_UriSchemeFile();

  static inline ::StringW getStaticF_UriSchemeFtp();

  static inline ::StringW getStaticF_UriSchemeGopher();

  static inline ::StringW getStaticF_UriSchemeHttp();

  static inline ::StringW getStaticF_UriSchemeHttps();

  static inline ::StringW getStaticF_UriSchemeMailto();

  static inline ::StringW getStaticF_UriSchemeNetPipe();

  static inline ::StringW getStaticF_UriSchemeNetTcp();

  static inline ::StringW getStaticF_UriSchemeNews();

  static inline ::StringW getStaticF_UriSchemeNntp();

  static inline ::StringW getStaticF_UriSchemeWs();

  static inline ::StringW getStaticF_UriSchemeWss();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF__WSchars();

  static inline bool getStaticF_s_ConfigInitialized();

  static inline bool getStaticF_s_ConfigInitializing();

  static inline ::System::UriIdnScope getStaticF_s_IdnScope();

  static inline bool getStaticF_s_IriParsing();

  static inline ::System::Object* getStaticF_s_initLock();

  static inline bool getStaticF_useDotNetRelativeOrAbsolute();

  /// @brief Method get_AbsolutePath, addr 0x43bd9c8, size 0xc0, virtual false, abstract: false, final false
  inline ::StringW get_AbsolutePath();

  /// @brief Method get_AbsoluteUri, addr 0x43bdb30, size 0xfc, virtual false, abstract: false, final false
  inline ::StringW get_AbsoluteUri();

  /// @brief Method get_AllowIdn, addr 0x43ba3e8, size 0xbc, virtual false, abstract: false, final false
  inline bool get_AllowIdn();

  /// @brief Method get_Authority, addr 0x43be284, size 0x74, virtual false, abstract: false, final false
  inline ::StringW get_Authority();

  /// @brief Method get_DnsSafeHost, addr 0x43bf528, size 0x24c, virtual false, abstract: false, final false
  inline ::StringW get_DnsSafeHost();

  /// @brief Method get_Fragment, addr 0x43bf370, size 0x100, virtual false, abstract: false, final false
  inline ::StringW get_Fragment();

  /// @brief Method get_HasAuthority, addr 0x43c59c0, size 0xc, virtual false, abstract: false, final false
  inline bool get_HasAuthority();

  /// @brief Method get_Host, addr 0x43be914, size 0x74, virtual false, abstract: false, final false
  inline ::StringW get_Host();

  /// @brief Method get_HostNameType, addr 0x43be2f8, size 0xf8, virtual false, abstract: false, final false
  inline ::System::UriHostNameType get_HostNameType();

  /// @brief Method get_HostType, addr 0x43ba338, size 0xc, virtual false, abstract: false, final false
  inline ::System::Uri_Flags get_HostType();

  /// @brief Method get_InitializeLock, addr 0x43be9a0, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Object* get_InitializeLock();

  /// @brief Method get_IsAbsoluteUri, addr 0x43bbfa4, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsAbsoluteUri();

  /// @brief Method get_IsDefaultPort, addr 0x43be3f0, size 0xa8, virtual false, abstract: false, final false
  inline bool get_IsDefaultPort();

  /// @brief Method get_IsDosPath, addr 0x43ba320, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsDosPath();

  /// @brief Method get_IsFile, addr 0x43be498, size 0xc0, virtual false, abstract: false, final false
  inline bool get_IsFile();

  /// @brief Method get_IsImplicitFile, addr 0x43ba304, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsImplicitFile();

  /// @brief Method get_IsLoopback, addr 0x43be558, size 0x80, virtual false, abstract: false, final false
  inline bool get_IsLoopback();

  /// @brief Method get_IsNotAbsoluteUri, addr 0x43ba34c, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsNotAbsoluteUri();

  /// @brief Method get_IsUnc, addr 0x43be8a0, size 0x74, virtual false, abstract: false, final false
  inline bool get_IsUnc();

  /// @brief Method get_IsUncOrDosPath, addr 0x43ba310, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsUncOrDosPath();

  /// @brief Method get_IsUncPath, addr 0x43ba32c, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsUncPath();

  /// @brief Method get_LocalPath, addr 0x43bdc2c, size 0x6c, virtual false, abstract: false, final false
  inline ::StringW get_LocalPath();

  /// @brief Method get_OriginalString, addr 0x43bccfc, size 0x28, virtual false, abstract: false, final false
  inline ::StringW get_OriginalString();

  /// @brief Method get_OriginalStringSwitched, addr 0x43bf4e0, size 0x48, virtual false, abstract: false, final false
  inline bool get_OriginalStringSwitched();

  /// @brief Method get_PathAndQuery, addr 0x43be5d8, size 0xc8, virtual false, abstract: false, final false
  inline ::StringW get_PathAndQuery();

  /// @brief Method get_Port, addr 0x43bf1ac, size 0xc4, virtual false, abstract: false, final false
  inline int32_t get_Port();

  /// @brief Method get_PrivateAbsolutePath, addr 0x43bda88, size 0xa8, virtual false, abstract: false, final false
  inline ::StringW get_PrivateAbsolutePath();

  /// @brief Method get_Query, addr 0x43bf270, size 0x100, virtual false, abstract: false, final false
  inline ::StringW get_Query();

  /// @brief Method get_Scheme, addr 0x43bf470, size 0x70, virtual false, abstract: false, final false
  inline ::StringW get_Scheme();

  /// @brief Method get_SecuredPathIndex, addr 0x43ba5b0, size 0x5c, virtual false, abstract: false, final false
  inline uint16_t get_SecuredPathIndex();

  /// @brief Method get_Segments, addr 0x43be6a0, size 0x200, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_Segments();

  /// @brief Method get_Syntax, addr 0x43ba344, size 0x8, virtual false, abstract: false, final false
  inline ::System::UriParser* get_Syntax();

  /// @brief Method get_UserDrivenParsing, addr 0x43ba590, size 0xc, virtual false, abstract: false, final false
  inline bool get_UserDrivenParsing();

  /// @brief Method get_UserEscaped, addr 0x43bf774, size 0xc, virtual false, abstract: false, final false
  inline bool get_UserEscaped();

  /// @brief Method get_UserInfo, addr 0x43bf780, size 0x74, virtual false, abstract: false, final false
  inline ::StringW get_UserInfo();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Method op_Equality, addr 0x43bffa8, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Uri* uri1, ::System::Uri* uri2);

  /// @brief Method op_Inequality, addr 0x43bc610, size 0x48, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Uri* uri1, ::System::Uri* uri2);

  static inline void setStaticF_HexLowerChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_IsWindowsFileSystem(bool value);

  static inline void setStaticF_SchemeDelimiter(::StringW value);

  static inline void setStaticF_UriSchemeFile(::StringW value);

  static inline void setStaticF_UriSchemeFtp(::StringW value);

  static inline void setStaticF_UriSchemeGopher(::StringW value);

  static inline void setStaticF_UriSchemeHttp(::StringW value);

  static inline void setStaticF_UriSchemeHttps(::StringW value);

  static inline void setStaticF_UriSchemeMailto(::StringW value);

  static inline void setStaticF_UriSchemeNetPipe(::StringW value);

  static inline void setStaticF_UriSchemeNetTcp(::StringW value);

  static inline void setStaticF_UriSchemeNews(::StringW value);

  static inline void setStaticF_UriSchemeNntp(::StringW value);

  static inline void setStaticF_UriSchemeWs(::StringW value);

  static inline void setStaticF_UriSchemeWss(::StringW value);

  static inline void setStaticF__WSchars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_s_ConfigInitialized(bool value);

  static inline void setStaticF_s_ConfigInitializing(bool value);

  static inline void setStaticF_s_IdnScope(::System::UriIdnScope value);

  static inline void setStaticF_s_IriParsing(bool value);

  static inline void setStaticF_s_initLock(::System::Object* value);

  static inline void setStaticF_useDotNetRelativeOrAbsolute(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Uri();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Uri", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Uri(Uri&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Uri", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Uri(Uri const&) = delete;

  /// @brief Field DotNetRelativeOrAbsolute value: I32(300)
  static ::System::UriKind const DotNetRelativeOrAbsolute;

  /// @brief Field V1ToStringUnescape value: I32(32767)
  static ::System::UriFormat const V1ToStringUnescape;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9195 };

  /// @brief Field c_DummyChar offset 0xffffffff size 0x2
  static constexpr char16_t c_DummyChar{ u'\u{ffff}' };

  /// @brief Field c_EOL offset 0xffffffff size 0x2
  static constexpr char16_t c_EOL{ u'\u{fffe}' };

  /// @brief Field c_Max16BitUtf8SequenceLength offset 0xffffffff size 0x4
  static constexpr int32_t c_Max16BitUtf8SequenceLength{ static_cast<int32_t>(0xc) };

  /// @brief Field c_MaxUriBufferSize offset 0xffffffff size 0x4
  static constexpr int32_t c_MaxUriBufferSize{ static_cast<int32_t>(0xfff0) };

  /// @brief Field c_MaxUriSchemeName offset 0xffffffff size 0x4
  static constexpr int32_t c_MaxUriSchemeName{ static_cast<int32_t>(0x400) };

  /// @brief Field m_String, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_String;

  /// @brief Field m_originalUnicodeString, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_originalUnicodeString;

  /// @brief Field m_Syntax, offset: 0x20, size: 0x8, def value: None
  ::System::UriParser* ___m_Syntax;

  /// @brief Field m_DnsSafeHost, offset: 0x28, size: 0x8, def value: None
  ::StringW ___m_DnsSafeHost;

  /// @brief Field m_Flags, offset: 0x30, size: 0x8, def value: None
  ::System::Uri_Flags ___m_Flags;

  /// @brief Field m_Info, offset: 0x38, size: 0x8, def value: None
  ::System::Uri_UriInfo* ___m_Info;

  /// @brief Field m_iriParsing, offset: 0x40, size: 0x1, def value: None
  bool ___m_iriParsing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Uri, ___m_String) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Uri, ___m_originalUnicodeString) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Uri, ___m_Syntax) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Uri, ___m_DnsSafeHost) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Uri, ___m_Flags) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Uri, ___m_Info) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Uri, ___m_iriParsing) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Uri, 0x48>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::Uri_Check, "System", "Uri/Check");
DEFINE_IL2CPP_ARG_TYPE(::System::Uri_Flags, "System", "Uri/Flags");
NEED_NO_BOX(::System::Uri);
DEFINE_IL2CPP_ARG_TYPE(::System::Uri*, "System", "Uri");
NEED_NO_BOX(::System::Uri_MoreInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Uri_MoreInfo*, "System", "Uri/MoreInfo");
NEED_NO_BOX(::System::Uri_UriInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Uri_UriInfo*, "System", "Uri/UriInfo");
DEFINE_IL2CPP_ARG_TYPE(::System::Uri_Offset, "System", "Uri/Offset");
