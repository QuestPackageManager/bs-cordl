#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemEmitEventEffect)
namespace GlobalNamespace {
class __ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class __ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior;
}
namespace GlobalNamespace {
class __ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace Zenject {
class TickableManager;
}
namespace Zenject {
class ITickable;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class __ParticleSystemEventController__Pool;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class SongSpeedData;
}
namespace GlobalNamespace {
class PauseController;
}
namespace GlobalNamespace {
class ParticleSystemEventController;
}
namespace GlobalNamespace {
template <typename T> class MemoryPoolContainer_1;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleSystemEmitEventEffect;
}
namespace GlobalNamespace {
class __ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior;
}
namespace GlobalNamespace {
class __ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior;
}
namespace GlobalNamespace {
class __ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ParticleSystemEmitEventEffect);
MARK_REF_PTR_T(::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior);
MARK_REF_PTR_T(::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior);
MARK_REF_PTR_T(::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior);
// Type: ::ParticleSystemEmitBehavior
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5065))
// CS Name: ::ParticleSystemEmitEventEffect::ParticleSystemEmitBehavior*
class CORDL_TYPE __ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior : public ::System::Object {
public:
  // Declarations
  /// @brief Field _audioTimeSource, offset 0x10, size 0x8
  __declspec(property(get = __get__audioTimeSource, put = __set__audioTimeSource))::GlobalNamespace::IAudioTimeSource* _audioTimeSource;

  /// @brief Field _beatmapCallbacksController, offset 0x18, size 0x8
  __declspec(property(get = __get__beatmapCallbacksController, put = __set__beatmapCallbacksController))::GlobalNamespace::BeatmapCallbacksController* _beatmapCallbacksController;

  /// @brief Field _particleSystemEventControllerPoolContainer, offset 0x20, size 0x8
  __declspec(property(
      get = __get__particleSystemEventControllerPoolContainer,
      put = __set__particleSystemEventControllerPoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ParticleSystemEventController*>* _particleSystemEventControllerPoolContainer;

  /// @brief Field _particleSystemParentTransform, offset 0x28, size 0x8
  __declspec(property(get = __get__particleSystemParentTransform, put = __set__particleSystemParentTransform))::UnityEngine::Transform* _particleSystemParentTransform;

  /// @brief Field _particleSystemMaxSpawnedSystems, offset 0x30, size 0x4
  __declspec(property(get = __get__particleSystemMaxSpawnedSystems, put = __set__particleSystemMaxSpawnedSystems)) int32_t _particleSystemMaxSpawnedSystems;

  /// @brief Field _beatmapDataCallbackWrapper, offset 0x38, size 0x8
  __declspec(property(get = __get__beatmapDataCallbackWrapper, put = __set__beatmapDataCallbackWrapper))::GlobalNamespace::BeatmapDataCallbackWrapper* _beatmapDataCallbackWrapper;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::GlobalNamespace::IAudioTimeSource*& __get__audioTimeSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __get__audioTimeSource() const;

  constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource* value);

  constexpr ::GlobalNamespace::BeatmapCallbacksController*& __get__beatmapCallbacksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& __get__beatmapCallbacksController() const;

  constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ParticleSystemEventController*>*& __get__particleSystemEventControllerPoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ParticleSystemEventController*>*> const&
  __get__particleSystemEventControllerPoolContainer() const;

  constexpr void __set__particleSystemEventControllerPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ParticleSystemEventController*>* value);

  constexpr ::UnityEngine::Transform*& __get__particleSystemParentTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__particleSystemParentTransform() const;

  constexpr void __set__particleSystemParentTransform(::UnityEngine::Transform* value);

  constexpr int32_t& __get__particleSystemMaxSpawnedSystems();

  constexpr int32_t const& __get__particleSystemMaxSpawnedSystems() const;

  constexpr void __set__particleSystemMaxSpawnedSystems(int32_t value);

  constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& __get__beatmapDataCallbackWrapper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& __get__beatmapDataCallbackWrapper() const;

