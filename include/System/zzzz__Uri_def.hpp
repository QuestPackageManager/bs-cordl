#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__UriFormat_def.hpp"
#include "System/zzzz__UriIdnScope_def.hpp"
#include "System/zzzz__UriKind_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Uri)
namespace System::Runtime::Serialization {
class ISerializable;
}
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
struct __Uri__Check;
}
namespace System {
struct __Uri__Flags;
}
namespace System {
class __Uri__MoreInfo;
}
namespace System {
struct __Uri__Offset;
}
namespace System {
class __Uri__UriInfo;
}
// Forward declare root types
namespace System {
struct __Uri__Check;
}
namespace System {
struct __Uri__Flags;
}
namespace System {
class Uri;
}
namespace System {
class __Uri__MoreInfo;
}
namespace System {
class __Uri__UriInfo;
}
namespace System {
struct __Uri__Offset;
}
// Write type traits
MARK_VAL_T(::System::__Uri__Check);
MARK_VAL_T(::System::__Uri__Flags);
MARK_REF_PTR_T(::System::Uri);
MARK_REF_PTR_T(::System::__Uri__MoreInfo);
MARK_REF_PTR_T(::System::__Uri__UriInfo);
MARK_VAL_T(::System::__Uri__Offset);
// Type: ::Flags
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::Uri::Flags
struct CORDL_TYPE __Uri__Flags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint64_t;

  /// @brief Nested struct ____Uri__Flags_Unwrapped
  enum struct ____Uri__Flags_Unwrapped : uint64_t {
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
  constexpr operator ____Uri__Flags_Unwrapped() const noexcept {
    return static_cast<____Uri__Flags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint64_t() const noexcept {
    return static_cast<uint64_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Uri__Flags();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr __Uri__Flags(uint64_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x8, def value: None
  uint64_t value__;

  /// @brief Field AllUriInfoSet value: static_cast<uint64_t>(0x80000000u)
  static ::System::__Uri__Flags const AllUriInfoSet;

  /// @brief Field AuthorityFound value: static_cast<uint64_t>(0x100000u)
  static ::System::__Uri__Flags const AuthorityFound;

  /// @brief Field BackslashInPath value: static_cast<uint64_t>(0x8000u)
  static ::System::__Uri__Flags const BackslashInPath;

  /// @brief Field BasicHostType value: static_cast<uint64_t>(0x50000u)
  static ::System::__Uri__Flags const BasicHostType;

  /// @brief Field CannotDisplayCanonical value: static_cast<uint64_t>(0x7fu)
  static ::System::__Uri__Flags const CannotDisplayCanonical;

  /// @brief Field CanonicalDnsHost value: static_cast<uint64_t>(0x2000000u)
  static ::System::__Uri__Flags const CanonicalDnsHost;

  /// @brief Field CompressedSlashes value: static_cast<uint64_t>(0x100000000000u)
  static ::System::__Uri__Flags const CompressedSlashes;

  /// @brief Field DnsHostType value: static_cast<uint64_t>(0x30000u)
  static ::System::__Uri__Flags const DnsHostType;

  /// @brief Field DosPath value: static_cast<uint64_t>(0x8000000u)
  static ::System::__Uri__Flags const DosPath;

  /// @brief Field E_CannotDisplayCanonical value: static_cast<uint64_t>(0x1f80u)
  static ::System::__Uri__Flags const E_CannotDisplayCanonical;

  /// @brief Field E_FragmentNotCanonical value: static_cast<uint64_t>(0x1000u)
  static ::System::__Uri__Flags const E_FragmentNotCanonical;

  /// @brief Field E_HostNotCanonical value: static_cast<uint64_t>(0x100u)
  static ::System::__Uri__Flags const E_HostNotCanonical;

  /// @brief Field E_PathNotCanonical value: static_cast<uint64_t>(0x400u)
  static ::System::__Uri__Flags const E_PathNotCanonical;

  /// @brief Field E_PortNotCanonical value: static_cast<uint64_t>(0x200u)
  static ::System::__Uri__Flags const E_PortNotCanonical;

  /// @brief Field E_QueryNotCanonical value: static_cast<uint64_t>(0x800u)
  static ::System::__Uri__Flags const E_QueryNotCanonical;

  /// @brief Field E_UserNotCanonical value: static_cast<uint64_t>(0x80u)
  static ::System::__Uri__Flags const E_UserNotCanonical;

  /// @brief Field ErrorOrParsingRecursion value: static_cast<uint64_t>(0x4000000u)
  static ::System::__Uri__Flags const ErrorOrParsingRecursion;

  /// @brief Field FirstSlashAbsent value: static_cast<uint64_t>(0x4000u)
  static ::System::__Uri__Flags const FirstSlashAbsent;

  /// @brief Field FragmentIriCanonical value: static_cast<uint64_t>(0x40000000000u)
  static ::System::__Uri__Flags const FragmentIriCanonical;

  /// @brief Field FragmentNotCanonical value: static_cast<uint64_t>(0x40u)
  static ::System::__Uri__Flags const FragmentNotCanonical;

  /// @brief Field HasUnicode value: static_cast<uint64_t>(0x200000000u)
  static ::System::__Uri__Flags const HasUnicode;

  /// @brief Field HasUserInfo value: static_cast<uint64_t>(0x200000u)
  static ::System::__Uri__Flags const HasUserInfo;

  /// @brief Field HostNotCanonical value: static_cast<uint64_t>(0x4u)
  static ::System::__Uri__Flags const HostNotCanonical;

  /// @brief Field HostNotParsed value: static_cast<uint64_t>(0x0u)
  static ::System::__Uri__Flags const HostNotParsed;

  /// @brief Field HostTypeMask value: static_cast<uint64_t>(0x70000u)
  static ::System::__Uri__Flags const HostTypeMask;

  /// @brief Field HostUnicodeNormalized value: static_cast<uint64_t>(0x400000000u)
  static ::System::__Uri__Flags const HostUnicodeNormalized;

  /// @brief Field IPv4HostType value: static_cast<uint64_t>(0x20000u)
  static ::System::__Uri__Flags const IPv4HostType;

  /// @brief Field IPv6HostType value: static_cast<uint64_t>(0x10000u)
  static ::System::__Uri__Flags const IPv6HostType;

  /// @brief Field IdnHost value: static_cast<uint64_t>(0x100000000u)
  static ::System::__Uri__Flags const IdnHost;

  /// @brief Field ImplicitFile value: static_cast<uint64_t>(0x20000000u)
  static ::System::__Uri__Flags const ImplicitFile;

  /// @brief Field IndexMask value: static_cast<uint64_t>(0xffffu)
  static ::System::__Uri__Flags const IndexMask;

  /// @brief Field IntranetUri value: static_cast<uint64_t>(0x2000000000u)
  static ::System::__Uri__Flags const IntranetUri;

  /// @brief Field IriCanonical value: static_cast<uint64_t>(0x78000000000u)
  static ::System::__Uri__Flags const IriCanonical;

  /// @brief Field LoopbackHost value: static_cast<uint64_t>(0x400000u)
  static ::System::__Uri__Flags const LoopbackHost;

  /// @brief Field MinimalUriInfoSet value: static_cast<uint64_t>(0x40000000u)
  static ::System::__Uri__Flags const MinimalUriInfoSet;

  /// @brief Field NotDefaultPort value: static_cast<uint64_t>(0x800000u)
  static ::System::__Uri__Flags const NotDefaultPort;

  /// @brief Field PathIriCanonical value: static_cast<uint64_t>(0x10000000000u)
  static ::System::__Uri__Flags const PathIriCanonical;

  /// @brief Field PathNotCanonical value: static_cast<uint64_t>(0x10u)
  static ::System::__Uri__Flags const PathNotCanonical;

  /// @brief Field PortNotCanonical value: static_cast<uint64_t>(0x8u)
  static ::System::__Uri__Flags const PortNotCanonical;

  /// @brief Field QueryIriCanonical value: static_cast<uint64_t>(0x20000000000u)
  static ::System::__Uri__Flags const QueryIriCanonical;

  /// @brief Field QueryNotCanonical value: static_cast<uint64_t>(0x20u)
  static ::System::__Uri__Flags const QueryNotCanonical;

  /// @brief Field RestUnicodeNormalized value: static_cast<uint64_t>(0x800000000u)
  static ::System::__Uri__Flags const RestUnicodeNormalized;

  /// @brief Field SchemeNotCanonical value: static_cast<uint64_t>(0x1u)
  static ::System::__Uri__Flags const SchemeNotCanonical;

  /// @brief Field ShouldBeCompressed value: static_cast<uint64_t>(0x2000u)
  static ::System::__Uri__Flags const ShouldBeCompressed;

  /// @brief Field UncHostType value: static_cast<uint64_t>(0x40000u)
  static ::System::__Uri__Flags const UncHostType;

  /// @brief Field UncPath value: static_cast<uint64_t>(0x10000000u)
  static ::System::__Uri__Flags const UncPath;

  /// @brief Field UnicodeHost value: static_cast<uint64_t>(0x1000000000u)
  static ::System::__Uri__Flags const UnicodeHost;

  /// @brief Field UnknownHostType value: static_cast<uint64_t>(0x70000u)
  static ::System::__Uri__Flags const UnknownHostType;

  /// @brief Field UnusedHostType value: static_cast<uint64_t>(0x60000u)
  static ::System::__Uri__Flags const UnusedHostType;

  /// @brief Field UseOrigUncdStrOffset value: static_cast<uint64_t>(0x4000000000u)
  static ::System::__Uri__Flags const UseOrigUncdStrOffset;

  /// @brief Field UserDrivenParsing value: static_cast<uint64_t>(0x1000000u)
  static ::System::__Uri__Flags const UserDrivenParsing;

  /// @brief Field UserEscaped value: static_cast<uint64_t>(0x80000u)
  static ::System::__Uri__Flags const UserEscaped;

  /// @brief Field UserIriCanonical value: static_cast<uint64_t>(0x8000000000u)
  static ::System::__Uri__Flags const UserIriCanonical;

  /// @brief Field UserNotCanonical value: static_cast<uint64_t>(0x2u)
  static ::System::__Uri__Flags const UserNotCanonical;

  /// @brief Field Zero value: static_cast<uint64_t>(0x0u)
  static ::System::__Uri__Flags const Zero;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Uri__Flags, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::__Uri__Flags, value__) == 0x0, "Offset mismatch!");

} // namespace System
// Type: ::Offset
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 1, natural_alignment: 2, packing: Some(1), specified_packing: Some(1) }
namespace System {
// Is value type: true
// CS Name: ::Uri::Offset
#pragma pack(push, 1)
struct CORDL_TYPE __Uri__Offset {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Uri__Offset();

