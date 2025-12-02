#pragma once
// IWYU pragma private; include "System/Diagnostics/TraceLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TraceLevel)
// Forward declare root types
namespace System::Diagnostics {
struct TraceLevel;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::TraceLevel);
// Dependencies
namespace System::Diagnostics {
// Is value type: true
// CS Name: System.Diagnostics.TraceLevel
struct CORDL_TYPE TraceLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TraceLevel_Unwrapped
  enum struct __TraceLevel_Unwrapped : int32_t {
    __E_Off = static_cast<int32_t>(0x0),
    __E_Error = static_cast<int32_t>(0x1),
    __E_Warning = static_cast<int32_t>(0x2),
    __E_Info = static_cast<int32_t>(0x3),
    __E_Verbose = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TraceLevel_Unwrapped() const noexcept {
    return static_cast<__TraceLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TraceLevel(int32_t value__) noexcept;

  /// @brief Field Error value: I32(1)
  static ::System::Diagnostics::TraceLevel const Error;

  /// @brief Field Info value: I32(3)
  static ::System::Diagnostics::TraceLevel const Info;

  /// @brief Field Off value: I32(0)
  static ::System::Diagnostics::TraceLevel const Off;

  /// @brief Field Verbose value: I32(4)
  static ::System::Diagnostics::TraceLevel const Verbose;

  /// @brief Field Warning value: I32(2)
  static ::System::Diagnostics::TraceLevel const Warning;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11110 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::TraceLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::TraceLevel, 0x4>, "Size mismatch!");

} // namespace System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::TraceLevel, "System.Diagnostics", "TraceLevel");
