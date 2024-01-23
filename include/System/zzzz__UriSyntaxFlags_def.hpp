#pragma once
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
// Type: System::UriSyntaxFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8890))
// CS Name: ::System::UriSyntaxFlags
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UriSyntaxFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr UriSyntaxFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::UriSyntaxFlags const None;

  /// @brief Field MustHaveAuthority value: static_cast<int32_t>(0x1)
  static ::System::UriSyntaxFlags const MustHaveAuthority;

  /// @brief Field OptionalAuthority value: static_cast<int32_t>(0x2)
  static ::System::UriSyntaxFlags const OptionalAuthority;

  /// @brief Field MayHaveUserInfo value: static_cast<int32_t>(0x4)
  static ::System::UriSyntaxFlags const MayHaveUserInfo;

  /// @brief Field MayHavePort value: static_cast<int32_t>(0x8)
  static ::System::UriSyntaxFlags const MayHavePort;

  /// @brief Field MayHavePath value: static_cast<int32_t>(0x10)
  static ::System::UriSyntaxFlags const MayHavePath;

  /// @brief Field MayHaveQuery value: static_cast<int32_t>(0x20)
  static ::System::UriSyntaxFlags const MayHaveQuery;

  /// @brief Field MayHaveFragment value: static_cast<int32_t>(0x40)
  static ::System::UriSyntaxFlags const MayHaveFragment;

  /// @brief Field AllowEmptyHost value: static_cast<int32_t>(0x80)
  static ::System::UriSyntaxFlags const AllowEmptyHost;

  /// @brief Field AllowUncHost value: static_cast<int32_t>(0x100)
  static ::System::UriSyntaxFlags const AllowUncHost;

  /// @brief Field AllowDnsHost value: static_cast<int32_t>(0x200)
  static ::System::UriSyntaxFlags const AllowDnsHost;

  /// @brief Field AllowIPv4Host value: static_cast<int32_t>(0x400)
  static ::System::UriSyntaxFlags const AllowIPv4Host;

  /// @brief Field AllowIPv6Host value: static_cast<int32_t>(0x800)
  static ::System::UriSyntaxFlags const AllowIPv6Host;

  /// @brief Field AllowAnInternetHost value: static_cast<int32_t>(0xe00)
  static ::System::UriSyntaxFlags const AllowAnInternetHost;

  /// @brief Field AllowAnyOtherHost value: static_cast<int32_t>(0x1000)
  static ::System::UriSyntaxFlags const AllowAnyOtherHost;

  /// @brief Field FileLikeUri value: static_cast<int32_t>(0x2000)
  static ::System::UriSyntaxFlags const FileLikeUri;

  /// @brief Field MailToLikeUri value: static_cast<int32_t>(0x4000)
  static ::System::UriSyntaxFlags const MailToLikeUri;

  /// @brief Field V1_UnknownUri value: static_cast<int32_t>(0x10000)
  static ::System::UriSyntaxFlags const V1_UnknownUri;

  /// @brief Field SimpleUserSyntax value: static_cast<int32_t>(0x20000)
  static ::System::UriSyntaxFlags const SimpleUserSyntax;

  /// @brief Field BuiltInSyntax value: static_cast<int32_t>(0x40000)
  static ::System::UriSyntaxFlags const BuiltInSyntax;

  /// @brief Field ParserSchemeOnly value: static_cast<int32_t>(0x80000)
  static ::System::UriSyntaxFlags const ParserSchemeOnly;

  /// @brief Field AllowDOSPath value: static_cast<int32_t>(0x100000)
  static ::System::UriSyntaxFlags const AllowDOSPath;

  /// @brief Field PathIsRooted value: static_cast<int32_t>(0x200000)
  static ::System::UriSyntaxFlags const PathIsRooted;

  /// @brief Field ConvertPathSlashes value: static_cast<int32_t>(0x400000)
  static ::System::UriSyntaxFlags const ConvertPathSlashes;

  /// @brief Field CompressPath value: static_cast<int32_t>(0x800000)
  static ::System::UriSyntaxFlags const CompressPath;

  /// @brief Field CanonicalizeAsFilePath value: static_cast<int32_t>(0x1000000)
  static ::System::UriSyntaxFlags const CanonicalizeAsFilePath;

  /// @brief Field UnEscapeDotsAndSlashes value: static_cast<int32_t>(0x2000000)
  static ::System::UriSyntaxFlags const UnEscapeDotsAndSlashes;

  /// @brief Field AllowIdn value: static_cast<int32_t>(0x4000000)
  static ::System::UriSyntaxFlags const AllowIdn;

  /// @brief Field AllowIriParsing value: static_cast<int32_t>(0x10000000)
  static ::System::UriSyntaxFlags const AllowIriParsing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UriSyntaxFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::UriSyntaxFlags, value__) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::UriSyntaxFlags, "System", "UriSyntaxFlags");