  constexpr void __set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value);

  static inline ::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior* New_ctor(::GlobalNamespace::BasicBeatmapEventType beatmapEvent,
                                                                                                         ::UnityEngine::Transform* particleSystemParentTransform,
                                                                                                         int32_t particleSystemMaxSpawnedSystems, ::GlobalNamespace::IAudioTimeSource* audioTimeSource,
                                                                                                         ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
                                                                                                         ::GlobalNamespace::__ParticleSystemEventController__Pool* particleSystemEventControllerPool);

  /// @brief Method .ctor addr 0x2277310 size 0x1a8 virtual false final false
  inline void _ctor(::GlobalNamespace::BasicBeatmapEventType beatmapEvent, ::UnityEngine::Transform* particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems,
                    ::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
                    ::GlobalNamespace::__ParticleSystemEventController__Pool* particleSystemEventControllerPool);

  /// @brief Method Dispose addr 0x22774b8 size 0x18c virtual true final false
  inline void Dispose();

  /// @brief Method HandleBeatmapEvent addr 0x2277660 size 0x164 virtual false final false
  inline void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);

  /// @brief Method EmitParticles addr 0x22777c4 size 0x16c virtual true final false
  inline ::GlobalNamespace::ParticleSystemEventController* EmitParticles(float_t startTime);

  // Ctor Parameters [CppParam { name: "", ty: "__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior(__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior(__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior();

public:
  /// @brief Field _audioTimeSource, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSource;

  /// @brief Field _beatmapCallbacksController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCallbacksController* ____beatmapCallbacksController;

  /// @brief Field _particleSystemEventControllerPoolContainer, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ParticleSystemEventController*>* ____particleSystemEventControllerPoolContainer;

  /// @brief Field _particleSystemParentTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ____particleSystemParentTransform;

  /// @brief Field _particleSystemMaxSpawnedSystems, offset: 0x30, size: 0x4, def value: None
  int32_t ____particleSystemMaxSpawnedSystems;

  /// @brief Field _beatmapDataCallbackWrapper, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataCallbackWrapper* ____beatmapDataCallbackWrapper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior, ____audioTimeSource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior, ____beatmapCallbacksController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior, ____particleSystemEventControllerPoolContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior, ____particleSystemParentTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior, ____particleSystemMaxSpawnedSystems) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior, ____beatmapDataCallbackWrapper) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapEditorParticleSystemEmitBehavior
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5065))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5066))
// CS Name: ::ParticleSystemEmitEventEffect::BeatmapEditorParticleSystemEmitBehavior*
class CORDL_TYPE __ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior : public ::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior {
public:
  // Declarations
  /// @brief Field _tickableManager, offset 0x40, size 0x8
  __declspec(property(get = __get__tickableManager, put = __set__tickableManager))::Zenject::TickableManager* _tickableManager;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  constexpr ::Zenject::TickableManager*& __get__tickableManager();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::TickableManager*> const& __get__tickableManager() const;

  constexpr void __set__tickableManager(::Zenject::TickableManager* value);

  static inline ::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior*
  New_ctor(::GlobalNamespace::BasicBeatmapEventType beatmapEvent, ::UnityEngine::Transform* particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems,
           ::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
           ::GlobalNamespace::__ParticleSystemEventController__Pool* particleSystemEventControllerPool, ::Zenject::TickableManager* tickableManager);

  /// @brief Method .ctor addr 0x2277960 size 0x38 virtual false final false
  inline void _ctor(::GlobalNamespace::BasicBeatmapEventType beatmapEvent, ::UnityEngine::Transform* particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems,
                    ::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
                    ::GlobalNamespace::__ParticleSystemEventController__Pool* particleSystemEventControllerPool, ::Zenject::TickableManager* tickableManager);

  /// @brief Method Tick addr 0x2277998 size 0x334 virtual true final true
  inline void Tick();

  /// @brief Method Dispose addr 0x2277d40 size 0x28 virtual true final false
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "", ty: "__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior(__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior(__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior();

public:
  /// @brief Field _tickableManager, offset: 0x40, size: 0x8, def value: None
  ::Zenject::TickableManager* ____tickableManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior, ____tickableManager) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameplayParticleSystemEmitBehavior
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5065))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5067))
// CS Name: ::ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior*
class CORDL_TYPE __ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior : public ::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior {
public:
  // Declarations
  /// @brief Field _pauseController, offset 0x40, size 0x8
  __declspec(property(get = __get__pauseController, put = __set__pauseController))::GlobalNamespace::PauseController* _pauseController;

