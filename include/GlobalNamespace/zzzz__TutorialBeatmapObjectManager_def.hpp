#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TutorialBeatmapObjectManager)
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
class TutorialNoteController;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
class __BombNoteController__Pool;
}
namespace GlobalNamespace {
class __TutorialNoteController__Pool;
}
namespace GlobalNamespace {
template <typename T> class MemoryPoolContainer_1;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class __ObstacleController__Pool;
}
namespace GlobalNamespace {
class BombNoteController;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace GlobalNamespace {
class __TutorialBeatmapObjectManager__InitData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class SliderController;
}
namespace GlobalNamespace {
class NoteController;
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4830))
// CS Name: ::TutorialBeatmapObjectManager::InitData*
class CORDL_TYPE __TutorialBeatmapObjectManager__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cutAngleTolerance, offset 0x10, size 0x4
  __declspec(property(get = __get_cutAngleTolerance, put = __set_cutAngleTolerance)) float_t cutAngleTolerance;

  constexpr float_t& __get_cutAngleTolerance();

  constexpr float_t const& __get_cutAngleTolerance() const;

  constexpr void __set_cutAngleTolerance(float_t value);

  static inline ::GlobalNamespace::__TutorialBeatmapObjectManager__InitData* New_ctor(float_t cutAngleTolerance);

  /// @brief Method .ctor addr 0x2396150 size 0x28 virtual false final false
  inline void _ctor(float_t cutAngleTolerance);

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialBeatmapObjectManager__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TutorialBeatmapObjectManager__InitData(__TutorialBeatmapObjectManager__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TutorialBeatmapObjectManager__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TutorialBeatmapObjectManager__InitData(__TutorialBeatmapObjectManager__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TutorialBeatmapObjectManager__InitData();

public:
  /// @brief Field cutAngleTolerance, offset: 0x10, size: 0x4, def value: None
  float_t ___cutAngleTolerance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TutorialBeatmapObjectManager__InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TutorialBeatmapObjectManager
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4716))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4831))
// CS Name: ::TutorialBeatmapObjectManager*
class CORDL_TYPE TutorialBeatmapObjectManager : public ::GlobalNamespace::BeatmapObjectManager {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__TutorialBeatmapObjectManager__InitData;

  /// @brief Field _tutorialNotePoolContainer, offset 0x98, size 0x8
  __declspec(property(get = __get__tutorialNotePoolContainer,
                      put = __set__tutorialNotePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::TutorialNoteController*>* _tutorialNotePoolContainer;

  /// @brief Field _bombNotePoolContainer, offset 0xa0, size 0x8
  __declspec(property(get = __get__bombNotePoolContainer, put = __set__bombNotePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>* _bombNotePoolContainer;

  /// @brief Field _obstaclePoolContainer, offset 0xa8, size 0x8
  __declspec(property(get = __get__obstaclePoolContainer, put = __set__obstaclePoolContainer))::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>* _obstaclePoolContainer;

  /// @brief Field _initData, offset 0xb0, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__TutorialBeatmapObjectManager__InitData* _initData;

  __declspec(property(get = get_activeObstacleControllers))::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController*>* activeObstacleControllers;

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::TutorialNoteController*>*& __get__tutorialNotePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::TutorialNoteController*>*> const& __get__tutorialNotePoolContainer() const;

  constexpr void __set__tutorialNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::TutorialNoteController*>* value);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>*& __get__bombNotePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>*> const& __get__bombNotePoolContainer() const;

  constexpr void __set__bombNotePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>* value);

  constexpr ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>*& __get__obstaclePoolContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>*> const& __get__obstaclePoolContainer() const;

  constexpr void __set__obstaclePoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>* value);

  constexpr ::GlobalNamespace::__TutorialBeatmapObjectManager__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__TutorialBeatmapObjectManager__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__TutorialBeatmapObjectManager__InitData* value);

  /// @brief Method get_activeObstacleControllers addr 0x2395bf0 size 0x50 virtual true final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController*>* get_activeObstacleControllers();

  /// @brief Method Init addr 0x2395c40 size 0x12c virtual false final false
  inline void Init(::GlobalNamespace::__TutorialBeatmapObjectManager__InitData* initData, ::GlobalNamespace::__TutorialNoteController__Pool* tutorialNotePool,
                   ::GlobalNamespace::__BombNoteController__Pool* bombNotePool, ::GlobalNamespace::__ObstacleController__Pool* obstaclePool);

  /// @brief Method ProcessObstacleData addr 0x2395d6c size 0xf8 virtual true final false
  inline void ProcessObstacleData(::GlobalNamespace::ObstacleData* obstacleData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData> obstacleSpawnData, float_t rotation);

  /// @brief Method ProcessNoteData addr 0x2395e64 size 0x180 virtual true final false
  inline void ProcessNoteData(::GlobalNamespace::NoteData* noteData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, float_t rotation,
                              bool forceIsFirstNoteBehaviour);

  /// @brief Method ProcessSliderData addr 0x2395fe4 size 0x4 virtual true final false
  inline void ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData> sliderSpawnData, float_t rotation);

  /// @brief Method DespawnInternal addr 0x2395fe8 size 0x104 virtual true final false
  inline void DespawnInternal(::GlobalNamespace::NoteController* noteController);

  /// @brief Method DespawnInternal addr 0x23960ec size 0x58 virtual true final false
  inline void DespawnInternal(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method DespawnInternal addr 0x2396144 size 0x4 virtual true final false
  inline void DespawnInternal(::GlobalNamespace::SliderController* sliderNoteController);

  static inline ::GlobalNamespace::TutorialBeatmapObjectManager* New_ctor();

  /// @brief Method .ctor addr 0x2396148 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TutorialBeatmapObjectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TutorialBeatmapObjectManager(TutorialBeatmapObjectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TutorialBeatmapObjectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TutorialBeatmapObjectManager(TutorialBeatmapObjectManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TutorialBeatmapObjectManager();

public:
  /// @brief Field _tutorialNotePoolContainer, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::TutorialNoteController*>* ____tutorialNotePoolContainer;

  /// @brief Field _bombNotePoolContainer, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::BombNoteController*>* ____bombNotePoolContainer;

  /// @brief Field _obstaclePoolContainer, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::MemoryPoolContainer_1<::GlobalNamespace::ObstacleController*>* ____obstaclePoolContainer;

  /// @brief Field _initData, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::__TutorialBeatmapObjectManager__InitData* ____initData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialBeatmapObjectManager, 0xb8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialBeatmapObjectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialBeatmapObjectManager*, "", "TutorialBeatmapObjectManager");
NEED_NO_BOX(::GlobalNamespace::__TutorialBeatmapObjectManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TutorialBeatmapObjectManager__InitData*, "", "TutorialBeatmapObjectManager/InitData");
