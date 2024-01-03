#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MockBeatmapObjectManager)
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
struct __BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MockBeatmapObjectManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockBeatmapObjectManager);
// Type: ::MockBeatmapObjectManager
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 145, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4716))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4733))
// CS Name: ::MockBeatmapObjectManager*
class CORDL_TYPE MockBeatmapObjectManager : public ::GlobalNamespace::BeatmapObjectManager {
public:
  // Declarations
  __declspec(property(get = get_activeObstacleControllers))::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController*>* activeObstacleControllers;

  /// @brief Method get_activeObstacleControllers, addr 0x2382958, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::ObstacleController*>* get_activeObstacleControllers();

  /// @brief Method ProcessObstacleData, addr 0x2382960, size 0x4, virtual true, abstract: false, final false
  inline void ProcessObstacleData(::GlobalNamespace::ObstacleData* obstacleData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData> obstacleSpawnData, float_t rotation);

  /// @brief Method ProcessNoteData, addr 0x2382964, size 0x4, virtual true, abstract: false, final false
  inline void ProcessNoteData(::GlobalNamespace::NoteData* noteData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, float_t rotation,
                              bool forceIsFirstNoteBehaviour);

  /// @brief Method ProcessSliderData, addr 0x2382968, size 0x4, virtual true, abstract: false, final false
  inline void ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData> sliderSpawnData, float_t rotation);

  /// @brief Method DespawnInternal, addr 0x238296c, size 0x4, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::NoteController* noteController);

  /// @brief Method DespawnInternal, addr 0x2382970, size 0x4, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method DespawnInternal, addr 0x2382974, size 0x4, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::SliderController* sliderNoteController);

  static inline ::GlobalNamespace::MockBeatmapObjectManager* New_ctor();

  /// @brief Method .ctor, addr 0x2382978, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MockBeatmapObjectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockBeatmapObjectManager(MockBeatmapObjectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockBeatmapObjectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockBeatmapObjectManager(MockBeatmapObjectManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockBeatmapObjectManager();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockBeatmapObjectManager, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockBeatmapObjectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockBeatmapObjectManager*, "", "MockBeatmapObjectManager");
