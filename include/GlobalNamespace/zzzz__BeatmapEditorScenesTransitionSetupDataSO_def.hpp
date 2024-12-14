#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEditorScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SingleFixedSceneScenesTransitionSetupDataSO_def.hpp"
CORDL_MODULE_EXPORT(BeatmapEditorScenesTransitionSetupDataSO)
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEditorScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO);
// Dependencies SingleFixedSceneScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapEditorScenesTransitionSetupDataSO
class CORDL_TYPE BeatmapEditorScenesTransitionSetupDataSO : public ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
public:
  // Declarations
  /// @brief Field <goStraightToEditor>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__goStraightToEditor_k__BackingField, put = __cordl_internal_set__goStraightToEditor_k__BackingField)) bool _goStraightToEditor_k__BackingField;

  /// @brief Field didFinishEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent,
                      put = __cordl_internal_set_didFinishEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO>>* didFinishEvent;

  __declspec(property(get = get_goStraightToEditor, put = set_goStraightToEditor)) bool goStraightToEditor;

  /// @brief Method Finish, addr 0x3b3a288, size 0x20, virtual false, abstract: false, final false
  inline void Finish();

  /// @brief Method Init, addr 0x3b3a210, size 0x78, virtual false, abstract: false, final false
  inline void Init(bool goStraightToEditor);

  static inline ::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO* New_ctor();

  constexpr bool const& __cordl_internal_get__goStraightToEditor_k__BackingField() const;

  constexpr bool& __cordl_internal_get__goStraightToEditor_k__BackingField();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO>>* const& __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO>>*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set__goStraightToEditor_k__BackingField(bool value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO>>* value);

  /// @brief Method .ctor, addr 0x3b3a2a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x3b3a09c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO>>* value);

  /// @brief Method get_goStraightToEditor, addr 0x3b3a1fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_goStraightToEditor();

  /// @brief Method remove_didFinishEvent, addr 0x3b3a14c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO>>* value);

  /// @brief Method set_goStraightToEditor, addr 0x3b3a204, size 0xc, virtual false, abstract: false, final false
  inline void set_goStraightToEditor(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapEditorScenesTransitionSetupDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapEditorScenesTransitionSetupDataSO(BeatmapEditorScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapEditorScenesTransitionSetupDataSO(BeatmapEditorScenesTransitionSetupDataSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5248 };

  /// @brief Field didFinishEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO>>* ___didFinishEvent;

  /// @brief Field <goStraightToEditor>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____goStraightToEditor_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO, ___didFinishEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO, ____goStraightToEditor_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*, "", "BeatmapEditorScenesTransitionSetupDataSO");
