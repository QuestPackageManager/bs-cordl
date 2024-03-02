#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InternalTaskOptions)
// Forward declare root types
namespace System::Threading::Tasks {
struct InternalTaskOptions;
}
// Write type traits
MARK_VAL_T(::System::Threading::Tasks::InternalTaskOptions);
// Type: System.Threading.Tasks::InternalTaskOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: true
// CS Name: ::System.Threading.Tasks::InternalTaskOptions
struct CORDL_TYPE InternalTaskOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InternalTaskOptions_Unwrapped
  enum struct __InternalTaskOptions_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_InternalOptionsMask = static_cast<int32_t>(0xff00),
    __E_ContinuationTask = static_cast<int32_t>(0x200),
    __E_PromiseTask = static_cast<int32_t>(0x400),
    __E_LazyCancellation = static_cast<int32_t>(0x1000),
    __E_QueuedByRuntime = static_cast<int32_t>(0x2000),
    __E_DoNotDispose = static_cast<int32_t>(0x4000),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InternalTaskOptions_Unwrapped() const noexcept {
    return static_cast<__InternalTaskOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalTaskOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InternalTaskOptions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ContinuationTask value: static_cast<int32_t>(0x200)
  static ::System::Threading::Tasks::InternalTaskOptions const ContinuationTask;

  /// @brief Field DoNotDispose value: static_cast<int32_t>(0x4000)
  static ::System::Threading::Tasks::InternalTaskOptions const DoNotDispose;

  /// @brief Field InternalOptionsMask value: static_cast<int32_t>(0xff00)
  static ::System::Threading::Tasks::InternalTaskOptions const InternalOptionsMask;

  /// @brief Field LazyCancellation value: static_cast<int32_t>(0x1000)
  static ::System::Threading::Tasks::InternalTaskOptions const LazyCancellation;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Threading::Tasks::InternalTaskOptions const None;

  /// @brief Field PromiseTask value: static_cast<int32_t>(0x400)
  static ::System::Threading::Tasks::InternalTaskOptions const PromiseTask;

  /// @brief Field QueuedByRuntime value: static_cast<int32_t>(0x2000)
  static ::System::Threading::Tasks::InternalTaskOptions const QueuedByRuntime;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::InternalTaskOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Threading::Tasks::InternalTaskOptions, value__) == 0x0, "Offset mismatch!");

} // namespace System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::InternalTaskOptions, "System.Threading.Tasks", "InternalTaskOptions");
