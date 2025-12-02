#pragma once
// IWYU pragma private; include "GlobalNamespace/BasicBeatmapObjectManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BasicBeatmapObjectManager)
namespace GlobalNamespace {
class BasicBeatmapObjectManager_InitData;
}
namespace GlobalNamespace {
class BombNoteController_Pool;
}
namespace GlobalNamespace {
class BombNoteController;
}
namespace GlobalNamespace {
class BurstSliderGameNoteController_Pool;
}
namespace GlobalNamespace {
class BurstSliderGameNoteController;
}
namespace GlobalNamespace {
class DeterminismConfig;
}
namespace GlobalNamespace {
class GameNoteController_Pool;
}
namespace GlobalNamespace {
class GameNoteController;
}
namespace GlobalNamespace {
class IRandom;
}
namespace GlobalNamespace {
template <typename T> class MemoryPoolContainer_1;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
struct NoteSpawnData;
}
namespace GlobalNamespace {
class ObstacleController_Pool;
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
struct SliderController_LengthType;
}
namespace GlobalNamespace {
class SliderController_Pool;
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
class VariableMovementDataProvider;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BasicBeatmapObjectManager;
}
namespace GlobalNamespace {
class BasicBeatmapObjectManager_InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BasicBeatmapObjectManager);
MARK_REF_PTR_T(::GlobalNamespace::BasicBeatmapObjectManager_InitData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BasicBeatmapObjectManager/InitData
class CORDL_TYPE BasicBeatmapObjectManager_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cutAngleTolerance, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_cutAngleTolerance, put = __cordl_internal_set_cutAngleTolerance)) float_t cutAngleTolerance;

  /// @brief Field disappearingArrows, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_disappearingArrows, put = __cordl_internal_set_disappearingArrows)) bool disappearingArrows;

  /// @brief Field ghostNotes, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_ghostNotes, put = __cordl_internal_set_ghostNotes)) bool ghostNotes;

  /// @brief Field notesUniformScale, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_notesUniformScale, put = __cordl_internal_set_notesUniformScale)) float_t notesUniformScale;

  static inline ::GlobalNamespace::BasicBeatmapObjectManager_InitData* New_ctor(bool disappearingArrows, bool ghostNotes, float_t cutAngleTolerance, float_t notesUniformScale);

  constexpr float_t const& __cordl_internal_get_cutAngleTolerance() const;

  constexpr float_t& __cordl_internal_get_cutAngleTolerance();

  constexpr bool const& __cordl_internal_get_disappearingArrows() const;

  constexpr bool& __cordl_internal_get_disappearingArrows();

  constexpr bool const& __cordl_internal_get_ghostNotes() const;

  constexpr bool& __cordl_internal_get_ghostNotes();

  constexpr float_t const& __cordl_internal_get_notesUniformScale() const;

  constexpr float_t& __cordl_internal_get_notesUniformScale();

  constexpr void __cordl_internal_set_cutAngleTolerance(float_t value);

  constexpr void __cordl_internal_set_disappearingArrows(bool value);

  constexpr void __cordl_internal_set_ghostNotes(bool value);

  constexpr void __cordl_internal_set_notesUniformScale(float_t value);

  /// @brief Method .ctor, addr 0x56b5690, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool disappearingArrows, bool ghostNotes, float_t cutAngleTolerance, float_t notesUniformScale);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicBeatmapObjectManager_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicBeatmapObjectManager_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicBeatmapObjectManager_InitData(BasicBeatmapObjectManager_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicBeatmapObjectManager_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicBeatmapObjectManager_InitData(BasicBeatmapObjectManager_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5618 };

  /// @brief Field disappearingArrows, offset: 0x10, size: 0x1, def value: None
  bool ___disappearingArrows;

  /// @brief Field ghostNotes, offset: 0x11, size: 0x1, def value: None
  bool ___ghostNotes;

  /// @brief Field cutAngleTolerance, offset: 0x14, size: 0x4, def value: None
  float_t ___cutAngleTolerance;

  /// @brief Field notesUniformScale, offset: 0x18, size: 0x4, def value: None
  float_t ___notesUniformScale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BasicBeatmapObjectManager_InitData, ___disappearingArrows) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapObjectManager_InitData, ___ghostNotes) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapObjectManager_InitData, ___cutAngleTolerance) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapObjectManager_InitData, ___notesUniformScale) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BasicBeatmapObjectManager_InitData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapObjectManager, System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: BasicBeatmapObjectManager
