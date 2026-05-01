#pragma once
// IWYU pragma private; include "System/Threading/Tasks/Sources/ValueTaskSourceStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueTaskSourceStatus)
// Forward declare root types
namespace System::Threading::Tasks::Sources {
struct ValueTaskSourceStatus;
}
// Write type traits
MARK_VAL_T(::System::Threading::Tasks::Sources::ValueTaskSourceStatus);
// Dependencies
namespace System::Threading::Tasks::Sources {
// Is value type: true
// CS Name: System.Threading.Tasks.Sources.ValueTaskSourceStatus
struct CORDL_TYPE ValueTaskSourceStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ValueTaskSourceStatus_Unwrapped
  enum struct __ValueTaskSourceStatus_Unwrapped : int32_t {
    __E_Pending = static_cast<int32_t>(0x0),
    __E_Succeeded = static_cast<int32_t>(0x1),
    __E_Faulted = static_cast<int32_t>(0x2),
    __E_Canceled = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ValueTaskSourceStatus_Unwrapped() const noexcept {
    return static_cast<__ValueTaskSourceStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueTaskSourceStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ValueTaskSourceStatus(int32_t value__) noexcept;

  /// @brief Field Canceled value: I32(3)
  static ::System::Threading::Tasks::Sources::ValueTaskSourceStatus const Canceled;

  /// @brief Field Faulted value: I32(2)
  static ::System::Threading::Tasks::Sources::ValueTaskSourceStatus const Faulted;

  /// @brief Field Pending value: I32(0)
  static ::System::Threading::Tasks::Sources::ValueTaskSourceStatus const Pending;

  /// @brief Field Succeeded value: I32(1)
  static ::System::Threading::Tasks::Sources::ValueTaskSourceStatus const Succeeded;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2838 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Tasks::Sources::ValueTaskSourceStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::Sources::ValueTaskSourceStatus, 0x4>, "Size mismatch!");

} // namespace System::Threading::Tasks::Sources
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::Sources::ValueTaskSourceStatus, "System.Threading.Tasks.Sources", "ValueTaskSourceStatus");
