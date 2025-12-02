#pragma once
// IWYU pragma private; include "UnityEngine/ActivePlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_impl.hpp"
#include "UnityEngine/zzzz__PlayableSettings_impl.hpp"
#include "UnityEngine/zzzz__ActivePlayable_def.hpp"
// Ctor Parameters [CppParam { name: "_settings_k__BackingField", ty: "::UnityEngine::PlayableSettings", modifiers: "", def_value: Some("{}") }, CppParam { name: "_clipPlayableHandle_k__BackingField",
// ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ActivePlayable::ActivePlayable(::UnityEngine::PlayableSettings _settings_k__BackingField,
                                                        ::UnityEngine::Playables::PlayableHandle _clipPlayableHandle_k__BackingField) noexcept {
  this->_settings_k__BackingField = _settings_k__BackingField;
  this->_clipPlayableHandle_k__BackingField = _clipPlayableHandle_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::ActivePlayable::ActivePlayable() {}
