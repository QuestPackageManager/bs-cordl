#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleSystemEmitEventEffect.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentContext_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemEmitEventEffect)
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
template <typename T> class MemoryPoolContainer_1;
}
namespace GlobalNamespace {
class ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior;
}
namespace GlobalNamespace {
class ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior;
}
namespace GlobalNamespace {
class ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior;
}
namespace GlobalNamespace {
class ParticleSystemEventController_Pool;
}
namespace GlobalNamespace {
class ParticleSystemEventController;
}
namespace GlobalNamespace {
class PauseController;
}
namespace GlobalNamespace {
class SongSpeedData;
}
namespace UnityEngine {
class Transform;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class TickableManager;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleSystemEmitEventEffect;
}
namespace GlobalNamespace {
class ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior;
}
namespace GlobalNamespace {
class ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior;
}
namespace GlobalNamespace {
class ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ParticleSystemEmitEventEffect);
MARK_REF_PTR_T(::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior);
MARK_REF_PTR_T(::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior);
MARK_REF_PTR_T(::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior);
// Dependencies System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ParticleSystemEmitEventEffect/ParticleSystemEmitBehavior
class CORDL_TYPE ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior : public ::System::Object {
public:
  // Declarations
  /// @brief Field _audioTimeSource, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSource, put = __cordl_internal_set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _beatmapCallbacksController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCallbacksController,
                      put = __cordl_internal_set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataCallbackWrapper,
                      put = __cordl_internal_set__beatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  /// @brief Field _particleSystemEventControllerPoolContainer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystemEventControllerPoolContainer,
                      put = __cordl_internal_set__particleSystemEventControllerPoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ParticleSystemEventController>>*
      _particleSystemEventControllerPoolContainer;

  /// @brief Field _particleSystemMaxSpawnedSystems, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__particleSystemMaxSpawnedSystems, put = __cordl_internal_set__particleSystemMaxSpawnedSystems)) int32_t _particleSystemMaxSpawnedSystems;

  /// @brief Field _particleSystemParentTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystemParentTransform, put = __cordl_internal_set__particleSystemParentTransform)) ::UnityW<::UnityEngine::Transform>
      _particleSystemParentTransform;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x3b974d0, size 0x18c, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method EmitParticles, addr 0x3b977dc, size 0x16c, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::ParticleSystemEventController> EmitParticles(float_t startTime);

  /// @brief Method HandleBeatmapEvent, addr 0x3b97678, size 0x164, virtual false, abstract: false, final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  static inline ::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior* New_ctor(::GlobalNamespace::BasicBeatmapEventType beatmapEvent,
                                                                                                      ::UnityEngine::Transform* particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems,
                                                                                                      ::GlobalNamespace::IAudioTimeSource* audioTimeSource,
                                                                                                      ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
                                                                                                      ::GlobalNamespace::ParticleSystemEventController_Pool* particleSystemEventControllerPool);

  constexpr ::GlobalNamespace::IAudioTimeSource* const& __cordl_internal_get__audioTimeSource() const;

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSource();

  constexpr ::GlobalNamespace::BeatmapCallbacksController* const& __cordl_internal_get__beatmapCallbacksController() const;

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __cordl_internal_get__beatmapCallbacksController();

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& __cordl_internal_get__beatmapDataCallbackWrapper() const;

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __cordl_internal_get__beatmapDataCallbackWrapper();

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ParticleSystemEventController>>* const& __cordl_internal_get__particleSystemEventControllerPoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ParticleSystemEventController>>*& __cordl_internal_get__particleSystemEventControllerPoolContainer();

  constexpr int32_t const& __cordl_internal_get__particleSystemMaxSpawnedSystems() const;

  constexpr int32_t& __cordl_internal_get__particleSystemMaxSpawnedSystems();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__particleSystemParentTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__particleSystemParentTransform();

  constexpr void __cordl_internal_set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr void __cordl_internal_set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  constexpr void __cordl_internal_set__particleSystemEventControllerPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ParticleSystemEventController>>* value);

  constexpr void __cordl_internal_set__particleSystemMaxSpawnedSystems(int32_t value);

  constexpr void __cordl_internal_set__particleSystemParentTransform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x3b97328, size 0x1a8, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BasicBeatmapEventType beatmapEvent, ::UnityEngine::Transform* particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems,
                    ::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
                    ::GlobalNamespace::ParticleSystemEventController_Pool* particleSystemEventControllerPool);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior(ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior(ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4328 };

  /// @brief Field _audioTimeSource, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _beatmapCallbacksController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _particleSystemEventControllerPoolContainer, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ParticleSystemEventController>>* ____particleSystemEventControllerPoolContainer;

  /// @brief Field _particleSystemParentTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____particleSystemParentTransform;

  /// @brief Field _particleSystemMaxSpawnedSystems, offset: 0x30, size: 0x4, def value: None
  int32_t ____particleSystemMaxSpawnedSystems;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior, ____audioTimeSource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior, ____beatmapCallbacksController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior, ____particleSystemEventControllerPoolContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior, ____particleSystemParentTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior, ____particleSystemMaxSpawnedSystems) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior, ____beatmapDataCallbackWrapper) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ParticleSystemEmitEventEffect::ParticleSystemEmitBehavior, Zenject.ITickable
