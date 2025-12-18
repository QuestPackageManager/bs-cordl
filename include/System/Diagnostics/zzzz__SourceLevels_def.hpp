#pragma once
// IWYU pragma private; include "System/Diagnostics/SourceLevels.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SourceLevels)
// Forward declare root types
namespace System::Diagnostics {
struct SourceLevels;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::SourceLevels);
// Dependencies
namespace System::Diagnostics {
// Is value type: true
// CS Name: System.Diagnostics.SourceLevels
struct CORDL_TYPE SourceLevels {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SourceLevels_Unwrapped
  enum struct __SourceLevels_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Critical = static_cast<int32_t>(0x1),
    __E_Error = static_cast<int32_t>(0x3),
    __E_Warning = static_cast<int32_t>(0x7),
    __E_Information = static_cast<int32_t>(0xf),
    __E_Verbose = static_cast<int32_t>(0x1f),
    __E_ActivityTracing = static_cast<int32_t>(0xff00),
    __E_All = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SourceLevels_Unwrapped() const noexcept {
    return static_cast<__SourceLevels_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SourceLevels();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SourceLevels(int32_t value__) noexcept;

  /// @brief Field ActivityTracing value: I32(65280)
  static ::System::Diagnostics::SourceLevels const ActivityTracing;

  /// @brief Field All value: I32(-1)
  static ::System::Diagnostics::SourceLevels const All;

  /// @brief Field Critical value: I32(1)
  static ::System::Diagnostics::SourceLevels const Critical;

  /// @brief Field Error value: I32(3)
  static ::System::Diagnostics::SourceLevels const Error;

  /// @brief Field Information value: I32(15)
  static ::System::Diagnostics::SourceLevels const Information;

  /// @brief Field Off value: I32(0)
  static ::System::Diagnostics::SourceLevels const Off;

  /// @brief Field Verbose value: I32(31)
  static ::System::Diagnostics::SourceLevels const Verbose;

  /// @brief Field Warning value: I32(7)
  static ::System::Diagnostics::SourceLevels const Warning;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11105 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::SourceLevels, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::SourceLevels, 0x4>, "Size mismatch!");

} // namespace System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::SourceLevels, "System.Diagnostics", "SourceLevels");
