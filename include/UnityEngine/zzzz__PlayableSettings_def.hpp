#pragma once
// IWYU pragma private; include "UnityEngine/PlayableSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PlayableSettings)
namespace UnityEngine::Audio {
class AudioContainerElement;
}
// Forward declare root types
namespace UnityEngine {
struct PlayableSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PlayableSettings);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.PlayableSettings
struct CORDL_TYPE PlayableSettings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableSettings();

  // Ctor Parameters [CppParam { name: "_element_k__BackingField", ty: "::UnityW<::UnityEngine::Audio::AudioContainerElement>", modifiers: "", def_value: None }, CppParam { name:
  // "_scheduledTime_k__BackingField", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "_pitchOffset_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "_volumeOffset_k__BackingField", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "_triggerTimeOffset_k__BackingField", ty: "double_t", modifiers: "", def_value: None }]
  constexpr PlayableSettings(::UnityW<::UnityEngine::Audio::AudioContainerElement> _element_k__BackingField, double_t _scheduledTime_k__BackingField, float_t _pitchOffset_k__BackingField,
                             float_t _volumeOffset_k__BackingField, double_t _triggerTimeOffset_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20544 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field <element>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Audio::AudioContainerElement> _element_k__BackingField;

  /// @brief Field <scheduledTime>k__BackingField, offset: 0x8, size: 0x8, def value: None
  double_t _scheduledTime_k__BackingField;

  /// @brief Field <pitchOffset>k__BackingField, offset: 0x10, size: 0x4, def value: None
  float_t _pitchOffset_k__BackingField;

  /// @brief Field <volumeOffset>k__BackingField, offset: 0x14, size: 0x4, def value: None
  float_t _volumeOffset_k__BackingField;

  /// @brief Field <triggerTimeOffset>k__BackingField, offset: 0x18, size: 0x8, def value: None
  double_t _triggerTimeOffset_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PlayableSettings, _element_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PlayableSettings, _scheduledTime_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PlayableSettings, _pitchOffset_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PlayableSettings, _volumeOffset_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::PlayableSettings, _triggerTimeOffset_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayableSettings, 0x20>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayableSettings, "UnityEngine", "PlayableSettings");
