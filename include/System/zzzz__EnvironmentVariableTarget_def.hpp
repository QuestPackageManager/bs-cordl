#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentVariableTarget)
// Forward declare root types
namespace System {
struct EnvironmentVariableTarget;
}
// Write type traits
MARK_VAL_T(::System::EnvironmentVariableTarget);
// Type: System::EnvironmentVariableTarget
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2601))
// CS Name: ::System::EnvironmentVariableTarget
struct CORDL_TYPE EnvironmentVariableTarget {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EnvironmentVariableTarget_Unwrapped
  enum struct __EnvironmentVariableTarget_Unwrapped : int32_t {
    __E_Process = static_cast<int32_t>(0x0),
    __E_User = static_cast<int32_t>(0x1),
    __E_Machine = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EnvironmentVariableTarget_Unwrapped() const noexcept {
    return static_cast<__EnvironmentVariableTarget_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EnvironmentVariableTarget(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentVariableTarget();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Process value: static_cast<int32_t>(0x0)
  static ::System::EnvironmentVariableTarget const Process;

  /// @brief Field User value: static_cast<int32_t>(0x1)
  static ::System::EnvironmentVariableTarget const User;

  /// @brief Field Machine value: static_cast<int32_t>(0x2)
  static ::System::EnvironmentVariableTarget const Machine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::EnvironmentVariableTarget, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::EnvironmentVariableTarget, value__) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::EnvironmentVariableTarget, "System", "EnvironmentVariableTarget");
