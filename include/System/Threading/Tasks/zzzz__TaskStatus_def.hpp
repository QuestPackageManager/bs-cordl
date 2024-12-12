#pragma once
// IWYU pragma private; include "System/Threading/Tasks/TaskStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TaskStatus)
// Forward declare root types
namespace System::Threading::Tasks {
struct TaskStatus;
}
// Write type traits
MARK_VAL_T(::System::Threading::Tasks::TaskStatus);
// Dependencies
namespace System::Threading::Tasks {
// Is value type: true
// CS Name: System.Threading.Tasks.TaskStatus
struct CORDL_TYPE TaskStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TaskStatus_Unwrapped
  enum struct __TaskStatus_Unwrapped : int32_t {
    __E_Created = static_cast<int32_t>(0x0),
    __E_WaitingForActivation = static_cast<int32_t>(0x1),
    __E_WaitingToRun = static_cast<int32_t>(0x2),
    __E_Running = static_cast<int32_t>(0x3),
    __E_WaitingForChildrenToComplete = static_cast<int32_t>(0x4),
    __E_RanToCompletion = static_cast<int32_t>(0x5),
    __E_Canceled = static_cast<int32_t>(0x6),
    __E_Faulted = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TaskStatus_Unwrapped() const noexcept {
    return static_cast<__TaskStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TaskStatus(int32_t value__) noexcept;

  /// @brief Field Canceled value: I32(6)
  static ::System::Threading::Tasks::TaskStatus const Canceled;

  /// @brief Field Created value: I32(0)
  static ::System::Threading::Tasks::TaskStatus const Created;

  /// @brief Field Faulted value: I32(7)
  static ::System::Threading::Tasks::TaskStatus const Faulted;

  /// @brief Field RanToCompletion value: I32(5)
  static ::System::Threading::Tasks::TaskStatus const RanToCompletion;

  /// @brief Field Running value: I32(3)
  static ::System::Threading::Tasks::TaskStatus const Running;

  /// @brief Field WaitingForActivation value: I32(1)
  static ::System::Threading::Tasks::TaskStatus const WaitingForActivation;

  /// @brief Field WaitingForChildrenToComplete value: I32(4)
  static ::System::Threading::Tasks::TaskStatus const WaitingForChildrenToComplete;

  /// @brief Field WaitingToRun value: I32(2)
  static ::System::Threading::Tasks::TaskStatus const WaitingToRun;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2783 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Tasks::TaskStatus, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskStatus, 0x4>, "Size mismatch!");

} // namespace System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskStatus, "System.Threading.Tasks", "TaskStatus");
