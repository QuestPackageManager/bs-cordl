#pragma once
// IWYU pragma private; include "GlobalNamespace/MockBeatmapObjectManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
CORDL_MODULE_EXPORT(MockBeatmapObjectManager)
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
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MockBeatmapObjectManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockBeatmapObjectManager);
// Dependencies BeatmapObjectManager
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockBeatmapObjectManager
class CORDL_TYPE MockBeatmapObjectManager : public ::GlobalNamespace::BeatmapObjectManager {
public:
  // Declarations
  __declspec(property(get = get_activeObstacleControllers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* activeObstacleControllers;

  /// @brief Method DespawnInternal, addr 0x3ae4db4, size 0x4, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::NoteController* noteController);

  /// @brief Method DespawnInternal, addr 0x3ae4db8, size 0x4, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::ObstacleController* obstacleController);

  /// @brief Method DespawnInternal, addr 0x3ae4dbc, size 0x4, virtual true, abstract: false, final false
  inline void DespawnInternal(::GlobalNamespace::SliderController* sliderNoteController);

  static inline ::GlobalNamespace::MockBeatmapObjectManager* New_ctor();

  /// @brief Method ProcessNoteData, addr 0x3ae4dac, size 0x4, virtual true, abstract: false, final false
  inline void ProcessNoteData(::GlobalNamespace::NoteData* noteData, ::ByRef<::GlobalNamespace::NoteSpawnData> noteSpawnData, bool forceIsFirstNoteBehaviour);

  /// @brief Method ProcessObstacleData, addr 0x3ae4da8, size 0x4, virtual true, abstract: false, final false
  inline void ProcessObstacleData(::GlobalNamespace::ObstacleData* obstacleData, ::ByRef<::GlobalNamespace::ObstacleSpawnData> obstacleSpawnData);

  /// @brief Method ProcessSliderData, addr 0x3ae4db0, size 0x4, virtual true, abstract: false, final false
  inline void ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ::ByRef<::GlobalNamespace::SliderSpawnData> sliderSpawnData);

  /// @brief Method .ctor, addr 0x3ae4dc0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_activeObstacleControllers, addr 0x3ae4da0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* get_activeObstacleControllers();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockBeatmapObjectManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockBeatmapObjectManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockBeatmapObjectManager(MockBeatmapObjectManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockBeatmapObjectManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockBeatmapObjectManager(MockBeatmapObjectManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4080 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockBeatmapObjectManager, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockBeatmapObjectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockBeatmapObjectManager*, "", "MockBeatmapObjectManager");
