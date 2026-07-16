#pragma once
// IWYU pragma private; include "GlobalNamespace/PersistentAudioNoiseController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PersistentAudioNoiseController)
namespace GlobalNamespace {
struct GameScenesManager_SceneTransitionType;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class ScenesTransitionSetupData;
}
namespace GlobalNamespace {
class ShaderWarmupScenesTransitionSetupData;
}
namespace UnityEngine {
class AudioSource;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class PersistentAudioNoiseController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PersistentAudioNoiseController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PersistentAudioNoiseController*, "", "PersistentAudioNoiseController");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PersistentAudioNoiseController
class CORDL_TYPE PersistentAudioNoiseController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _audioSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__audioSource, put = __cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource> _audioSource;

  /// @brief Field _gameScenesManager, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _shaderWarmupScenesTransitionSetupData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__shaderWarmupScenesTransitionSetupData,
                      put = __cordl_internal_set__shaderWarmupScenesTransitionSetupData)) ::GlobalNamespace::ShaderWarmupScenesTransitionSetupData* _shaderWarmupScenesTransitionSetupData;

  /// @brief Method HandleTransitionDidFinish, addr 0x58bbd24, size 0x64, virtual false, abstract: false, final false
  inline void HandleTransitionDidFinish(::GlobalNamespace::GameScenesManager_SceneTransitionType transitionType, ::GlobalNamespace::ScenesTransitionSetupData* transitionSetupData,
                                        ::Zenject::DiContainer* diContainer);

  static inline ::GlobalNamespace::PersistentAudioNoiseController* New_ctor();

  /// @brief Method OnDestroy, addr 0x58bbc10, size 0x114, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnValidate, addr 0x58bbd88, size 0xe8, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method Start, addr 0x58bbb80, size 0x90, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::GlobalNamespace::ShaderWarmupScenesTransitionSetupData* const& __cordl_internal_get__shaderWarmupScenesTransitionSetupData() const;

  constexpr ::GlobalNamespace::ShaderWarmupScenesTransitionSetupData*& __cordl_internal_get__shaderWarmupScenesTransitionSetupData();

  constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__shaderWarmupScenesTransitionSetupData(::GlobalNamespace::ShaderWarmupScenesTransitionSetupData* value);

  /// @brief Method .ctor, addr 0x58bbe70, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PersistentAudioNoiseController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PersistentAudioNoiseController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PersistentAudioNoiseController(PersistentAudioNoiseController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PersistentAudioNoiseController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PersistentAudioNoiseController(PersistentAudioNoiseController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5576 };

  /// @brief Field _audioSource, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____audioSource;

  /// @brief Field _shaderWarmupScenesTransitionSetupData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ShaderWarmupScenesTransitionSetupData* ____shaderWarmupScenesTransitionSetupData;

  /// @brief Field _gameScenesManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PersistentAudioNoiseController, ____audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PersistentAudioNoiseController, ____shaderWarmupScenesTransitionSetupData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PersistentAudioNoiseController, ____gameScenesManager) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PersistentAudioNoiseController) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