  /// @brief Field _songSpeedData, offset 0x48, size 0x8
  __declspec(property(get = __get__songSpeedData, put = __set__songSpeedData))::GlobalNamespace::SongSpeedData* _songSpeedData;

  constexpr ::GlobalNamespace::PauseController*& __get__pauseController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PauseController*> const& __get__pauseController() const;

  constexpr void __set__pauseController(::GlobalNamespace::PauseController* value);

  constexpr ::GlobalNamespace::SongSpeedData*& __get__songSpeedData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongSpeedData*> const& __get__songSpeedData() const;

  constexpr void __set__songSpeedData(::GlobalNamespace::SongSpeedData* value);

  static inline ::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior*
  New_ctor(::GlobalNamespace::BasicBeatmapEventType beatmapEvent, ::UnityEngine::Transform* particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems,
           ::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
           ::GlobalNamespace::__ParticleSystemEventController__Pool* particleSystemEventControllerPool, ::GlobalNamespace::PauseController* pauseController,
           ::GlobalNamespace::SongSpeedData* songSpeedData);

  /// @brief Method .ctor addr 0x2277d68 size 0x138 virtual false final false
  inline void _ctor(::GlobalNamespace::BasicBeatmapEventType beatmapEvent, ::UnityEngine::Transform* particleSystemParentTransform, int32_t particleSystemMaxSpawnedSystems,
                    ::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
                    ::GlobalNamespace::__ParticleSystemEventController__Pool* particleSystemEventControllerPool, ::GlobalNamespace::PauseController* pauseController,
                    ::GlobalNamespace::SongSpeedData* songSpeedData);

  /// @brief Method Dispose addr 0x2277ea0 size 0x12c virtual true final false
  inline void Dispose();

  /// @brief Method HandlePauseControllerDidPause addr 0x2277fcc size 0x178 virtual false final false
  inline void HandlePauseControllerDidPause();

  /// @brief Method HandlePauseControllerDidResume addr 0x2278160 size 0x178 virtual false final false
  inline void HandlePauseControllerDidResume();

  /// @brief Method EmitParticles addr 0x22782f4 size 0xbc virtual true final false
  inline ::GlobalNamespace::ParticleSystemEventController* EmitParticles(float_t startTime);

  // Ctor Parameters [CppParam { name: "", ty: "__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior(__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior(__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior();

public:
  /// @brief Field _pauseController, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::PauseController* ____pauseController;