class CORDL_TYPE BasicBeatmapObjectManager : public ::GlobalNamespace::BeatmapObjectManager {
public:
  // Declarations
  using InitData = ::GlobalNamespace::BasicBeatmapObjectManager_InitData;

  /// @brief Field _basicGameNotePoolContainer, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__basicGameNotePoolContainer,
                      put = __cordl_internal_set__basicGameNotePoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>* _basicGameNotePoolContainer;

  /// @brief Field _bombNotePoolContainer, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__bombNotePoolContainer,
                      put = __cordl_internal_set__bombNotePoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>* _bombNotePoolContainer;

  /// @brief Field _burstSliderGameNotePoolContainer, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__burstSliderGameNotePoolContainer,
                      put = __cordl_internal_set__burstSliderGameNotePoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*
      _burstSliderGameNotePoolContainer;

  /// @brief Field _burstSliderHeadGameNotePoolContainer, offset 0xd0, size 0x8
  __declspec(property(
      get = __cordl_internal_get__burstSliderHeadGameNotePoolContainer,
      put =
          __cordl_internal_set__burstSliderHeadGameNotePoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>* _burstSliderHeadGameNotePoolContainer;

  /// @brief Field _determinismConfig, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__determinismConfig, put = __cordl_internal_set__determinismConfig)) ::GlobalNamespace::DeterminismConfig* _determinismConfig;

  /// @brief Field _firstBasicNoteTime, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__firstBasicNoteTime, put = __cordl_internal_set__firstBasicNoteTime)) ::System::Nullable_1<float_t> _firstBasicNoteTime;

  /// @brief Field _initData, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::BasicBeatmapObjectManager_InitData* _initData;

  /// @brief Field _obstaclePoolContainer, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__obstaclePoolContainer,
                      put = __cordl_internal_set__obstaclePoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>* _obstaclePoolContainer;

  /// @brief Field _random, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__random, put = __cordl_internal_set__random)) ::GlobalNamespace::IRandom* _random;

  /// @brief Field _sliderControllerPool, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderControllerPool, put = __cordl_internal_set__sliderControllerPool)) ::GlobalNamespace::SliderController_Pool* _sliderControllerPool;

  /// @brief Field _sliderNotePoolContainersDictionary, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__sliderNotePoolContainersDictionary, put = __cordl_internal_set__sliderNotePoolContainersDictionary)) ::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::SliderController_LengthType, ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::SliderController>>*>* _sliderNotePoolContainersDictionary;

  /// @brief Field _variableMovementDataProvider, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__variableMovementDataProvider,
                      put = __cordl_internal_set__variableMovementDataProvider)) ::GlobalNamespace::VariableMovementDataProvider* _variableMovementDataProvider;

