#pragma once
// IWYU pragma private; include "System/Diagnostics/Tracing/EventLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventLevel)
// Forward declare root types
namespace System::Diagnostics::Tracing {
struct EventLevel;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::Tracing::EventLevel);
// Dependencies
namespace System::Diagnostics::Tracing {
// Is value type: true
// CS Name: System.Diagnostics.Tracing.EventLevel
struct CORDL_TYPE EventLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EventLevel_Unwrapped
  enum struct __EventLevel_Unwrapped : int32_t {
    __E_LogAlways = static_cast<int32_t>(0x0),
    __E_Critical = static_cast<int32_t>(0x1),
    __E_Error = static_cast<int32_t>(0x2),
    __E_Warning = static_cast<int32_t>(0x3),
    __E_Informational = static_cast<int32_t>(0x4),
    __E_Verbose = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EventLevel_Unwrapped() const noexcept {
    return static_cast<__EventLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventLevel(int32_t value__) noexcept;

  /// @brief Field Critical value: I32(1)
  static ::System::Diagnostics::Tracing::EventLevel const Critical;

  /// @brief Field Error value: I32(2)
  static ::System::Diagnostics::Tracing::EventLevel const Error;

  /// @brief Field Informational value: I32(4)
  static ::System::Diagnostics::Tracing::EventLevel const Informational;

  /// @brief Field LogAlways value: I32(0)
  static ::System::Diagnostics::Tracing::EventLevel const LogAlways;

  /// @brief Field Verbose value: I32(5)
  static ::System::Diagnostics::Tracing::EventLevel const Verbose;

  /// @brief Field Warning value: I32(3)
  static ::System::Diagnostics::Tracing::EventLevel const Warning;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3670 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::Tracing::EventLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Tracing::EventLevel, 0x4>, "Size mismatch!");

} // namespace System::Diagnostics::Tracing
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventLevel, "System.Diagnostics.Tracing", "EventLevel");