  // Ctor Parameters [CppParam { name: "Scheme", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "User", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Host",
  // ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "PortValue", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Path", ty: "uint16_t", modifiers: "",
  // def_value: None }, CppParam { name: "Query", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Fragment", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name:
  // "End", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr __Uri__Offset(uint16_t Scheme, uint16_t User, uint16_t Host, uint16_t PortValue, uint16_t Path, uint16_t Query, uint16_t Fragment, uint16_t End) noexcept;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Uri__Offset, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::__Uri__Offset, Scheme) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::__Uri__Offset, User) == 0x2, "Offset mismatch!");

static_assert(offsetof(::System::__Uri__Offset, Host) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::__Uri__Offset, PortValue) == 0x6, "Offset mismatch!");

static_assert(offsetof(::System::__Uri__Offset, Path) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::__Uri__Offset, Query) == 0xa, "Offset mismatch!");

static_assert(offsetof(::System::__Uri__Offset, Fragment) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::__Uri__Offset, End) == 0xe, "Offset mismatch!");

} // namespace System
// Type: ::UriInfo
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::Uri::UriInfo*
class CORDL_TYPE __Uri__UriInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field DnsSafeHost, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_DnsSafeHost, put = __cordl_internal_set_DnsSafeHost))::StringW DnsSafeHost;

  /// @brief Field Host, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Host, put = __cordl_internal_set_Host))::StringW Host;

  /// @brief Field MoreInfo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_MoreInfo, put = __cordl_internal_set_MoreInfo))::System::__Uri__MoreInfo* MoreInfo;

  /// @brief Field Offset, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_Offset, put = __cordl_internal_set_Offset))::System::__Uri__Offset Offset;

  /// @brief Field ScopeId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ScopeId, put = __cordl_internal_set_ScopeId))::StringW ScopeId;

  /// @brief Field String, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_String, put = __cordl_internal_set_String))::StringW String;

  static inline ::System::__Uri__UriInfo* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_DnsSafeHost() const;

  constexpr ::StringW& __cordl_internal_get_DnsSafeHost();

  constexpr ::StringW const& __cordl_internal_get_Host() const;

  constexpr ::StringW& __cordl_internal_get_Host();

  constexpr ::System::__Uri__MoreInfo*& __cordl_internal_get_MoreInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::__Uri__MoreInfo*> const& __cordl_internal_get_MoreInfo() const;

  constexpr ::System::__Uri__Offset const& __cordl_internal_get_Offset() const;

  constexpr ::System::__Uri__Offset& __cordl_internal_get_Offset();

  constexpr ::StringW const& __cordl_internal_get_ScopeId() const;

  constexpr ::StringW& __cordl_internal_get_ScopeId();

  constexpr ::StringW const& __cordl_internal_get_String() const;

  constexpr ::StringW& __cordl_internal_get_String();

  constexpr void __cordl_internal_set_DnsSafeHost(::StringW value);

  constexpr void __cordl_internal_set_Host(::StringW value);

  constexpr void __cordl_internal_set_MoreInfo(::System::__Uri__MoreInfo* value);

  constexpr void __cordl_internal_set_Offset(::System::__Uri__Offset value);

  constexpr void __cordl_internal_set_ScopeId(::StringW value);

  constexpr void __cordl_internal_set_String(::StringW value);

  /// @brief Method .ctor, addr 0x2e7e2d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Uri__UriInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Uri__UriInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Uri__UriInfo(__Uri__UriInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Uri__UriInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Uri__UriInfo(__Uri__UriInfo const&) = delete;

  /// @brief Field Host, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Host;

  /// @brief Field ScopeId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___ScopeId;

  /// @brief Field String, offset: 0x20, size: 0x8, def value: None
  ::StringW ___String;

  /// @brief Field Offset, offset: 0x28, size: 0x10, def value: None
  ::System::__Uri__Offset ___Offset;

  /// @brief Field DnsSafeHost, offset: 0x38, size: 0x8, def value: None
  ::StringW ___DnsSafeHost;

  /// @brief Field MoreInfo, offset: 0x40, size: 0x8, def value: None
  ::System::__Uri__MoreInfo* ___MoreInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Uri__UriInfo, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::__Uri__UriInfo, ___Host) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::__Uri__UriInfo, ___ScopeId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::__Uri__UriInfo, ___String) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::__Uri__UriInfo, ___Offset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::__Uri__UriInfo, ___DnsSafeHost) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::__Uri__UriInfo, ___MoreInfo) == 0x40, "Offset mismatch!");

} // namespace System
// Type: ::MoreInfo
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::Uri::MoreInfo*
class CORDL_TYPE __Uri__MoreInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field AbsoluteUri, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_AbsoluteUri, put = __cordl_internal_set_AbsoluteUri))::StringW AbsoluteUri;

  /// @brief Field Fragment, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Fragment, put = __cordl_internal_set_Fragment))::StringW Fragment;

  /// @brief Field Hash, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_Hash, put = __cordl_internal_set_Hash)) int32_t Hash;

  /// @brief Field Path, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Path, put = __cordl_internal_set_Path))::StringW Path;

  /// @brief Field Query, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Query, put = __cordl_internal_set_Query))::StringW Query;

  /// @brief Field RemoteUrl, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_RemoteUrl, put = __cordl_internal_set_RemoteUrl))::StringW RemoteUrl;

  static inline ::System::__Uri__MoreInfo* New_ctor();

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

  /// @brief Method .ctor, addr 0x2e7e2e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Uri__MoreInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Uri__MoreInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Uri__MoreInfo(__Uri__MoreInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Uri__MoreInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Uri__MoreInfo(__Uri__MoreInfo const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::System::__Uri__MoreInfo, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::__Uri__MoreInfo, ___Path) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::__Uri__MoreInfo, ___Query) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::__Uri__MoreInfo, ___Fragment) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::__Uri__MoreInfo, ___AbsoluteUri) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::__Uri__MoreInfo, ___Hash) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::__Uri__MoreInfo, ___RemoteUrl) == 0x38, "Offset mismatch!");

} // namespace System
// Type: ::Check
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::Uri::Check
struct CORDL_TYPE __Uri__Check {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Uri__Check_Unwrapped
  enum struct ____Uri__Check_Unwrapped : int32_t {
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
  constexpr operator ____Uri__Check_Unwrapped() const noexcept {
    return static_cast<____Uri__Check_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Uri__Check();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Uri__Check(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BackslashInPath value: static_cast<int32_t>(0x10)
  static ::System::__Uri__Check const BackslashInPath;

  /// @brief Field DisplayCanonical value: static_cast<int32_t>(0x2)
  static ::System::__Uri__Check const DisplayCanonical;

  /// @brief Field DotSlashAttn value: static_cast<int32_t>(0x4)
  static ::System::__Uri__Check const DotSlashAttn;

  /// @brief Field DotSlashEscaped value: static_cast<int32_t>(0x80)
  static ::System::__Uri__Check const DotSlashEscaped;

  /// @brief Field EscapedCanonical value: static_cast<int32_t>(0x1)
  static ::System::__Uri__Check const EscapedCanonical;

  /// @brief Field FoundNonAscii value: static_cast<int32_t>(0x8)
  static ::System::__Uri__Check const FoundNonAscii;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::__Uri__Check const None;

  /// @brief Field NotIriCanonical value: static_cast<int32_t>(0x40)
  static ::System::__Uri__Check const NotIriCanonical;

  /// @brief Field ReservedFound value: static_cast<int32_t>(0x20)
  static ::System::__Uri__Check const ReservedFound;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__Uri__Check, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::__Uri__Check, value__) == 0x0, "Offset mismatch!");

} // namespace System
// Type: System::Uri
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::Uri*
class CORDL_TYPE Uri : public ::System::Object {
public:
  // Declarations
  using Check = ::System::__Uri__Check;

