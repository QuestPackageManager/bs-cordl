#pragma once
// IWYU pragma private; include "System/Threading/Tasks/TaskContinuationOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TaskContinuationOptions)
// Forward declare root types
namespace System::Threading::Tasks {
struct TaskContinuationOptions;
}
// Write type traits
MARK_VAL_T(::System::Threading::Tasks::TaskContinuationOptions);
// Dependencies
namespace System::Threading::Tasks {
// Is value type: true
// CS Name: System.Threading.Tasks.TaskContinuationOptions
struct CORDL_TYPE TaskContinuationOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TaskContinuationOptions_Unwrapped
  enum struct __TaskContinuationOptions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_PreferFairness = static_cast<int32_t>(0x1),
    __E_LongRunning = static_cast<int32_t>(0x2),
    __E_AttachedToParent = static_cast<int32_t>(0x4),
    __E_DenyChildAttach = static_cast<int32_t>(0x8),
    __E_HideScheduler = static_cast<int32_t>(0x10),
    __E_LazyCancellation = static_cast<int32_t>(0x20),
    __E_RunContinuationsAsynchronously = static_cast<int32_t>(0x40),
    __E_NotOnRanToCompletion = static_cast<int32_t>(0x10000),
    __E_NotOnFaulted = static_cast<int32_t>(0x20000),
    __E_NotOnCanceled = static_cast<int32_t>(0x40000),
    __E_OnlyOnRanToCompletion = static_cast<int32_t>(0x60000),
    __E_OnlyOnFaulted = static_cast<int32_t>(0x50000),
    __E_OnlyOnCanceled = static_cast<int32_t>(0x30000),
    __E_ExecuteSynchronously = static_cast<int32_t>(0x80000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TaskContinuationOptions_Unwrapped() const noexcept {
    return static_cast<__TaskContinuationOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskContinuationOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TaskContinuationOptions(int32_t value__) noexcept;

  /// @brief Field AttachedToParent value: I32(4)
  static ::System::Threading::Tasks::TaskContinuationOptions const AttachedToParent;

  /// @brief Field DenyChildAttach value: I32(8)
  static ::System::Threading::Tasks::TaskContinuationOptions const DenyChildAttach;

  /// @brief Field ExecuteSynchronously value: I32(524288)
  static ::System::Threading::Tasks::TaskContinuationOptions const ExecuteSynchronously;

  /// @brief Field HideScheduler value: I32(16)
  static ::System::Threading::Tasks::TaskContinuationOptions const HideScheduler;

  /// @brief Field LazyCancellation value: I32(32)
  static ::System::Threading::Tasks::TaskContinuationOptions const LazyCancellation;

  /// @brief Field LongRunning value: I32(2)
  static ::System::Threading::Tasks::TaskContinuationOptions const LongRunning;

  /// @brief Field None value: I32(0)
  static ::System::Threading::Tasks::TaskContinuationOptions const None;

  /// @brief Field NotOnCanceled value: I32(262144)
  static ::System::Threading::Tasks::TaskContinuationOptions const NotOnCanceled;

  /// @brief Field NotOnFaulted value: I32(131072)
  static ::System::Threading::Tasks::TaskContinuationOptions const NotOnFaulted;

  /// @brief Field NotOnRanToCompletion value: I32(65536)
  static ::System::Threading::Tasks::TaskContinuationOptions const NotOnRanToCompletion;

  /// @brief Field OnlyOnCanceled value: I32(196608)
  static ::System::Threading::Tasks::TaskContinuationOptions const OnlyOnCanceled;

  /// @brief Field OnlyOnFaulted value: I32(327680)
  static ::System::Threading::Tasks::TaskContinuationOptions const OnlyOnFaulted;

  /// @brief Field OnlyOnRanToCompletion value: I32(393216)
  static ::System::Threading::Tasks::TaskContinuationOptions const OnlyOnRanToCompletion;

  /// @brief Field PreferFairness value: I32(1)
  static ::System::Threading::Tasks::TaskContinuationOptions const PreferFairness;

  /// @brief Field RunContinuationsAsynchronously value: I32(64)
  static ::System::Threading::Tasks::TaskContinuationOptions const RunContinuationsAsynchronously;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2808 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Tasks::TaskContinuationOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskContinuationOptions, 0x4>, "Size mismatch!");

} // namespace System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskContinuationOptions, "System.Threading.Tasks", "TaskContinuationOptions");
