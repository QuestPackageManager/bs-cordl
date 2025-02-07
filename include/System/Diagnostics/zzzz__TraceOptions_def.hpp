#pragma once
// IWYU pragma private; include "System/Diagnostics/TraceOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TraceOptions)
// Forward declare root types
namespace System::Diagnostics {
struct TraceOptions;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::TraceOptions);
// Dependencies
namespace System::Diagnostics {
// Is value type: true
// CS Name: System.Diagnostics.TraceOptions
struct CORDL_TYPE TraceOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TraceOptions_Unwrapped
  enum struct __TraceOptions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_LogicalOperationStack = static_cast<int32_t>(0x1),
    __E_DateTime = static_cast<int32_t>(0x2),
    __E_Timestamp = static_cast<int32_t>(0x4),
    __E_ProcessId = static_cast<int32_t>(0x8),
    __E_ThreadId = static_cast<int32_t>(0x10),
    __E_Callstack = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TraceOptions_Unwrapped() const noexcept {
    return static_cast<__TraceOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TraceOptions(int32_t value__) noexcept;

  /// @brief Field Callstack value: I32(32)
  static ::System::Diagnostics::TraceOptions const Callstack;

  /// @brief Field DateTime value: I32(2)
  static ::System::Diagnostics::TraceOptions const DateTime;

  /// @brief Field LogicalOperationStack value: I32(1)
  static ::System::Diagnostics::TraceOptions const LogicalOperationStack;

  /// @brief Field None value: I32(0)
  static ::System::Diagnostics::TraceOptions const None;

  /// @brief Field ProcessId value: I32(8)
  static ::System::Diagnostics::TraceOptions const ProcessId;

  /// @brief Field ThreadId value: I32(16)
  static ::System::Diagnostics::TraceOptions const ThreadId;

  /// @brief Field Timestamp value: I32(4)
  static ::System::Diagnostics::TraceOptions const Timestamp;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9265 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Diagnostics::TraceOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Diagnostics::TraceOptions, 0x4>, "Size mismatch!");

} // namespace System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::TraceOptions, "System.Diagnostics", "TraceOptions");