  using Flags = ::System::__Uri__Flags;

  using MoreInfo = ::System::__Uri__MoreInfo;

  using Offset = ::System::__Uri__Offset;

  using UriInfo = ::System::__Uri__UriInfo;

  __declspec(property(get = get_AbsolutePath))::StringW AbsolutePath;

  __declspec(property(get = get_AbsoluteUri))::StringW AbsoluteUri;

  __declspec(property(get = get_AllowIdn)) bool AllowIdn;

  __declspec(property(get = get_Authority))::StringW Authority;

  __declspec(property(get = get_DnsSafeHost))::StringW DnsSafeHost;

  __declspec(property(get = get_Fragment))::StringW Fragment;

  __declspec(property(get = get_HasAuthority)) bool HasAuthority;

  /// @brief Field HexLowerChars, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_HexLowerChars, put = setStaticF_HexLowerChars))::ArrayW<char16_t, ::Array<char16_t>*> HexLowerChars;

  __declspec(property(get = get_Host))::StringW Host;

  __declspec(property(get = get_HostNameType))::System::UriHostNameType HostNameType;

  __declspec(property(get = get_HostType))::System::__Uri__Flags HostType;

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
  static __declspec(property(get = getStaticF_IsWindowsFileSystem, put = setStaticF_IsWindowsFileSystem)) bool IsWindowsFileSystem;

  __declspec(property(get = get_LocalPath))::StringW LocalPath;

  __declspec(property(get = get_OriginalString))::StringW OriginalString;

