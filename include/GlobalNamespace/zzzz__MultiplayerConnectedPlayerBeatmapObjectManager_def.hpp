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
class IConnectedPlayerBeatmapObjectEventManager;
}
namespace GlobalNamespace {
template <typename T> class MemoryPoolContainer_1;
}
namespace GlobalNamespace {
template <typename T0, typename T1> class MemoryPoolContainer_2;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerBombNoteController;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerGameNoteController;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerObstacleController;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class NoteCutInfoNetSerializable;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class NoteSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class ObstacleSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class SliderController;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace GlobalNamespace {
class __MultiplayerConnectedPlayerBeatmapObjectManager__InitData;
}
namespace GlobalNamespace {
class __MultiplayerConnectedPlayerBombNoteController__Pool;
}
namespace GlobalNamespace {
class __MultiplayerConnectedPlayerGameNoteController__Pool;
}
namespace GlobalNamespace {
class __MultiplayerConnectedPlayerObstacleController__Pool;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
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
// CS Name: ::MultiplayerConnectedPlayerBeatmapObjectManager::InitData*
class CORDL_TYPE __MultiplayerConnectedPlayerBeatmapObjectManager__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field disappearingArrows, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_disappearingArrows, put = __cordl_internal_set_disappearingArrows)) bool disappearingArrows;

  /// @brief Field ghostNotes, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_ghostNotes, put = __cordl_internal_set_ghostNotes)) bool ghostNotes;

  /// @brief Field notesUniformScale, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_notesUniformScale, put = __cordl_internal_set_notesUniformScale)) float_t notesUniformScale;

  static inline ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData* New_ctor(bool disappearingArrows, bool ghostNotes, float_t notesUniformScale);

  constexpr bool const& __cordl_internal_get_disappearingArrows() const;

  constexpr bool& __cordl_internal_get_disappearingArrows();

  constexpr bool const& __cordl_internal_get_ghostNotes() const;

  constexpr bool& __cordl_internal_get_ghostNotes();

  constexpr float_t const& __cordl_internal_get_notesUniformScale() const;

  constexpr float_t& __cordl_internal_get_notesUniformScale();

  constexpr void __cordl_internal_set_disappearingArrows(bool value);

  constexpr void __cordl_internal_set_ghostNotes(bool value);

  constexpr void __cordl_internal_set_notesUniformScale(float_t value);

  /// @brief Method .ctor, addr 0x245d1ec, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(bool disappearingArrows, bool ghostNotes, float_t notesUniformScale);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerConnectedPlayerBeatmapObjectManager__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerConnectedPlayerBeatmapObjectManager__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerConnectedPlayerBeatmapObjectManager__InitData(__MultiplayerConnectedPlayerBeatmapObjectManager__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerConnectedPlayerBeatmapObjectManager__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerConnectedPlayerBeatmapObjectManager__InitData(__MultiplayerConnectedPlayerBeatmapObjectManager__InitData const&) = delete;

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
// CS Name: ::MultiplayerConnectedPlayerBeatmapObjectManager*
class CORDL_TYPE MultiplayerConnectedPlayerBeatmapObjectManager : public ::GlobalNamespace::BeatmapObjectManager {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData;

