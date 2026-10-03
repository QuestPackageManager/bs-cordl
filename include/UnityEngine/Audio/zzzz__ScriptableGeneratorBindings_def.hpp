#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ScriptableGeneratorBindings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ScriptableGeneratorBindings)
namespace UnityEngine::Audio {
struct ControlHeader;
}
namespace UnityEngine::Audio {
struct GeneratorInstance_GeneratorHeader;
}
namespace UnityEngine::Audio {
struct GeneratorInstance;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_InitializationFlags;
}
namespace UnityEngine {
struct AudioConfiguration;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Audio {
class ScriptableGeneratorBindings;
}
// Write type traits
MARK_REF_T(::UnityEngine::Audio::ScriptableGeneratorBindings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ScriptableGeneratorBindings*, "UnityEngine.Audio", "ScriptableGeneratorBindings");
// [NativeHeader("Modules/Audio/Public/ScriptableProcessors/ScriptBindings/ScriptableProcessor.bindings.h")]
// Dependencies System.Object
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.ScriptableGeneratorBindings
class CORDL_TYPE ScriptableGeneratorBindings : public ::System::Object {
public:
  // Declarations
  /// @brief Method InitializeGeneratorHandle, addr 0x6eac8c0, size 0x5c, virtual false, abstract: false, final false
  static inline void InitializeGeneratorHandle(::UnityEngine::Audio::GeneratorInstance_GeneratorHeader* header, ::UnityEngine::Audio::ControlHeader* control,
                                               ::UnityEngine::AudioConfiguration* nestedConfiguration, ::UnityEngine::Audio::ProcessorInstance_InitializationFlags flags);

  /// [RequiredByNativeCode(GenerateProxy = true)]
  /// @brief Method InstantiateGeneratorFromObject, addr 0x6eac120, size 0x7a0, virtual false, abstract: false, final false
  static inline void InstantiateGeneratorFromObject(::UnityEngine::Object* generatorObjectDefinition, ::by_ref<::UnityEngine::Audio::ControlHeader> control,
                                                    ::by_ref<::UnityEngine::Audio::GeneratorInstance> runtimeHandle);

  /// [NativeMethod(Name = "audio::InitializeGeneratorHandle", IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method InternalInitializeGeneratorHandle, addr 0x6eac91c, size 0x5c, virtual false, abstract: false, final false
  static inline void InternalInitializeGeneratorHandle(void* header, void* control, ::UnityEngine::AudioConfiguration* nestedConfiguration,
                                                       ::UnityEngine::Audio::ProcessorInstance_InitializationFlags flags);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableGeneratorBindings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableGeneratorBindings", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableGeneratorBindings(ScriptableGeneratorBindings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableGeneratorBindings", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableGeneratorBindings(ScriptableGeneratorBindings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20390 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Audio::ScriptableGeneratorBindings) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Audio
