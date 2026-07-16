#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectPlayableSerializedEventNoColor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/zzzz__EventAttributes_def.hpp"
#include "UnityEngine/VFX/zzzz__PlayableTimeSpace_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(VisualEffectPlayableSerializedEventNoColor)
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX {
struct VisualEffectPlayableSerializedEvent;
}
// Forward declare root types
namespace UnityEngine::VFX {
struct VisualEffectPlayableSerializedEventNoColor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor, "UnityEngine.VFX", "VisualEffectPlayableSerializedEventNoColor");
// Dependencies UnityEngine.VFX.EventAttributes, UnityEngine.VFX.PlayableTimeSpace
namespace UnityEngine::VFX {
// Is value type: true
// CS Name: UnityEngine.VFX.VisualEffectPlayableSerializedEventNoColor
struct CORDL_TYPE VisualEffectPlayableSerializedEventNoColor {
public:
  // Declarations
  /// @brief Method op_Implicit, addr 0x69cd074, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::VFX::VisualEffectPlayableSerializedEvent
  op_Implicit___UnityEngine__VFX__VisualEffectPlayableSerializedEvent(::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor evt);

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectPlayableSerializedEventNoColor();

  // Ctor Parameters [CppParam { name: "time", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "timeSpace", ty: "::UnityEngine::VFX::PlayableTimeSpace", modifiers: "", def_value:
  // None }, CppParam { name: "name", ty: "::UnityEngine::VFX::Utility::ExposedProperty*", modifiers: "", def_value: None }, CppParam { name: "eventAttributes", ty:
  // "::UnityEngine::VFX::EventAttributes", modifiers: "", def_value: None }]
  constexpr VisualEffectPlayableSerializedEventNoColor(double_t time, ::UnityEngine::VFX::PlayableTimeSpace timeSpace, ::UnityEngine::VFX::Utility::ExposedProperty* name,
                                                       ::UnityEngine::VFX::EventAttributes eventAttributes) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19924 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field time, offset: 0x0, size: 0x8, def value: None
  double_t time;

  /// @brief Field timeSpace, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::VFX::PlayableTimeSpace timeSpace;

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* name;

  /// @brief Field eventAttributes, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::VFX::EventAttributes eventAttributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor, time) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor, timeSpace) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor, name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor, eventAttributes) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VisualEffectPlayableSerializedEventNoColor) == 0x20, "Size mismatch!");

} // namespace UnityEngine::VFX
