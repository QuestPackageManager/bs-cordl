#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TaskCreationOptions)
// Forward declare root types
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
// Write type traits
MARK_VAL_T(::System::Threading::Tasks::TaskCreationOptions);
// Type: System.Threading.Tasks::TaskCreationOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: true
// CS Name: ::System.Threading.Tasks::TaskCreationOptions
struct CORDL_TYPE TaskCreationOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TaskCreationOptions_Unwrapped
  enum struct __TaskCreationOptions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_PreferFairness = static_cast<int32_t>(0x1),
    __E_LongRunning = static_cast<int32_t>(0x2),
    __E_AttachedToParent = static_cast<int32_t>(0x4),
    __E_DenyChildAttach = static_cast<int32_t>(0x8),
    __E_HideScheduler = static_cast<int32_t>(0x10),
    __E_RunContinuationsAsynchronously = static_cast<int32_t>(0x40),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TaskCreationOptions_Unwrapped() const noexcept {
    return static_cast<__TaskCreationOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__TaskCreationOptions_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskCreationOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TaskCreationOptions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AttachedToParent value: static_cast<int32_t>(0x4)
  static ::System::Threading::Tasks::TaskCreationOptions const AttachedToParent;

  /// @brief Field DenyChildAttach value: static_cast<int32_t>(0x8)
  static ::System::Threading::Tasks::TaskCreationOptions const DenyChildAttach;

  /// @brief Field HideScheduler value: static_cast<int32_t>(0x10)
  static ::System::Threading::Tasks::TaskCreationOptions const HideScheduler;

  /// @brief Field LongRunning value: static_cast<int32_t>(0x2)
  static ::System::Threading::Tasks::TaskCreationOptions const LongRunning;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Threading::Tasks::TaskCreationOptions const None;

  /// @brief Field PreferFairness value: static_cast<int32_t>(0x1)
  static ::System::Threading::Tasks::TaskCreationOptions const PreferFairness;

  /// @brief Field RunContinuationsAsynchronously value: static_cast<int32_t>(0x40)
  static ::System::Threading::Tasks::TaskCreationOptions const RunContinuationsAsynchronously;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskCreationOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Threading::Tasks::TaskCreationOptions, value__) == 0x0, "Offset mismatch!");

} // namespace System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskCreationOptions, "System.Threading.Tasks", "TaskCreationOptions");
