#pragma once
// IWYU pragma private; include "GlobalNamespace/TutorialBeatmapObjectManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TutorialBeatmapObjectManager)
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
class ObstacleController;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class SliderController;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
class TutorialNoteController;
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
class __BombNoteController__Pool;
}
namespace GlobalNamespace {
class __ObstacleController__Pool;
}
namespace GlobalNamespace {
class __TutorialBeatmapObjectManager__InitData;
}
namespace GlobalNamespace {
class __TutorialNoteController__Pool;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialBeatmapObjectManager;
}
namespace GlobalNamespace {
class __TutorialBeatmapObjectManager__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialBeatmapObjectManager);
MARK_REF_PTR_T(::GlobalNamespace::__TutorialBeatmapObjectManager__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TutorialBeatmapObjectManager::InitData*
class CORDL_TYPE __TutorialBeatmapObjectManager__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cutAngleTolerance, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_cutAngleTolerance, put = __cordl_internal_set_cutAngleTolerance)) float_t cutAngleTolerance;

  static inline ::GlobalNamespace::__TutorialBeatmapObjectManager__InitData* New_ctor(float_t cutAngleTolerance);

  constexpr float_t const& __cordl_internal_get_cutAngleTolerance() const;

  constexpr float_t& __cordl_internal_get_cutAngleTolerance();

  constexpr void __cordl_internal_set_cutAngleTolerance(float_t value);

  /// @brief Method .ctor, addr 0x3b1830c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t cutAngleTolerance);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TutorialBeatmapObjectManager__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TutorialBeatmapObjectManager__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TutorialBeatmapObjectManager__InitData(__TutorialBeatmapObjectManager__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialBeatmapObjectManager__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TutorialBeatmapObjectManager__InitData(__TutorialBeatmapObjectManager__InitData const&) = delete;

  /// @brief Field cutAngleTolerance, offset: 0x10, size: 0x4, def value: None
  float_t ___cutAngleTolerance;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4170 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TutorialBeatmapObjectManager__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TutorialBeatmapObjectManager__InitData, ___cutAngleTolerance) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TutorialBeatmapObjectManager
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TutorialBeatmapObjectManager*
class CORDL_TYPE TutorialBeatmapObjectManager : public ::GlobalNamespace::BeatmapObjectManager {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__TutorialBeatmapObjectManager__InitData;

  /// @brief Field _bombNotePoolContainer, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__bombNotePoolContainer,
                      put = __cordl_internal_set__bombNotePoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>* _bombNotePoolContainer;

  /// @brief Field _initData, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::__TutorialBeatmapObjectManager__InitData* _initData;

  /// @brief Field _obstaclePoolContainer, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__obstaclePoolContainer,
                      put = __cordl_internal_set__obstaclePoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>* _obstaclePoolContainer;

  /// @brief Field _tutorialNotePoolContainer, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__tutorialNotePoolContainer,
                      put = __cordl_internal_set__tutorialNotePoolContainer)) ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::TutorialNoteController>>* _tutorialNotePoolContainer;

  __declspec(property(get = get_activeObstacleControllers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* activeObstacleControllers;

  /// @brief Method DespawnInternal, addr 0x3b181a8, size 0x100, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::NoteController* noteController);

  /// @brief Method DespawnInternal, addr 0x3b182a8, size 0x58, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method DespawnInternal, addr 0x3b18300, size 0x4, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::SliderController* sliderNoteController);

  /// @brief Method Init, addr 0x3b17e28, size 0x12c, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::__TutorialBeatmapObjectManager__InitData* initData, ::GlobalNamespace::__TutorialNoteController__Pool* tutorialNotePool,
                   ::GlobalNamespace::__BombNoteController__Pool* bombNotePool, ::GlobalNamespace::__ObstacleController__Pool* obstaclePool);

  static inline ::GlobalNamespace::TutorialBeatmapObjectManager* New_ctor();

  /// @brief Method ProcessNoteData, addr 0x3b18038, size 0x16c, virtual true, abstract: false, final false
  inline void ProcessNoteData(::GlobalNamespace::NoteData* noteData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, bool forceIsFirstNoteBehaviour);

  /// @brief Method ProcessObstacleData, addr 0x3b17f54, size 0xe4, virtual true, abstract: false, final false
  inline void ProcessObstacleData(::GlobalNamespace::ObstacleData* obstacleData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData> obstacleSpawnData);

  /// @brief Method ProcessSliderData, addr 0x3b181a4, size 0x4, virtual true, abstract: false, final false
  inline void ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData> sliderSpawnData);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>*& __cordl_internal_get__bombNotePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>*> const& __cordl_internal_get__bombNotePoolContainer() const;

  constexpr ::GlobalNamespace::__TutorialBeatmapObjectManager__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__TutorialBeatmapObjectManager__InitData*> const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>*& __cordl_internal_get__obstaclePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>*> const& __cordl_internal_get__obstaclePoolContainer() const;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::TutorialNoteController>>*& __cordl_internal_get__tutorialNotePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::TutorialNoteController>>*> const&
  __cordl_internal_get__tutorialNotePoolContainer() const;

  constexpr void __cordl_internal_set__bombNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>* value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__TutorialBeatmapObjectManager__InitData* value);

  constexpr void __cordl_internal_set__obstaclePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  constexpr void __cordl_internal_set__tutorialNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::TutorialNoteController>>* value);

  /// @brief Method .ctor, addr 0x3b18304, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activeObstacleControllers, addr 0x3b17dd8, size 0x50, virtual true, abstract: false, final false
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

  /// @brief Field _tutorialNotePoolContainer, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::TutorialNoteController>>* ____tutorialNotePoolContainer;

  /// @brief Field _bombNotePoolContainer, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::BombNoteController>>* ____bombNotePoolContainer;

  /// @brief Field _obstaclePoolContainer, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::ObstacleController>>* ____obstaclePoolContainer;

  /// @brief Field _initData, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::__TutorialBeatmapObjectManager__InitData* ____initData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4171 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialBeatmapObjectManager, 0xc0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialBeatmapObjectManager, ____tutorialNotePoolContainer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialBeatmapObjectManager, ____bombNotePoolContainer) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialBeatmapObjectManager, ____obstaclePoolContainer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TutorialBeatmapObjectManager, ____initData) == 0xb8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialBeatmapObjectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialBeatmapObjectManager*, "", "TutorialBeatmapObjectManager");
NEED_NO_BOX(::GlobalNamespace::__TutorialBeatmapObjectManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TutorialBeatmapObjectManager__InitData*, "", "TutorialBeatmapObjectManager/InitData");