  /// @brief Field _beatmapObjectEventManager, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectEventManager,
                      put = __cordl_internal_set__beatmapObjectEventManager))::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* _beatmapObjectEventManager;

  /// @brief Field _bombNotePoolContainer, offset 0xc0, size 0x8
  __declspec(property(
      get = __cordl_internal_get__bombNotePoolContainer,
      put = __cordl_internal_set__bombNotePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController>>* _bombNotePoolContainer;

  /// @brief Field _burstSliderFillPoolContainer, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__burstSliderFillPoolContainer, put = __cordl_internal_set__burstSliderFillPoolContainer))::GlobalNamespace::MemoryPoolContainer_1<
      ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* _burstSliderFillPoolContainer;

  /// @brief Field _burstSliderGameNotePoolContainer, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__burstSliderGameNotePoolContainer, put = __cordl_internal_set__burstSliderGameNotePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<
      ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* _burstSliderGameNotePoolContainer;

  /// @brief Field _burstSliderHeadGameNotePoolContainer, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__burstSliderHeadGameNotePoolContainer, put = __cordl_internal_set__burstSliderHeadGameNotePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<
      ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* _burstSliderHeadGameNotePoolContainer;

  /// @brief Field _firstBasicNoteTime, offset 0x94, size 0x8
  __declspec(property(get = __cordl_internal_get__firstBasicNoteTime, put = __cordl_internal_set__firstBasicNoteTime))::System::Nullable_1<float_t> _firstBasicNoteTime;

  /// @brief Field _gameNotePoolContainer, offset 0xa0, size 0x8
  __declspec(property(
      get = __cordl_internal_get__gameNotePoolContainer,
      put = __cordl_internal_set__gameNotePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* _gameNotePoolContainer;

  /// @brief Field _initData, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData))::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData* _initData;

  /// @brief Field _obstaclePoolContainer, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__obstaclePoolContainer,
                      put = __cordl_internal_set__obstaclePoolContainer))::GlobalNamespace::MemoryPoolContainer_2<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController>,
                                                                                                                  ::UnityW<::GlobalNamespace::ObstacleController>>* _obstaclePoolContainer;

  __declspec(property(get = get_activeObstacleControllers))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* activeObstacleControllers;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AreNotesSame, addr 0x245d110, size 0xdc, virtual false, abstract: false, final false
  static inline bool AreNotesSame(::GlobalNamespace::NoteController* noteController, ::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo);

  /// @brief Method DespawnInternal, addr 0x245c44c, size 0x14c, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::NoteController* noteController);

  /// @brief Method DespawnInternal, addr 0x245c598, size 0xa8, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method DespawnInternal, addr 0x245c640, size 0x4, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::SliderController* sliderNoteController);

  /// @brief Method Dispose, addr 0x245bb70, size 0x318, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasCut, addr 0x245cbcc, size 0x544, virtual false, abstract: false, final false
  inline void HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasCut(::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo);

  /// @brief Method HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasSpawned, addr 0x245c644, size 0x144, virtual false, abstract: false, final false
  inline void HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasSpawned(::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfo);

  /// @brief Method HandleMultiplayerBeatmapObjectEventManagerObstacleWasSpawned, addr 0x245c7d8, size 0x178, virtual false, abstract: false, final false
  inline void HandleMultiplayerBeatmapObjectEventManagerObstacleWasSpawned(::GlobalNamespace::ObstacleSpawnInfoNetSerializable* obstacleSpawnInfo);

  /// @brief Method HandleMultiplayerBeatmapObjectEventManagerSliderWasSpawned, addr 0x245c950, size 0x27c, virtual false, abstract: false, final false
  inline void HandleMultiplayerBeatmapObjectEventManagerSliderWasSpawned(::GlobalNamespace::SliderSpawnInfoNetSerializable* sliderSpawnInfo);

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*
  New_ctor(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData* initData, ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* beatmapObjectEventManager,
           ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool* gameNotePool, ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool* burstSliderHeadGameNotePool,
           ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool* burstSliderGameNotePool,
           ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool* burstSliderFillPool, ::GlobalNamespace::__MultiplayerConnectedPlayerBombNoteController__Pool* bombNotePool,
           ::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool* obstaclePool);

  /// @brief Method ProcessNoteData, addr 0x245bf84, size 0x354, virtual true, abstract: false, final false
  inline void ProcessNoteData(::GlobalNamespace::NoteData* noteData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, float_t rotation,
                              bool forceIsFirstNoteBehaviour);

  /// @brief Method ProcessObstacleData, addr 0x245be88, size 0xfc, virtual true, abstract: false, final false
  inline void ProcessObstacleData(::GlobalNamespace::ObstacleData* obstacleData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData> obstacleSpawnData, float_t rotation);

  /// @brief Method ProcessSliderData, addr 0x245c448, size 0x4, virtual true, abstract: false, final false
  inline void ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData> sliderSpawnData, float_t rotation);

  constexpr ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*& __cordl_internal_get__beatmapObjectEventManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*> const& __cordl_internal_get__beatmapObjectEventManager() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController>>*& __cordl_internal_get__bombNotePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController>>*> const&
  __cordl_internal_get__bombNotePoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*& __cordl_internal_get__burstSliderFillPoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*> const&
  __cordl_internal_get__burstSliderFillPoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*& __cordl_internal_get__burstSliderGameNotePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*> const&
  __cordl_internal_get__burstSliderGameNotePoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*& __cordl_internal_get__burstSliderHeadGameNotePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*> const&
  __cordl_internal_get__burstSliderHeadGameNotePoolContainer() const;

  constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get__firstBasicNoteTime() const;

  constexpr ::System::Nullable_1<float_t>& __cordl_internal_get__firstBasicNoteTime();

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*& __cordl_internal_get__gameNotePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*> const&
  __cordl_internal_get__gameNotePoolContainer() const;

  constexpr ::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData*> const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_2<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController>, ::UnityW<::GlobalNamespace::ObstacleController>>*&
  __cordl_internal_get__obstaclePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<
      ::GlobalNamespace::MemoryPoolContainer_2<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController>, ::UnityW<::GlobalNamespace::ObstacleController>>*> const&
  __cordl_internal_get__obstaclePoolContainer() const;

  constexpr void __cordl_internal_set__beatmapObjectEventManager(::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* value);

  constexpr void __cordl_internal_set__bombNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController>>* value);

  constexpr void __cordl_internal_set__burstSliderFillPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* value);

  constexpr void __cordl_internal_set__burstSliderGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* value);

  constexpr void __cordl_internal_set__burstSliderHeadGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* value);

  constexpr void __cordl_internal_set__firstBasicNoteTime(::System::Nullable_1<float_t> value);

  constexpr void __cordl_internal_set__gameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData* value);

  constexpr void __cordl_internal_set__obstaclePoolContainer(
      ::GlobalNamespace::MemoryPoolContainer_2<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController>, ::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method .ctor, addr 0x245b6f0, size 0x480, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__MultiplayerConnectedPlayerBeatmapObjectManager__InitData* initData, ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* beatmapObjectEventManager,
                    ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool* gameNotePool,
                    ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool* burstSliderHeadGameNotePool,
                    ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool* burstSliderGameNotePool,
                    ::GlobalNamespace::__MultiplayerConnectedPlayerGameNoteController__Pool* burstSliderFillPool, ::GlobalNamespace::__MultiplayerConnectedPlayerBombNoteController__Pool* bombNotePool,
                    ::GlobalNamespace::__MultiplayerConnectedPlayerObstacleController__Pool* obstaclePool);

  /// @brief Method get_activeObstacleControllers, addr 0x245b6a0, size 0x50, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* get_activeObstacleControllers();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerBeatmapObjectManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerBeatmapObjectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerBeatmapObjectManager(MultiplayerConnectedPlayerBeatmapObjectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerBeatmapObjectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerBeatmapObjectManager(MultiplayerConnectedPlayerBeatmapObjectManager const&) = delete;

  /// @brief Field _firstBasicNoteTime, offset: 0x94, size: 0x8, def value: None
  ::System::Nullable_1<float_t> ____firstBasicNoteTime;

  /// @brief Field _gameNotePoolContainer, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* ____gameNotePoolContainer;

  /// @brief Field _burstSliderHeadGameNotePoolContainer, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* ____burstSliderHeadGameNotePoolContainer;

  /// @brief Field _burstSliderGameNotePoolContainer, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* ____burstSliderGameNotePoolContainer;

  /// @brief Field _burstSliderFillPoolContainer, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* ____burstSliderFillPoolContainer;

  /// @brief Field _bombNotePoolContainer, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController>>* ____bombNotePoolContainer;

  /// @brief Field _obstaclePoolContainer, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_2<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController>, ::UnityW<::GlobalNamespace::ObstacleController>>* ____obstaclePoolContainer;

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
