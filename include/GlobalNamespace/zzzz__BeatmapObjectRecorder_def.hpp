#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapObjectRecorder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapObjectRecorder)
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
struct BeatmapObjectRecorder_ObjectCounts;
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
class SliderController;
}
namespace GlobalNamespace {
class SliderData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectRecorder;
}
namespace GlobalNamespace {
struct BeatmapObjectRecorder_ObjectCounts;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapObjectRecorder);
MARK_VAL_T(::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapObjectRecorder/ObjectCounts
struct CORDL_TYPE BeatmapObjectRecorder_ObjectCounts {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectRecorder_ObjectCounts();

  // Ctor Parameters [CppParam { name: "note", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bomb", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "burstSliderHead", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "burstSliderElement", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "slider", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "burstSlider", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "obstacle", ty: "int32_t", modifiers: "", def_value:
  // None }]
  constexpr BeatmapObjectRecorder_ObjectCounts(int32_t note, int32_t bomb, int32_t burstSliderHead, int32_t burstSliderElement, int32_t slider, int32_t burstSlider, int32_t obstacle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6685 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field note, offset: 0x0, size: 0x4, def value: None
  int32_t note;

  /// @brief Field bomb, offset: 0x4, size: 0x4, def value: None
  int32_t bomb;

  /// @brief Field burstSliderHead, offset: 0x8, size: 0x4, def value: None
  int32_t burstSliderHead;

  /// @brief Field burstSliderElement, offset: 0xc, size: 0x4, def value: None
  int32_t burstSliderElement;

  /// @brief Field slider, offset: 0x10, size: 0x4, def value: None
  int32_t slider;

  /// @brief Field burstSlider, offset: 0x14, size: 0x4, def value: None
  int32_t burstSlider;

  /// @brief Field obstacle, offset: 0x18, size: 0x4, def value: None
  int32_t obstacle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts, note) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts, bomb) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts, burstSliderHead) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts, burstSliderElement) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts, slider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts, burstSlider) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts, obstacle) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts, 0x1c>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapObjectRecorder::ObjectCounts, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapObjectRecorder
class CORDL_TYPE BeatmapObjectRecorder : public ::System::Object {
public:
  // Declarations
  using ObjectCounts = ::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts;

  /// @brief Field _objectCounts, offset 0x20, size 0x1c
  __declspec(property(get = __cordl_internal_get__objectCounts, put = __cordl_internal_set__objectCounts)) ::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts _objectCounts;

  /// @brief Field _objectManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__objectManager, put = __cordl_internal_set__objectManager)) ::GlobalNamespace::BeatmapObjectManager* _objectManager;

  /// @brief Field _samples, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__samples,
                      put = __cordl_internal_set__samples)) ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts>* _samples;

  /// @brief Method Begin, addr 0x56fe67c, size 0x4, virtual false, abstract: false, final false
  inline void Begin(::GlobalNamespace::BeatmapObjectManager* objectManager);

  /// @brief Method CaptureFrame, addr 0x56fe8c8, size 0xdc, virtual false, abstract: false, final false
  inline void CaptureFrame();

  /// @brief Method ChangeNoteTypeCount, addr 0x56ff188, size 0x64, virtual false, abstract: false, final false
  static inline bool ChangeNoteTypeCount(::ByRef<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts> counts, ::GlobalNamespace::NoteData* data, int32_t delta);

  /// @brief Method ChangeSliderTypeCount, addr 0x56ff268, size 0x3c, virtual false, abstract: false, final false
  static inline bool ChangeSliderTypeCount(::ByRef<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts> counts, ::GlobalNamespace::SliderData* data, int32_t delta);

  /// @brief Method ClearCallbacks, addr 0x56fea40, size 0x24c, virtual false, abstract: false, final false
  inline void ClearCallbacks();

  /// @brief Method Finish, addr 0x56fe9a4, size 0x9c, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts, ::Array<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts>*> Finish();

  /// @brief Method GenerateTableReport, addr 0x56fec8c, size 0x4c4, virtual false, abstract: false, final false
  static inline ::StringW GenerateTableReport(::ArrayW<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts, ::Array<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts>*> samples);

  static inline ::GlobalNamespace::BeatmapObjectRecorder* New_ctor(int32_t initialFrameCapacity);

  /// @brief Method OnDepawnObstacle, addr 0x56ff2f8, size 0x10, virtual false, abstract: false, final false
  inline void OnDepawnObstacle(::GlobalNamespace::ObstacleController* obstacle);

  /// @brief Method OnDespawnNote, addr 0x56ff1ec, size 0x38, virtual false, abstract: false, final false
  inline void OnDespawnNote(::GlobalNamespace::NoteController* note);

  /// @brief Method OnDespawnSlider, addr 0x56ff2a4, size 0x44, virtual false, abstract: false, final false
  inline void OnDespawnSlider(::GlobalNamespace::SliderController* slider);

  /// @brief Method OnSpawnNote, addr 0x56ff150, size 0x38, virtual false, abstract: false, final false
  inline void OnSpawnNote(::GlobalNamespace::NoteController* note);

  /// @brief Method OnSpawnObstacle, addr 0x56ff2e8, size 0x10, virtual false, abstract: false, final false
  inline void OnSpawnObstacle(::GlobalNamespace::ObstacleController* obstacle);

  /// @brief Method OnSpawnSlider, addr 0x56ff224, size 0x44, virtual false, abstract: false, final false
  inline void OnSpawnSlider(::GlobalNamespace::SliderController* slider);

  /// @brief Method SetupCallbacks, addr 0x56fe680, size 0x248, virtual false, abstract: false, final false
  inline void SetupCallbacks(::GlobalNamespace::BeatmapObjectManager* objectManager);

  constexpr ::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts const& __cordl_internal_get__objectCounts() const;

  constexpr ::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts& __cordl_internal_get__objectCounts();

  constexpr ::GlobalNamespace::BeatmapObjectManager* const& __cordl_internal_get__objectManager() const;

  constexpr ::GlobalNamespace::BeatmapObjectManager*& __cordl_internal_get__objectManager();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts>* const& __cordl_internal_get__samples() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts>*& __cordl_internal_get__samples();

  constexpr void __cordl_internal_set__objectCounts(::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts value);

  constexpr void __cordl_internal_set__objectManager(::GlobalNamespace::BeatmapObjectManager* value);

  constexpr void __cordl_internal_set__samples(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts>* value);

  /// @brief Method .ctor, addr 0x56fe5f8, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialFrameCapacity);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapObjectRecorder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectRecorder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapObjectRecorder(BeatmapObjectRecorder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectRecorder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapObjectRecorder(BeatmapObjectRecorder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6686 };

  /// @brief Field _samples, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts>* ____samples;

  /// @brief Field _objectManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapObjectManager* ____objectManager;

  /// @brief Field _objectCounts, offset: 0x20, size: 0x1c, def value: None
  ::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts ____objectCounts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapObjectRecorder, ____samples) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectRecorder, ____objectManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapObjectRecorder, ____objectCounts) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapObjectRecorder, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectRecorder);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectRecorder*, "", "BeatmapObjectRecorder");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectRecorder_ObjectCounts, "", "BeatmapObjectRecorder/ObjectCounts");
