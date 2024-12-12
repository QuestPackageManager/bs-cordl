#pragma once
// IWYU pragma private; include "GlobalNamespace/TutorialBeatmapObjectManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TutorialBeatmapObjectManager)
namespace GlobalNamespace {
class BombNoteController_Pool;
}
namespace GlobalNamespace {
class BombNoteController;
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
class SliderController;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
struct SliderSpawnData;
}
namespace GlobalNamespace {
class TutorialBeatmapObjectManager_InitData;
}
namespace GlobalNamespace {
class TutorialNoteController_Pool;
}
namespace GlobalNamespace {
class TutorialNoteController;
}
namespace GlobalNamespace {
class VariableMovementDataProvider;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Random;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialBeatmapObjectManager;
}
namespace GlobalNamespace {
class TutorialBeatmapObjectManager_InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialBeatmapObjectManager);
MARK_REF_PTR_T(::GlobalNamespace::TutorialBeatmapObjectManager_InitData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TutorialBeatmapObjectManager/InitData
class CORDL_TYPE TutorialBeatmapObjectManager_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cutAngleTolerance, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_cutAngleTolerance, put = __cordl_internal_set_cutAngleTolerance)) float_t cutAngleTolerance;

  static inline ::GlobalNamespace::TutorialBeatmapObjectManager_InitData* New_ctor(float_t cutAngleTolerance);

  constexpr float_t const& __cordl_internal_get_cutAngleTolerance() const;

  constexpr float_t& __cordl_internal_get_cutAngleTolerance();

  constexpr void __cordl_internal_set_cutAngleTolerance(float_t value);

  /// @brief Method .ctor, addr 0x3b7950c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t cutAngleTolerance);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialBeatmapObjectManager_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialBeatmapObjectManager_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialBeatmapObjectManager_InitData(TutorialBeatmapObjectManager_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialBeatmapObjectManager_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialBeatmapObjectManager_InitData(TutorialBeatmapObjectManager_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4181 };

  /// @brief Field cutAngleTolerance, offset: 0x10, size: 0x4, def value: None
  float_t ___cutAngleTolerance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TutorialBeatmapObjectManager_InitData, ___cutAngleTolerance) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialBeatmapObjectManager_InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapObjectManager
namespace GlobalNamespace {
// Is value type: false
// CS Name: TutorialBeatmapObjectManager
class CORDL_TYPE TutorialBeatmapObjectManager : public ::GlobalNamespace::BeatmapObjectManager {
public:
  // Declarations
  using InitData = ::GlobalNamespace::TutorialBeatmapObjectManager_InitData;

  /// @brief Field _bombNotePoolContainer, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__bombNotePoolContainer,
                      put = __cordl_internal_set__bombNotePoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>* _bombNotePoolContainer;

  /// @brief Field _initData, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::TutorialBeatmapObjectManager_InitData* _initData;

  /// @brief Field _obstaclePoolContainer, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__obstaclePoolContainer,
                      put = __cordl_internal_set__obstaclePoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>* _obstaclePoolContainer;

  /// @brief Field _random, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__random, put = __cordl_internal_set__random)) ::System::Random* _random;

  /// @brief Field _tutorialNotePoolContainer, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__tutorialNotePoolContainer,
                      put = __cordl_internal_set__tutorialNotePoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::TutorialNoteController>>* _tutorialNotePoolContainer;

