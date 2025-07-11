#pragma once
// IWYU pragma private; include "GlobalNamespace/PersistentAudioNoiseController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
class ScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class ShaderWarmupScenesTransitionSetupDataSO;
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
MARK_REF_PTR_T(::GlobalNamespace::PersistentAudioNoiseController);
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
                      put = __cordl_internal_set__shaderWarmupScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO>
      _shaderWarmupScenesTransitionSetupData;

  /// @brief Method HandleTransitionDidFinish, addr 0x3ad3768, size 0xb4, virtual false, abstract: false, final false
  inline void HandleTransitionDidFinish(::GlobalNamespace::GameScenesManager_SceneTransitionType transitionType, ::GlobalNamespace::ScenesTransitionSetupDataSO* transitionSetupDataSo,
                                        ::Zenject::DiContainer* diContainer);

  static inline ::GlobalNamespace::PersistentAudioNoiseController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3ad3698, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnValidate, addr 0x3ad381c, size 0xe0, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method Start, addr 0x3ad3608, size 0x90, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

  constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO> const& __cordl_internal_get__shaderWarmupScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO>& __cordl_internal_get__shaderWarmupScenesTransitionSetupData();

  constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource> value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__shaderWarmupScenesTransitionSetupData(::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x3ad38fc, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4022 };

  /// @brief Field _audioSource, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioSource> ____audioSource;

  /// @brief Field _shaderWarmupScenesTransitionSetupData, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO> ____shaderWarmupScenesTransitionSetupData;

  /// @brief Field _gameScenesManager, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PersistentAudioNoiseController, ____audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PersistentAudioNoiseController, ____shaderWarmupScenesTransitionSetupData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PersistentAudioNoiseController, ____gameScenesManager) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PersistentAudioNoiseController, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PersistentAudioNoiseController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PersistentAudioNoiseController*, "", "PersistentAudioNoiseController");
