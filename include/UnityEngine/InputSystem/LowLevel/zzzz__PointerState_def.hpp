#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerState)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct PointerState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::PointerState);
// Type: UnityEngine.InputSystem.LowLevel::PointerState
// SizeInfo { instance_size: 36, native_size: 36, calculated_instance_size: 36, calculated_native_size: 50, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6593))
// CS Name: ::UnityEngine.InputSystem.LowLevel::PointerState
struct CORDL_TYPE PointerState {
public:
  // Declarations
  __declspec(property(get = get_format))::UnityEngine::InputSystem::Utilities::FourCC format;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*();

  /// @brief Method get_kFormat addr 0x2968dd4 size 0x30 virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_kFormat();

  /// @brief Method get_format addr 0x2968e04 size 0x30 virtual true final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_format();

  // Ctor Parameters [CppParam { name: "pointerId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None },
  // CppParam { name: "delta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "pressure", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "radius",
  // ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "buttons", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr PointerState(uint32_t pointerId, ::UnityEngine::Vector2 position, ::UnityEngine::Vector2 delta, float_t pressure, ::UnityEngine::Vector2 radius, uint16_t buttons) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerState();

  /// @brief Field pointerId, offset: 0x0, size: 0x4, def value: None
  uint32_t pointerId;

  /// @brief Field position, offset: 0x4, size: 0x8, def value: None
  ::UnityEngine::Vector2 position;

  /// @brief Field delta, offset: 0xc, size: 0x8, def value: None
  ::UnityEngine::Vector2 delta;

  /// @brief Field pressure, offset: 0x14, size: 0x4, def value: None
  float_t pressure;

  /// @brief Field radius, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Vector2 radius;

  /// @brief Field buttons, offset: 0x20, size: 0x2, def value: None
  uint16_t buttons;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::PointerState, 0x24>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::PointerState, pointerId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::PointerState, position) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::PointerState, delta) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::PointerState, pressure) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::PointerState, radius) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::PointerState, buttons) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::PointerState, "UnityEngine.InputSystem.LowLevel", "PointerState");
