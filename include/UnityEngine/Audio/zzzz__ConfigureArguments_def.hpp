#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ConfigureArguments.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioConfiguration_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ConfigureArguments)
namespace UnityEngine::Audio {
struct ControlHeader;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct ConfigureArguments;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::ConfigureArguments);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ConfigureArguments, "UnityEngine.Audio", "ConfigureArguments");
// Dependencies UnityEngine.AudioConfiguration
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ConfigureArguments
struct CORDL_TYPE ConfigureArguments {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfigureArguments();

  // Ctor Parameters [CppParam { name: "Now", ty: "::UnityEngine::AudioConfiguration", modifiers: "", def_value: None, comment: None }, CppParam { name: "ControlContext", ty:
  // "::UnityEngine::Audio::ControlHeader*", modifiers: "", def_value: None, comment: None }]
  constexpr ConfigureArguments(::UnityEngine::AudioConfiguration Now, ::UnityEngine::Audio::ControlHeader* ControlContext) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20394 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field Now, offset: 0x0, size: 0x14, def value: None
  ::UnityEngine::AudioConfiguration Now;

  /// @brief Field ControlContext, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Audio::ControlHeader* ControlContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::ConfigureArguments, Now) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::ConfigureArguments, ControlContext) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::ConfigureArguments) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Audio
