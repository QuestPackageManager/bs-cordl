#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerStatisticsViewController)
namespace HMUI {
class TextSegmentedControl;
}
namespace GlobalNamespace {
struct __PlayerStatisticsViewController__StatsScopeData;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace HMUI {
class SegmentedControl;
}
namespace GlobalNamespace {
class __PlayerAllOverallStatsData__PlayerOverallStatsData;
}
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerStatisticsViewController;
}
namespace GlobalNamespace {
struct __PlayerStatisticsViewController__StatsScopeData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerStatisticsViewController);
MARK_VAL_T(::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData);
// Type: ::StatsScopeData
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5829))
// CS Name: ::PlayerStatisticsViewController::StatsScopeData
struct CORDL_TYPE __PlayerStatisticsViewController__StatsScopeData {
public:
  // Declarations
  __declspec(property(get = get_text, put = set_text))::StringW text;

  __declspec(property(get = get_playerOverallStatsDataFunc,
                      put = set_playerOverallStatsDataFunc))::System::Func_1<::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*>* playerOverallStatsDataFunc;

  /// @brief Method get_text addr 0x219208c size 0x8 virtual false final false
  inline ::StringW get_text();

  /// @brief Method set_text addr 0x2192094 size 0x8 virtual false final false
  inline void set_text(::StringW value);

  /// @brief Method get_playerOverallStatsDataFunc addr 0x219209c size 0x8 virtual false final false
  inline ::System::Func_1<::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*>* get_playerOverallStatsDataFunc();

  /// @brief Method set_playerOverallStatsDataFunc addr 0x21920a4 size 0x8 virtual false final false
  inline void set_playerOverallStatsDataFunc(::System::Func_1<::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*>* value);

  /// @brief Method .ctor addr 0x2191ac8 size 0x8 virtual false final false
  inline void _ctor(::StringW text, ::System::Func_1<::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*>* playerOverallStatsDataFunc);

