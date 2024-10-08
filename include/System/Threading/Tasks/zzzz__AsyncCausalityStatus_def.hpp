#pragma once
// IWYU pragma private; include "System/Threading/Tasks/AsyncCausalityStatus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncCausalityStatus)
// Forward declare root types
namespace System::Threading::Tasks {
struct AsyncCausalityStatus;
}
// Write type traits
MARK_VAL_T(::System::Threading::Tasks::AsyncCausalityStatus);
// Type: System.Threading.Tasks::AsyncCausalityStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: true
// CS Name: ::System.Threading.Tasks::AsyncCausalityStatus
struct CORDL_TYPE AsyncCausalityStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AsyncCausalityStatus_Unwrapped
  enum struct __AsyncCausalityStatus_Unwrapped : int32_t {
    __E_Started = static_cast<int32_t>(0x0),
    __E_Completed = static_cast<int32_t>(0x1),
    __E_Canceled = static_cast<int32_t>(0x2),
    __E_Error = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AsyncCausalityStatus_Unwrapped() const noexcept {
    return static_cast<__AsyncCausalityStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncCausalityStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AsyncCausalityStatus(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Canceled value: static_cast<int32_t>(0x2)
  static ::System::Threading::Tasks::AsyncCausalityStatus const Canceled;

  /// @brief Field Completed value: static_cast<int32_t>(0x1)
  static ::System::Threading::Tasks::AsyncCausalityStatus const Completed;

  /// @brief Field Error value: static_cast<int32_t>(0x3)
  static ::System::Threading::Tasks::AsyncCausalityStatus const Error;

  /// @brief Field Started value: static_cast<int32_t>(0x0)
  static ::System::Threading::Tasks::AsyncCausalityStatus const Started;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2820 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::AsyncCausalityStatus, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Threading::Tasks::AsyncCausalityStatus, value__) == 0x0, "Offset mismatch!");

} // namespace System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::AsyncCausalityStatus, "System.Threading.Tasks", "AsyncCausalityStatus");
