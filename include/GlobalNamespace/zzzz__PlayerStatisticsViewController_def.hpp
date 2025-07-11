#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerStatisticsViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerStatisticsViewController)
namespace GlobalNamespace {
class PlayerAllOverallStatsData_PlayerOverallStatsData;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
struct PlayerStatisticsViewController_StatsScopeData;
}
namespace HMUI {
class SegmentedControl;
}
namespace HMUI {
class TextSegmentedControl;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerStatisticsViewController;
}
namespace GlobalNamespace {
struct PlayerStatisticsViewController_StatsScopeData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerStatisticsViewController);
MARK_VAL_T(::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerStatisticsViewController/StatsScopeData
struct CORDL_TYPE PlayerStatisticsViewController_StatsScopeData {
public:
  // Declarations
  __declspec(property(get = get_playerOverallStatsDataFunc,
                      put = set_playerOverallStatsDataFunc)) ::System::Func_1<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>* playerOverallStatsDataFunc;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  /// @brief Method .ctor, addr 0x3af4828, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW text, ::System::Func_1<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>* playerOverallStatsDataFunc);

  /// @brief Method get_playerOverallStatsDataFunc, addr 0x3af4df4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_1<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>* get_playerOverallStatsDataFunc();

  /// @brief Method get_text, addr 0x3af4de4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method set_playerOverallStatsDataFunc, addr 0x3af4dfc, size 0x8, virtual false, abstract: false, final false
  inline void set_playerOverallStatsDataFunc(::System::Func_1<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>* value);

  /// @brief Method set_text, addr 0x3af4dec, size 0x8, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerStatisticsViewController_StatsScopeData();

  // Ctor Parameters [CppParam { name: "_text_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_playerOverallStatsDataFunc_k__BackingField", ty:
  // "::System::Func_1<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>*", modifiers: "", def_value: None }]
  constexpr PlayerStatisticsViewController_StatsScopeData(::StringW _text_k__BackingField,
                                                          ::System::Func_1<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>* _playerOverallStatsDataFunc_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4933 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field <text>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::StringW _text_k__BackingField;

  /// @brief Field <playerOverallStatsDataFunc>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::System::Func_1<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>* _playerOverallStatsDataFunc_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData, _text_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData, _playerOverallStatsDataFunc_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerStatisticsViewController
class CORDL_TYPE PlayerStatisticsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using StatsScopeData = ::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData;

  /// @brief Field _badCutsCountCountText, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__badCutsCountCountText, put = __cordl_internal_set__badCutsCountCountText)) ::UnityW<::TMPro::TextMeshProUGUI> _badCutsCountCountText;

  /// @brief Field _clearedLevelsCountText, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__clearedLevelsCountText, put = __cordl_internal_set__clearedLevelsCountText)) ::UnityW<::TMPro::TextMeshProUGUI> _clearedLevelsCountText;

  /// @brief Field _failedLevelsCountText, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__failedLevelsCountText, put = __cordl_internal_set__failedLevelsCountText)) ::UnityW<::TMPro::TextMeshProUGUI> _failedLevelsCountText;

  /// @brief Field _fullComboCountText, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__fullComboCountText, put = __cordl_internal_set__fullComboCountText)) ::UnityW<::TMPro::TextMeshProUGUI> _fullComboCountText;

  /// @brief Field _goodCutsCountText, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__goodCutsCountText, put = __cordl_internal_set__goodCutsCountText)) ::UnityW<::TMPro::TextMeshProUGUI> _goodCutsCountText;

  /// @brief Field _handDistanceTravelledText, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__handDistanceTravelledText, put = __cordl_internal_set__handDistanceTravelledText)) ::UnityW<::TMPro::TextMeshProUGUI> _handDistanceTravelledText;

  /// @brief Field _missedCountText, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__missedCountText, put = __cordl_internal_set__missedCountText)) ::UnityW<::TMPro::TextMeshProUGUI> _missedCountText;

  /// @brief Field _playedLevelsCountText, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__playedLevelsCountText, put = __cordl_internal_set__playedLevelsCountText)) ::UnityW<::TMPro::TextMeshProUGUI> _playedLevelsCountText;

  /// @brief Field _playerDataModel, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _statsScopeDatas, offset 0xd8, size 0x8
  __declspec(property(
      get = __cordl_internal_get__statsScopeDatas,
      put =
          __cordl_internal_set__statsScopeDatas)) ::ArrayW<::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData, ::Array<::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData>*>
      _statsScopeDatas;

  /// @brief Field _statsScopeSegmentedControl, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__statsScopeSegmentedControl, put = __cordl_internal_set__statsScopeSegmentedControl)) ::UnityW<::HMUI::TextSegmentedControl>
      _statsScopeSegmentedControl;

  /// @brief Field _timePlayedText, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__timePlayedText, put = __cordl_internal_set__timePlayedText)) ::UnityW<::TMPro::TextMeshProUGUI> _timePlayedText;

  /// @brief Field _totalScoreText, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__totalScoreText, put = __cordl_internal_set__totalScoreText)) ::UnityW<::TMPro::TextMeshProUGUI> _totalScoreText;

  /// @brief Method DidActivate, addr 0x3af42a0, size 0x588, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3af4c14, size 0x9c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleStatsScopeSegmentedControlDidSelectCell, addr 0x3af4cb0, size 0x50, virtual false, abstract: false, final false
  inline void HandleStatsScopeSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellIdx);

  static inline ::GlobalNamespace::PlayerStatisticsViewController* New_ctor();

  /// @brief Method UpdateView, addr 0x3af4830, size 0x3e4, virtual false, abstract: false, final false
  inline void UpdateView(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* playerOverallStatsData);

  /// @brief Method <DidActivate>b__14_0, addr 0x3af4db8, size 0x2c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* _DidActivate_b__14_0();

  /// @brief Method <DidActivate>b__14_1, addr 0x3af4d08, size 0x2c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* _DidActivate_b__14_1();

  /// @brief Method <DidActivate>b__14_2, addr 0x3af4d34, size 0x2c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* _DidActivate_b__14_2();

  /// @brief Method <DidActivate>b__14_3, addr 0x3af4d60, size 0x2c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* _DidActivate_b__14_3();

  /// @brief Method <DidActivate>b__14_4, addr 0x3af4d8c, size 0x2c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* _DidActivate_b__14_4();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__badCutsCountCountText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__badCutsCountCountText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__clearedLevelsCountText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__clearedLevelsCountText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__failedLevelsCountText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__failedLevelsCountText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__fullComboCountText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__fullComboCountText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__goodCutsCountText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__goodCutsCountText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__handDistanceTravelledText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__handDistanceTravelledText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__missedCountText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__missedCountText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__playedLevelsCountText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__playedLevelsCountText();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::ArrayW<::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData, ::Array<::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData>*> const&
  __cordl_internal_get__statsScopeDatas() const;

  constexpr ::ArrayW<::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData, ::Array<::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData>*>&
  __cordl_internal_get__statsScopeDatas();

  constexpr ::UnityW<::HMUI::TextSegmentedControl> const& __cordl_internal_get__statsScopeSegmentedControl() const;

  constexpr ::UnityW<::HMUI::TextSegmentedControl>& __cordl_internal_get__statsScopeSegmentedControl();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__timePlayedText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__timePlayedText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__totalScoreText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__totalScoreText();

  constexpr void __cordl_internal_set__badCutsCountCountText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__clearedLevelsCountText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__failedLevelsCountText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__fullComboCountText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__goodCutsCountText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__handDistanceTravelledText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__missedCountText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__playedLevelsCountText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void
  __cordl_internal_set__statsScopeDatas(::ArrayW<::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData, ::Array<::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData>*> value);

  constexpr void __cordl_internal_set__statsScopeSegmentedControl(::UnityW<::HMUI::TextSegmentedControl> value);

  constexpr void __cordl_internal_set__timePlayedText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__totalScoreText(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x3af4d00, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerStatisticsViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerStatisticsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerStatisticsViewController(PlayerStatisticsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerStatisticsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerStatisticsViewController(PlayerStatisticsViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4934 };

  /// @brief Field _statsScopeSegmentedControl, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HMUI::TextSegmentedControl> ____statsScopeSegmentedControl;

  /// @brief Field _playedLevelsCountText, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____playedLevelsCountText;

  /// @brief Field _clearedLevelsCountText, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____clearedLevelsCountText;

  /// @brief Field _failedLevelsCountText, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____failedLevelsCountText;

  /// @brief Field _timePlayedText, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____timePlayedText;

  /// @brief Field _goodCutsCountText, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____goodCutsCountText;

  /// @brief Field _badCutsCountCountText, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____badCutsCountCountText;

  /// @brief Field _missedCountText, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____missedCountText;

  /// @brief Field _totalScoreText, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____totalScoreText;

  /// @brief Field _fullComboCountText, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____fullComboCountText;

  /// @brief Field _handDistanceTravelledText, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____handDistanceTravelledText;

  /// @brief Field _playerDataModel, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _statsScopeDatas, offset: 0xd8, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData, ::Array<::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData>*> ____statsScopeDatas;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____statsScopeSegmentedControl) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____playedLevelsCountText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____clearedLevelsCountText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____failedLevelsCountText) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____timePlayedText) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____goodCutsCountText) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____badCutsCountCountText) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____missedCountText) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____totalScoreText) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____fullComboCountText) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____handDistanceTravelledText) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____playerDataModel) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____statsScopeDatas) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerStatisticsViewController, 0xe0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerStatisticsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerStatisticsViewController*, "", "PlayerStatisticsViewController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerStatisticsViewController_StatsScopeData, "", "PlayerStatisticsViewController/StatsScopeData");
