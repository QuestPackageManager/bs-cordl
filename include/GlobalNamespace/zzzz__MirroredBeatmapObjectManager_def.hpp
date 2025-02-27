#pragma once
// IWYU pragma private; include "GlobalNamespace/MirroredBeatmapObjectManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MirroredBeatmapObjectManager)
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class IGameNoteMirrorable;
}
namespace GlobalNamespace {
class INoteMirrorable;
}
namespace GlobalNamespace {
template <typename T> class MemoryPoolContainer_1;
}
namespace GlobalNamespace {
class MirroredBombNoteController_Pool;
}
namespace GlobalNamespace {
class MirroredBombNoteController;
}
namespace GlobalNamespace {
class MirroredGameNoteController_Pool;
}
namespace GlobalNamespace {
class MirroredGameNoteController;
}
namespace GlobalNamespace {
class MirroredObstacleController_Pool;
}
namespace GlobalNamespace {
class MirroredObstacleController;
}
namespace GlobalNamespace {
class MirroredSliderController_Pool;
}
namespace GlobalNamespace {
class MirroredSliderController;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class SliderController;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MirroredBeatmapObjectManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MirroredBeatmapObjectManager);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MirroredBeatmapObjectManager
class CORDL_TYPE MirroredBeatmapObjectManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapObjectManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectManager, put = __cordl_internal_set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _bombNoteControllersToMirroredBombNoteControllers, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__bombNoteControllersToMirroredBombNoteControllers, put = __cordl_internal_set__bombNoteControllersToMirroredBombNoteControllers)) ::System::
      Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable*, ::UnityW<::GlobalNamespace::MirroredBombNoteController>>* _bombNoteControllersToMirroredBombNoteControllers;

  /// @brief Field _gameNoteControllersToMirroredGameNoteControllers, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__gameNoteControllersToMirroredGameNoteControllers,
                      put = __cordl_internal_set__gameNoteControllersToMirroredGameNoteControllers)) ::System::Collections::Generic::
      Dictionary_2<::GlobalNamespace::IGameNoteMirrorable*,
                   ::System::ValueTuple_2<::UnityW<::GlobalNamespace::MirroredGameNoteController>, ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*>>*
          _gameNoteControllersToMirroredGameNoteControllers;

  /// @brief Field _mirroredBasicGameNotePoolContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__mirroredBasicGameNotePoolContainer,
                      put = __cordl_internal_set__mirroredBasicGameNotePoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*
      _mirroredBasicGameNotePoolContainer;

  /// @brief Field _mirroredBombNotePoolContainer, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get__mirroredBombNotePoolContainer,
      put = __cordl_internal_set__mirroredBombNotePoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredBombNoteController>>* _mirroredBombNotePoolContainer;

  /// @brief Field _mirroredBurstSliderGameNotePoolContainer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__mirroredBurstSliderGameNotePoolContainer,
                      put = __cordl_internal_set__mirroredBurstSliderGameNotePoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*
      _mirroredBurstSliderGameNotePoolContainer;

  /// @brief Field _mirroredBurstSliderHeadGameNotePoolContainer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mirroredBurstSliderHeadGameNotePoolContainer,
                      put = __cordl_internal_set__mirroredBurstSliderHeadGameNotePoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*
      _mirroredBurstSliderHeadGameNotePoolContainer;

  /// @brief Field _mirroredObstaclePoolContainer, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get__mirroredObstaclePoolContainer,
      put = __cordl_internal_set__mirroredObstaclePoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredObstacleController>>* _mirroredObstaclePoolContainer;

  /// @brief Field _mirroredSlidersPoolContainer, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get__mirroredSlidersPoolContainer,
      put = __cordl_internal_set__mirroredSlidersPoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredSliderController>>* _mirroredSlidersPoolContainer;

  /// @brief Field _obstacleControllersToMirroredObstacleControllers, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacleControllersToMirroredObstacleControllers, put = __cordl_internal_set__obstacleControllersToMirroredObstacleControllers)) ::System::
      Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::ObstacleController>, ::UnityW<::GlobalNamespace::MirroredObstacleController>>* _obstacleControllersToMirroredObstacleControllers;

  /// @brief Field _sliderControllersToMirroredSliderControllers, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderControllersToMirroredSliderControllers, put = __cordl_internal_set__sliderControllersToMirroredSliderControllers)) ::System::Collections::
      Generic::Dictionary_2<::UnityW<::GlobalNamespace::SliderController>, ::UnityW<::GlobalNamespace::MirroredSliderController>>* _sliderControllersToMirroredSliderControllers;

  /// @brief Method Finalize, addr 0x3af0f04, size 0x30c, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method HandleDidHideAllBeatmapObjects, addr 0x3af1c08, size 0x6f8, virtual false, abstract: false, final false
  inline void HandleDidHideAllBeatmapObjects(bool hide);

  /// @brief Method HandleNoteWasDespawned, addr 0x3af14fc, size 0x17c, virtual false, abstract: false, final false
  inline void HandleNoteWasDespawned(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandleNoteWasSpawned, addr 0x3af12e8, size 0x214, virtual false, abstract: false, final false
  inline void HandleNoteWasSpawned(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandleObstacleWasDespawned, addr 0x3af1870, size 0xc0, virtual false, abstract: false, final false
  inline void HandleObstacleWasDespawned(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method HandleObstacleWasSpawned, addr 0x3af1678, size 0x98, virtual false, abstract: false, final false
  inline void HandleObstacleWasSpawned(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method HandleSliderWasDespawned, addr 0x3af1b48, size 0xc0, virtual false, abstract: false, final false
  inline void HandleSliderWasDespawned(::GlobalNamespace::SliderController* sliderController);

  /// @brief Method HandleSliderWasSpawned, addr 0x3af1930, size 0x98, virtual false, abstract: false, final false
  inline void HandleSliderWasSpawned(::GlobalNamespace::SliderController* sliderController);

  /// @brief Method Init, addr 0x3af0b24, size 0x3e0, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::BeatmapObjectManager* beatmapObjectManager, ::GlobalNamespace::MirroredGameNoteController_Pool* mirroredBasicGameNotePool,
                   ::GlobalNamespace::MirroredGameNoteController_Pool* burstSliderHeadGameNotePool, ::GlobalNamespace::MirroredGameNoteController_Pool* burstSliderGameNotePool,
                   ::GlobalNamespace::MirroredBombNoteController_Pool* mirroredBombNotePool, ::GlobalNamespace::MirroredObstacleController_Pool* mirroredObstaclePool,
                   ::GlobalNamespace::MirroredSliderController_Pool* mirroredSlidersPool);

  /// @brief Method InvalidateGameNotePools, addr 0x3af1210, size 0xd8, virtual false, abstract: false, final false
  inline void InvalidateGameNotePools();

  static inline ::GlobalNamespace::MirroredBeatmapObjectManager* New_ctor();

  constexpr ::GlobalNamespace::BeatmapObjectManager* const& __cordl_internal_get__beatmapObjectManager() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__beatmapObjectManager();

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable*, ::UnityW<::GlobalNamespace::MirroredBombNoteController>>* const&
  __cordl_internal_get__bombNoteControllersToMirroredBombNoteControllers() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable*, ::UnityW<::GlobalNamespace::MirroredBombNoteController>>*&
  __cordl_internal_get__bombNoteControllersToMirroredBombNoteControllers();

  constexpr ::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::IGameNoteMirrorable*,
      ::System::ValueTuple_2<::UnityW<::GlobalNamespace::MirroredGameNoteController>, ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*>>* const&
  __cordl_internal_get__gameNoteControllersToMirroredGameNoteControllers() const;

  constexpr ::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::IGameNoteMirrorable*,
      ::System::ValueTuple_2<::UnityW<::GlobalNamespace::MirroredGameNoteController>, ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*>>*&
  __cordl_internal_get__gameNoteControllersToMirroredGameNoteControllers();

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* const& __cordl_internal_get__mirroredBasicGameNotePoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*& __cordl_internal_get__mirroredBasicGameNotePoolContainer();

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredBombNoteController>>* const& __cordl_internal_get__mirroredBombNotePoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredBombNoteController>>*& __cordl_internal_get__mirroredBombNotePoolContainer();

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* const& __cordl_internal_get__mirroredBurstSliderGameNotePoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*& __cordl_internal_get__mirroredBurstSliderGameNotePoolContainer();

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* const& __cordl_internal_get__mirroredBurstSliderHeadGameNotePoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*& __cordl_internal_get__mirroredBurstSliderHeadGameNotePoolContainer();

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredObstacleController>>* const& __cordl_internal_get__mirroredObstaclePoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredObstacleController>>*& __cordl_internal_get__mirroredObstaclePoolContainer();

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredSliderController>>* const& __cordl_internal_get__mirroredSlidersPoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredSliderController>>*& __cordl_internal_get__mirroredSlidersPoolContainer();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::ObstacleController>, ::UnityW<::GlobalNamespace::MirroredObstacleController>>* const&
  __cordl_internal_get__obstacleControllersToMirroredObstacleControllers() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::ObstacleController>, ::UnityW<::GlobalNamespace::MirroredObstacleController>>*&
  __cordl_internal_get__obstacleControllersToMirroredObstacleControllers();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SliderController>, ::UnityW<::GlobalNamespace::MirroredSliderController>>* const&
  __cordl_internal_get__sliderControllersToMirroredSliderControllers() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SliderController>, ::UnityW<::GlobalNamespace::MirroredSliderController>>*&
  __cordl_internal_get__sliderControllersToMirroredSliderControllers();

  constexpr void __cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__bombNoteControllersToMirroredBombNoteControllers(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable*, ::UnityW<::GlobalNamespace::MirroredBombNoteController>>* value);

  constexpr void __cordl_internal_set__gameNoteControllersToMirroredGameNoteControllers(
      ::System::Collections::Generic::Dictionary_2<
          ::GlobalNamespace::IGameNoteMirrorable*,
          ::System::ValueTuple_2<::UnityW<::GlobalNamespace::MirroredGameNoteController>, ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*>>* value);

  constexpr void __cordl_internal_set__mirroredBasicGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* value);

  constexpr void __cordl_internal_set__mirroredBombNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredBombNoteController>>* value);

  constexpr void __cordl_internal_set__mirroredBurstSliderGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* value);

  constexpr void __cordl_internal_set__mirroredBurstSliderHeadGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* value);

  constexpr void __cordl_internal_set__mirroredObstaclePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredObstacleController>>* value);

  constexpr void __cordl_internal_set__mirroredSlidersPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredSliderController>>* value);

  constexpr void __cordl_internal_set__obstacleControllersToMirroredObstacleControllers(
      ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::ObstacleController>, ::UnityW<::GlobalNamespace::MirroredObstacleController>>* value);

  constexpr void __cordl_internal_set__sliderControllersToMirroredSliderControllers(
      ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SliderController>, ::UnityW<::GlobalNamespace::MirroredSliderController>>* value);

  /// @brief Method .ctor, addr 0x3af2358, size 0x154, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirroredBeatmapObjectManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MirroredBeatmapObjectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirroredBeatmapObjectManager(MirroredBeatmapObjectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirroredBeatmapObjectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirroredBeatmapObjectManager(MirroredBeatmapObjectManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4079 };

  /// @brief Field _beatmapObjectManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _mirroredBasicGameNotePoolContainer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* ____mirroredBasicGameNotePoolContainer;

  /// @brief Field _mirroredBurstSliderHeadGameNotePoolContainer, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* ____mirroredBurstSliderHeadGameNotePoolContainer;

  /// @brief Field _mirroredBurstSliderGameNotePoolContainer, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>* ____mirroredBurstSliderGameNotePoolContainer;

  /// @brief Field _mirroredBombNotePoolContainer, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredBombNoteController>>* ____mirroredBombNotePoolContainer;

  /// @brief Field _mirroredObstaclePoolContainer, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredObstacleController>>* ____mirroredObstaclePoolContainer;

  /// @brief Field _mirroredSlidersPoolContainer, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredSliderController>>* ____mirroredSlidersPoolContainer;

  /// @brief Field _gameNoteControllersToMirroredGameNoteControllers, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::IGameNoteMirrorable*,
      ::System::ValueTuple_2<::UnityW<::GlobalNamespace::MirroredGameNoteController>, ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MirroredGameNoteController>>*>>*
      ____gameNoteControllersToMirroredGameNoteControllers;

  /// @brief Field _bombNoteControllersToMirroredBombNoteControllers, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable*, ::UnityW<::GlobalNamespace::MirroredBombNoteController>>* ____bombNoteControllersToMirroredBombNoteControllers;

  /// @brief Field _obstacleControllersToMirroredObstacleControllers, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::ObstacleController>, ::UnityW<::GlobalNamespace::MirroredObstacleController>>*
      ____obstacleControllersToMirroredObstacleControllers;

  /// @brief Field _sliderControllersToMirroredSliderControllers, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::SliderController>, ::UnityW<::GlobalNamespace::MirroredSliderController>>* ____sliderControllersToMirroredSliderControllers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MirroredBeatmapObjectManager, ____beatmapObjectManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredBeatmapObjectManager, ____mirroredBasicGameNotePoolContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredBeatmapObjectManager, ____mirroredBurstSliderHeadGameNotePoolContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredBeatmapObjectManager, ____mirroredBurstSliderGameNotePoolContainer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredBeatmapObjectManager, ____mirroredBombNotePoolContainer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredBeatmapObjectManager, ____mirroredObstaclePoolContainer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredBeatmapObjectManager, ____mirroredSlidersPoolContainer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredBeatmapObjectManager, ____gameNoteControllersToMirroredGameNoteControllers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredBeatmapObjectManager, ____bombNoteControllersToMirroredBombNoteControllers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredBeatmapObjectManager, ____obstacleControllersToMirroredObstacleControllers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MirroredBeatmapObjectManager, ____sliderControllersToMirroredSliderControllers) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirroredBeatmapObjectManager, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MirroredBeatmapObjectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirroredBeatmapObjectManager*, "", "MirroredBeatmapObjectManager");
