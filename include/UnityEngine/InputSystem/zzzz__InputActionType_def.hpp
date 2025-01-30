#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionType)
// Forward declare root types
namespace UnityEngine::InputSystem {
struct InputActionType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::InputActionType);
// Dependencies
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionType
struct CORDL_TYPE InputActionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputActionType_Unwrapped
  enum struct __InputActionType_Unwrapped : int32_t {
    __E_Value = static_cast<int32_t>(0x0),
    __E_Button = static_cast<int32_t>(0x1),
    __E_PassThrough = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputActionType_Unwrapped() const noexcept {
    return static_cast<__InputActionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputActionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputActionType(int32_t value__) noexcept;

  /// @brief Field Button value: I32(1)
  static ::UnityEngine::InputSystem::InputActionType const Button;

  /// @brief Field PassThrough value: I32(2)
  static ::UnityEngine::InputSystem::InputActionType const PassThrough;

  /// @brief Field Value value: I32(0)
  static ::UnityEngine::InputSystem::InputActionType const Value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6586 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputActionType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputActionType, "UnityEngine.InputSystem", "InputActionType");
