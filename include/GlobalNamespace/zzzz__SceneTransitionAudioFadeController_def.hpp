#pragma once
// IWYU pragma private; include "GlobalNamespace/SceneTransitionAudioFadeController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SceneTransitionAudioFadeController)
namespace GlobalNamespace {
class AudioManager;
}
namespace GlobalNamespace {
struct GameScenesManager_SceneTransitionType;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace GlobalNamespace {
class SceneTransitionAudioFadeController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SceneTransitionAudioFadeController);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SceneTransitionAudioFadeController
class CORDL_TYPE SceneTransitionAudioFadeController : public ::System::Object {
public:
  // Declarations
  /// @brief Field _audioManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__audioManager, put = __cordl_internal_set__audioManager)) ::GlobalNamespace::AudioManager* _audioManager;

  /// @brief Field _gameScenesManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method Dispose, addr 0x570f028, size 0x12c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleTransitionDidFinish, addr 0x570f188, size 0x30, virtual false, abstract: false, final false
  inline void HandleTransitionDidFinish(::GlobalNamespace::GameScenesManager_SceneTransitionType transitionType, ::GlobalNamespace::ScenesTransitionSetupDataSO* transitionSetupDataSo,
                                        ::Zenject::DiContainer* diContainer);

  /// @brief Method HandleTransitionDidStart, addr 0x570f154, size 0x34, virtual false, abstract: false, final false
  inline void HandleTransitionDidStart(::GlobalNamespace::GameScenesManager_SceneTransitionType transitionType, float_t duration);

  /// @brief Method Initialize, addr 0x570eefc, size 0x12c, virtual true, abstract: false, final true
  inline void Initialize();

  static inline ::GlobalNamespace::SceneTransitionAudioFadeController* New_ctor();

  constexpr ::GlobalNamespace::AudioManager* const& __cordl_internal_get__audioManager() const;

  constexpr ::GlobalNamespace::AudioManager*& __cordl_internal_get__audioManager();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr void __cordl_internal_set__audioManager(::GlobalNamespace::AudioManager* value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  /// @brief Method .ctor, addr 0x570f1b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SceneTransitionAudioFadeController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SceneTransitionAudioFadeController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SceneTransitionAudioFadeController(SceneTransitionAudioFadeController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SceneTransitionAudioFadeController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SceneTransitionAudioFadeController(SceneTransitionAudioFadeController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5586 };

  /// @brief Field kTransitionFadeInDuration offset 0xffffffff size 0x4
  static constexpr float_t kTransitionFadeInDuration{ static_cast<float_t>(0.1f) };

  /// @brief Field kTransitionFadeOutMinDuration offset 0xffffffff size 0x4
  static constexpr float_t kTransitionFadeOutMinDuration{ static_cast<float_t>(0.2f) };

  /// @brief Field _audioManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::AudioManager* ____audioManager;

  /// @brief Field _gameScenesManager, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SceneTransitionAudioFadeController, ____audioManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneTransitionAudioFadeController, ____gameScenesManager) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SceneTransitionAudioFadeController, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SceneTransitionAudioFadeController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneTransitionAudioFadeController*, "", "SceneTransitionAudioFadeController");
