#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDifficultySegmentedControlController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDifficultySegmentedControlController)
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace HMUI {
class SegmentedControl;
}
namespace HMUI {
class TextSegmentedControl;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDifficultySegmentedControlController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDifficultySegmentedControlController);
// Dependencies BeatmapDifficulty, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapDifficultySegmentedControlController
class CORDL_TYPE BeatmapDifficultySegmentedControlController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _difficulties, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__difficulties, put = __cordl_internal_set__difficulties)) ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>* _difficulties;

  /// @brief Field _difficultySegmentedControl, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__difficultySegmentedControl, put = __cordl_internal_set__difficultySegmentedControl)) ::UnityW<::HMUI::TextSegmentedControl>
      _difficultySegmentedControl;

  /// @brief Field _selectedDifficulty, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedDifficulty, put = __cordl_internal_set__selectedDifficulty)) ::GlobalNamespace::BeatmapDifficulty _selectedDifficulty;

  /// @brief Field didSelectDifficultyEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectDifficultyEvent,
                      put = __cordl_internal_set_didSelectDifficultyEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>,
                                                                                               ::GlobalNamespace::BeatmapDifficulty>* didSelectDifficultyEvent;

  __declspec(property(get = get_selectedDifficulty)) ::GlobalNamespace::BeatmapDifficulty selectedDifficulty;

  /// @brief Method Awake, addr 0x57a5bd8, size 0x90, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetClosestDifficultyIndex, addr 0x57a5d44, size 0x118, virtual false, abstract: false, final false
  inline int32_t GetClosestDifficultyIndex(::GlobalNamespace::BeatmapDifficulty searchDifficulty);

  /// @brief Method HandleDifficultySegmentedControlDidSelectCell, addr 0x57a5e5c, size 0x98, virtual false, abstract: false, final false
  inline void HandleDifficultySegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellIdx);

  static inline ::GlobalNamespace::BeatmapDifficultySegmentedControlController* New_ctor();

  /// @brief Method OnDestroy, addr 0x57a5c68, size 0xdc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetData, addr 0x57a5ef4, size 0x4f8, virtual false, abstract: false, final false
  inline void SetData(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapDifficulty>* difficultyBeatmaps, ::GlobalNamespace::BeatmapDifficulty selectedDifficulty,
                      ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>* const& __cordl_internal_get__difficulties() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>*& __cordl_internal_get__difficulties();

  constexpr ::UnityW<::HMUI::TextSegmentedControl> const& __cordl_internal_get__difficultySegmentedControl() const;

  constexpr ::UnityW<::HMUI::TextSegmentedControl>& __cordl_internal_get__difficultySegmentedControl();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get__selectedDifficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get__selectedDifficulty();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>, ::GlobalNamespace::BeatmapDifficulty>* const&
  __cordl_internal_get_didSelectDifficultyEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>, ::GlobalNamespace::BeatmapDifficulty>*& __cordl_internal_get_didSelectDifficultyEvent();

  constexpr void __cordl_internal_set__difficulties(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>* value);

  constexpr void __cordl_internal_set__difficultySegmentedControl(::UnityW<::HMUI::TextSegmentedControl> value);

  constexpr void __cordl_internal_set__selectedDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void
  __cordl_internal_set_didSelectDifficultyEvent(::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>, ::GlobalNamespace::BeatmapDifficulty>* value);

  /// @brief Method .ctor, addr 0x57a63ec, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectDifficultyEvent, addr 0x57a5a50, size 0xc0, virtual false, abstract: false, final false
  inline void add_didSelectDifficultyEvent(::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>, ::GlobalNamespace::BeatmapDifficulty>* value);

  /// @brief Method get_selectedDifficulty, addr 0x57a5bd0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficulty get_selectedDifficulty();

  /// @brief Method remove_didSelectDifficultyEvent, addr 0x57a5b10, size 0xc0, virtual false, abstract: false, final false
  inline void remove_didSelectDifficultyEvent(::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>, ::GlobalNamespace::BeatmapDifficulty>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDifficultySegmentedControlController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultySegmentedControlController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDifficultySegmentedControlController(BeatmapDifficultySegmentedControlController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultySegmentedControlController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDifficultySegmentedControlController(BeatmapDifficultySegmentedControlController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6921 };

  /// @brief Field _difficultySegmentedControl, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::TextSegmentedControl> ____difficultySegmentedControl;

  /// @brief Field didSelectDifficultyEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>, ::GlobalNamespace::BeatmapDifficulty>* ___didSelectDifficultyEvent;

  /// @brief Field _difficulties, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>* ____difficulties;

  /// @brief Field _selectedDifficulty, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____selectedDifficulty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapDifficultySegmentedControlController, ____difficultySegmentedControl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDifficultySegmentedControlController, ___didSelectDifficultyEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDifficultySegmentedControlController, ____difficulties) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDifficultySegmentedControlController, ____selectedDifficulty) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDifficultySegmentedControlController, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDifficultySegmentedControlController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDifficultySegmentedControlController*, "", "BeatmapDifficultySegmentedControlController");
