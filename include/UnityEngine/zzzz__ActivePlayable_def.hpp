#pragma once
// IWYU pragma private; include "UnityEngine/ActivePlayable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "UnityEngine/zzzz__PlayableSettings_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ActivePlayable)
// Forward declare root types
namespace UnityEngine {
struct ActivePlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ActivePlayable);
// Dependencies UnityEngine.PlayableSettings, UnityEngine.Playables.PlayableHandle
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.ActivePlayable
struct CORDL_TYPE ActivePlayable {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActivePlayable();

  // Ctor Parameters [CppParam { name: "_settings_k__BackingField", ty: "::UnityEngine::PlayableSettings", modifiers: "", def_value: None }, CppParam { name: "_clipPlayableHandle_k__BackingField", ty:
  // "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
  constexpr ActivePlayable(::UnityEngine::PlayableSettings _settings_k__BackingField, ::UnityEngine::Playables::PlayableHandle _clipPlayableHandle_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20570 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <settings>k__BackingField, offset: 0x0, size: 0x20, def value: None
  ::UnityEngine::PlayableSettings _settings_k__BackingField;

  /// @brief Field <clipPlayableHandle>k__BackingField, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableHandle _clipPlayableHandle_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ActivePlayable, _settings_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ActivePlayable, _clipPlayableHandle_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ActivePlayable, 0x30>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ActivePlayable, "UnityEngine", "ActivePlayable");
