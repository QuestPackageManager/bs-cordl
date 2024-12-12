#pragma once
// IWYU pragma private; include "System/Runtime/ConstrainedExecution/Consistency.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Consistency)
// Forward declare root types
namespace System::Runtime::ConstrainedExecution {
struct Consistency;
}
// Write type traits
MARK_VAL_T(::System::Runtime::ConstrainedExecution::Consistency);
// Dependencies
namespace System::Runtime::ConstrainedExecution {
// Is value type: true
// CS Name: System.Runtime.ConstrainedExecution.Consistency
struct CORDL_TYPE Consistency {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Consistency_Unwrapped
  enum struct __Consistency_Unwrapped : int32_t {
    __E_MayCorruptProcess = static_cast<int32_t>(0x0),
    __E_MayCorruptAppDomain = static_cast<int32_t>(0x1),
    __E_MayCorruptInstance = static_cast<int32_t>(0x2),
    __E_WillNotCorruptState = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Consistency_Unwrapped() const noexcept {
    return static_cast<__Consistency_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Consistency();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Consistency(int32_t value__) noexcept;

  /// @brief Field MayCorruptAppDomain value: I32(1)
  static ::System::Runtime::ConstrainedExecution::Consistency const MayCorruptAppDomain;

  /// @brief Field MayCorruptInstance value: I32(2)
  static ::System::Runtime::ConstrainedExecution::Consistency const MayCorruptInstance;

  /// @brief Field MayCorruptProcess value: I32(0)
  static ::System::Runtime::ConstrainedExecution::Consistency const MayCorruptProcess;

  /// @brief Field WillNotCorruptState value: I32(3)
  static ::System::Runtime::ConstrainedExecution::Consistency const WillNotCorruptState;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3351 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::ConstrainedExecution::Consistency, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::ConstrainedExecution::Consistency, 0x4>, "Size mismatch!");

} // namespace System::Runtime::ConstrainedExecution
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::ConstrainedExecution::Consistency, "System.Runtime.ConstrainedExecution", "Consistency");