  // Ctor Parameters [CppParam { name: "_text_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_playerOverallStatsDataFunc_k__BackingField", ty:
  // "::System::Func_1<::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*>*", modifiers: "", def_value: None }]
  constexpr __PlayerStatisticsViewController__StatsScopeData(
      ::StringW _text_k__BackingField, ::System::Func_1<::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*>* _playerOverallStatsDataFunc_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerStatisticsViewController__StatsScopeData();

  /// @brief Field <text>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::StringW _text_k__BackingField;

  /// @brief Field <playerOverallStatsDataFunc>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::System::Func_1<::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*>* _playerOverallStatsDataFunc_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData, _text_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData, _playerOverallStatsDataFunc_k__BackingField) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerStatisticsViewController
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13722))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5830))
// CS Name: ::PlayerStatisticsViewController*
class CORDL_TYPE PlayerStatisticsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using StatsScopeData = ::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData;

  /// @brief Field _statsScopeSegmentedControl, offset 0x70, size 0x8
  __declspec(property(get = __get__statsScopeSegmentedControl, put = __set__statsScopeSegmentedControl))::HMUI::TextSegmentedControl* _statsScopeSegmentedControl;

  /// @brief Field _playedLevelsCountText, offset 0x78, size 0x8
  __declspec(property(get = __get__playedLevelsCountText, put = __set__playedLevelsCountText))::TMPro::TextMeshProUGUI* _playedLevelsCountText;

  /// @brief Field _clearedLevelsCountText, offset 0x80, size 0x8
  __declspec(property(get = __get__clearedLevelsCountText, put = __set__clearedLevelsCountText))::TMPro::TextMeshProUGUI* _clearedLevelsCountText;

  /// @brief Field _failedLevelsCountText, offset 0x88, size 0x8
  __declspec(property(get = __get__failedLevelsCountText, put = __set__failedLevelsCountText))::TMPro::TextMeshProUGUI* _failedLevelsCountText;

  /// @brief Field _timePlayedText, offset 0x90, size 0x8
  __declspec(property(get = __get__timePlayedText, put = __set__timePlayedText))::TMPro::TextMeshProUGUI* _timePlayedText;

  /// @brief Field _goodCutsCountText, offset 0x98, size 0x8
  __declspec(property(get = __get__goodCutsCountText, put = __set__goodCutsCountText))::TMPro::TextMeshProUGUI* _goodCutsCountText;

  /// @brief Field _badCutsCountCountText, offset 0xa0, size 0x8
  __declspec(property(get = __get__badCutsCountCountText, put = __set__badCutsCountCountText))::TMPro::TextMeshProUGUI* _badCutsCountCountText;

  /// @brief Field _missedCountText, offset 0xa8, size 0x8
  __declspec(property(get = __get__missedCountText, put = __set__missedCountText))::TMPro::TextMeshProUGUI* _missedCountText;

  /// @brief Field _totalScoreText, offset 0xb0, size 0x8
  __declspec(property(get = __get__totalScoreText, put = __set__totalScoreText))::TMPro::TextMeshProUGUI* _totalScoreText;

  /// @brief Field _fullComboCountText, offset 0xb8, size 0x8
  __declspec(property(get = __get__fullComboCountText, put = __set__fullComboCountText))::TMPro::TextMeshProUGUI* _fullComboCountText;

  /// @brief Field _handDistanceTravelledText, offset 0xc0, size 0x8
  __declspec(property(get = __get__handDistanceTravelledText, put = __set__handDistanceTravelledText))::TMPro::TextMeshProUGUI* _handDistanceTravelledText;

  /// @brief Field _playerDataModel, offset 0xc8, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _appStaticSettings, offset 0xd0, size 0x8
  __declspec(property(get = __get__appStaticSettings, put = __set__appStaticSettings))::GlobalNamespace::AppStaticSettingsSO* _appStaticSettings;

  /// @brief Field _statsScopeDatas, offset 0xd8, size 0x8
  __declspec(property(get = __get__statsScopeDatas, put = __set__statsScopeDatas))::ArrayW<::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData,
                                                                                           ::Array<::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData>*> _statsScopeDatas;

  constexpr ::HMUI::TextSegmentedControl*& __get__statsScopeSegmentedControl();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::TextSegmentedControl*> const& __get__statsScopeSegmentedControl() const;

  constexpr void __set__statsScopeSegmentedControl(::HMUI::TextSegmentedControl* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__playedLevelsCountText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__playedLevelsCountText() const;

  constexpr void __set__playedLevelsCountText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__clearedLevelsCountText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__clearedLevelsCountText() const;

  constexpr void __set__clearedLevelsCountText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__failedLevelsCountText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__failedLevelsCountText() const;

  constexpr void __set__failedLevelsCountText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__timePlayedText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__timePlayedText() const;

  constexpr void __set__timePlayedText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__goodCutsCountText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__goodCutsCountText() const;

  constexpr void __set__goodCutsCountText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__badCutsCountCountText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__badCutsCountCountText() const;

  constexpr void __set__badCutsCountCountText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__missedCountText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__missedCountText() const;

  constexpr void __set__missedCountText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__totalScoreText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__totalScoreText() const;

  constexpr void __set__totalScoreText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__fullComboCountText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__fullComboCountText() const;

  constexpr void __set__fullComboCountText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__handDistanceTravelledText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__handDistanceTravelledText() const;

  constexpr void __set__handDistanceTravelledText(::TMPro::TextMeshProUGUI* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::GlobalNamespace::AppStaticSettingsSO*& __get__appStaticSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppStaticSettingsSO*> const& __get__appStaticSettings() const;

  constexpr void __set__appStaticSettings(::GlobalNamespace::AppStaticSettingsSO* value);

  constexpr ::ArrayW<::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData, ::Array<::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData>*>& __get__statsScopeDatas();

  constexpr ::ArrayW<::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData, ::Array<::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData>*> const&
  __get__statsScopeDatas() const;

  constexpr void
  __set__statsScopeDatas(::ArrayW<::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData, ::Array<::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData>*> value);

  /// @brief Method DidActivate addr 0x21914d8 size 0x5f0 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate addr 0x2191eb8 size 0xa0 virtual true final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method UpdateView addr 0x2191ad0 size 0x3e8 virtual false final false
  inline void UpdateView(::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* playerOverallStatsData);

  /// @brief Method HandleStatsScopeSegmentedControlDidSelectCell addr 0x2191f58 size 0x50 virtual false final false
  inline void HandleStatsScopeSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellIdx);

  static inline ::GlobalNamespace::PlayerStatisticsViewController* New_ctor();

  /// @brief Method .ctor addr 0x2191fa8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__15_1 addr 0x2191fb0 size 0x2c virtual false final false
  inline ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* _DidActivate_b__15_1();

  /// @brief Method <DidActivate>b__15_2 addr 0x2191fdc size 0x2c virtual false final false
  inline ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* _DidActivate_b__15_2();

  /// @brief Method <DidActivate>b__15_3 addr 0x2192008 size 0x2c virtual false final false
  inline ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* _DidActivate_b__15_3();

  /// @brief Method <DidActivate>b__15_4 addr 0x2192034 size 0x2c virtual false final false
  inline ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* _DidActivate_b__15_4();

  /// @brief Method <DidActivate>b__15_0 addr 0x2192060 size 0x2c virtual false final false
  inline ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* _DidActivate_b__15_0();

  // Ctor Parameters [CppParam { name: "", ty: "PlayerStatisticsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerStatisticsViewController(PlayerStatisticsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerStatisticsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerStatisticsViewController(PlayerStatisticsViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerStatisticsViewController();

public:
  /// @brief Field _statsScopeSegmentedControl, offset: 0x70, size: 0x8, def value: None
  ::HMUI::TextSegmentedControl* ____statsScopeSegmentedControl;

  /// @brief Field _playedLevelsCountText, offset: 0x78, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____playedLevelsCountText;

  /// @brief Field _clearedLevelsCountText, offset: 0x80, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____clearedLevelsCountText;

  /// @brief Field _failedLevelsCountText, offset: 0x88, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____failedLevelsCountText;

  /// @brief Field _timePlayedText, offset: 0x90, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____timePlayedText;

  /// @brief Field _goodCutsCountText, offset: 0x98, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____goodCutsCountText;

  /// @brief Field _badCutsCountCountText, offset: 0xa0, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____badCutsCountCountText;

  /// @brief Field _missedCountText, offset: 0xa8, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____missedCountText;

  /// @brief Field _totalScoreText, offset: 0xb0, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____totalScoreText;

  /// @brief Field _fullComboCountText, offset: 0xb8, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____fullComboCountText;

  /// @brief Field _handDistanceTravelledText, offset: 0xc0, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____handDistanceTravelledText;

  /// @brief Field _playerDataModel, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _appStaticSettings, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::AppStaticSettingsSO* ____appStaticSettings;

  /// @brief Field _statsScopeDatas, offset: 0xd8, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData, ::Array<::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData>*> ____statsScopeDatas;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerStatisticsViewController, 0xe0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____statsScopeSegmentedControl) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____playedLevelsCountText) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____clearedLevelsCountText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____failedLevelsCountText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____timePlayedText) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____goodCutsCountText) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____badCutsCountCountText) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____missedCountText) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____totalScoreText) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____fullComboCountText) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____handDistanceTravelledText) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____playerDataModel) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____appStaticSettings) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatisticsViewController, ____statsScopeDatas) == 0xd8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerStatisticsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerStatisticsViewController*, "", "PlayerStatisticsViewController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerStatisticsViewController__StatsScopeData, "", "PlayerStatisticsViewController/StatsScopeData");