  __declspec(property(get = get_activeObstacleControllers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* activeObstacleControllers;

  /// @brief Method DespawnInternal, addr 0x56b501c, size 0x208, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::NoteController* noteController);

  /// @brief Method DespawnInternal, addr 0x56b4cc4, size 0x64, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method DespawnInternal, addr 0x56b5460, size 0xb0, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::SliderController* sliderNoteController);

  /// @brief Method Init, addr 0x56b4670, size 0x5a4, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::BasicBeatmapObjectManager_InitData* initData, ::GlobalNamespace::IRandom* random, ::GlobalNamespace::DeterminismConfig* determinismConfig,
                   ::GlobalNamespace::VariableMovementDataProvider* variableMovementDataProvider, ::GlobalNamespace::GameNoteController_Pool* basicGameNotePool,
                   ::GlobalNamespace::GameNoteController_Pool* burstSliderHeadGameNotePool, ::GlobalNamespace::BurstSliderGameNoteController_Pool* burstSliderGameNotePool,
                   ::GlobalNamespace::BombNoteController_Pool* bombNotePool, ::GlobalNamespace::ObstacleController_Pool* obstaclePool, ::GlobalNamespace::SliderController_Pool* sliderPools);

  static inline ::GlobalNamespace::BasicBeatmapObjectManager* New_ctor();

  /// @brief Method ProcessNoteData, addr 0x56b4d28, size 0x2f4, virtual true, abstract: false, final false
  inline void ProcessNoteData(::GlobalNamespace::NoteData* noteData, ::ByRef<::GlobalNamespace::NoteSpawnData> noteSpawnData, bool forceIsFirstNoteBehaviour);

  /// @brief Method ProcessObstacleData, addr 0x56b4c14, size 0xb0, virtual true, abstract: false, final false
  inline void ProcessObstacleData(::GlobalNamespace::ObstacleData* obstacleData, ::ByRef<::GlobalNamespace::ObstacleSpawnData> obstacleSpawnData);

  /// @brief Method ProcessSliderData, addr 0x56b5224, size 0x23c, virtual true, abstract: false, final false
  inline void ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ::ByRef<::GlobalNamespace::SliderSpawnData> sliderSpawnData);

  /// @brief Method __InvalidateBombNotePool, addr 0x56b55e8, size 0xa0, virtual false, abstract: false, final false
  inline void __InvalidateBombNotePool();

  /// @brief Method __InvalidateGameNotePools, addr 0x56b5510, size 0xd8, virtual false, abstract: false, final false
  inline void __InvalidateGameNotePools();

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>* const& __cordl_internal_get__basicGameNotePoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>*& __cordl_internal_get__basicGameNotePoolContainer();

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>* const& __cordl_internal_get__bombNotePoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>*& __cordl_internal_get__bombNotePoolContainer();

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>* const& __cordl_internal_get__burstSliderGameNotePoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>*& __cordl_internal_get__burstSliderGameNotePoolContainer();

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>* const& __cordl_internal_get__burstSliderHeadGameNotePoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>*& __cordl_internal_get__burstSliderHeadGameNotePoolContainer();

  constexpr ::GlobalNamespace::DeterminismConfig* const& __cordl_internal_get__determinismConfig() const;

  constexpr ::GlobalNamespace::DeterminismConfig*& __cordl_internal_get__determinismConfig();

  constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get__firstBasicNoteTime() const;

  constexpr ::System::Nullable_1<float_t>& __cordl_internal_get__firstBasicNoteTime();

  constexpr ::GlobalNamespace::BasicBeatmapObjectManager_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::BasicBeatmapObjectManager_InitData*& __cordl_internal_get__initData();

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>* const& __cordl_internal_get__obstaclePoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>*& __cordl_internal_get__obstaclePoolContainer();

  constexpr ::GlobalNamespace::IRandom* const& __cordl_internal_get__random() const;

  constexpr ::GlobalNamespace::IRandom*& __cordl_internal_get__random();

  constexpr ::GlobalNamespace::SliderController_Pool* const& __cordl_internal_get__sliderControllerPool() const;

  constexpr ::GlobalNamespace::SliderController_Pool*& __cordl_internal_get__sliderControllerPool();

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SliderController_LengthType,
                                                         ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::SliderController>>*>* const&
  __cordl_internal_get__sliderNotePoolContainersDictionary() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SliderController_LengthType, ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::SliderController>>*>*&
  __cordl_internal_get__sliderNotePoolContainersDictionary();

  constexpr ::GlobalNamespace::VariableMovementDataProvider* const& __cordl_internal_get__variableMovementDataProvider() const;

  constexpr ::GlobalNamespace::VariableMovementDataProvider*& __cordl_internal_get__variableMovementDataProvider();

