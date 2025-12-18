#pragma once
// IWYU pragma private; include "System/ParsingError.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParsingError)
// Forward declare root types
namespace System {
struct ParsingError;
}
// Write type traits
MARK_VAL_T(::System::ParsingError);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.ParsingError
struct CORDL_TYPE ParsingError {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ParsingError_Unwrapped
  enum struct __ParsingError_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_BadFormat = static_cast<int32_t>(0x1),
    __E_BadScheme = static_cast<int32_t>(0x2),
    __E_BadAuthority = static_cast<int32_t>(0x3),
    __E_EmptyUriString = static_cast<int32_t>(0x4),
    __E_LastRelativeUriOkErrIndex = static_cast<int32_t>(0x4),
    __E_SchemeLimit = static_cast<int32_t>(0x5),
    __E_SizeLimit = static_cast<int32_t>(0x6),
    __E_MustRootedPath = static_cast<int32_t>(0x7),
    __E_BadHostName = static_cast<int32_t>(0x8),
    __E_NonEmptyHost = static_cast<int32_t>(0x9),
    __E_BadPort = static_cast<int32_t>(0xa),
    __E_BadAuthorityTerminator = static_cast<int32_t>(0xb),
    __E_CannotCreateRelative = static_cast<int32_t>(0xc),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ParsingError_Unwrapped() const noexcept {
    return static_cast<__ParsingError_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParsingError();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ParsingError(int32_t value__) noexcept;

  /// @brief Field BadAuthority value: I32(3)
  static ::System::ParsingError const BadAuthority;

  /// @brief Field BadAuthorityTerminator value: I32(11)
  static ::System::ParsingError const BadAuthorityTerminator;

  /// @brief Field BadFormat value: I32(1)
  static ::System::ParsingError const BadFormat;

  /// @brief Field BadHostName value: I32(8)
  static ::System::ParsingError const BadHostName;

  /// @brief Field BadPort value: I32(10)
  static ::System::ParsingError const BadPort;

  /// @brief Field BadScheme value: I32(2)
  static ::System::ParsingError const BadScheme;

  /// @brief Field CannotCreateRelative value: I32(12)
  static ::System::ParsingError const CannotCreateRelative;

  /// @brief Field EmptyUriString value: I32(4)
  static ::System::ParsingError const EmptyUriString;

  /// @brief Field LastRelativeUriOkErrIndex value: I32(4)
  static ::System::ParsingError const LastRelativeUriOkErrIndex;

  /// @brief Field MustRootedPath value: I32(7)
  static ::System::ParsingError const MustRootedPath;

  /// @brief Field NonEmptyHost value: I32(9)
  static ::System::ParsingError const NonEmptyHost;

  /// @brief Field None value: I32(0)
  static ::System::ParsingError const None;

  /// @brief Field SchemeLimit value: I32(5)
  static ::System::ParsingError const SchemeLimit;

  /// @brief Field SizeLimit value: I32(6)
  static ::System::ParsingError const SizeLimit;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11049 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::ParsingError, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ParsingError, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::ParsingError, "System", "ParsingError");