  __declspec(property(get = get_OriginalStringSwitched)) bool OriginalStringSwitched;

  __declspec(property(get = get_PathAndQuery))::StringW PathAndQuery;

  __declspec(property(get = get_Port)) int32_t Port;

  __declspec(property(get = get_PrivateAbsolutePath))::StringW PrivateAbsolutePath;

  __declspec(property(get = get_Query))::StringW Query;

  __declspec(property(get = get_Scheme))::StringW Scheme;

  /// @brief Field SchemeDelimiter, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SchemeDelimiter, put = setStaticF_SchemeDelimiter))::StringW SchemeDelimiter;

  __declspec(property(get = get_SecuredPathIndex)) uint16_t SecuredPathIndex;

  __declspec(property(get = get_Segments))::ArrayW<::StringW, ::Array<::StringW>*> Segments;

  __declspec(property(get = get_Syntax))::System::UriParser* Syntax;

  /// @brief Field UriSchemeFile, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UriSchemeFile, put = setStaticF_UriSchemeFile))::StringW UriSchemeFile;

  /// @brief Field UriSchemeFtp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UriSchemeFtp, put = setStaticF_UriSchemeFtp))::StringW UriSchemeFtp;

  /// @brief Field UriSchemeGopher, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UriSchemeGopher, put = setStaticF_UriSchemeGopher))::StringW UriSchemeGopher;

  /// @brief Field UriSchemeHttp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UriSchemeHttp, put = setStaticF_UriSchemeHttp))::StringW UriSchemeHttp;

  /// @brief Field UriSchemeHttps, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UriSchemeHttps, put = setStaticF_UriSchemeHttps))::StringW UriSchemeHttps;

  /// @brief Field UriSchemeMailto, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UriSchemeMailto, put = setStaticF_UriSchemeMailto))::StringW UriSchemeMailto;

  /// @brief Field UriSchemeNetPipe, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UriSchemeNetPipe, put = setStaticF_UriSchemeNetPipe))::StringW UriSchemeNetPipe;

  /// @brief Field UriSchemeNetTcp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UriSchemeNetTcp, put = setStaticF_UriSchemeNetTcp))::StringW UriSchemeNetTcp;

  /// @brief Field UriSchemeNews, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UriSchemeNews, put = setStaticF_UriSchemeNews))::StringW UriSchemeNews;

  /// @brief Field UriSchemeNntp, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UriSchemeNntp, put = setStaticF_UriSchemeNntp))::StringW UriSchemeNntp;

  /// @brief Field UriSchemeWs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UriSchemeWs, put = setStaticF_UriSchemeWs))::StringW UriSchemeWs;

  /// @brief Field UriSchemeWss, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UriSchemeWss, put = setStaticF_UriSchemeWss))::StringW UriSchemeWss;

  __declspec(property(get = get_UserDrivenParsing)) bool UserDrivenParsing;

  __declspec(property(get = get_UserEscaped)) bool UserEscaped;

  __declspec(property(get = get_UserInfo))::StringW UserInfo;

  /// @brief Field _WSchars, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__WSchars, put = setStaticF__WSchars))::ArrayW<char16_t, ::Array<char16_t>*> _WSchars;

  /// @brief Field m_DnsSafeHost, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DnsSafeHost, put = __cordl_internal_set_m_DnsSafeHost))::StringW m_DnsSafeHost;

  /// @brief Field m_Flags, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Flags, put = __cordl_internal_set_m_Flags))::System::__Uri__Flags m_Flags;

  /// @brief Field m_Info, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Info, put = __cordl_internal_set_m_Info))::System::__Uri__UriInfo* m_Info;

  /// @brief Field m_String, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_String, put = __cordl_internal_set_m_String))::StringW m_String;

  /// @brief Field m_Syntax, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Syntax, put = __cordl_internal_set_m_Syntax))::System::UriParser* m_Syntax;

  /// @brief Field m_iriParsing, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_iriParsing, put = __cordl_internal_set_m_iriParsing)) bool m_iriParsing;

  /// @brief Field m_originalUnicodeString, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_originalUnicodeString, put = __cordl_internal_set_m_originalUnicodeString))::StringW m_originalUnicodeString;

  /// @brief Field s_ConfigInitialized, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_ConfigInitialized, put = setStaticF_s_ConfigInitialized)) bool s_ConfigInitialized;

  /// @brief Field s_ConfigInitializing, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_ConfigInitializing, put = setStaticF_s_ConfigInitializing)) bool s_ConfigInitializing;

  /// @brief Field s_IdnScope, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_IdnScope, put = setStaticF_s_IdnScope))::System::UriIdnScope s_IdnScope;

  /// @brief Field s_IriParsing, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_IriParsing, put = setStaticF_s_IriParsing)) bool s_IriParsing;

  /// @brief Field s_initLock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_initLock, put = setStaticF_s_initLock))::System::Object* s_initLock;

  /// @brief Field useDotNetRelativeOrAbsolute, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_useDotNetRelativeOrAbsolute, put = setStaticF_useDotNetRelativeOrAbsolute)) bool useDotNetRelativeOrAbsolute;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method AllowIdnStatic, addr 0x2e1b468, size 0xc8, virtual false, abstract: false, final false
  inline bool AllowIdnStatic(::System::UriParser* syntax, ::System::__Uri__Flags flags);

  /// @brief Method CalculateCaseInsensitiveHashCode, addr 0x2e20e04, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t CalculateCaseInsensitiveHashCode(::StringW text);

  /// @brief Method CheckAuthorityHelper, addr 0x2e226e4, size 0xe04, virtual false, abstract: false, final false
  inline uint16_t CheckAuthorityHelper(::cordl_internals::Ptr<char16_t> pString, uint16_t idx, uint16_t length, ByRef<::System::ParsingError> err, ByRef<::System::__Uri__Flags> flags,
                                       ::System::UriParser* syntax, ByRef<::StringW> newHost);

  /// @brief Method CheckAuthorityHelperHandleAnyHostIri, addr 0x2e26414, size 0x2c4, virtual false, abstract: false, final false
  inline void CheckAuthorityHelperHandleAnyHostIri(::cordl_internals::Ptr<char16_t> pString, int32_t startInput, int32_t end, bool iriParsing, bool hasUnicode, ::System::UriParser* syntax,
                                                   ByRef<::System::__Uri__Flags> flags, ByRef<::StringW> newHost, ByRef<::System::ParsingError> err);

  /// @brief Method CheckAuthorityHelperHandleDnsIri, addr 0x2e260c4, size 0x350, virtual false, abstract: false, final false
  inline void CheckAuthorityHelperHandleDnsIri(::cordl_internals::Ptr<char16_t> pString, uint16_t start, int32_t end, int32_t startInput, bool iriParsing, bool hasUnicode, ::System::UriParser* syntax,
                                               ::StringW userInfoString, ByRef<::System::__Uri__Flags> flags, ByRef<bool> justNormalized, ByRef<::StringW> newHost, ByRef<::System::ParsingError> err);

