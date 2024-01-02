#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerBeatmapObjectManager)
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerGameNoteController;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class __MultiplayerConnectedPlayerBombNoteController__Pool;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
class SliderController;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerBombNoteController;
}
namespace GlobalNamespace {
class __MultiplayerConnectedPlayerObstacleController__Pool;
}
namespace GlobalNamespace {
class NoteSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
template <typename T0, typename T1> class MemoryPoolContainer_2;
}
namespace GlobalNamespace {
class __MultiplayerConnectedPlayerGameNoteController__Pool;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerObstacleController;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
template <typename T> class MemoryPoolContainer_1;
}
namespace GlobalNamespace {
class IConnectedPlayerBeatmapObjectEventManager;
}
namespace GlobalNamespace {
class __MultiplayerConnectedPlayerBeatmapObjectManager__InitData;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
class ObstacleSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class NoteCutInfoNetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerBeatmapObjectManager;
}
namespace GlobalNamespace {
class __MultiplayerConnectedPlayerBeatmapObjectManager__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5118))
// CS Name: ::MultiplayerConnectedPlayerBeatmapObjectManager::InitData*
class CORDL_TYPE __MultiplayerConnectedPlayerBeatmapObjectManager__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field disappearingArrows, offset 0x10, size 0x1
  __declspec(property(get = __get_disappearingArrows, put = __set_disappearingArrows)) bool disappearingArrows;

  /// @brief Field ghostNotes, offset 0x11, size 0x1
  __declspec(property(get = __get_ghostNotes, put = __set_ghostNotes)) bool ghostNotes;

  /// @brief Field notesUniformScale, offset 0x14, size 0x4
  __declspec(property(get = __get_notesUniformScale, put = __set_notesUniformScale)) float_t notesUniformScale;

  constexpr bool& __get_disappearingArrows();

  constexpr bool const& __get_disappearingArrows() const;

  constexpr void __set_disappearingArrows(bool value);

  constexpr bool& __get_ghostNotes();

  constexpr bool const& __get_ghostNotes() const;

  constexpr void __set_ghostNotes(bool value);

  constexpr float_t& __get_notesUniformScale();

  constexpr float_t const& __get_notesUniformScale() const;

  constexpr void __set_notesUniformScale(float_t value);

  static inline ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData* New_ctor(bool disappearingArrows, bool ghostNotes, float_t notesUniformScale);

  /// @brief Method .ctor, addr 0x23d4708, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(bool disappearingArrows, bool ghostNotes, float_t notesUniformScale);

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerConnectedPlayerBeatmapObjectManager__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerConnectedPlayerBeatmapObjectManager__InitData(__MultiplayerConnectedPlayerBeatmapObjectManager__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerConnectedPlayerBeatmapObjectManager__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerConnectedPlayerBeatmapObjectManager__InitData(__MultiplayerConnectedPlayerBeatmapObjectManager__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerConnectedPlayerBeatmapObjectManager__InitData();

public:
  /// @brief Field disappearingArrows, offset: 0x10, size: 0x1, def value: None
  bool ___disappearingArrows;

  /// @brief Field ghostNotes, offset: 0x11, size: 0x1, def value: None
  bool ___ghostNotes;

  /// @brief Field notesUniformScale, offset: 0x14, size: 0x4, def value: None
  float_t ___notesUniformScale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData, ___disappearingArrows) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData, ___ghostNotes) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData, ___notesUniformScale) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerConnectedPlayerBeatmapObjectManager
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4716)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 391 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2448))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5119)) CS Name: ::MultiplayerConnectedPlayerBeatmapObjectManager*
class CORDL_TYPE MultiplayerConnectedPlayerBeatmapObjectManager : public ::GlobalNamespace::BeatmapObjectManager {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData;

  /// @brief Field _firstBasicNoteTime, offset 0x94, size 0x8
  __declspec(property(get = __get__firstBasicNoteTime, put = __set__firstBasicNoteTime))::System::Nullable_1<float_t> _firstBasicNoteTime;

