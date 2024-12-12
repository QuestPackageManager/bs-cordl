#pragma once
// IWYU pragma private; include "System/PlatformID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformID)
// Forward declare root types
namespace System {
struct PlatformID;
}
// Write type traits
MARK_VAL_T(::System::PlatformID);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.PlatformID
struct CORDL_TYPE PlatformID {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PlatformID_Unwrapped
  enum struct __PlatformID_Unwrapped : int32_t {
    __E_Win32S = static_cast<int32_t>(0x0),
    __E_Win32Windows = static_cast<int32_t>(0x1),
    __E_Win32NT = static_cast<int32_t>(0x2),
    __E_WinCE = static_cast<int32_t>(0x3),
    __E_Unix = static_cast<int32_t>(0x4),
    __E_Xbox = static_cast<int32_t>(0x5),
    __E_MacOSX = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PlatformID_Unwrapped() const noexcept {
    return static_cast<__PlatformID_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformID();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PlatformID(int32_t value__) noexcept;

  /// @brief Field MacOSX value: I32(6)
  static ::System::PlatformID const MacOSX;

  /// @brief Field Unix value: I32(4)
  static ::System::PlatformID const Unix;

  /// @brief Field Win32NT value: I32(2)
  static ::System::PlatformID const Win32NT;

  /// @brief Field Win32S value: I32(0)
  static ::System::PlatformID const Win32S;

  /// @brief Field Win32Windows value: I32(1)
  static ::System::PlatformID const Win32Windows;

  /// @brief Field WinCE value: I32(3)
  static ::System::PlatformID const WinCE;

  /// @brief Field Xbox value: I32(5)
  static ::System::PlatformID const Xbox;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2616 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::PlatformID, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::PlatformID, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::PlatformID, "System", "PlatformID");
