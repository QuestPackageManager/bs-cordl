#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapCharacteristicsViewController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapCharacteristicsViewController)
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
struct BeatmapCharacteristic;
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
MARK_REF_T(::GlobalNamespace::BeatmapCharacteristicsViewController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapCharacteristicsViewController*, "", "BeatmapCharacteristicsViewController");
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapCharacteristicsViewController
class CORDL_TYPE BeatmapCharacteristicsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _beatmapCharacteristicCollection, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicCollection,
                      put = __cordl_internal_set__beatmapCharacteristicCollection)) ::GlobalNamespace::BeatmapCharacteristicCollection* _beatmapCharacteristicCollection;

  /// @brief Field _beatmapCharacteristicsTableView, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicsTableView,
                      put = __cordl_internal_set__beatmapCharacteristicsTableView)) ::UnityW<::GlobalNamespace::BeatmapCharacteristicsTableView>
      _beatmapCharacteristicsTableView;

  /// @brief Field _selectedBeatmapCharacteristicNum, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedBeatmapCharacteristicNum, put = __cordl_internal_set__selectedBeatmapCharacteristicNum)) int32_t _selectedBeatmapCharacteristicNum;

  /// @brief Field didSelectBeatmapCharacteristicEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectBeatmapCharacteristicEvent,
                      put = __cordl_internal_set_didSelectBeatmapCharacteristicEvent)) ::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>* didSelectBeatmapCharacteristicEvent;

  __declspec(property(get = get_selectedBeatmapCharacteristic)) ::GlobalNamespace::BeatmapCharacteristic selectedBeatmapCharacteristic;

  /// @brief Method DidActivate, addr 0x594d58c, size 0xc4, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x594d650, size 0xb0, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleBeatmapCharacteristicsTableViewDidSelecteCharacteristic, addr 0x594d764, size 0x184, virtual false, abstract: false, final false
  inline void HandleBeatmapCharacteristicsTableViewDidSelecteCharacteristic(::GlobalNamespace::BeatmapCharacteristic beatmapCharacteristic);

  static inline ::GlobalNamespace::BeatmapCharacteristicsViewController* New_ctor();

  /// @brief Method SetData, addr 0x594d700, size 0x64, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection, int32_t selectedCharacteristicNum);

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* const& __cordl_internal_get__beatmapCharacteristicCollection() const;

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __cordl_internal_get__beatmapCharacteristicCollection();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicsTableView> const& __cordl_internal_get__beatmapCharacteristicsTableView() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicsTableView>& __cordl_internal_get__beatmapCharacteristicsTableView();

  constexpr int32_t const& __cordl_internal_get__selectedBeatmapCharacteristicNum() const;

  constexpr int32_t& __cordl_internal_get__selectedBeatmapCharacteristicNum();

  constexpr ::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>* const& __cordl_internal_get_didSelectBeatmapCharacteristicEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>*& __cordl_internal_get_didSelectBeatmapCharacteristicEvent();

  constexpr void __cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value);

  constexpr void __cordl_internal_set__beatmapCharacteristicsTableView(::UnityW<::GlobalNamespace::BeatmapCharacteristicsTableView> value);

  constexpr void __cordl_internal_set__selectedBeatmapCharacteristicNum(int32_t value);

  constexpr void __cordl_internal_set_didSelectBeatmapCharacteristicEvent(::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>* value);

  /// @brief Method .ctor, addr 0x594d8e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectBeatmapCharacteristicEvent, addr 0x594d34c, size 0xc0, virtual false, abstract: false, final false
  inline void add_didSelectBeatmapCharacteristicEvent(::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>* value);

  /// @brief Method get_selectedBeatmapCharacteristic, addr 0x594d4cc, size 0xc0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapCharacteristic get_selectedBeatmapCharacteristic();

  /// @brief Method remove_didSelectBeatmapCharacteristicEvent, addr 0x594d40c, size 0xc0, virtual false, abstract: false, final false
  inline void remove_didSelectBeatmapCharacteristicEvent(::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCharacteristicsViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCharacteristicsViewController(BeatmapCharacteristicsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCharacteristicsViewController(BeatmapCharacteristicsViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6923 };

  /// @brief Field _beatmapCharacteristicsTableView, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicsTableView> ____beatmapCharacteristicsTableView;

  /// @brief Field didSelectBeatmapCharacteristicEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>* ___didSelectBeatmapCharacteristicEvent;

  /// @brief Field _beatmapCharacteristicCollection, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollection* ____beatmapCharacteristicCollection;

  /// @brief Field _selectedBeatmapCharacteristicNum, offset: 0x90, size: 0x4, def value: None
  int32_t ____selectedBeatmapCharacteristicNum;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsViewController, ____beatmapCharacteristicsTableView) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsViewController, ___didSelectBeatmapCharacteristicEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsViewController, ____beatmapCharacteristicCollection) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicsViewController, ____selectedBeatmapCharacteristicNum) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristicsViewController) == 0x98, "Size mismatch!");

} // namespace GlobalNamespace
