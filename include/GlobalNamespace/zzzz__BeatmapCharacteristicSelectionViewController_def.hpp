#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCharacteristicSelectionViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapCharacteristicSelectionViewController)
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace HMUI {
class IconSegmentedControl;
}
namespace HMUI {
class SegmentedControl;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicSelectionViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCharacteristicSelectionViewController);
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapCharacteristicSelectionViewController
class CORDL_TYPE BeatmapCharacteristicSelectionViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _beatmapCharacteristicCollection, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicCollection,
                      put = __cordl_internal_set__beatmapCharacteristicCollection)) ::GlobalNamespace::BeatmapCharacteristicCollection* _beatmapCharacteristicCollection;

  /// @brief Field _beatmapCharacteristicSegmentedControl, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicSegmentedControl, put = __cordl_internal_set__beatmapCharacteristicSegmentedControl)) ::UnityW<::HMUI::IconSegmentedControl>
      _beatmapCharacteristicSegmentedControl;

  /// @brief Field _selectedBeatmapCharacteristic, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedBeatmapCharacteristic, put = __cordl_internal_set__selectedBeatmapCharacteristic)) ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>
      _selectedBeatmapCharacteristic;

  /// @brief Field didSelectBeatmapCharacteristicEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectBeatmapCharacteristicEvent,
                      put = __cordl_internal_set_didSelectBeatmapCharacteristicEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSelectionViewController>,
                                                                                                          ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* didSelectBeatmapCharacteristicEvent;

  __declspec(property(get = get_selectedBeatmapCharacteristic)) ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> selectedBeatmapCharacteristic;

  /// @brief Method DidActivate, addr 0x3c10b0c, size 0x2f4, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3c10e00, size 0x9c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleBeatmapCharacteristicSegmentedControlDidSelectCell, addr 0x3c10e9c, size 0xec, virtual false, abstract: false, final false
  inline void HandleBeatmapCharacteristicSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellNumber);

  /// @brief Method Init, addr 0x3c10a44, size 0xc8, virtual false, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::BeatmapCharacteristicSelectionViewController* New_ctor();

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* const& __cordl_internal_get__beatmapCharacteristicCollection() const;

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __cordl_internal_get__beatmapCharacteristicCollection();

  constexpr ::UnityW<::HMUI::IconSegmentedControl> const& __cordl_internal_get__beatmapCharacteristicSegmentedControl() const;

  constexpr ::UnityW<::HMUI::IconSegmentedControl>& __cordl_internal_get__beatmapCharacteristicSegmentedControl();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get__selectedBeatmapCharacteristic() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get__selectedBeatmapCharacteristic();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSelectionViewController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* const&
  __cordl_internal_get_didSelectBeatmapCharacteristicEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSelectionViewController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*&
  __cordl_internal_get_didSelectBeatmapCharacteristicEvent();

  constexpr void __cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value);

  constexpr void __cordl_internal_set__beatmapCharacteristicSegmentedControl(::UnityW<::HMUI::IconSegmentedControl> value);

  constexpr void __cordl_internal_set__selectedBeatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  constexpr void __cordl_internal_set_didSelectBeatmapCharacteristicEvent(
      ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSelectionViewController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

  /// @brief Method .ctor, addr 0x3c10f88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectBeatmapCharacteristicEvent, addr 0x3c108dc, size 0xb0, virtual false, abstract: false, final false
  inline void
  add_didSelectBeatmapCharacteristicEvent(::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSelectionViewController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

  /// @brief Method get_selectedBeatmapCharacteristic, addr 0x3c10a3c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> get_selectedBeatmapCharacteristic();

  /// @brief Method remove_didSelectBeatmapCharacteristicEvent, addr 0x3c1098c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectBeatmapCharacteristicEvent(
      ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSelectionViewController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCharacteristicSelectionViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicSelectionViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCharacteristicSelectionViewController(BeatmapCharacteristicSelectionViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicSelectionViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCharacteristicSelectionViewController(BeatmapCharacteristicSelectionViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4873 };

  /// @brief Field _beatmapCharacteristicSegmentedControl, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HMUI::IconSegmentedControl> ____beatmapCharacteristicSegmentedControl;

  /// @brief Field _beatmapCharacteristicCollection, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollection* ____beatmapCharacteristicCollection;

  /// @brief Field didSelectBeatmapCharacteristicEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSelectionViewController>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* ___didSelectBeatmapCharacteristicEvent;

  /// @brief Field _selectedBeatmapCharacteristic, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ____selectedBeatmapCharacteristic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSelectionViewController, ____beatmapCharacteristicSegmentedControl) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSelectionViewController, ____beatmapCharacteristicCollection) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSelectionViewController, ___didSelectBeatmapCharacteristicEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSelectionViewController, ____selectedBeatmapCharacteristic) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicSelectionViewController, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicSelectionViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicSelectionViewController*, "", "BeatmapCharacteristicSelectionViewController");
