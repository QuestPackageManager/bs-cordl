#pragma once
// IWYU pragma private; include "System/Runtime/TraceEventLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TraceEventLevel)
// Forward declare root types
namespace System::Runtime {
struct TraceEventLevel;
}
// Write type traits
MARK_VAL_T(::System::Runtime::TraceEventLevel);
// Dependencies
namespace System::Runtime {
// Is value type: true
// CS Name: System.Runtime.TraceEventLevel
struct CORDL_TYPE TraceEventLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TraceEventLevel_Unwrapped
  enum struct __TraceEventLevel_Unwrapped : int32_t {
    __E_LogAlways = static_cast<int32_t>(0x0),
    __E_Critical = static_cast<int32_t>(0x1),
    __E_Error = static_cast<int32_t>(0x2),
    __E_Warning = static_cast<int32_t>(0x3),
    __E_Informational = static_cast<int32_t>(0x4),
    __E_Verbose = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TraceEventLevel_Unwrapped() const noexcept {
    return static_cast<__TraceEventLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceEventLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TraceEventLevel(int32_t value__) noexcept;

  /// @brief Field Critical value: I32(1)
  static ::System::Runtime::TraceEventLevel const Critical;

  /// @brief Field Error value: I32(2)
  static ::System::Runtime::TraceEventLevel const Error;

  /// @brief Field Informational value: I32(4)
  static ::System::Runtime::TraceEventLevel const Informational;

  /// @brief Field LogAlways value: I32(0)
  static ::System::Runtime::TraceEventLevel const LogAlways;

  /// @brief Field Verbose value: I32(5)
  static ::System::Runtime::TraceEventLevel const Verbose;

  /// @brief Field Warning value: I32(3)
  static ::System::Runtime::TraceEventLevel const Warning;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21115 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::TraceEventLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::TraceEventLevel, 0x4>, "Size mismatch!");

} // namespace System::Runtime
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::TraceEventLevel, "System.Runtime", "TraceEventLevel");
