#pragma once
// IWYU pragma private; include "System/Threading/Tasks/CausalitySynchronousWork.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CausalitySynchronousWork)
// Forward declare root types
namespace System::Threading::Tasks {
struct CausalitySynchronousWork;
}
// Write type traits
MARK_VAL_T(::System::Threading::Tasks::CausalitySynchronousWork);
// Dependencies
namespace System::Threading::Tasks {
// Is value type: true
// CS Name: System.Threading.Tasks.CausalitySynchronousWork
struct CORDL_TYPE CausalitySynchronousWork {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CausalitySynchronousWork_Unwrapped
  enum struct __CausalitySynchronousWork_Unwrapped : int32_t {
    __E_CompletionNotification = static_cast<int32_t>(0x0),
    __E_ProgressNotification = static_cast<int32_t>(0x1),
    __E_Execution = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CausalitySynchronousWork_Unwrapped() const noexcept {
    return static_cast<__CausalitySynchronousWork_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CausalitySynchronousWork();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CausalitySynchronousWork(int32_t value__) noexcept;

  /// @brief Field CompletionNotification value: I32(0)
  static ::System::Threading::Tasks::CausalitySynchronousWork const CompletionNotification;

  /// @brief Field Execution value: I32(2)
  static ::System::Threading::Tasks::CausalitySynchronousWork const Execution;

  /// @brief Field ProgressNotification value: I32(1)
  static ::System::Threading::Tasks::CausalitySynchronousWork const ProgressNotification;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2822 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Tasks::CausalitySynchronousWork, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::CausalitySynchronousWork, 0x4>, "Size mismatch!");

} // namespace System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::CausalitySynchronousWork, "System.Threading.Tasks", "CausalitySynchronousWork");
