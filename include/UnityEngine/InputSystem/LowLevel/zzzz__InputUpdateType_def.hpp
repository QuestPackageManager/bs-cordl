#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputUpdateType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputUpdateType)
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::InputUpdateType);
// Type: UnityEngine.InputSystem.LowLevel::InputUpdateType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.LowLevel::InputUpdateType
struct CORDL_TYPE InputUpdateType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InputUpdateType_Unwrapped
  enum struct __InputUpdateType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Dynamic = static_cast<int32_t>(0x1),
    __E_Fixed = static_cast<int32_t>(0x2),
    __E_BeforeRender = static_cast<int32_t>(0x4),
    __E_Editor = static_cast<int32_t>(0x8),
    __E_Manual = static_cast<int32_t>(0x10),
    __E_Default = static_cast<int32_t>(0xb),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InputUpdateType_Unwrapped() const noexcept {
    return static_cast<__InputUpdateType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputUpdateType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InputUpdateType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field BeforeRender value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::LowLevel::InputUpdateType const BeforeRender;

  /// @brief Field Default value: static_cast<int32_t>(0xb)
  static ::UnityEngine::InputSystem::LowLevel::InputUpdateType const Default;

  /// @brief Field Dynamic value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::LowLevel::InputUpdateType const Dynamic;

  /// @brief Field Editor value: static_cast<int32_t>(0x8)
  static ::UnityEngine::InputSystem::LowLevel::InputUpdateType const Editor;

  /// @brief Field Fixed value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::LowLevel::InputUpdateType const Fixed;

  /// @brief Field Manual value: static_cast<int32_t>(0x10)
  static ::UnityEngine::InputSystem::LowLevel::InputUpdateType const Manual;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::LowLevel::InputUpdateType const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6933 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::InputUpdateType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::InputUpdateType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputUpdateType, "UnityEngine.InputSystem.LowLevel", "InputUpdateType");
