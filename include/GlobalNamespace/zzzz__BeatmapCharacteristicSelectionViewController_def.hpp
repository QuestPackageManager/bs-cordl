#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapCharacteristicSelectionViewController)
namespace HMUI {
class IconSegmentedControl;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace HMUI {
class SegmentedControl;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicSelectionViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCharacteristicSelectionViewController);
// Type: ::BeatmapCharacteristicSelectionViewController
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5615))
// CS Name: ::BeatmapCharacteristicSelectionViewController*
class CORDL_TYPE BeatmapCharacteristicSelectionViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _beatmapCharacteristicSegmentedControl, offset 0x70, size 0x8
  __declspec(property(get = __get__beatmapCharacteristicSegmentedControl, put = __set__beatmapCharacteristicSegmentedControl))::HMUI::IconSegmentedControl* _beatmapCharacteristicSegmentedControl;

  /// @brief Field _beatmapCharacteristicCollection, offset 0x78, size 0x8
  __declspec(property(get = __get__beatmapCharacteristicCollection, put = __set__beatmapCharacteristicCollection))::GlobalNamespace::BeatmapCharacteristicCollection* _beatmapCharacteristicCollection;

  /// @brief Field didSelectBeatmapCharacteristicEvent, offset 0x80, size 0x8
  __declspec(property(get = __get_didSelectBeatmapCharacteristicEvent,
                      put = __set_didSelectBeatmapCharacteristicEvent))::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*,
                                                                                          ::GlobalNamespace::BeatmapCharacteristicSO*>* didSelectBeatmapCharacteristicEvent;

  /// @brief Field _selectedBeatmapCharacteristic, offset 0x88, size 0x8
  __declspec(property(get = __get__selectedBeatmapCharacteristic, put = __set__selectedBeatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* _selectedBeatmapCharacteristic;

  __declspec(property(get = get_selectedBeatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* selectedBeatmapCharacteristic;

  constexpr ::HMUI::IconSegmentedControl*& __get__beatmapCharacteristicSegmentedControl();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::IconSegmentedControl*> const& __get__beatmapCharacteristicSegmentedControl() const;

  constexpr void __set__beatmapCharacteristicSegmentedControl(::HMUI::IconSegmentedControl* value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __get__beatmapCharacteristicCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollection*> const& __get__beatmapCharacteristicCollection() const;

  constexpr void __set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value);

  constexpr ::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*, ::GlobalNamespace::BeatmapCharacteristicSO*>*& __get_didSelectBeatmapCharacteristicEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*, ::GlobalNamespace::BeatmapCharacteristicSO*>*> const&
  __get_didSelectBeatmapCharacteristicEvent() const;

  constexpr void __set_didSelectBeatmapCharacteristicEvent(::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*, ::GlobalNamespace::BeatmapCharacteristicSO*>* value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& __get__selectedBeatmapCharacteristic();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& __get__selectedBeatmapCharacteristic() const;

  constexpr void __set__selectedBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value);

  /// @brief Method add_didSelectBeatmapCharacteristicEvent, addr 0x22ad594, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectBeatmapCharacteristicEvent(::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*, ::GlobalNamespace::BeatmapCharacteristicSO*>* value);

  /// @brief Method remove_didSelectBeatmapCharacteristicEvent, addr 0x22ad644, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectBeatmapCharacteristicEvent(::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*, ::GlobalNamespace::BeatmapCharacteristicSO*>* value);

  /// @brief Method get_selectedBeatmapCharacteristic, addr 0x22ad6f4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapCharacteristicSO* get_selectedBeatmapCharacteristic();

  /// @brief Method Init, addr 0x22ad6fc, size 0xc8, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method DidActivate, addr 0x22ad7c4, size 0x2f4, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x22adab8, size 0xa0, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleBeatmapCharacteristicSegmentedControlDidSelectCell, addr 0x22adb58, size 0xec, virtual false, abstract: false, final false
  inline void HandleBeatmapCharacteristicSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellNumber);

  static inline ::GlobalNamespace::BeatmapCharacteristicSelectionViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22adc44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicSelectionViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCharacteristicSelectionViewController(BeatmapCharacteristicSelectionViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicSelectionViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCharacteristicSelectionViewController(BeatmapCharacteristicSelectionViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCharacteristicSelectionViewController();

public:
  /// @brief Field _beatmapCharacteristicSegmentedControl, offset: 0x70, size: 0x8, def value: None
  ::HMUI::IconSegmentedControl* ____beatmapCharacteristicSegmentedControl;

  /// @brief Field _beatmapCharacteristicCollection, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollection* ____beatmapCharacteristicCollection;

  /// @brief Field didSelectBeatmapCharacteristicEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::BeatmapCharacteristicSelectionViewController*, ::GlobalNamespace::BeatmapCharacteristicSO*>* ___didSelectBeatmapCharacteristicEvent;

  /// @brief Field _selectedBeatmapCharacteristic, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicSO* ____selectedBeatmapCharacteristic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicSelectionViewController, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSelectionViewController, ____beatmapCharacteristicSegmentedControl) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSelectionViewController, ____beatmapCharacteristicCollection) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSelectionViewController, ___didSelectBeatmapCharacteristicEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicSelectionViewController, ____selectedBeatmapCharacteristic) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicSelectionViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicSelectionViewController*, "", "BeatmapCharacteristicSelectionViewController");
