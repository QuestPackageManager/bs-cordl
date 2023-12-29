#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapCharacteristicsViewController)
namespace GlobalNamespace {
class BeatmapCharacteristicCollectionSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicsTableView;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCharacteristicsViewController);
// Type: ::BeatmapCharacteristicsViewController
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13722))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5751))
// CS Name: ::BeatmapCharacteristicsViewController*
class CORDL_TYPE BeatmapCharacteristicsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _beatmapCharacteristicsTableView, offset 0x70, size 0x8
  __declspec(property(get = __get__beatmapCharacteristicsTableView, put = __set__beatmapCharacteristicsTableView))::GlobalNamespace::BeatmapCharacteristicsTableView* _beatmapCharacteristicsTableView;

  /// @brief Field didSelectBeatmapCharacteristicEvent, offset 0x78, size 0x8
  __declspec(property(get = __get_didSelectBeatmapCharacteristicEvent,
                      put = __set_didSelectBeatmapCharacteristicEvent))::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>* didSelectBeatmapCharacteristicEvent;

  /// @brief Field _beatmapCharacteristicCollection, offset 0x80, size 0x8
  __declspec(property(get = __get__beatmapCharacteristicCollection,
                      put = __set__beatmapCharacteristicCollection))::GlobalNamespace::BeatmapCharacteristicCollectionSO* _beatmapCharacteristicCollection;

  /// @brief Field _selectedBeatmapCharacteristicNum, offset 0x88, size 0x4
  __declspec(property(get = __get__selectedBeatmapCharacteristicNum, put = __set__selectedBeatmapCharacteristicNum)) int32_t _selectedBeatmapCharacteristicNum;

  __declspec(property(get = get_beatmapCharacteristicCollection))::GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection;

  __declspec(property(get = get_selectedBeatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* selectedBeatmapCharacteristic;

  constexpr ::GlobalNamespace::BeatmapCharacteristicsTableView*& __get__beatmapCharacteristicsTableView();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicsTableView*> const& __get__beatmapCharacteristicsTableView() const;

  constexpr void __set__beatmapCharacteristicsTableView(::GlobalNamespace::BeatmapCharacteristicsTableView* value);

  constexpr ::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>*& __get_didSelectBeatmapCharacteristicEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>*> const& __get_didSelectBeatmapCharacteristicEvent() const;

  constexpr void __set_didSelectBeatmapCharacteristicEvent(::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>* value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollectionSO*& __get__beatmapCharacteristicCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollectionSO*> const& __get__beatmapCharacteristicCollection() const;

  constexpr void __set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollectionSO* value);

  constexpr int32_t& __get__selectedBeatmapCharacteristicNum();

  constexpr int32_t const& __get__selectedBeatmapCharacteristicNum() const;

  constexpr void __set__selectedBeatmapCharacteristicNum(int32_t value);

  /// @brief Method add_didSelectBeatmapCharacteristicEvent addr 0x21740bc size 0xb0 virtual false final false
  inline void add_didSelectBeatmapCharacteristicEvent(::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>* value);

  /// @brief Method remove_didSelectBeatmapCharacteristicEvent addr 0x217416c size 0xb0 virtual false final false
  inline void remove_didSelectBeatmapCharacteristicEvent(::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>* value);

  /// @brief Method get_beatmapCharacteristicCollection addr 0x217421c size 0x8 virtual false final false
  inline ::GlobalNamespace::BeatmapCharacteristicCollectionSO* get_beatmapCharacteristicCollection();

  /// @brief Method get_selectedBeatmapCharacteristic addr 0x2174224 size 0xb8 virtual false final false
  inline ::GlobalNamespace::BeatmapCharacteristicSO* get_selectedBeatmapCharacteristic();

  /// @brief Method DidActivate addr 0x21742dc size 0xb4 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate addr 0x2174390 size 0xa0 virtual true final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method SetData addr 0x2174430 size 0x64 virtual false final false
  inline void SetData(::GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection, int32_t selectedCharacteristicNum);

  /// @brief Method HandleBeatmapCharacteristicsTableViewDidSelecteCharacteristic addr 0x2174494 size 0x100 virtual false final false
  inline void HandleBeatmapCharacteristicsTableViewDidSelecteCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  static inline ::GlobalNamespace::BeatmapCharacteristicsViewController* New_ctor();

  /// @brief Method .ctor addr 0x2174594 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCharacteristicsViewController(BeatmapCharacteristicsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCharacteristicsViewController(BeatmapCharacteristicsViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCharacteristicsViewController();

public:
  /// @brief Field _beatmapCharacteristicsTableView, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicsTableView* ____beatmapCharacteristicsTableView;

  /// @brief Field didSelectBeatmapCharacteristicEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::BeatmapCharacteristicSO*>* ___didSelectBeatmapCharacteristicEvent;

  /// @brief Field _beatmapCharacteristicCollection, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollectionSO* ____beatmapCharacteristicCollection;

  /// @brief Field _selectedBeatmapCharacteristicNum, offset: 0x88, size: 0x4, def value: None
  int32_t ____selectedBeatmapCharacteristicNum;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicsViewController, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsViewController, ____beatmapCharacteristicsTableView) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsViewController, ___didSelectBeatmapCharacteristicEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsViewController, ____beatmapCharacteristicCollection) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsViewController, ____selectedBeatmapCharacteristicNum) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicsViewController*, "", "BeatmapCharacteristicsViewController");
