#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/PointerState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerState)
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct PointerState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::PointerState);
// Dependencies UnityEngine.Vector2
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.PointerState
struct CORDL_TYPE PointerState {
public:
  // Declarations
  __declspec(property(get = get_format)) ::UnityEngine::InputSystem::Utilities::FourCC format;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*();

  /// @brief Method get_format, addr 0x63f7bf0, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_format();

  /// @brief Method get_kFormat, addr 0x63f7be4, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_kFormat();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerState();

  // Ctor Parameters [CppParam { name: "pointerId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None },
  // CppParam { name: "delta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "pressure", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "radius",
  // ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "buttons", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "displayIndex", ty: "uint16_t",
  // modifiers: "", def_value: None }]
  constexpr PointerState(uint32_t pointerId, ::UnityEngine::Vector2 position, ::UnityEngine::Vector2 delta, float_t pressure, ::UnityEngine::Vector2 radius, uint16_t buttons,
                         uint16_t displayIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8979 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

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

  /// @brief Field displayIndex, offset: 0x22, size: 0x2, def value: None
  uint16_t displayIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::PointerState, pointerId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::PointerState, position) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::PointerState, delta) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::PointerState, pressure) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::PointerState, radius) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::PointerState, buttons) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::LowLevel::PointerState, displayIndex) == 0x22, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::PointerState, 0x24>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::PointerState, "UnityEngine.InputSystem.LowLevel", "PointerState");
