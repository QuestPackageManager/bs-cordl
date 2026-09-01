#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapEditorScenesTransitionSetupData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ScenesTransitionSetupData_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BeatmapEditorScenesTransitionSetupData)
namespace GlobalNamespace {
struct BeatmapCharacteristic;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEditorScenesTransitionSetupData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*, "", "BeatmapEditorScenesTransitionSetupData");
// Dependencies ScenesTransitionSetupData
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapEditorScenesTransitionSetupData
class CORDL_TYPE BeatmapEditorScenesTransitionSetupData : public ::GlobalNamespace::ScenesTransitionSetupData {
public:
  // Declarations
  /// @brief Field didFinishEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent,
                      put = __cordl_internal_set_didFinishEvent)) ::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>* didFinishEvent;

  /// @brief Method Finish, addr 0x590df7c, size 0x20, virtual false, abstract: false, final false
  inline void Finish();

  /// @brief Method Init, addr 0x590df30, size 0x4c, virtual false, abstract: false, final false
  inline void Init(bool goStraightToEditor, ::StringW projectPath, bool ignoreTempFolder,
                   ::System::Nullable_1<::System::ValueTuple_2<::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>> startLevel);

  static inline ::GlobalNamespace::BeatmapEditorScenesTransitionSetupData* New_ctor();

  constexpr ::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>* const& __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>* value);

  /// @brief Method .ctor, addr 0x590df9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x590ddb0, size 0xc0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>* value);

  /// @brief Method remove_didFinishEvent, addr 0x590de70, size 0xc0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEditorScenesTransitionSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorScenesTransitionSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEditorScenesTransitionSetupData(BeatmapEditorScenesTransitionSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorScenesTransitionSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEditorScenesTransitionSetupData(BeatmapEditorScenesTransitionSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6731 };

  /// @brief Field didFinishEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::BeatmapEditorScenesTransitionSetupData*>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapEditorScenesTransitionSetupData, ___didFinishEvent) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapEditorScenesTransitionSetupData) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
