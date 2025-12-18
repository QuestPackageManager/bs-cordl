#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConnectedPlayerBeatmapObjectManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerBeatmapObjectManager)
namespace GlobalNamespace {
class BeatmapObjectSpawnMovementData;
}
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
class MultiplayerConnectedPlayerBeatmapObjectManager_InitData;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerBombNoteController_Pool;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerBombNoteController;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerGameNoteController_Pool;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerGameNoteController;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerObstacleController_Pool;
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
struct NoteSpawnData;
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
struct ObstacleSpawnData;
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
struct SliderSpawnData;
}
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class VariableMovementDataProvider;
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
class MultiplayerConnectedPlayerBeatmapObjectManager_InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerConnectedPlayerBeatmapObjectManager/InitData
class CORDL_TYPE MultiplayerConnectedPlayerBeatmapObjectManager_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field bpm, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_bpm, put = __cordl_internal_set_bpm)) float_t bpm;

  /// @brief Field disappearingArrows, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_disappearingArrows, put = __cordl_internal_set_disappearingArrows)) bool disappearingArrows;

  /// @brief Field ghostNotes, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_ghostNotes, put = __cordl_internal_set_ghostNotes)) bool ghostNotes;

  /// @brief Field noteJumpMovementSpeed, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_noteJumpMovementSpeed, put = __cordl_internal_set_noteJumpMovementSpeed)) float_t noteJumpMovementSpeed;

  /// @brief Field notesUniformScale, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_notesUniformScale, put = __cordl_internal_set_notesUniformScale)) float_t notesUniformScale;

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData* New_ctor(bool disappearingArrows, bool ghostNotes, float_t notesUniformScale, float_t noteJumpMovementSpeed,
                                                                                                     float_t bpm);

  constexpr float_t const& __cordl_internal_get_bpm() const;

  constexpr float_t& __cordl_internal_get_bpm();

  constexpr bool const& __cordl_internal_get_disappearingArrows() const;

  constexpr bool& __cordl_internal_get_disappearingArrows();

  constexpr bool const& __cordl_internal_get_ghostNotes() const;

  constexpr bool& __cordl_internal_get_ghostNotes();

  constexpr float_t const& __cordl_internal_get_noteJumpMovementSpeed() const;

  constexpr float_t& __cordl_internal_get_noteJumpMovementSpeed();

  constexpr float_t const& __cordl_internal_get_notesUniformScale() const;

  constexpr float_t& __cordl_internal_get_notesUniformScale();

  constexpr void __cordl_internal_set_bpm(float_t value);

  constexpr void __cordl_internal_set_disappearingArrows(bool value);

  constexpr void __cordl_internal_set_ghostNotes(bool value);

  constexpr void __cordl_internal_set_noteJumpMovementSpeed(float_t value);

  constexpr void __cordl_internal_set_notesUniformScale(float_t value);

  /// @brief Method .ctor, addr 0x580f458, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(bool disappearingArrows, bool ghostNotes, float_t notesUniformScale, float_t noteJumpMovementSpeed, float_t bpm);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerConnectedPlayerBeatmapObjectManager_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerBeatmapObjectManager_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerConnectedPlayerBeatmapObjectManager_InitData(MultiplayerConnectedPlayerBeatmapObjectManager_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerBeatmapObjectManager_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerConnectedPlayerBeatmapObjectManager_InitData(MultiplayerConnectedPlayerBeatmapObjectManager_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6061 };

  /// @brief Field disappearingArrows, offset: 0x10, size: 0x1, def value: None
  bool ___disappearingArrows;

  /// @brief Field ghostNotes, offset: 0x11, size: 0x1, def value: None
  bool ___ghostNotes;

  /// @brief Field notesUniformScale, offset: 0x14, size: 0x4, def value: None
  float_t ___notesUniformScale;

  /// @brief Field noteJumpMovementSpeed, offset: 0x18, size: 0x4, def value: None
  float_t ___noteJumpMovementSpeed;

  /// @brief Field bpm, offset: 0x1c, size: 0x4, def value: None
  float_t ___bpm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData, ___disappearingArrows) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData, ___ghostNotes) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData, ___notesUniformScale) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData, ___noteJumpMovementSpeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData, ___bpm) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapObjectManager, System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerConnectedPlayerBeatmapObjectManager
class CORDL_TYPE MultiplayerConnectedPlayerBeatmapObjectManager : public ::GlobalNamespace::BeatmapObjectManager {
public:
  // Declarations
  using InitData = ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData;