namespace GlobalNamespace {
// Is value type: false
// CS Name: ParticleSystemEmitEventEffect/BeatmapEditorParticleSystemEmitBehavior
class CORDL_TYPE ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior : public ::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior {
public:
  // Declarations
  /// @brief Field _tickableManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__tickableManager, put = __cordl_internal_set__tickableManager)) ::Zenject::TickableManager* _tickableManager;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  /// @brief Method Dispose, addr 0x3b97d58, size 0x28, virtual true, abstract: false, final false
  inline void Dispose();

  static inline ::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior*
  New_ctor(::GlobalNamespace::BasicBeatmapEventType beatmapEvent, ::UnityEngine::Transform* particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems,
           ::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
           ::GlobalNamespace::ParticleSystemEventController_Pool* particleSystemEventControllerPool, ::Zenject::TickableManager* tickableManager);

  /// @brief Method Tick, addr 0x3b979b0, size 0x334, virtual true, abstract: false, final true
  inline void Tick();

  constexpr ::Zenject::TickableManager* const& __cordl_internal_get__tickableManager() const;

  constexpr ::Zenject::TickableManager*& __cordl_internal_get__tickableManager();

  constexpr void __cordl_internal_set__tickableManager(::Zenject::TickableManager* value);

  /// @brief Method .ctor, addr 0x3b97978, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BasicBeatmapEventType beatmapEvent, ::UnityEngine::Transform* particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems,
                    ::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
                    ::GlobalNamespace::ParticleSystemEventController_Pool* particleSystemEventControllerPool, ::Zenject::TickableManager* tickableManager);

  /// @brief Convert to "::Zenject::ITickable"
  constexpr ::Zenject::ITickable* i___Zenject__ITickable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior(ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior(ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4329 };

  /// @brief Field _tickableManager, offset: 0x40, size: 0x8, def value: None
  ::Zenject::TickableManager* ____tickableManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior, ____tickableManager) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ParticleSystemEmitEventEffect::ParticleSystemEmitBehavior
namespace GlobalNamespace {
// Is value type: false
// CS Name: ParticleSystemEmitEventEffect/GameplayParticleSystemEmitBehavior
class CORDL_TYPE ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior : public ::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior {
public:
  // Declarations
  /// @brief Field _pauseController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__pauseController, put = __cordl_internal_set__pauseController)) ::UnityW<::GlobalNamespace::PauseController> _pauseController;

  /// @brief Field _songSpeedData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__songSpeedData, put = __cordl_internal_set__songSpeedData)) ::GlobalNamespace::SongSpeedData* _songSpeedData;

  /// @brief Method Dispose, addr 0x3b97eb0, size 0x124, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method EmitParticles, addr 0x3b982fc, size 0xbc, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::ParticleSystemEventController> EmitParticles(float_t startTime);

  /// @brief Method HandlePauseControllerDidPause, addr 0x3b97fd4, size 0x178, virtual false, abstract: false, final false
  inline void HandlePauseControllerDidPause();

  /// @brief Method HandlePauseControllerDidResume, addr 0x3b98168, size 0x178, virtual false, abstract: false, final false
  inline void HandlePauseControllerDidResume();

  static inline ::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior*
  New_ctor(::GlobalNamespace::BasicBeatmapEventType beatmapEvent, ::UnityEngine::Transform* particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems,
           ::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
           ::GlobalNamespace::ParticleSystemEventController_Pool* particleSystemEventControllerPool, ::GlobalNamespace::PauseController* pauseController,
           ::GlobalNamespace::SongSpeedData* songSpeedData);

  constexpr ::UnityW<::GlobalNamespace::PauseController> const& __cordl_internal_get__pauseController() const;

  constexpr ::UnityW<::GlobalNamespace::PauseController>& __cordl_internal_get__pauseController();

  constexpr ::GlobalNamespace::SongSpeedData* const& __cordl_internal_get__songSpeedData() const;

  constexpr ::GlobalNamespace::SongSpeedData*& __cordl_internal_get__songSpeedData();

  constexpr void __cordl_internal_set__pauseController(::UnityW<::GlobalNamespace::PauseController> value);

  constexpr void __cordl_internal_set__songSpeedData(::GlobalNamespace::SongSpeedData* value);

