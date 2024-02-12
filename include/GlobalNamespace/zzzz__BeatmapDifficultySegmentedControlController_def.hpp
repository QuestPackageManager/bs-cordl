#pragma once
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
// Type: ::BeatmapDifficultySegmentedControlController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969)), TypeDefinitionIndex(TypeDefinitionIndex(15101))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4921))
// CS Name: ::BeatmapDifficultySegmentedControlController*
class CORDL_TYPE BeatmapDifficultySegmentedControlController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _difficultySegmentedControl, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__difficultySegmentedControl,
                      put = __cordl_internal_set__difficultySegmentedControl))::UnityW<::HMUI::TextSegmentedControl> _difficultySegmentedControl;

  /// @brief Field didSelectDifficultyEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectDifficultyEvent,
                      put = __cordl_internal_set_didSelectDifficultyEvent))::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>,
                                                                                              ::GlobalNamespace::BeatmapDifficulty>* didSelectDifficultyEvent;

  /// @brief Field _difficulties, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__difficulties, put = __cordl_internal_set__difficulties))::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>* _difficulties;

  /// @brief Field _selectedDifficulty, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedDifficulty, put = __cordl_internal_set__selectedDifficulty))::GlobalNamespace::BeatmapDifficulty _selectedDifficulty;

  __declspec(property(get = get_selectedDifficulty))::GlobalNamespace::BeatmapDifficulty selectedDifficulty;

  constexpr ::UnityW<::HMUI::TextSegmentedControl>& __cordl_internal_get__difficultySegmentedControl();

  constexpr ::UnityW<::HMUI::TextSegmentedControl> const& __cordl_internal_get__difficultySegmentedControl() const;

  constexpr void __cordl_internal_set__difficultySegmentedControl(::UnityW<::HMUI::TextSegmentedControl> value);

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>, ::GlobalNamespace::BeatmapDifficulty>*& __cordl_internal_get_didSelectDifficultyEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>, ::GlobalNamespace::BeatmapDifficulty>*> const&
  __cordl_internal_get_didSelectDifficultyEvent() const;

  constexpr void
  __cordl_internal_set_didSelectDifficultyEvent(::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>, ::GlobalNamespace::BeatmapDifficulty>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>*& __cordl_internal_get__difficulties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>*> const& __cordl_internal_get__difficulties() const;

  constexpr void __cordl_internal_set__difficulties(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>* value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get__selectedDifficulty();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get__selectedDifficulty() const;

  constexpr void __cordl_internal_set__selectedDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  /// @brief Method add_didSelectDifficultyEvent, addr 0x22e1274, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectDifficultyEvent(::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>, ::GlobalNamespace::BeatmapDifficulty>* value);

  /// @brief Method remove_didSelectDifficultyEvent, addr 0x22e1324, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectDifficultyEvent(::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>, ::GlobalNamespace::BeatmapDifficulty>* value);

  /// @brief Method get_selectedDifficulty, addr 0x22e13d4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficulty get_selectedDifficulty();

  /// @brief Method Awake, addr 0x22e13dc, size 0x8c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method OnDestroy, addr 0x22e1468, size 0xd4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method GetClosestDifficultyIndex, addr 0x22e153c, size 0x14c, virtual false, abstract: false, final false
  inline int32_t GetClosestDifficultyIndex(::GlobalNamespace::BeatmapDifficulty searchDifficulty);

  /// @brief Method HandleDifficultySegmentedControlDidSelectCell, addr 0x22e1688, size 0x88, virtual false, abstract: false, final false
  inline void HandleDifficultySegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellIdx);

  /// @brief Method SetData, addr 0x22e1710, size 0x4f4, virtual false, abstract: false, final false
  inline void SetData(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapDifficulty>* difficultyBeatmaps, ::GlobalNamespace::BeatmapDifficulty selectedDifficulty,
                      ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask);

  static inline ::GlobalNamespace::BeatmapDifficultySegmentedControlController* New_ctor();

  /// @brief Method .ctor, addr 0x22e1c04, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultySegmentedControlController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapDifficultySegmentedControlController(BeatmapDifficultySegmentedControlController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultySegmentedControlController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapDifficultySegmentedControlController(BeatmapDifficultySegmentedControlController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapDifficultySegmentedControlController();

public:
  /// @brief Field _difficultySegmentedControl, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::TextSegmentedControl> ____difficultySegmentedControl;

  /// @brief Field didSelectDifficultyEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapDifficultySegmentedControlController>, ::GlobalNamespace::BeatmapDifficulty>* ___didSelectDifficultyEvent;

  /// @brief Field _difficulties, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapDifficulty>* ____difficulties;

  /// @brief Field _selectedDifficulty, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____selectedDifficulty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDifficultySegmentedControlController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDifficultySegmentedControlController, ____difficultySegmentedControl) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDifficultySegmentedControlController, ___didSelectDifficultyEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDifficultySegmentedControlController, ____difficulties) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDifficultySegmentedControlController, ____selectedDifficulty) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDifficultySegmentedControlController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDifficultySegmentedControlController*, "", "BeatmapDifficultySegmentedControlController");