  /// @brief Field _variableMovementDataProvider, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__variableMovementDataProvider,
                      put = __cordl_internal_set__variableMovementDataProvider)) ::GlobalNamespace::VariableMovementDataProvider* _variableMovementDataProvider;

  __declspec(property(get = get_activeObstacleControllers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* activeObstacleControllers;

  /// @brief Method DespawnInternal, addr 0x3b792f0, size 0x15c, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::NoteController* noteController);

  /// @brief Method DespawnInternal, addr 0x3b7944c, size 0x58, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method DespawnInternal, addr 0x3b794a4, size 0x4, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::SliderController* sliderNoteController);

  /// @brief Method Init, addr 0x3b78fc8, size 0x130, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::TutorialBeatmapObjectManager_InitData* initData, ::GlobalNamespace::VariableMovementDataProvider* variableMovementDataProvider,
                   ::GlobalNamespace::TutorialNoteController_Pool* tutorialNotePool, ::GlobalNamespace::BombNoteController_Pool* bombNotePool,
                   ::GlobalNamespace::ObstacleController_Pool* obstaclePool);

  static inline ::GlobalNamespace::TutorialBeatmapObjectManager* New_ctor();

  /// @brief Method ProcessNoteData, addr 0x3b791a4, size 0x148, virtual true, abstract: false, final false
  inline void ProcessNoteData(::GlobalNamespace::NoteData* noteData, ::ByRef<::GlobalNamespace::NoteSpawnData> noteSpawnData, bool forceIsFirstNoteBehaviour);

  /// @brief Method ProcessObstacleData, addr 0x3b790f8, size 0xac, virtual true, abstract: false, final false
  inline void ProcessObstacleData(::GlobalNamespace::ObstacleData* obstacleData, ::ByRef<::GlobalNamespace::ObstacleSpawnData> obstacleSpawnData);

  /// @brief Method ProcessSliderData, addr 0x3b792ec, size 0x4, virtual true, abstract: false, final false
  inline void ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ::ByRef<::GlobalNamespace::SliderSpawnData> sliderSpawnData);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>* const& __cordl_internal_get__bombNotePoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>*& __cordl_internal_get__bombNotePoolContainer();

  constexpr ::GlobalNamespace::TutorialBeatmapObjectManager_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::TutorialBeatmapObjectManager_InitData*& __cordl_internal_get__initData();

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>* const& __cordl_internal_get__obstaclePoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>*& __cordl_internal_get__obstaclePoolContainer();

  constexpr ::System::Random* const& __cordl_internal_get__random() const;

  constexpr ::System::Random*& __cordl_internal_get__random();

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::TutorialNoteController>>* const& __cordl_internal_get__tutorialNotePoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::TutorialNoteController>>*& __cordl_internal_get__tutorialNotePoolContainer();

  constexpr ::GlobalNamespace::VariableMovementDataProvider* const& __cordl_internal_get__variableMovementDataProvider() const;

  constexpr ::GlobalNamespace::VariableMovementDataProvider*& __cordl_internal_get__variableMovementDataProvider();

  constexpr void __cordl_internal_set__bombNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>* value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::TutorialBeatmapObjectManager_InitData* value);

  constexpr void __cordl_internal_set__obstaclePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  constexpr void __cordl_internal_set__random(::System::Random* value);

  constexpr void __cordl_internal_set__tutorialNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::TutorialNoteController>>* value);

  constexpr void __cordl_internal_set__variableMovementDataProvider(::GlobalNamespace::VariableMovementDataProvider* value);

  /// @brief Method .ctor, addr 0x3b794a8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activeObstacleControllers, addr 0x3b78f78, size 0x50, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* get_activeObstacleControllers();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialBeatmapObjectManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TutorialBeatmapObjectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialBeatmapObjectManager(TutorialBeatmapObjectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialBeatmapObjectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialBeatmapObjectManager(TutorialBeatmapObjectManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4182 };

  /// @brief Field _tutorialNotePoolContainer, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::TutorialNoteController>>* ____tutorialNotePoolContainer;

  /// @brief Field _bombNotePoolContainer, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>* ____bombNotePoolContainer;

  /// @brief Field _obstaclePoolContainer, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>* ____obstaclePoolContainer;

  /// @brief Field _initData, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::TutorialBeatmapObjectManager_InitData* ____initData;

  /// @brief Field _variableMovementDataProvider, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::VariableMovementDataProvider* ____variableMovementDataProvider;

  /// @brief Field _random, offset: 0xc8, size: 0x8, def value: None
  ::System::Random* ____random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TutorialBeatmapObjectManager, ____tutorialNotePoolContainer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialBeatmapObjectManager, ____bombNotePoolContainer) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialBeatmapObjectManager, ____obstaclePoolContainer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialBeatmapObjectManager, ____initData) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialBeatmapObjectManager, ____variableMovementDataProvider) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialBeatmapObjectManager, ____random) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialBeatmapObjectManager, 0xd0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialBeatmapObjectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialBeatmapObjectManager*, "", "TutorialBeatmapObjectManager");
NEED_NO_BOX(::GlobalNamespace::TutorialBeatmapObjectManager_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialBeatmapObjectManager_InitData*, "", "TutorialBeatmapObjectManager/InitData");
