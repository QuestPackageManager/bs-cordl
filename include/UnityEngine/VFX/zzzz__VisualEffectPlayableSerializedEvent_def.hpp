#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectPlayableSerializedEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/zzzz__EventAttributes_def.hpp"
#include "UnityEngine/VFX/zzzz__PlayableTimeSpace_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(VisualEffectPlayableSerializedEvent)
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
// Forward declare root types
namespace UnityEngine::VFX {
struct VisualEffectPlayableSerializedEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::VFX::VisualEffectPlayableSerializedEvent);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectPlayableSerializedEvent, "UnityEngine.VFX", "VisualEffectPlayableSerializedEvent");
// Dependencies UnityEngine.Color, UnityEngine.VFX.EventAttributes, UnityEngine.VFX.PlayableTimeSpace
namespace UnityEngine::VFX {
// Is value type: true
// CS Name: UnityEngine.VFX.VisualEffectPlayableSerializedEvent
struct CORDL_TYPE VisualEffectPlayableSerializedEvent {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VisualEffectPlayableSerializedEvent();

  // Ctor Parameters [CppParam { name: "editorColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value: None }, CppParam
  // { name: "timeSpace", ty: "::UnityEngine::VFX::PlayableTimeSpace", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::UnityEngine::VFX::Utility::ExposedProperty*", modifiers: "",
  // def_value: None }, CppParam { name: "eventAttributes", ty: "::UnityEngine::VFX::EventAttributes", modifiers: "", def_value: None }]
  constexpr VisualEffectPlayableSerializedEvent(::UnityEngine::Color editorColor, double_t time, ::UnityEngine::VFX::PlayableTimeSpace timeSpace, ::UnityEngine::VFX::Utility::ExposedProperty* name,
                                                ::UnityEngine::VFX::EventAttributes eventAttributes) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19923 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field editorColor, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Color editorColor;

  /// @brief Field time, offset: 0x10, size: 0x8, def value: None
  double_t time;

  /// @brief Field timeSpace, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::VFX::PlayableTimeSpace timeSpace;

  /// @brief Field name, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* name;

  /// @brief Field eventAttributes, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::VFX::EventAttributes eventAttributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VisualEffectPlayableSerializedEvent, editorColor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectPlayableSerializedEvent, time) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectPlayableSerializedEvent, timeSpace) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectPlayableSerializedEvent, name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectPlayableSerializedEvent, eventAttributes) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VisualEffectPlayableSerializedEvent) == 0x30, "Size mismatch!");

} // namespace UnityEngine::VFX