  /// @brief Field _songSpeedData, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::SongSpeedData* ____songSpeedData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior, ____pauseController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior, ____songSpeedData) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ParticleSystemEmitEventEffect
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5087)), TypeDefinitionIndex(TypeDefinitionIndex(14941)), TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5068))
// CS Name: ::ParticleSystemEmitEventEffect*
class CORDL_TYPE ParticleSystemEmitEventEffect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using GameplayParticleSystemEmitBehavior = ::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior;

  using BeatmapEditorParticleSystemEmitBehavior = ::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior;

  using ParticleSystemEmitBehavior = ::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior;

  /// @brief Field _beatmapEvent, offset 0x18, size 0x4
  __declspec(property(get = __get__beatmapEvent, put = __set__beatmapEvent))::GlobalNamespace::BasicBeatmapEventType _beatmapEvent;

  /// @brief Field _particleSystemParentTransform, offset 0x20, size 0x8
  __declspec(property(get = __get__particleSystemParentTransform, put = __set__particleSystemParentTransform))::UnityEngine::Transform* _particleSystemParentTransform;

  /// @brief Field _particleSystemMaxSpawnedSystems, offset 0x28, size 0x4
  __declspec(property(get = __get__particleSystemMaxSpawnedSystems, put = __set__particleSystemMaxSpawnedSystems)) int32_t _particleSystemMaxSpawnedSystems;

  /// @brief Field _environmentContext, offset 0x2c, size 0x4
  __declspec(property(get = __get__environmentContext, put = __set__environmentContext))::GlobalNamespace::EnvironmentContext _environmentContext;

  /// @brief Field _diContainer, offset 0x30, size 0x8
  __declspec(property(get = __get__diContainer, put = __set__diContainer))::Zenject::DiContainer* _diContainer;

  /// @brief Field _particleSystemEmitBehavior, offset 0x38, size 0x8
  __declspec(property(get = __get__particleSystemEmitBehavior,
                      put = __set__particleSystemEmitBehavior))::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior* _particleSystemEmitBehavior;

  constexpr ::GlobalNamespace::BasicBeatmapEventType& __get__beatmapEvent();

  constexpr ::GlobalNamespace::BasicBeatmapEventType const& __get__beatmapEvent() const;

  constexpr void __set__beatmapEvent(::GlobalNamespace::BasicBeatmapEventType value);

  constexpr ::UnityEngine::Transform*& __get__particleSystemParentTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__particleSystemParentTransform() const;

  constexpr void __set__particleSystemParentTransform(::UnityEngine::Transform* value);

  constexpr int32_t& __get__particleSystemMaxSpawnedSystems();

  constexpr int32_t const& __get__particleSystemMaxSpawnedSystems() const;

  constexpr void __set__particleSystemMaxSpawnedSystems(int32_t value);

  constexpr ::GlobalNamespace::EnvironmentContext& __get__environmentContext();

  constexpr ::GlobalNamespace::EnvironmentContext const& __get__environmentContext() const;

  constexpr void __set__environmentContext(::GlobalNamespace::EnvironmentContext value);

  constexpr ::Zenject::DiContainer*& __get__diContainer();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__diContainer() const;

  constexpr void __set__diContainer(::Zenject::DiContainer* value);

  constexpr ::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior*& __get__particleSystemEmitBehavior();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior*> const& __get__particleSystemEmitBehavior() const;

  constexpr void __set__particleSystemEmitBehavior(::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior* value);

  /// @brief Method Start addr 0x2277084 size 0x264 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x22772e8 size 0x18 virtual false final false
  inline void OnDestroy();

  static inline ::GlobalNamespace::ParticleSystemEmitEventEffect* New_ctor();

  /// @brief Method .ctor addr 0x2277300 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEmitEventEffect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleSystemEmitEventEffect(ParticleSystemEmitEventEffect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEmitEventEffect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleSystemEmitEventEffect(ParticleSystemEmitEventEffect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleSystemEmitEventEffect();

public:
  /// @brief Field _beatmapEvent, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::BasicBeatmapEventType ____beatmapEvent;

  /// @brief Field _particleSystemParentTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____particleSystemParentTransform;

  /// @brief Field _particleSystemMaxSpawnedSystems, offset: 0x28, size: 0x4, def value: None
  int32_t ____particleSystemMaxSpawnedSystems;

  /// @brief Field _environmentContext, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::EnvironmentContext ____environmentContext;

  /// @brief Field _diContainer, offset: 0x30, size: 0x8, def value: None
  ::Zenject::DiContainer* ____diContainer;

  /// @brief Field _particleSystemEmitBehavior, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior* ____particleSystemEmitBehavior;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ParticleSystemEmitEventEffect, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffect, ____beatmapEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffect, ____particleSystemParentTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffect, ____particleSystemMaxSpawnedSystems) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffect, ____environmentContext) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffect, ____diContainer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEmitEventEffect, ____particleSystemEmitBehavior) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ParticleSystemEmitEventEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleSystemEmitEventEffect*, "", "ParticleSystemEmitEventEffect");
NEED_NO_BOX(::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ParticleSystemEmitEventEffect__BeatmapEditorParticleSystemEmitBehavior*, "", "ParticleSystemEmitEventEffect/BeatmapEditorParticleSystemEmitBehavior");
NEED_NO_BOX(::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ParticleSystemEmitEventEffect__GameplayParticleSystemEmitBehavior*, "", "ParticleSystemEmitEventEffect/GameplayParticleSystemEmitBehavior");
NEED_NO_BOX(::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ParticleSystemEmitEventEffect__ParticleSystemEmitBehavior*, "", "ParticleSystemEmitEventEffect/ParticleSystemEmitBehavior");