  /// @brief Field _gameNotePoolContainer, offset 0xa0, size 0x8
  __declspec(property(get = __get__gameNotePoolContainer,
                      put = __set__gameNotePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* _gameNotePoolContainer;

  /// @brief Field _burstSliderHeadGameNotePoolContainer, offset 0xa8, size 0x8
  __declspec(property(get = __get__burstSliderHeadGameNotePoolContainer, put = __set__burstSliderHeadGameNotePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<
      ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* _burstSliderHeadGameNotePoolContainer;

  /// @brief Field _burstSliderGameNotePoolContainer, offset 0xb0, size 0x8
  __declspec(property(
      get = __get__burstSliderGameNotePoolContainer,
      put = __set__burstSliderGameNotePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* _burstSliderGameNotePoolContainer;

  /// @brief Field _burstSliderFillPoolContainer, offset 0xb8, size 0x8
  __declspec(
      property(get = __get__burstSliderFillPoolContainer,
               put = __set__burstSliderFillPoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* _burstSliderFillPoolContainer;

  /// @brief Field _bombNotePoolContainer, offset 0xc0, size 0x8
  __declspec(property(get = __get__bombNotePoolContainer,
                      put = __set__bombNotePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*>* _bombNotePoolContainer;

  /// @brief Field _obstaclePoolContainer, offset 0xc8, size 0x8
  __declspec(property(get = __get__obstaclePoolContainer, put = __set__obstaclePoolContainer))::GlobalNamespace::MemoryPoolContainer_2<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*,
                                                                                                                                       ::GlobalNamespace::ObstacleController*>* _obstaclePoolContainer;

  /// @brief Field _beatmapObjectEventManager, offset 0xd0, size 0x8
  __declspec(property(get = __get__beatmapObjectEventManager, put = __set__beatmapObjectEventManager))::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* _beatmapObjectEventManager;

  /// @brief Field _initData, offset 0xd8, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData* _initData;

  __declspec(property(get = get_activeObstacleControllers))::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController*>* activeObstacleControllers;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::Nullable_1<float_t>& __get__firstBasicNoteTime();

  constexpr ::System::Nullable_1<float_t> const& __get__firstBasicNoteTime() const;

  constexpr void __set__firstBasicNoteTime(::System::Nullable_1<float_t> value);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*& __get__gameNotePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*> const&
  __get__gameNotePoolContainer() const;

  constexpr void __set__gameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* value);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*& __get__burstSliderHeadGameNotePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*> const&
  __get__burstSliderHeadGameNotePoolContainer() const;

  constexpr void __set__burstSliderHeadGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* value);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*& __get__burstSliderGameNotePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*> const&
  __get__burstSliderGameNotePoolContainer() const;

  constexpr void __set__burstSliderGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* value);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*& __get__burstSliderFillPoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*> const&
  __get__burstSliderFillPoolContainer() const;

  constexpr void __set__burstSliderFillPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* value);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*>*& __get__bombNotePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*>*> const&
  __get__bombNotePoolContainer() const;

  constexpr void __set__bombNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*>* value);

  constexpr ::GlobalNamespace::MemoryPoolContainer_2<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*, ::GlobalNamespace::ObstacleController*>*& __get__obstaclePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<
      ::GlobalNamespace::MemoryPoolContainer_2<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*, ::GlobalNamespace::ObstacleController*>*> const&
  __get__obstaclePoolContainer() const;

  constexpr void
  __set__obstaclePoolContainer(::GlobalNamespace::MemoryPoolContainer_2<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*, ::GlobalNamespace::ObstacleController*>* value);

  constexpr ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*& __get__beatmapObjectEventManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*> const& __get__beatmapObjectEventManager() const;

  constexpr void __set__beatmapObjectEventManager(::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* value);

  constexpr ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData* value);

  /// @brief Method get_activeObstacleControllers, addr 0x23d2bbc, size 0x50, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController*>* get_activeObstacleControllers();

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*
  New_ctor(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData* initData, ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* beatmapObjectEventManager,
           ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool* gameNotePool, ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool* burstSliderHeadGameNotePool,
           ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool* burstSliderGameNotePool,
           ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool* burstSliderFillPool, ::GlobalNamespace::__MultiplayerConnectedPlayerBombNoteController__Pool* bombNotePool,
           ::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool* obstaclePool);

  /// @brief Method .ctor, addr 0x23d2c0c, size 0x480, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData* initData, ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* beatmapObjectEventManager,
                    ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool* gameNotePool,
                    ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool* burstSliderHeadGameNotePool,
                    ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool* burstSliderGameNotePool,
                    ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool* burstSliderFillPool, ::GlobalNamespace::__MultiplayerConnectedPlayerBombNoteController__Pool* bombNotePool,
                    ::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool* obstaclePool);

  /// @brief Method Dispose, addr 0x23d308c, size 0x318, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method ProcessObstacleData, addr 0x23d33a4, size 0xfc, virtual true, abstract: false, final false
  inline void ProcessObstacleData(::GlobalNamespace::ObstacleData* obstacleData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData> obstacleSpawnData, float_t rotation);

  /// @brief Method ProcessNoteData, addr 0x23d34a0, size 0x354, virtual true, abstract: false, final false
  inline void ProcessNoteData(::GlobalNamespace::NoteData* noteData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, float_t rotation,
                              bool forceIsFirstNoteBehaviour);

  /// @brief Method ProcessSliderData, addr 0x23d3964, size 0x4, virtual true, abstract: false, final false
  inline void ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData> sliderSpawnData, float_t rotation);

  /// @brief Method DespawnInternal, addr 0x23d3968, size 0x14c, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::NoteController* noteController);

  /// @brief Method DespawnInternal, addr 0x23d3ab4, size 0xa8, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method DespawnInternal, addr 0x23d3b5c, size 0x4, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::SliderController* sliderNoteController);

  /// @brief Method HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasSpawned, addr 0x23d3b60, size 0x144, virtual false, abstract: false, final false
  inline void HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasSpawned(::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfo);

  /// @brief Method HandleMultiplayerBeatmapObjectEventManagerObstacleWasSpawned, addr 0x23d3cf4, size 0x178, virtual false, abstract: false, final false
  inline void HandleMultiplayerBeatmapObjectEventManagerObstacleWasSpawned(::GlobalNamespace::ObstacleSpawnInfoNetSerializable* obstacleSpawnInfo);

  /// @brief Method HandleMultiplayerBeatmapObjectEventManagerSliderWasSpawned, addr 0x23d3e6c, size 0x27c, virtual false, abstract: false, final false
  inline void HandleMultiplayerBeatmapObjectEventManagerSliderWasSpawned(::GlobalNamespace::SliderSpawnInfoNetSerializable* sliderSpawnInfo);

  /// @brief Method HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasCut, addr 0x23d40e8, size 0x544, virtual false, abstract: false, final false
  inline void HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasCut(::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo);

  /// @brief Method AreNotesSame, addr 0x23d462c, size 0xdc, virtual false, abstract: false, final false
  static inline bool AreNotesSame(::GlobalNamespace::NoteController* noteController, ::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo);

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerBeatmapObjectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerBeatmapObjectManager(MultiplayerConnectedPlayerBeatmapObjectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerBeatmapObjectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerBeatmapObjectManager(MultiplayerConnectedPlayerBeatmapObjectManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerBeatmapObjectManager();

public:
  /// @brief Field _firstBasicNoteTime, offset: 0x94, size: 0x8, def value: None
  ::System::Nullable_1<float_t> ____firstBasicNoteTime;

  /// @brief Field _gameNotePoolContainer, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* ____gameNotePoolContainer;

  /// @brief Field _burstSliderHeadGameNotePoolContainer, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* ____burstSliderHeadGameNotePoolContainer;

  /// @brief Field _burstSliderGameNotePoolContainer, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* ____burstSliderGameNotePoolContainer;

  /// @brief Field _burstSliderFillPoolContainer, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* ____burstSliderFillPoolContainer;

  /// @brief Field _bombNotePoolContainer, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*>* ____bombNotePoolContainer;

  /// @brief Field _obstaclePoolContainer, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_2<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*, ::GlobalNamespace::ObstacleController*>* ____obstaclePoolContainer;

  /// @brief Field _beatmapObjectEventManager, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* ____beatmapObjectEventManager;

  /// @brief Field _initData, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData* ____initData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager, 0xe0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager, ____firstBasicNoteTime) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager, ____gameNotePoolContainer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager, ____burstSliderHeadGameNotePoolContainer) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager, ____burstSliderGameNotePoolContainer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager, ____burstSliderFillPoolContainer) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager, ____bombNotePoolContainer) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager, ____obstaclePoolContainer) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager, ____beatmapObjectEventManager) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager, ____initData) == 0xd8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*, "", "MultiplayerConnectedPlayerBeatmapObjectManager");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData*, "", "MultiplayerConnectedPlayerBeatmapObjectManager/InitData");