  constexpr void __cordl_internal_set__basicGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>* value);

  constexpr void __cordl_internal_set__bombNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>* value);

  constexpr void __cordl_internal_set__burstSliderGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>* value);

  constexpr void __cordl_internal_set__burstSliderHeadGameNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>* value);

  constexpr void __cordl_internal_set__determinismConfig(::GlobalNamespace::DeterminismConfig* value);

  constexpr void __cordl_internal_set__firstBasicNoteTime(::System::Nullable_1<float_t> value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::BasicBeatmapObjectManager_InitData* value);

  constexpr void __cordl_internal_set__obstaclePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  constexpr void __cordl_internal_set__random(::GlobalNamespace::IRandom* value);

  constexpr void __cordl_internal_set__sliderControllerPool(::GlobalNamespace::SliderController_Pool* value);

  constexpr void __cordl_internal_set__sliderNotePoolContainersDictionary(
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SliderController_LengthType, ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::SliderController>>*>* value);

  constexpr void __cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::VariableMovementDataProvider* value);

  /// @brief Method .ctor, addr 0x56b5688, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activeObstacleControllers, addr 0x56b461c, size 0x54, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* get_activeObstacleControllers();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasicBeatmapObjectManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasicBeatmapObjectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasicBeatmapObjectManager(BasicBeatmapObjectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasicBeatmapObjectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasicBeatmapObjectManager(BasicBeatmapObjectManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5619 };

  /// @brief Field _sliderControllerPool, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::SliderController_Pool* ____sliderControllerPool;

  /// @brief Field _variableMovementDataProvider, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::VariableMovementDataProvider* ____variableMovementDataProvider;

  /// @brief Field _initData, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::BasicBeatmapObjectManager_InitData* ____initData;

  /// @brief Field _random, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::IRandom* ____random;

  /// @brief Field _determinismConfig, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::DeterminismConfig* ____determinismConfig;

  /// @brief Field _basicGameNotePoolContainer, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>* ____basicGameNotePoolContainer;

  /// @brief Field _burstSliderHeadGameNotePoolContainer, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::GameNoteController>>* ____burstSliderHeadGameNotePoolContainer;

  /// @brief Field _burstSliderGameNotePoolContainer, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BurstSliderGameNoteController>>* ____burstSliderGameNotePoolContainer;

  /// @brief Field _bombNotePoolContainer, offset: 0xe0, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>* ____bombNotePoolContainer;

  /// @brief Field _obstaclePoolContainer, offset: 0xe8, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>* ____obstaclePoolContainer;

  /// @brief Field _sliderNotePoolContainersDictionary, offset: 0xf0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SliderController_LengthType, ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::SliderController>>*>*
      ____sliderNotePoolContainersDictionary;

  /// @brief Field _firstBasicNoteTime, offset: 0xf8, size: 0x8, def value: None
  ::System::Nullable_1<float_t> ____firstBasicNoteTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BasicBeatmapObjectManager, ____sliderControllerPool) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapObjectManager, ____variableMovementDataProvider) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapObjectManager, ____initData) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapObjectManager, ____random) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapObjectManager, ____determinismConfig) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapObjectManager, ____basicGameNotePoolContainer) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapObjectManager, ____burstSliderHeadGameNotePoolContainer) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapObjectManager, ____burstSliderGameNotePoolContainer) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapObjectManager, ____bombNotePoolContainer) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapObjectManager, ____obstaclePoolContainer) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapObjectManager, ____sliderNotePoolContainersDictionary) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BasicBeatmapObjectManager, ____firstBasicNoteTime) == 0xf8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BasicBeatmapObjectManager, 0x100>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BasicBeatmapObjectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicBeatmapObjectManager*, "", "BasicBeatmapObjectManager");
NEED_NO_BOX(::GlobalNamespace::BasicBeatmapObjectManager_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicBeatmapObjectManager_InitData*, "", "BasicBeatmapObjectManager/InitData");