  /// @brief Field _beatmapObjectEventManager, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapObjectEventManager,
                      put = __cordl_internal_set__beatmapObjectEventManager)) ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* _beatmapObjectEventManager;

  /// @brief Field _bombNotePoolContainer, offset 0xc0, size 0x8
  __declspec(property(
      get = __cordl_internal_get__bombNotePoolContainer,
      put = __cordl_internal_set__bombNotePoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController>>* _bombNotePoolContainer;

  /// @brief Field _burstSliderGameNotePoolContainer, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__burstSliderGameNotePoolContainer, put = __cordl_internal_set__burstSliderGameNotePoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<
      ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* _burstSliderGameNotePoolContainer;

  /// @brief Field _burstSliderHeadGameNotePoolContainer, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__burstSliderHeadGameNotePoolContainer, put = __cordl_internal_set__burstSliderHeadGameNotePoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<
      ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* _burstSliderHeadGameNotePoolContainer;

  /// @brief Field _defaultBeatmapObjectSpawnMovementData, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultBeatmapObjectSpawnMovementData,
                      put = __cordl_internal_set__defaultBeatmapObjectSpawnMovementData)) ::GlobalNamespace::BeatmapObjectSpawnMovementData* _defaultBeatmapObjectSpawnMovementData;

  /// @brief Field _firstBasicNoteTime, offset 0x9c, size 0x8
  __declspec(property(get = __cordl_internal_get__firstBasicNoteTime, put = __cordl_internal_set__firstBasicNoteTime)) ::System::Nullable_1<float_t> _firstBasicNoteTime;

  /// @brief Field _gameNotePoolContainer, offset 0xa8, size 0x8
  __declspec(property(
      get = __cordl_internal_get__gameNotePoolContainer,
      put = __cordl_internal_set__gameNotePoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* _gameNotePoolContainer;

  /// @brief Field _initData, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData* _initData;

  /// @brief Field _obstaclePoolContainer, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__obstaclePoolContainer,
                      put = __cordl_internal_set__obstaclePoolContainer)) ::GlobalNamespace::MemoryPoolContainer_2<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController>,
                                                                                                                   ::UnityW<::GlobalNamespace::ObstacleController>>* _obstaclePoolContainer;

  __declspec(property(get = get_activeObstacleControllers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* activeObstacleControllers;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AreNotesSame, addr 0x580f370, size 0xe8, virtual false, abstract: false, final false
  static inline bool AreNotesSame(::GlobalNamespace::NoteController* noteController, ::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo);

  /// @brief Method DespawnInternal, addr 0x580e97c, size 0x150, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::NoteController* noteController);

  /// @brief Method DespawnInternal, addr 0x580eacc, size 0xbc, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method DespawnInternal, addr 0x580eb88, size 0x4, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::SliderController* sliderNoteController);

  /// @brief Method Dispose, addr 0x580e1d4, size 0x32c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasCut, addr 0x580f02c, size 0x344, virtual false, abstract: false, final false
  inline void HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasCut(::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo);

  /// @brief Method HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasSpawned, addr 0x580eb8c, size 0x17c, virtual false, abstract: false, final false
  inline void HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasSpawned(::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfo);

  /// @brief Method HandleMultiplayerBeatmapObjectEventManagerObstacleWasSpawned, addr 0x580ed08, size 0x130, virtual false, abstract: false, final false
  inline void HandleMultiplayerBeatmapObjectEventManagerObstacleWasSpawned(::GlobalNamespace::ObstacleSpawnInfoNetSerializable* obstacleSpawnInfo);

  /// @brief Method HandleMultiplayerBeatmapObjectEventManagerSliderWasSpawned, addr 0x580ee38, size 0x1f4, virtual false, abstract: false, final false
  inline void HandleMultiplayerBeatmapObjectEventManagerSliderWasSpawned(::GlobalNamespace::SliderSpawnInfoNetSerializable* sliderSpawnInfo);

  static inline ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*
  New_ctor(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData* initData, ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* beatmapObjectEventManager,
           ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool* gameNotePool, ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool* burstSliderHeadGameNotePool,
           ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool* burstSliderGameNotePool, ::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController_Pool* bombNotePool,
           ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool* obstaclePool, ::GlobalNamespace::VariableMovementDataProvider* variableMovementDataProvider);

  /// @brief Method ProcessNoteData, addr 0x580e5b0, size 0x300, virtual true, abstract: false, final false
  inline void ProcessNoteData(::GlobalNamespace::NoteData* noteData, ::ByRef<::GlobalNamespace::NoteSpawnData> noteSpawnData, bool forceIsFirstNoteBehaviour);

  /// @brief Method ProcessObstacleData, addr 0x580e500, size 0xb0, virtual true, abstract: false, final false
  inline void ProcessObstacleData(::GlobalNamespace::ObstacleData* obstacleData, ::ByRef<::GlobalNamespace::ObstacleSpawnData> obstacleSpawnData);

  /// @brief Method ProcessSliderData, addr 0x580e978, size 0x4, virtual true, abstract: false, final false
  inline void ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ::ByRef<::GlobalNamespace::SliderSpawnData> sliderSpawnData);

  constexpr ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* const& __cordl_internal_get__beatmapObjectEventManager() const;

  constexpr ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*& __cordl_internal_get__beatmapObjectEventManager();

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController>>* const& __cordl_internal_get__bombNotePoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController>>*& __cordl_internal_get__bombNotePoolContainer();

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* const& __cordl_internal_get__burstSliderGameNotePoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*& __cordl_internal_get__burstSliderGameNotePoolContainer();

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* const&
  __cordl_internal_get__burstSliderHeadGameNotePoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*& __cordl_internal_get__burstSliderHeadGameNotePoolContainer();

  constexpr ::GlobalNamespace::BeatmapObjectSpawnMovementData* const& __cordl_internal_get__defaultBeatmapObjectSpawnMovementData() const;

  constexpr ::GlobalNamespace::BeatmapObjectSpawnMovementData*& __cordl_internal_get__defaultBeatmapObjectSpawnMovementData();

  constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get__firstBasicNoteTime() const;

  constexpr ::System::Nullable_1<float_t>& __cordl_internal_get__firstBasicNoteTime();

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* const& __cordl_internal_get__gameNotePoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*& __cordl_internal_get__gameNotePoolContainer();

  constexpr ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData*& __cordl_internal_get__initData();

  constexpr ::GlobalNamespace::MemoryPoolContainer_2<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController>, ::UnityW<::GlobalNamespace::ObstacleController>>* const&
  __cordl_internal_get__obstaclePoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_2<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController>, ::UnityW<::GlobalNamespace::ObstacleController>>*&
  __cordl_internal_get__obstaclePoolContainer();

  constexpr void __cordl_internal_set__beatmapObjectEventManager(::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* value);

  constexpr void __cordl_internal_set__bombNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController>>* value);

  constexpr void __cordl_internal_set__burstSliderGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* value);

  constexpr void __cordl_internal_set__burstSliderHeadGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* value);

  constexpr void __cordl_internal_set__defaultBeatmapObjectSpawnMovementData(::GlobalNamespace::BeatmapObjectSpawnMovementData* value);

  constexpr void __cordl_internal_set__firstBasicNoteTime(::System::Nullable_1<float_t> value);

  constexpr void __cordl_internal_set__gameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData* value);

  constexpr void __cordl_internal_set__obstaclePoolContainer(
      ::GlobalNamespace::MemoryPoolContainer_2<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController>, ::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method .ctor, addr 0x580dc4c, size 0x588, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData* initData, ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* beatmapObjectEventManager,
                    ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool* gameNotePool,
                    ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool* burstSliderHeadGameNotePool,
                    ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool* burstSliderGameNotePool, ::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController_Pool* bombNotePool,
                    ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool* obstaclePool, ::GlobalNamespace::VariableMovementDataProvider* variableMovementDataProvider);

  /// @brief Method get_activeObstacleControllers, addr 0x580dbf8, size 0x54, virtual true, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6062 };

  /// @brief Field _firstBasicNoteTime, offset: 0x9c, size: 0x8, def value: None
  ::System::Nullable_1<float_t> ____firstBasicNoteTime;

  /// @brief Field _gameNotePoolContainer, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* ____gameNotePoolContainer;

  /// @brief Field _burstSliderHeadGameNotePoolContainer, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* ____burstSliderHeadGameNotePoolContainer;

  /// @brief Field _burstSliderGameNotePoolContainer, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* ____burstSliderGameNotePoolContainer;

  /// @brief Field _bombNotePoolContainer, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController>>* ____bombNotePoolContainer;

  /// @brief Field _obstaclePoolContainer, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_2<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController>, ::UnityW<::GlobalNamespace::ObstacleController>>* ____obstaclePoolContainer;

  /// @brief Field _beatmapObjectEventManager, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* ____beatmapObjectEventManager;

  /// @brief Field _initData, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData* ____initData;

  /// @brief Field _defaultBeatmapObjectSpawnMovementData, offset: 0xe0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectSpawnMovementData* ____defaultBeatmapObjectSpawnMovementData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager, ____firstBasicNoteTime) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager, ____gameNotePoolContainer) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager, ____burstSliderHeadGameNotePoolContainer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager, ____burstSliderGameNotePoolContainer) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager, ____bombNotePoolContainer) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager, ____obstaclePoolContainer) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager, ____beatmapObjectEventManager) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager, ____initData) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager, ____defaultBeatmapObjectSpawnMovementData) == 0xe0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager, 0xe8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*, "", "MultiplayerConnectedPlayerBeatmapObjectManager");
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData*, "", "MultiplayerConnectedPlayerBeatmapObjectManager/InitData");