  /// @brief Method CheckCanonical, addr 0x2e23be0, size 0x3f8, virtual false, abstract: false, final false
  inline ::System::__Uri__Check CheckCanonical(::cordl_internals::Ptr<char16_t> str, ByRef<uint16_t> idx, uint16_t end, char16_t delim);

  /// @brief Method CheckForColonInFirstPathSegment, addr 0x2e217fc, size 0xb8, virtual false, abstract: false, final false
  static inline bool CheckForColonInFirstPathSegment(::StringW uriString);

  /// @brief Method CheckForConfigLoad, addr 0x2e27028, size 0xac, virtual false, abstract: false, final false
  inline bool CheckForConfigLoad(::StringW data);

  /// @brief Method CheckForEscapedUnreserved, addr 0x2e271ec, size 0x1ac, virtual false, abstract: false, final false
  inline bool CheckForEscapedUnreserved(::StringW data);

  /// @brief Method CheckForUnicode, addr 0x2e270d4, size 0x118, virtual false, abstract: false, final false
  inline bool CheckForUnicode(::StringW data);

  /// @brief Method CheckKnownSchemes, addr 0x2e25bc4, size 0x500, virtual false, abstract: false, final false
  static inline bool CheckKnownSchemes(::cordl_internals::Ptr<int64_t> lptr, uint16_t nChars, ByRef<::System::UriParser*> syntax);

  /// @brief Method CheckSchemeName, addr 0x2e209f8, size 0x140, virtual false, abstract: false, final false
  static inline bool CheckSchemeName(::StringW schemeName);

  /// @brief Method CheckSchemeSyntax, addr 0x2e1db7c, size 0x134, virtual false, abstract: false, final false
  static inline ::System::ParsingError CheckSchemeSyntax(::cordl_internals::Ptr<char16_t> ptr, uint16_t length, ByRef<::System::UriParser*> syntax);

  /// @brief Method CombineUri, addr 0x2e1dcd8, size 0xa74, virtual false, abstract: false, final false
  static inline ::StringW CombineUri(::System::Uri* basePart, ::StringW relativePart, ::System::UriFormat uriFormat);

  /// @brief Method Compress, addr 0x2e1fd8c, size 0x4d8, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> Compress(::ArrayW<char16_t, ::Array<char16_t>*> dest, uint16_t start, ByRef<int32_t> destLength, ::System::UriParser* syntax);

  /// @brief Method CreateHelper, addr 0x2e27398, size 0x274, virtual false, abstract: false, final false
  static inline ::System::Uri* CreateHelper(::StringW uriString, bool dontEscape, ::System::UriKind uriKind, ByRef<::System::UriFormatException*> e);

  /// @brief Method CreateHostString, addr 0x2e1c7bc, size 0x3fc, virtual false, abstract: false, final false
  inline void CreateHostString();

  /// @brief Method CreateHostStringHelper, addr 0x2e239fc, size 0x1e4, virtual false, abstract: false, final false
  static inline ::StringW CreateHostStringHelper(::StringW str, uint16_t idx, uint16_t end, ByRef<::System::__Uri__Flags> flags, ByRef<::StringW> scopeId);

  /// @brief Method CreateThis, addr 0x2e1cc3c, size 0x1c0, virtual false, abstract: false, final false
  inline void CreateThis(::StringW uri, bool dontEscape, ::System::UriKind uriKind);

  /// @brief Method CreateThisFromUri, addr 0x2e1d5e8, size 0x120, virtual false, abstract: false, final false
  inline void CreateThisFromUri(::System::Uri* otherUri);

  /// @brief Method CreateUri, addr 0x2e1cf5c, size 0x188, virtual false, abstract: false, final false
  inline void CreateUri(::System::Uri* baseUri, ::StringW relativeUri, bool dontEscape);

  /// @brief Method CreateUriInfo, addr 0x2e1b600, size 0x594, virtual false, abstract: false, final false
  inline void CreateUriInfo(::System::__Uri__Flags cF);

  /// @brief Method EnsureHostString, addr 0x2e1c75c, size 0x60, virtual false, abstract: false, final false
  inline void EnsureHostString(bool allowDnsOptimization);

  /// @brief Method EnsureParseRemaining, addr 0x2e1bb94, size 0x10, virtual false, abstract: false, final false
  inline void EnsureParseRemaining();

  /// @brief Method EnsureUriInfo, addr 0x2e1b5dc, size 0x24, virtual false, abstract: false, final false
  inline ::System::__Uri__UriInfo* EnsureUriInfo();

  /// @brief Method Equals, addr 0x2e211bc, size 0x588, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* comparand);

  /// @brief Method EscapeUnescapeIri, addr 0x2e25b74, size 0x50, virtual false, abstract: false, final false
  inline ::StringW EscapeUnescapeIri(::StringW input, int32_t start, int32_t end, ::System::UriComponents component);

  /// @brief Method FindEndOfComponent, addr 0x2e25b20, size 0x54, virtual false, abstract: false, final false
  inline void FindEndOfComponent(::StringW input, ByRef<uint16_t> idx, uint16_t end, char16_t delim);

  /// @brief Method FindEndOfComponent, addr 0x2e26850, size 0x94, virtual false, abstract: false, final false
  inline void FindEndOfComponent(::cordl_internals::Ptr<char16_t> str, ByRef<uint16_t> idx, uint16_t end, char16_t delim);

  /// @brief Method FromHex, addr 0x2e20c1c, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t FromHex(char16_t digit);

  /// @brief Method GetCanonicalPath, addr 0x2e254b8, size 0x668, virtual false, abstract: false, final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> GetCanonicalPath(::ArrayW<char16_t, ::Array<char16_t>*> dest, ByRef<int32_t> pos, ::System::UriFormat formatAs);

  /// @brief Method GetCombinedString, addr 0x2e1d92c, size 0x250, virtual false, abstract: false, final false
  static inline ::System::ParsingError GetCombinedString(::System::Uri* baseUri, ::StringW relativeStr, bool dontEscape, ByRef<::StringW> result);

  /// @brief Method GetComponents, addr 0x2e23fd8, size 0x1dc, virtual false, abstract: false, final false
  inline ::StringW GetComponents(::System::UriComponents components, ::System::UriFormat format);

  /// @brief Method GetComponentsHelper, addr 0x2e20f70, size 0x218, virtual false, abstract: false, final false
  inline ::StringW GetComponentsHelper(::System::UriComponents uriComponents, ::System::UriFormat uriFormat);