  /// @brief Method .ctor, addr 0x3b97d80, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BasicBeatmapEventType beatmapEvent, ::UnityEngine::Transform* particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems,
                    ::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
                    ::GlobalNamespace::ParticleSystemEventController_Pool* particleSystemEventControllerPool, ::GlobalNamespace::PauseController* pauseController,
                    ::GlobalNamespace::SongSpeedData* songSpeedData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior(ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior(ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4330 };

  /// @brief Field _pauseController, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PauseController> ____pauseController;

  /// @brief Field _songSpeedData, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::SongSpeedData* ____songSpeedData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior, ____pauseController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior, ____songSpeedData) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BasicBeatmapEventType, EnvironmentContext, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ParticleSystemEmitEventEffect
class CORDL_TYPE ParticleSystemEmitEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using BeatmapEditorParticleSystemEmitBehavior = ::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior;

  using GameplayParticleSystemEmitBehavior = ::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior;

  using ParticleSystemEmitBehavior = ::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior;

  /// @brief Field _beatmapEvent, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__beatmapEvent, put = __cordl_internal_set__beatmapEvent)) ::GlobalNamespace::BasicBeatmapEventType _beatmapEvent;

  /// @brief Field _diContainer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__diContainer, put = __cordl_internal_set__diContainer)) ::Zenject::DiContainer* _diContainer;

  /// @brief Field _environmentContext, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__environmentContext, put = __cordl_internal_set__environmentContext)) ::GlobalNamespace::EnvironmentContext _environmentContext;

  /// @brief Field _particleSystemEmitBehavior, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystemEmitBehavior,
                      put = __cordl_internal_set__particleSystemEmitBehavior)) ::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior* _particleSystemEmitBehavior;

  /// @brief Field _particleSystemMaxSpawnedSystems, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__particleSystemMaxSpawnedSystems, put = __cordl_internal_set__particleSystemMaxSpawnedSystems)) int32_t _particleSystemMaxSpawnedSystems;

  /// @brief Field _particleSystemParentTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__particleSystemParentTransform, put = __cordl_internal_set__particleSystemParentTransform)) ::UnityW<::UnityEngine::Transform>
      _particleSystemParentTransform;

  static inline ::GlobalNamespace::ParticleSystemEmitEventEffect* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b97300, size 0x18, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3b9708c, size 0x274, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __cordl_internal_get__beatmapEvent() const;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __cordl_internal_get__beatmapEvent();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__diContainer() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__diContainer();

  constexpr ::GlobalNamespace::EnvironmentContext const& __cordl_internal_get__environmentContext() const;

  constexpr ::GlobalNamespace::EnvironmentContext& __cordl_internal_get__environmentContext();

  constexpr ::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior* const& __cordl_internal_get__particleSystemEmitBehavior() const;

  constexpr ::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior*& __cordl_internal_get__particleSystemEmitBehavior();

  constexpr int32_t const& __cordl_internal_get__particleSystemMaxSpawnedSystems() const;

  constexpr int32_t& __cordl_internal_get__particleSystemMaxSpawnedSystems();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__particleSystemParentTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__particleSystemParentTransform();

  constexpr void __cordl_internal_set__beatmapEvent(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr void __cordl_internal_set__diContainer(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__environmentContext(::GlobalNamespace::EnvironmentContext value);

  constexpr void __cordl_internal_set__particleSystemEmitBehavior(::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior* value);

  constexpr void __cordl_internal_set__particleSystemMaxSpawnedSystems(int32_t value);

  constexpr void __cordl_internal_set__particleSystemParentTransform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x3b97318, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemEmitEventEffect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEmitEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleSystemEmitEventEffect(ParticleSystemEmitEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEmitEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleSystemEmitEventEffect(ParticleSystemEmitEventEffect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4331 };

  /// @brief Field _beatmapEvent, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____beatmapEvent;

  /// @brief Field _particleSystemParentTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____particleSystemParentTransform;

  /// @brief Field _particleSystemMaxSpawnedSystems, offset: 0x30, size: 0x4, def value: None
  int32_t ____particleSystemMaxSpawnedSystems;

  /// @brief Field _environmentContext, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentContext ____environmentContext;

  /// @brief Field _diContainer, offset: 0x38, size: 0x8, def value: None
  ::Zenject::DiContainer* ____diContainer;

  /// @brief Field _particleSystemEmitBehavior, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior* ____particleSystemEmitBehavior;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffect, ____beatmapEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffect, ____particleSystemParentTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffect, ____particleSystemMaxSpawnedSystems) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffect, ____environmentContext) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffect, ____diContainer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffect, ____particleSystemEmitBehavior) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ParticleSystemEmitEventEffect, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ParticleSystemEmitEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleSystemEmitEventEffect*, "", "ParticleSystemEmitEventEffect");
NEED_NO_BOX(::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleSystemEmitEventEffect_BeatmapEditorParticleSystemEmitBehavior*, "", "ParticleSystemEmitEventEffect/BeatmapEditorParticleSystemEmitBehavior");
NEED_NO_BOX(::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehavior*, "", "ParticleSystemEmitEventEffect/GameplayParticleSystemEmitBehavior");
NEED_NO_BOX(::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior*, "", "ParticleSystemEmitEventEffect/ParticleSystemEmitBehavior");
