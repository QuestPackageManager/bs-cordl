#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MirroredBeatmapObjectManager)
namespace GlobalNamespace {
class MirroredBombNoteController;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class INoteMirrorable;
}
namespace GlobalNamespace {
class IGameNoteMirrorable;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class __MirroredSliderController__Pool;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class MirroredSliderController;
}
namespace GlobalNamespace {
class SliderController;
}
namespace GlobalNamespace {
class MirroredObstacleController;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace GlobalNamespace {
class __MirroredObstacleController__Pool;
}
namespace GlobalNamespace {
class __MirroredGameNoteController__Pool;
}
namespace GlobalNamespace {
template <typename T> class MemoryPoolContainer_1;
}
namespace GlobalNamespace {
class MirroredGameNoteController;
}
namespace GlobalNamespace {
class __MirroredBombNoteController__Pool;
}
// Forward declare root types
namespace GlobalNamespace {
class MirroredBeatmapObjectManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MirroredBeatmapObjectManager);
// Type: ::MirroredBeatmapObjectManager
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4732))
// CS Name: ::MirroredBeatmapObjectManager*
class CORDL_TYPE MirroredBeatmapObjectManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapObjectManager, offset 0x10, size 0x8
  __declspec(property(get = __get__beatmapObjectManager, put = __set__beatmapObjectManager))::GlobalNamespace::BeatmapObjectManager* _beatmapObjectManager;

  /// @brief Field _mirroredBasicGameNotePoolContainer, offset 0x18, size 0x8
  __declspec(property(get = __get__mirroredBasicGameNotePoolContainer,
                      put = __set__mirroredBasicGameNotePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>* _mirroredBasicGameNotePoolContainer;

  /// @brief Field _mirroredBurstSliderHeadGameNotePoolContainer, offset 0x20, size 0x8
  __declspec(property(get = __get__mirroredBurstSliderHeadGameNotePoolContainer, put = __set__mirroredBurstSliderHeadGameNotePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<
      ::GlobalNamespace::MirroredGameNoteController*>* _mirroredBurstSliderHeadGameNotePoolContainer;

  /// @brief Field _mirroredBurstSliderGameNotePoolContainer, offset 0x28, size 0x8
  __declspec(property(
      get = __get__mirroredBurstSliderGameNotePoolContainer,
      put = __set__mirroredBurstSliderGameNotePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>* _mirroredBurstSliderGameNotePoolContainer;

  /// @brief Field _mirroredBurstSliderFillPoolContainer, offset 0x30, size 0x8
  __declspec(
      property(get = __get__mirroredBurstSliderFillPoolContainer,
               put = __set__mirroredBurstSliderFillPoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>* _mirroredBurstSliderFillPoolContainer;

  /// @brief Field _mirroredBombNotePoolContainer, offset 0x38, size 0x8
  __declspec(property(get = __get__mirroredBombNotePoolContainer,
                      put = __set__mirroredBombNotePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredBombNoteController*>* _mirroredBombNotePoolContainer;

  /// @brief Field _mirroredObstaclePoolContainer, offset 0x40, size 0x8
  __declspec(property(get = __get__mirroredObstaclePoolContainer,
                      put = __set__mirroredObstaclePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredObstacleController*>* _mirroredObstaclePoolContainer;

  /// @brief Field _mirroredSlidersPoolContainer, offset 0x48, size 0x8
  __declspec(property(get = __get__mirroredSlidersPoolContainer,
                      put = __set__mirroredSlidersPoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredSliderController*>* _mirroredSlidersPoolContainer;

  /// @brief Field _gameNoteControllersToMirroredGameNoteControllers, offset 0x50, size 0x8
  __declspec(property(get = __get__gameNoteControllersToMirroredGameNoteControllers, put = __set__gameNoteControllersToMirroredGameNoteControllers))::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::IGameNoteMirrorable*,
      ::System::ValueTuple_2<::GlobalNamespace::MirroredGameNoteController*,
                             ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*>>* _gameNoteControllersToMirroredGameNoteControllers;

  /// @brief Field _bombNoteControllersToMirroredBombNoteControllers, offset 0x58, size 0x8
  __declspec(property(get = __get__bombNoteControllersToMirroredBombNoteControllers, put = __set__bombNoteControllersToMirroredBombNoteControllers))::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::INoteMirrorable*, ::GlobalNamespace::MirroredBombNoteController*>* _bombNoteControllersToMirroredBombNoteControllers;

  /// @brief Field _obstacleControllersToMirroredObstacleControllers, offset 0x60, size 0x8
  __declspec(property(get = __get__obstacleControllersToMirroredObstacleControllers, put = __set__obstacleControllersToMirroredObstacleControllers))::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::ObstacleController*, ::GlobalNamespace::MirroredObstacleController*>* _obstacleControllersToMirroredObstacleControllers;

  /// @brief Field _sliderControllersToMirroredSliderControllers, offset 0x68, size 0x8
  __declspec(property(get = __get__sliderControllersToMirroredSliderControllers, put = __set__sliderControllersToMirroredSliderControllers))::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::SliderController*, ::GlobalNamespace::MirroredSliderController*>* _sliderControllersToMirroredSliderControllers;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __get__beatmapObjectManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& __get__beatmapObjectManager() const;

  constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*& __get__mirroredBasicGameNotePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*> const& __get__mirroredBasicGameNotePoolContainer() const;

  constexpr void __set__mirroredBasicGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>* value);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*& __get__mirroredBurstSliderHeadGameNotePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*> const&
  __get__mirroredBurstSliderHeadGameNotePoolContainer() const;

  constexpr void __set__mirroredBurstSliderHeadGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>* value);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*& __get__mirroredBurstSliderGameNotePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*> const&
  __get__mirroredBurstSliderGameNotePoolContainer() const;

  constexpr void __set__mirroredBurstSliderGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>* value);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*& __get__mirroredBurstSliderFillPoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*> const& __get__mirroredBurstSliderFillPoolContainer() const;

  constexpr void __set__mirroredBurstSliderFillPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>* value);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredBombNoteController*>*& __get__mirroredBombNotePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredBombNoteController*>*> const& __get__mirroredBombNotePoolContainer() const;

  constexpr void __set__mirroredBombNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredBombNoteController*>* value);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredObstacleController*>*& __get__mirroredObstaclePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredObstacleController*>*> const& __get__mirroredObstaclePoolContainer() const;

  constexpr void __set__mirroredObstaclePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredObstacleController*>* value);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredSliderController*>*& __get__mirroredSlidersPoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredSliderController*>*> const& __get__mirroredSlidersPoolContainer() const;

  constexpr void __set__mirroredSlidersPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredSliderController*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::IGameNoteMirrorable*,
      ::System::ValueTuple_2<::GlobalNamespace::MirroredGameNoteController*, ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*>>*&
  __get__gameNoteControllersToMirroredGameNoteControllers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::IGameNoteMirrorable*,
      ::System::ValueTuple_2<::GlobalNamespace::MirroredGameNoteController*, ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*>>*> const&
  __get__gameNoteControllersToMirroredGameNoteControllers() const;

  constexpr void __set__gameNoteControllersToMirroredGameNoteControllers(
      ::System::Collections::Generic::Dictionary_2<
          ::GlobalNamespace::IGameNoteMirrorable*,
          ::System::ValueTuple_2<::GlobalNamespace::MirroredGameNoteController*, ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*>>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable*, ::GlobalNamespace::MirroredBombNoteController*>*&
  __get__bombNoteControllersToMirroredBombNoteControllers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable*, ::GlobalNamespace::MirroredBombNoteController*>*> const&
  __get__bombNoteControllersToMirroredBombNoteControllers() const;

  constexpr void
  __set__bombNoteControllersToMirroredBombNoteControllers(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable*, ::GlobalNamespace::MirroredBombNoteController*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ObstacleController*, ::GlobalNamespace::MirroredObstacleController*>*&
  __get__obstacleControllersToMirroredObstacleControllers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ObstacleController*, ::GlobalNamespace::MirroredObstacleController*>*> const&
  __get__obstacleControllersToMirroredObstacleControllers() const;

  constexpr void
  __set__obstacleControllersToMirroredObstacleControllers(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ObstacleController*, ::GlobalNamespace::MirroredObstacleController*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SliderController*, ::GlobalNamespace::MirroredSliderController*>*& __get__sliderControllersToMirroredSliderControllers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SliderController*, ::GlobalNamespace::MirroredSliderController*>*> const&
  __get__sliderControllersToMirroredSliderControllers() const;

  constexpr void
  __set__sliderControllersToMirroredSliderControllers(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SliderController*, ::GlobalNamespace::MirroredSliderController*>* value);

  /// @brief Method Init addr 0x238101c size 0x438 virtual false final false
  inline void Init(::GlobalNamespace::BeatmapObjectManager* beatmapObjectManager, ::GlobalNamespace::__MirroredGameNoteController__Pool* mirroredBasicGameNotePool,
                   ::GlobalNamespace::__MirroredGameNoteController__Pool* burstSliderHeadGameNotePool, ::GlobalNamespace::__MirroredGameNoteController__Pool* burstSliderGameNotePool,
                   ::GlobalNamespace::__MirroredGameNoteController__Pool* burstSliderFillPool, ::GlobalNamespace::__MirroredBombNoteController__Pool* mirroredBombNotePool,
                   ::GlobalNamespace::__MirroredObstacleController__Pool* mirroredObstaclePool, ::GlobalNamespace::__MirroredSliderController__Pool* mirroredSlidersPool);

  /// @brief Method Finalize addr 0x2381454 size 0x360 virtual true final false
  inline void Finalize();

  /// @brief Method HandleNoteWasSpawned addr 0x23817b4 size 0x22c virtual false final false
  inline void HandleNoteWasSpawned(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandleNoteWasDespawned addr 0x23819e0 size 0x17c virtual false final false
  inline void HandleNoteWasDespawned(::GlobalNamespace::NoteController* noteController);

  /// @brief Method HandleObstacleWasSpawned addr 0x2381b5c size 0x9c virtual false final false
  inline void HandleObstacleWasSpawned(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method HandleObstacleWasDespawned addr 0x2381bf8 size 0xc0 virtual false final false
  inline void HandleObstacleWasDespawned(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method HandleSliderWasSpawned addr 0x2381cb8 size 0x98 virtual false final false
  inline void HandleSliderWasSpawned(::GlobalNamespace::SliderController* sliderController);

  /// @brief Method HandleSliderWasDespawned addr 0x2381f5c size 0xc0 virtual false final false
  inline void HandleSliderWasDespawned(::GlobalNamespace::SliderController* sliderController);

  /// @brief Method HandleDidHideAllBeatmapObjects addr 0x238201c size 0x7c8 virtual false final false
  inline void HandleDidHideAllBeatmapObjects(bool hide);

  static inline ::GlobalNamespace::MirroredBeatmapObjectManager* New_ctor();

  /// @brief Method .ctor addr 0x2382810 size 0x148 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MirroredBeatmapObjectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MirroredBeatmapObjectManager(MirroredBeatmapObjectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MirroredBeatmapObjectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MirroredBeatmapObjectManager(MirroredBeatmapObjectManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MirroredBeatmapObjectManager();

public:
  /// @brief Field _beatmapObjectManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____beatmapObjectManager;

  /// @brief Field _mirroredBasicGameNotePoolContainer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>* ____mirroredBasicGameNotePoolContainer;

  /// @brief Field _mirroredBurstSliderHeadGameNotePoolContainer, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>* ____mirroredBurstSliderHeadGameNotePoolContainer;

  /// @brief Field _mirroredBurstSliderGameNotePoolContainer, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>* ____mirroredBurstSliderGameNotePoolContainer;

  /// @brief Field _mirroredBurstSliderFillPoolContainer, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>* ____mirroredBurstSliderFillPoolContainer;

  /// @brief Field _mirroredBombNotePoolContainer, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredBombNoteController*>* ____mirroredBombNotePoolContainer;

  /// @brief Field _mirroredObstaclePoolContainer, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredObstacleController*>* ____mirroredObstaclePoolContainer;

  /// @brief Field _mirroredSlidersPoolContainer, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredSliderController*>* ____mirroredSlidersPoolContainer;

  /// @brief Field _gameNoteControllersToMirroredGameNoteControllers, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::IGameNoteMirrorable*,
      ::System::ValueTuple_2<::GlobalNamespace::MirroredGameNoteController*, ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MirroredGameNoteController*>*>>*
      ____gameNoteControllersToMirroredGameNoteControllers;

  /// @brief Field _bombNoteControllersToMirroredBombNoteControllers, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::INoteMirrorable*, ::GlobalNamespace::MirroredBombNoteController*>* ____bombNoteControllersToMirroredBombNoteControllers;

  /// @brief Field _obstacleControllersToMirroredObstacleControllers, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::ObstacleController*, ::GlobalNamespace::MirroredObstacleController*>* ____obstacleControllersToMirroredObstacleControllers;

  /// @brief Field _sliderControllersToMirroredSliderControllers, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SliderController*, ::GlobalNamespace::MirroredSliderController*>* ____sliderControllersToMirroredSliderControllers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MirroredBeatmapObjectManager, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MirroredBeatmapObjectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirroredBeatmapObjectManager*, "", "MirroredBeatmapObjectManager");
