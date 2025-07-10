#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCharacteristicsViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapCharacteristicsViewController)
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
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

  __declspec(property(get = get_beatmapCharacteristicCollection)) ::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection;

  /// @brief Field didSelectBeatmapCharacteristicEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectBeatmapCharacteristicEvent,
                      put = __cordl_internal_set_didSelectBeatmapCharacteristicEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* didSelectBeatmapCharacteristicEvent;

  __declspec(property(get = get_selectedBeatmapCharacteristic)) ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> selectedBeatmapCharacteristic;

  /// @brief Method DidActivate, addr 0x3c1c244, size 0xb0, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3c1c2f4, size 0x9c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleBeatmapCharacteristicsTableViewDidSelecteCharacteristic, addr 0x3c1c3f4, size 0x1c0, virtual false, abstract: false, final false
  inline void HandleBeatmapCharacteristicsTableViewDidSelecteCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  static inline ::GlobalNamespace::BeatmapCharacteristicsViewController* New_ctor();

  /// @brief Method SetData, addr 0x3c1c390, size 0x64, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection, int32_t selectedCharacteristicNum);

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* const& __cordl_internal_get__beatmapCharacteristicCollection() const;

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __cordl_internal_get__beatmapCharacteristicCollection();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicsTableView> const& __cordl_internal_get__beatmapCharacteristicsTableView() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicsTableView>& __cordl_internal_get__beatmapCharacteristicsTableView();

  constexpr int32_t const& __cordl_internal_get__selectedBeatmapCharacteristicNum() const;

  constexpr int32_t& __cordl_internal_get__selectedBeatmapCharacteristicNum();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* const& __cordl_internal_get_didSelectBeatmapCharacteristicEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*& __cordl_internal_get_didSelectBeatmapCharacteristicEvent();

  constexpr void __cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value);

  constexpr void __cordl_internal_set__beatmapCharacteristicsTableView(::UnityW<::GlobalNamespace::BeatmapCharacteristicsTableView> value);

  constexpr void __cordl_internal_set__selectedBeatmapCharacteristicNum(int32_t value);

  constexpr void __cordl_internal_set_didSelectBeatmapCharacteristicEvent(::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

  /// @brief Method .ctor, addr 0x3c1c5b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectBeatmapCharacteristicEvent, addr 0x3c1c020, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectBeatmapCharacteristicEvent(::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

  /// @brief Method get_beatmapCharacteristicCollection, addr 0x3c1c180, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapCharacteristicCollection* get_beatmapCharacteristicCollection();

  /// @brief Method get_selectedBeatmapCharacteristic, addr 0x3c1c188, size 0xbc, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> get_selectedBeatmapCharacteristic();

  /// @brief Method remove_didSelectBeatmapCharacteristicEvent, addr 0x3c1c0d0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectBeatmapCharacteristicEvent(::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4909 };

  /// @brief Field _beatmapCharacteristicsTableView, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicsTableView> ____beatmapCharacteristicsTableView;

  /// @brief Field didSelectBeatmapCharacteristicEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* ___didSelectBeatmapCharacteristicEvent;

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

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicsViewController, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicsViewController*, "", "BeatmapCharacteristicsViewController");