  /// @brief Method GetEscapedParts, addr 0x2e241b4, size 0xc8, virtual false, abstract: false, final false
  inline ::StringW GetEscapedParts(::System::UriComponents uriParts);

  /// @brief Method GetException, addr 0x2e1e74c, size 0x1a0, virtual false, abstract: false, final false
  static inline ::System::UriFormatException* GetException(::System::ParsingError err);

  /// @brief Method GetHashCode, addr 0x2e20ccc, size 0x138, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetHostViaCustomSyntax, addr 0x2e235bc, size 0x440, virtual false, abstract: false, final false
  inline void GetHostViaCustomSyntax();

  /// @brief Method GetLocalPath, addr 0x2e1edb8, size 0x5f4, virtual false, abstract: false, final false
  inline ::StringW GetLocalPath();

  /// @brief Method GetObjectData, addr 0x2e1e9f4, size 0xd8, virtual false, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method GetParts, addr 0x2e1eacc, size 0x4, virtual false, abstract: false, final false
  inline ::StringW GetParts(::System::UriComponents uriParts, ::System::UriFormat formatAs);

  /// @brief Method GetRelativeSerializationString, addr 0x2e27850, size 0x220, virtual false, abstract: false, final false
  inline ::StringW GetRelativeSerializationString(::System::UriFormat format);

  /// @brief Method GetUnescapedParts, addr 0x2e20264, size 0xd0, virtual false, abstract: false, final false
  inline ::StringW GetUnescapedParts(::System::UriComponents uriParts, ::System::UriFormat formatAs);

  /// @brief Method GetUriPartsFromUserString, addr 0x2e2427c, size 0x5b0, virtual false, abstract: false, final false
  inline ::StringW GetUriPartsFromUserString(::System::UriComponents uriParts);

  /// @brief Method InFact, addr 0x2e1b5c0, size 0x10, virtual false, abstract: false, final false
  inline bool InFact(::System::__Uri__Flags flags);

  /// @brief Method InitializeUri, addr 0x2e26b54, size 0x4d4, virtual false, abstract: false, final false
  inline void InitializeUri(::System::ParsingError err, ::System::UriKind uriKind, ByRef<::System::UriFormatException*> e);

  /// @brief Method InitializeUriConfig, addr 0x2e1fbec, size 0x1a0, virtual false, abstract: false, final false
  static inline void InitializeUriConfig();

  /// @brief Method InternalEscapeString, addr 0x2e218b4, size 0xe0, virtual false, abstract: false, final false
  static inline ::StringW InternalEscapeString(::StringW rawString);

  /// @brief Method InternalIsWellFormedOriginalString, addr 0x2e27ab4, size 0x484, virtual false, abstract: false, final false
  inline bool InternalIsWellFormedOriginalString();

  /// @brief Method IriParsingStatic, addr 0x2e1b310, size 0x8c, virtual false, abstract: false, final false
  static inline bool IriParsingStatic(::System::UriParser* syntax);

  /// @brief Method IsAsciiLetter, addr 0x2e20b38, size 0x2c, virtual false, abstract: false, final false
  static inline bool IsAsciiLetter(char16_t character);

  /// @brief Method IsAsciiLetterOrDigit, addr 0x2e20b64, size 0x7c, virtual false, abstract: false, final false
  static inline bool IsAsciiLetterOrDigit(char16_t character);

  /// @brief Method IsBaseOf, addr 0x2e281bc, size 0xb8, virtual false, abstract: false, final false
  inline bool IsBaseOf(::System::Uri* uri);

  /// @brief Method IsBaseOfHelper, addr 0x2e28274, size 0x204, virtual false, abstract: false, final false
  inline bool IsBaseOfHelper(::System::Uri* uriLink);

  /// @brief Method IsBidiControlCharacter, addr 0x2e26b0c, size 0x48, virtual false, abstract: false, final false
  static inline bool IsBidiControlCharacter(char16_t ch);

  /// @brief Method IsGenDelim, addr 0x2e209ac, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsGenDelim(char16_t ch);

  /// @brief Method IsHexDigit, addr 0x2e20be0, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsHexDigit(char16_t character);

  /// @brief Method IsIntranet, addr 0x2e1b53c, size 0x8, virtual false, abstract: false, final false
  inline bool IsIntranet(::StringW schemeHost);

  /// @brief Method IsLWS, addr 0x2e226a4, size 0x40, virtual false, abstract: false, final false
  static inline bool IsLWS(char16_t ch);

  /// @brief Method IsWellFormedOriginalString, addr 0x2e27a70, size 0x44, virtual false, abstract: false, final false
  inline bool IsWellFormedOriginalString();

  /// @brief Method IsWellFormedUriString, addr 0x2e27f38, size 0x9c, virtual false, abstract: false, final false
  static inline bool IsWellFormedUriString(::StringW uriString, ::System::UriKind uriKind);

  static inline ::System::Uri* New_ctor(::System::Uri* baseUri, ::StringW relativeUri);

  static inline ::System::Uri* New_ctor(::System::Uri* baseUri, ::System::Uri* relativeUri);

  static inline ::System::Uri* New_ctor(::System::__Uri__Flags flags, ::System::UriParser* uriParser, ::StringW uri);

  static inline ::System::Uri* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  static inline ::System::Uri* New_ctor(::StringW uriString);

  static inline ::System::Uri* New_ctor(::StringW uriString, ::System::UriKind uriKind);

  /// @brief Method NotAny, addr 0x2e1b458, size 0x10, virtual false, abstract: false, final false
  inline bool NotAny(::System::__Uri__Flags flags);

  /// @brief Method ParseMinimal, addr 0x2e21fbc, size 0x80, virtual false, abstract: false, final false
  inline ::System::UriFormatException* ParseMinimal();

  /// @brief Method ParseRemaining, addr 0x2e1bba4, size 0xbb8, virtual false, abstract: false, final false
  inline void ParseRemaining();

  /// @brief Method ParseScheme, addr 0x2e21994, size 0xe0, virtual false, abstract: false, final false
  static inline ::System::ParsingError ParseScheme(::StringW uriString, ByRef<::System::__Uri__Flags> flags, ByRef<::System::UriParser*> syntax);

  /// @brief Method ParseSchemeCheckImplicitFile, addr 0x2e21a74, size 0x548, virtual false, abstract: false, final false
  static inline uint16_t ParseSchemeCheckImplicitFile(::cordl_internals::Ptr<char16_t> uriString, uint16_t length, ByRef<::System::ParsingError> err, ByRef<::System::__Uri__Flags> flags,
                                                      ByRef<::System::UriParser*> syntax);

  /// @brief Method PrivateParseMinimal, addr 0x2e2203c, size 0x668, virtual false, abstract: false, final false
  inline ::System::ParsingError PrivateParseMinimal();

