#pragma once
// IWYU pragma private; include "UnityEngine/Audio/IAudioScriptingContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAudioScriptingContext)
// Forward declare root types
namespace UnityEngine::Audio {
class IAudioScriptingContext;
}
// Write type traits
MARK_REF_T(::UnityEngine::Audio::IAudioScriptingContext*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::IAudioScriptingContext*, "UnityEngine.Audio", "IAudioScriptingContext");
// [Obsolete("IAudioScriptingContext has been deprecated. Use ProcessorInstance.IContext instead. (UnityUpgradable) -> ProcessorInstance/IContext", true)]
// Dependencies
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.IAudioScriptingContext
class CORDL_TYPE IAudioScriptingContext {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IAudioScriptingContext", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAudioScriptingContext(IAudioScriptingContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20373 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Audio
