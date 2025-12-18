#pragma once
// IWYU pragma private; include "System/UriSyntaxFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UriSyntaxFlags)
// Forward declare root types
namespace System {
struct UriSyntaxFlags;
}
// Write type traits
MARK_VAL_T(::System::UriSyntaxFlags);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.UriSyntaxFlags
struct CORDL_TYPE UriSyntaxFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UriSyntaxFlags_Unwrapped
  enum struct __UriSyntaxFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_MustHaveAuthority = static_cast<int32_t>(0x1),
    __E_OptionalAuthority = static_cast<int32_t>(0x2),
    __E_MayHaveUserInfo = static_cast<int32_t>(0x4),
    __E_MayHavePort = static_cast<int32_t>(0x8),
    __E_MayHavePath = static_cast<int32_t>(0x10),
    __E_MayHaveQuery = static_cast<int32_t>(0x20),
    __E_MayHaveFragment = static_cast<int32_t>(0x40),
    __E_AllowEmptyHost = static_cast<int32_t>(0x80),
    __E_AllowUncHost = static_cast<int32_t>(0x100),
    __E_AllowDnsHost = static_cast<int32_t>(0x200),
    __E_AllowIPv4Host = static_cast<int32_t>(0x400),
    __E_AllowIPv6Host = static_cast<int32_t>(0x800),
    __E_AllowAnInternetHost = static_cast<int32_t>(0xe00),
    __E_AllowAnyOtherHost = static_cast<int32_t>(0x1000),
    __E_FileLikeUri = static_cast<int32_t>(0x2000),
    __E_MailToLikeUri = static_cast<int32_t>(0x4000),
    __E_V1_UnknownUri = static_cast<int32_t>(0x10000),
    __E_SimpleUserSyntax = static_cast<int32_t>(0x20000),
    __E_BuiltInSyntax = static_cast<int32_t>(0x40000),
    __E_ParserSchemeOnly = static_cast<int32_t>(0x80000),
    __E_AllowDOSPath = static_cast<int32_t>(0x100000),
    __E_PathIsRooted = static_cast<int32_t>(0x200000),
    __E_ConvertPathSlashes = static_cast<int32_t>(0x400000),
    __E_CompressPath = static_cast<int32_t>(0x800000),
    __E_CanonicalizeAsFilePath = static_cast<int32_t>(0x1000000),
    __E_UnEscapeDotsAndSlashes = static_cast<int32_t>(0x2000000),
    __E_AllowIdn = static_cast<int32_t>(0x4000000),
    __E_AllowIriParsing = static_cast<int32_t>(0x10000000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UriSyntaxFlags_Unwrapped() const noexcept {
    return static_cast<__UriSyntaxFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UriSyntaxFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UriSyntaxFlags(int32_t value__) noexcept;

  /// @brief Field AllowAnInternetHost value: I32(3584)
  static ::System::UriSyntaxFlags const AllowAnInternetHost;

  /// @brief Field AllowAnyOtherHost value: I32(4096)
  static ::System::UriSyntaxFlags const AllowAnyOtherHost;

  /// @brief Field AllowDOSPath value: I32(1048576)
  static ::System::UriSyntaxFlags const AllowDOSPath;

  /// @brief Field AllowDnsHost value: I32(512)
  static ::System::UriSyntaxFlags const AllowDnsHost;

  /// @brief Field AllowEmptyHost value: I32(128)
  static ::System::UriSyntaxFlags const AllowEmptyHost;

  /// @brief Field AllowIPv4Host value: I32(1024)
  static ::System::UriSyntaxFlags const AllowIPv4Host;

  /// @brief Field AllowIPv6Host value: I32(2048)
  static ::System::UriSyntaxFlags const AllowIPv6Host;

  /// @brief Field AllowIdn value: I32(67108864)
  static ::System::UriSyntaxFlags const AllowIdn;

  /// @brief Field AllowIriParsing value: I32(268435456)
  static ::System::UriSyntaxFlags const AllowIriParsing;

  /// @brief Field AllowUncHost value: I32(256)
  static ::System::UriSyntaxFlags const AllowUncHost;

  /// @brief Field BuiltInSyntax value: I32(262144)
  static ::System::UriSyntaxFlags const BuiltInSyntax;

  /// @brief Field CanonicalizeAsFilePath value: I32(16777216)
  static ::System::UriSyntaxFlags const CanonicalizeAsFilePath;

  /// @brief Field CompressPath value: I32(8388608)
  static ::System::UriSyntaxFlags const CompressPath;

  /// @brief Field ConvertPathSlashes value: I32(4194304)
  static ::System::UriSyntaxFlags const ConvertPathSlashes;

  /// @brief Field FileLikeUri value: I32(8192)
  static ::System::UriSyntaxFlags const FileLikeUri;

  /// @brief Field MailToLikeUri value: I32(16384)
  static ::System::UriSyntaxFlags const MailToLikeUri;

  /// @brief Field MayHaveFragment value: I32(64)
  static ::System::UriSyntaxFlags const MayHaveFragment;

  /// @brief Field MayHavePath value: I32(16)
  static ::System::UriSyntaxFlags const MayHavePath;

  /// @brief Field MayHavePort value: I32(8)
  static ::System::UriSyntaxFlags const MayHavePort;

  /// @brief Field MayHaveQuery value: I32(32)
  static ::System::UriSyntaxFlags const MayHaveQuery;

  /// @brief Field MayHaveUserInfo value: I32(4)
  static ::System::UriSyntaxFlags const MayHaveUserInfo;

  /// @brief Field MustHaveAuthority value: I32(1)
  static ::System::UriSyntaxFlags const MustHaveAuthority;

  /// @brief Field None value: I32(0)
  static ::System::UriSyntaxFlags const None;

  /// @brief Field OptionalAuthority value: I32(2)
  static ::System::UriSyntaxFlags const OptionalAuthority;

  /// @brief Field ParserSchemeOnly value: I32(524288)
  static ::System::UriSyntaxFlags const ParserSchemeOnly;

  /// @brief Field PathIsRooted value: I32(2097152)
  static ::System::UriSyntaxFlags const PathIsRooted;

  /// @brief Field SimpleUserSyntax value: I32(131072)
  static ::System::UriSyntaxFlags const SimpleUserSyntax;

  /// @brief Field UnEscapeDotsAndSlashes value: I32(33554432)
  static ::System::UriSyntaxFlags const UnEscapeDotsAndSlashes;

  /// @brief Field V1_UnknownUri value: I32(65536)
  static ::System::UriSyntaxFlags const V1_UnknownUri;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11058 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::UriSyntaxFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::UriSyntaxFlags, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::UriSyntaxFlags, "System", "UriSyntaxFlags");