  /// @brief Method PrivateParseMinimalIri, addr 0x2e234e8, size 0xd4, virtual false, abstract: false, final false
  inline void PrivateParseMinimalIri(::StringW newHost, uint16_t idx);

  /// @brief Method ReCreateParts, addr 0x2e2482c, size 0xc8c, virtual false, abstract: false, final false
  inline ::StringW ReCreateParts(::System::UriComponents parts, uint16_t nonCanonical, ::System::UriFormat formatAs);

  /// @brief Method ResolveHelper, addr 0x2e1d0e4, size 0x4bc, virtual false, abstract: false, final false
  static inline ::System::Uri* ResolveHelper(::System::Uri* baseUri, ::System::Uri* relativeUri, ByRef<::StringW> newUriString, ByRef<bool> userEscaped, ByRef<::System::UriFormatException*> e);

  /// @brief Method SetUserDrivenParsing, addr 0x2e1b550, size 0x14, virtual false, abstract: false, final false
  inline void SetUserDrivenParsing();

  /// @brief Method StaticInFact, addr 0x2e1b5d0, size 0xc, virtual false, abstract: false, final false
  static inline bool StaticInFact(::System::__Uri__Flags allFlags, ::System::__Uri__Flags checkFlags);

  /// @brief Method StaticIsFile, addr 0x2e1fb00, size 0x18, virtual false, abstract: false, final false
  static inline bool StaticIsFile(::System::UriParser* syntax);

  /// @brief Method StaticNotAny, addr 0x2e1b530, size 0xc, virtual false, abstract: false, final false
  static inline bool StaticNotAny(::System::__Uri__Flags allFlags, ::System::__Uri__Flags checkFlags);

  /// @brief Method StripBidiControlCharacter, addr 0x2e266d8, size 0x178, virtual false, abstract: false, final false
  static inline ::StringW StripBidiControlCharacter(::cordl_internals::Ptr<char16_t> strToClean, int32_t start, int32_t length);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x2e1e9f0, size 0x4, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                       ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method ToString, addr 0x2e20ea4, size 0xcc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryCreate, addr 0x2e2760c, size 0xd0, virtual false, abstract: false, final false
  static inline bool TryCreate(::System::Uri* baseUri, ::StringW relativeUri, ByRef<::System::Uri*> result);

  /// @brief Method TryCreate, addr 0x2e276dc, size 0x174, virtual false, abstract: false, final false
  static inline bool TryCreate(::System::Uri* baseUri, ::System::Uri* relativeUri, ByRef<::System::Uri*> result);

  /// @brief Method TryCreate, addr 0x2e21744, size 0xb8, virtual false, abstract: false, final false
  static inline bool TryCreate(::StringW uriString, ::System::UriKind uriKind, ByRef<::System::Uri*> result);

  /// @brief Method UnescapeDataString, addr 0x2e27fd4, size 0x1a8, virtual false, abstract: false, final false
  static inline ::StringW UnescapeDataString(::StringW stringToUnescape);

  /// @brief Method UnescapeOnly, addr 0x2e268e4, size 0x21c, virtual false, abstract: false, final false
  static inline void UnescapeOnly(::cordl_internals::Ptr<char16_t> pch, int32_t start, ByRef<int32_t> end, char16_t ch1, char16_t ch2, char16_t ch3);

  constexpr ::StringW const& __cordl_internal_get_m_DnsSafeHost() const;

  constexpr ::StringW& __cordl_internal_get_m_DnsSafeHost();

  constexpr ::System::__Uri__Flags const& __cordl_internal_get_m_Flags() const;

  constexpr ::System::__Uri__Flags& __cordl_internal_get_m_Flags();

  constexpr ::System::__Uri__UriInfo*& __cordl_internal_get_m_Info();

  constexpr ::cordl_internals::to_const_pointer<::System::__Uri__UriInfo*> const& __cordl_internal_get_m_Info() const;

  constexpr ::StringW const& __cordl_internal_get_m_String() const;

  constexpr ::StringW& __cordl_internal_get_m_String();

  constexpr ::System::UriParser*& __cordl_internal_get_m_Syntax();

  constexpr ::cordl_internals::to_const_pointer<::System::UriParser*> const& __cordl_internal_get_m_Syntax() const;

  constexpr bool const& __cordl_internal_get_m_iriParsing() const;

  constexpr bool& __cordl_internal_get_m_iriParsing();

  constexpr ::StringW const& __cordl_internal_get_m_originalUnicodeString() const;

  constexpr ::StringW& __cordl_internal_get_m_originalUnicodeString();

  constexpr void __cordl_internal_set_m_DnsSafeHost(::StringW value);

  constexpr void __cordl_internal_set_m_Flags(::System::__Uri__Flags value);

  constexpr void __cordl_internal_set_m_Info(::System::__Uri__UriInfo* value);

  constexpr void __cordl_internal_set_m_String(::StringW value);

  constexpr void __cordl_internal_set_m_Syntax(::System::UriParser* value);

  constexpr void __cordl_internal_set_m_iriParsing(bool value);

  constexpr void __cordl_internal_set_m_originalUnicodeString(::StringW value);

  /// @brief Method .ctor, addr 0x2e1ce84, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::System::Uri* baseUri, ::StringW relativeUri);

  /// @brief Method .ctor, addr 0x2e1d708, size 0x224, virtual false, abstract: false, final false
  inline void _ctor(::System::Uri* baseUri, ::System::Uri* relativeUri);

  /// @brief Method .ctor, addr 0x2e2817c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::__Uri__Flags flags, ::System::UriParser* uriParser, ::StringW uri);

  /// @brief Method .ctor, addr 0x2e1e8ec, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);

  /// @brief Method .ctor, addr 0x2e1cbb8, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::StringW uriString);

  /// @brief Method .ctor, addr 0x2e1cdfc, size 0x88, virtual false, abstract: false, final false
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

  /// @brief Method get_AbsolutePath, addr 0x2e1ead0, size 0xc8, virtual false, abstract: false, final false
  inline ::StringW get_AbsolutePath();

  /// @brief Method get_AbsoluteUri, addr 0x2e1ec40, size 0x104, virtual false, abstract: false, final false
  inline ::StringW get_AbsoluteUri();

  /// @brief Method get_AllowIdn, addr 0x2e1b39c, size 0xbc, virtual false, abstract: false, final false
  inline bool get_AllowIdn();

  /// @brief Method get_Authority, addr 0x2e1f3ac, size 0x7c, virtual false, abstract: false, final false
  inline ::StringW get_Authority();

  /// @brief Method get_DnsSafeHost, addr 0x2e206d0, size 0x254, virtual false, abstract: false, final false
  inline ::StringW get_DnsSafeHost();

  /// @brief Method get_Fragment, addr 0x2e20508, size 0x108, virtual false, abstract: false, final false
  inline ::StringW get_Fragment();

  /// @brief Method get_HasAuthority, addr 0x2e26b00, size 0xc, virtual false, abstract: false, final false
  inline bool get_HasAuthority();

  /// @brief Method get_Host, addr 0x2e1fa84, size 0x7c, virtual false, abstract: false, final false
  inline ::StringW get_Host();

  /// @brief Method get_HostNameType, addr 0x2e1f428, size 0x100, virtual false, abstract: false, final false
  inline ::System::UriHostNameType get_HostNameType();

  /// @brief Method get_HostType, addr 0x2e1b2ec, size 0xc, virtual false, abstract: false, final false
  inline ::System::__Uri__Flags get_HostType();

  /// @brief Method get_InitializeLock, addr 0x2e1fb18, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Object* get_InitializeLock();

  /// @brief Method get_IsAbsoluteUri, addr 0x2e1cf4c, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsAbsoluteUri();

  /// @brief Method get_IsDefaultPort, addr 0x2e1f528, size 0xb0, virtual false, abstract: false, final false
  inline bool get_IsDefaultPort();

  /// @brief Method get_IsDosPath, addr 0x2e1b2d4, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsDosPath();

  /// @brief Method get_IsFile, addr 0x2e1f5d8, size 0xc8, virtual false, abstract: false, final false
  inline bool get_IsFile();

  /// @brief Method get_IsImplicitFile, addr 0x2e1b2b8, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsImplicitFile();

  /// @brief Method get_IsLoopback, addr 0x2e1f6a0, size 0x88, virtual false, abstract: false, final false
  inline bool get_IsLoopback();

  /// @brief Method get_IsNotAbsoluteUri, addr 0x2e1b300, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsNotAbsoluteUri();

  /// @brief Method get_IsUnc, addr 0x2e1fa08, size 0x7c, virtual false, abstract: false, final false
  inline bool get_IsUnc();

  /// @brief Method get_IsUncOrDosPath, addr 0x2e1b2c4, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsUncOrDosPath();

  /// @brief Method get_IsUncPath, addr 0x2e1b2e0, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsUncPath();

  /// @brief Method get_LocalPath, addr 0x2e1ed44, size 0x74, virtual false, abstract: false, final false
  inline ::StringW get_LocalPath();

  /// @brief Method get_OriginalString, addr 0x2e1dcb0, size 0x28, virtual false, abstract: false, final false
  inline ::StringW get_OriginalString();

  /// @brief Method get_OriginalStringSwitched, addr 0x2e20688, size 0x48, virtual false, abstract: false, final false
  inline bool get_OriginalStringSwitched();

  /// @brief Method get_PathAndQuery, addr 0x2e1f728, size 0xd0, virtual false, abstract: false, final false
  inline ::StringW get_PathAndQuery();

  /// @brief Method get_Port, addr 0x2e20334, size 0xcc, virtual false, abstract: false, final false
  inline int32_t get_Port();

  /// @brief Method get_PrivateAbsolutePath, addr 0x2e1eb98, size 0xa8, virtual false, abstract: false, final false
  inline ::StringW get_PrivateAbsolutePath();

  /// @brief Method get_Query, addr 0x2e20400, size 0x108, virtual false, abstract: false, final false
  inline ::StringW get_Query();

  /// @brief Method get_Scheme, addr 0x2e20610, size 0x78, virtual false, abstract: false, final false
  inline ::StringW get_Scheme();

  /// @brief Method get_SecuredPathIndex, addr 0x2e1b564, size 0x5c, virtual false, abstract: false, final false
  inline uint16_t get_SecuredPathIndex();

  /// @brief Method get_Segments, addr 0x2e1f7f8, size 0x210, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_Segments();

  /// @brief Method get_Syntax, addr 0x2e1b2f8, size 0x8, virtual false, abstract: false, final false
  inline ::System::UriParser* get_Syntax();

  /// @brief Method get_UserDrivenParsing, addr 0x2e1b544, size 0xc, virtual false, abstract: false, final false
  inline bool get_UserDrivenParsing();

  /// @brief Method get_UserEscaped, addr 0x2e20924, size 0xc, virtual false, abstract: false, final false
  inline bool get_UserEscaped();

  /// @brief Method get_UserInfo, addr 0x2e20930, size 0x7c, virtual false, abstract: false, final false
  inline ::StringW get_UserInfo();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Method op_Equality, addr 0x2e21188, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Uri* uri1, ::System::Uri* uri2);

  /// @brief Method op_Inequality, addr 0x2e1d5a0, size 0x48, virtual false, abstract: false, final false
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

  /// @brief Field m_String, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_String;

  /// @brief Field m_originalUnicodeString, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_originalUnicodeString;

  /// @brief Field m_Syntax, offset: 0x20, size: 0x8, def value: None
  ::System::UriParser* ___m_Syntax;

  /// @brief Field m_DnsSafeHost, offset: 0x28, size: 0x8, def value: None
  ::StringW ___m_DnsSafeHost;

  /// @brief Field m_Flags, offset: 0x30, size: 0x8, def value: None
  ::System::__Uri__Flags ___m_Flags;

  /// @brief Field m_Info, offset: 0x38, size: 0x8, def value: None
  ::System::__Uri__UriInfo* ___m_Info;

  /// @brief Field m_iriParsing, offset: 0x40, size: 0x1, def value: None
  bool ___m_iriParsing;

  /// @brief Field DotNetRelativeOrAbsolute value: static_cast<int32_t>(0x12c)
  static ::System::UriKind const DotNetRelativeOrAbsolute;

  /// @brief Field V1ToStringUnescape value: static_cast<int32_t>(0x7fff)
  static ::System::UriFormat const V1ToStringUnescape;

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Uri, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Uri, ___m_String) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Uri, ___m_originalUnicodeString) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Uri, ___m_Syntax) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Uri, ___m_DnsSafeHost) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Uri, ___m_Flags) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Uri, ___m_Info) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Uri, ___m_iriParsing) == 0x40, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::__Uri__Check, "System", "Uri/Check");
DEFINE_IL2CPP_ARG_TYPE(::System::__Uri__Flags, "System", "Uri/Flags");
NEED_NO_BOX(::System::Uri);
DEFINE_IL2CPP_ARG_TYPE(::System::Uri*, "System", "Uri");
NEED_NO_BOX(::System::__Uri__MoreInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::__Uri__MoreInfo*, "System", "Uri/MoreInfo");
NEED_NO_BOX(::System::__Uri__UriInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::__Uri__UriInfo*, "System", "Uri/UriInfo");
DEFINE_IL2CPP_ARG_TYPE(::System::__Uri__Offset, "System", "Uri/Offset");
