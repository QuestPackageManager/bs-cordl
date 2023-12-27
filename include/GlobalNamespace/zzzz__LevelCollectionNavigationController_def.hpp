#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "HMUI/zzzz__NavigationController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelCollectionNavigationController)
namespace GlobalNamespace {
class LevelCollectionViewController;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
struct __StandardLevelDetailViewController__ContentType;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace System {
template <typename T> class Action_1;
}
namespace Tweening {
class FloatTween;
}
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
struct __LevelCollectionNavigationController__AlphaAnimationType;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
namespace HMUI {
class ViewController;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
class LoadingControl;
}
namespace GlobalNamespace {
class __LevelCollectionNavigationController____c__DisplayClass54_0;
}
namespace GlobalNamespace {
class StandardLevelDetailViewController;
}
namespace GlobalNamespace {
class LevelPackDetailViewController;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
// Forward declare root types
namespace GlobalNamespace {
struct __LevelCollectionNavigationController__AlphaAnimationType;
}
namespace GlobalNamespace {
class LevelCollectionNavigationController;
}
namespace GlobalNamespace {
class __LevelCollectionNavigationController____c__DisplayClass54_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__LevelCollectionNavigationController__AlphaAnimationType);
MARK_REF_PTR_T(::GlobalNamespace::LevelCollectionNavigationController);
MARK_REF_PTR_T(::GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0);
// Type: ::AlphaAnimationType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5655))
// CS Name: ::LevelCollectionNavigationController::AlphaAnimationType
struct CORDL_TYPE __LevelCollectionNavigationController__AlphaAnimationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____LevelCollectionNavigationController__AlphaAnimationType_Unwrapped
  enum struct ____LevelCollectionNavigationController__AlphaAnimationType_Unwrapped : int32_t {
    __E_In = static_cast<int32_t>(0x0),
    __E_Out = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____LevelCollectionNavigationController__AlphaAnimationType_Unwrapped() const noexcept {
    return static_cast<____LevelCollectionNavigationController__AlphaAnimationType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LevelCollectionNavigationController__AlphaAnimationType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelCollectionNavigationController__AlphaAnimationType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field In value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__LevelCollectionNavigationController__AlphaAnimationType const In;

  /// @brief Field Out value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__LevelCollectionNavigationController__AlphaAnimationType const Out;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelCollectionNavigationController__AlphaAnimationType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass54_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5656))
// CS Name: ::LevelCollectionNavigationController::<>c__DisplayClass54_0*
class CORDL_TYPE __LevelCollectionNavigationController____c__DisplayClass54_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::LevelCollectionNavigationController* __4__this;

  /// @brief Field viewController, offset 0x18, size 0x8
  __declspec(property(get = __get_viewController, put = __set_viewController))::HMUI::ViewController* viewController;

  constexpr ::GlobalNamespace::LevelCollectionNavigationController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCollectionNavigationController*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::LevelCollectionNavigationController* value);

  constexpr ::HMUI::ViewController*& __get_viewController();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> const& __get_viewController() const;

  constexpr void __set_viewController(::HMUI::ViewController* value);

  static inline ::GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0* New_ctor();

  /// @brief Method .ctor addr 0x22bbc98 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <PresentDetailViewController>b__0 addr 0x22bbe48 size 0x2c virtual false final false
  inline void _PresentDetailViewController_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__LevelCollectionNavigationController____c__DisplayClass54_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LevelCollectionNavigationController____c__DisplayClass54_0(__LevelCollectionNavigationController____c__DisplayClass54_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LevelCollectionNavigationController____c__DisplayClass54_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LevelCollectionNavigationController____c__DisplayClass54_0(__LevelCollectionNavigationController____c__DisplayClass54_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelCollectionNavigationController____c__DisplayClass54_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::LevelCollectionNavigationController* _____4__this;

  /// @brief Field viewController, offset: 0x18, size: 0x8, def value: None
  ::HMUI::ViewController* ___viewController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelCollectionNavigationController
// SizeInfo { instance_size: 312, native_size: -1, calculated_instance_size: 312, calculated_native_size: 312, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13588)), TypeDefinitionIndex(TypeDefinitionIndex(14719))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5657))
// CS Name: ::LevelCollectionNavigationController*
class CORDL_TYPE LevelCollectionNavigationController : public ::HMUI::NavigationController {
public:
  // Declarations
  using __c__DisplayClass54_0 = ::GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0;

  using AlphaAnimationType = ::GlobalNamespace::__LevelCollectionNavigationController__AlphaAnimationType;

  /// @brief Field _loadingControl, offset 0x98, size 0x8
  __declspec(property(get = __get__loadingControl, put = __set__loadingControl))::GlobalNamespace::LoadingControl* _loadingControl;

  /// @brief Field _levelCollectionViewController, offset 0xa0, size 0x8
  __declspec(property(get = __get__levelCollectionViewController, put = __set__levelCollectionViewController))::GlobalNamespace::LevelCollectionViewController* _levelCollectionViewController;

  /// @brief Field _levelPackDetailViewController, offset 0xa8, size 0x8
  __declspec(property(get = __get__levelPackDetailViewController, put = __set__levelPackDetailViewController))::GlobalNamespace::LevelPackDetailViewController* _levelPackDetailViewController;

  /// @brief Field _levelDetailViewController, offset 0xb0, size 0x8
  __declspec(property(get = __get__levelDetailViewController, put = __set__levelDetailViewController))::GlobalNamespace::StandardLevelDetailViewController* _levelDetailViewController;

  /// @brief Field _appStaticSettings, offset 0xb8, size 0x8
  __declspec(property(get = __get__appStaticSettings, put = __set__appStaticSettings))::GlobalNamespace::AppStaticSettingsSO* _appStaticSettings;

  /// @brief Field _timeTweeningManager, offset 0xc0, size 0x8
  __declspec(property(get = __get__timeTweeningManager, put = __set__timeTweeningManager))::Tweening::TimeTweeningManager* _timeTweeningManager;

  /// @brief Field didChangeLevelDetailContentEvent, offset 0xc8, size 0x8
  __declspec(property(get = __get_didChangeLevelDetailContentEvent,
                      put = __set_didChangeLevelDetailContentEvent))::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*,
                                                                                       ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>* didChangeLevelDetailContentEvent;

  /// @brief Field didSelectLevelPackEvent, offset 0xd0, size 0x8
  __declspec(property(get = __get_didSelectLevelPackEvent,
                      put = __set_didSelectLevelPackEvent))::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>* didSelectLevelPackEvent;

  /// @brief Field didPressActionButtonEvent, offset 0xd8, size 0x8
  __declspec(property(get = __get_didPressActionButtonEvent,
                      put = __set_didPressActionButtonEvent))::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>* didPressActionButtonEvent;

  /// @brief Field didPressOpenPackButtonEvent, offset 0xe0, size 0x8
  __declspec(
      property(get = __get_didPressOpenPackButtonEvent,
               put = __set_didPressOpenPackButtonEvent))::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>* didPressOpenPackButtonEvent;

  /// @brief Field didPressPracticeButtonEvent, offset 0xe8, size 0x8
  __declspec(
      property(get = __get_didPressPracticeButtonEvent,
               put = __set_didPressPracticeButtonEvent))::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevel*>* didPressPracticeButtonEvent;

  /// @brief Field didChangeDifficultyBeatmapEvent, offset 0xf0, size 0x8
  __declspec(property(
      get = __get_didChangeDifficultyBeatmapEvent,
      put = __set_didChangeDifficultyBeatmapEvent))::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IDifficultyBeatmap*>* didChangeDifficultyBeatmapEvent;

  /// @brief Field _showPracticeButtonInDetailView, offset 0xf8, size 0x1
  __declspec(property(get = __get__showPracticeButtonInDetailView, put = __set__showPracticeButtonInDetailView)) bool _showPracticeButtonInDetailView;

  /// @brief Field _actionButtonTextInDetailView, offset 0x100, size 0x8
  __declspec(property(get = __get__actionButtonTextInDetailView, put = __set__actionButtonTextInDetailView))::StringW _actionButtonTextInDetailView;

  /// @brief Field _levelPack, offset 0x108, size 0x8
  __declspec(property(get = __get__levelPack, put = __set__levelPack))::GlobalNamespace::IBeatmapLevelPack* _levelPack;

  /// @brief Field _allowedBeatmapDifficultyMask, offset 0x110, size 0x1
  __declspec(property(get = __get__allowedBeatmapDifficultyMask, put = __set__allowedBeatmapDifficultyMask))::GlobalNamespace::BeatmapDifficultyMask _allowedBeatmapDifficultyMask;

  /// @brief Field _beatmapLevelToBeSelectedAfterPresent, offset 0x118, size 0x8
  __declspec(property(get = __get__beatmapLevelToBeSelectedAfterPresent,
                      put = __set__beatmapLevelToBeSelectedAfterPresent))::GlobalNamespace::IPreviewBeatmapLevel* _beatmapLevelToBeSelectedAfterPresent;

  /// @brief Field _loading, offset 0x120, size 0x1
  __declspec(property(get = __get__loading, put = __set__loading)) bool _loading;

  /// @brief Field _hideDetailViewController, offset 0x121, size 0x1
  __declspec(property(get = __get__hideDetailViewController, put = __set__hideDetailViewController)) bool _hideDetailViewController;

  /// @brief Field _notAllowedCharacteristics, offset 0x128, size 0x8
  __declspec(property(get = __get__notAllowedCharacteristics,
                      put = __set__notAllowedCharacteristics))::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> _notAllowedCharacteristics;

  /// @brief Field _floatTween, offset 0x130, size 0x8
  __declspec(property(get = __get__floatTween, put = __set__floatTween))::Tweening::FloatTween* _floatTween;

  __declspec(property(get = get_selectedDifficultyBeatmap))::GlobalNamespace::IDifficultyBeatmap* selectedDifficultyBeatmap;

  __declspec(property(get = get_selectedBeatmapLevel))::GlobalNamespace::IPreviewBeatmapLevel* selectedBeatmapLevel;

  constexpr ::GlobalNamespace::LoadingControl*& __get__loadingControl();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LoadingControl*> const& __get__loadingControl() const;

  constexpr void __set__loadingControl(::GlobalNamespace::LoadingControl* value);

  constexpr ::GlobalNamespace::LevelCollectionViewController*& __get__levelCollectionViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCollectionViewController*> const& __get__levelCollectionViewController() const;

  constexpr void __set__levelCollectionViewController(::GlobalNamespace::LevelCollectionViewController* value);

  constexpr ::GlobalNamespace::LevelPackDetailViewController*& __get__levelPackDetailViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelPackDetailViewController*> const& __get__levelPackDetailViewController() const;

  constexpr void __set__levelPackDetailViewController(::GlobalNamespace::LevelPackDetailViewController* value);

  constexpr ::GlobalNamespace::StandardLevelDetailViewController*& __get__levelDetailViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardLevelDetailViewController*> const& __get__levelDetailViewController() const;

  constexpr void __set__levelDetailViewController(::GlobalNamespace::StandardLevelDetailViewController* value);

  constexpr ::GlobalNamespace::AppStaticSettingsSO*& __get__appStaticSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppStaticSettingsSO*> const& __get__appStaticSettings() const;

  constexpr void __set__appStaticSettings(::GlobalNamespace::AppStaticSettingsSO* value);

  constexpr ::Tweening::TimeTweeningManager*& __get__timeTweeningManager();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> const& __get__timeTweeningManager() const;

  constexpr void __set__timeTweeningManager(::Tweening::TimeTweeningManager* value);

  constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*& __get_didChangeLevelDetailContentEvent();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>*> const&
  __get_didChangeLevelDetailContentEvent() const;

  constexpr void
  __set_didChangeLevelDetailContentEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>* value);

  constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>*& __get_didSelectLevelPackEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>*> const&
  __get_didSelectLevelPackEvent() const;

  constexpr void __set_didSelectLevelPackEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>*& __get_didPressActionButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>*> const& __get_didPressActionButtonEvent() const;

  constexpr void __set_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>* value);

  constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>*& __get_didPressOpenPackButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>*> const&
  __get_didPressOpenPackButtonEvent() const;

  constexpr void __set_didPressOpenPackButtonEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>* value);

  constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevel*>*& __get_didPressPracticeButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevel*>*> const&
  __get_didPressPracticeButtonEvent() const;

  constexpr void __set_didPressPracticeButtonEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevel*>* value);

  constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IDifficultyBeatmap*>*& __get_didChangeDifficultyBeatmapEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IDifficultyBeatmap*>*> const&
  __get_didChangeDifficultyBeatmapEvent() const;

  constexpr void __set_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IDifficultyBeatmap*>* value);

  constexpr bool& __get__showPracticeButtonInDetailView();

  constexpr bool const& __get__showPracticeButtonInDetailView() const;

  constexpr void __set__showPracticeButtonInDetailView(bool value);

  constexpr ::StringW& __get__actionButtonTextInDetailView();

  constexpr ::StringW const& __get__actionButtonTextInDetailView() const;

  constexpr void __set__actionButtonTextInDetailView(::StringW value);

  constexpr ::GlobalNamespace::IBeatmapLevelPack*& __get__levelPack();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> const& __get__levelPack() const;

  constexpr void __set__levelPack(::GlobalNamespace::IBeatmapLevelPack* value);

  constexpr ::GlobalNamespace::BeatmapDifficultyMask& __get__allowedBeatmapDifficultyMask();

  constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __get__allowedBeatmapDifficultyMask() const;

  constexpr void __set__allowedBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask value);

  constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& __get__beatmapLevelToBeSelectedAfterPresent();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& __get__beatmapLevelToBeSelectedAfterPresent() const;

  constexpr void __set__beatmapLevelToBeSelectedAfterPresent(::GlobalNamespace::IPreviewBeatmapLevel* value);

  constexpr bool& __get__loading();

  constexpr bool const& __get__loading() const;

  constexpr void __set__loading(bool value);

  constexpr bool& __get__hideDetailViewController();

  constexpr bool const& __get__hideDetailViewController() const;

  constexpr void __set__hideDetailViewController(bool value);

  constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>& __get__notAllowedCharacteristics();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> const& __get__notAllowedCharacteristics() const;

  constexpr void __set__notAllowedCharacteristics(::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> value);

  constexpr ::Tweening::FloatTween*& __get__floatTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __get__floatTween() const;

  constexpr void __set__floatTween(::Tweening::FloatTween* value);

  /// @brief Method add_didChangeLevelDetailContentEvent addr 0x22b8a80 size 0xb0 virtual false final false
  inline void
  add_didChangeLevelDetailContentEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>* value);

  /// @brief Method remove_didChangeLevelDetailContentEvent addr 0x22b8b30 size 0xb0 virtual false final false
  inline void
  remove_didChangeLevelDetailContentEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>* value);

  /// @brief Method add_didSelectLevelPackEvent addr 0x22b8be0 size 0xb0 virtual false final false
  inline void add_didSelectLevelPackEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>* value);

  /// @brief Method remove_didSelectLevelPackEvent addr 0x22b8c90 size 0xb0 virtual false final false
  inline void remove_didSelectLevelPackEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>* value);

  /// @brief Method add_didPressActionButtonEvent addr 0x22b8d40 size 0xb0 virtual false final false
  inline void add_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>* value);

  /// @brief Method remove_didPressActionButtonEvent addr 0x22b8df0 size 0xb0 virtual false final false
  inline void remove_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>* value);

  /// @brief Method add_didPressOpenPackButtonEvent addr 0x22b8ea0 size 0xb0 virtual false final false
  inline void add_didPressOpenPackButtonEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>* value);

  /// @brief Method remove_didPressOpenPackButtonEvent addr 0x22b8f50 size 0xb0 virtual false final false
  inline void remove_didPressOpenPackButtonEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>* value);

  /// @brief Method add_didPressPracticeButtonEvent addr 0x22b9000 size 0xb0 virtual false final false
  inline void add_didPressPracticeButtonEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevel*>* value);

  /// @brief Method remove_didPressPracticeButtonEvent addr 0x22b90b0 size 0xb0 virtual false final false
  inline void remove_didPressPracticeButtonEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevel*>* value);

  /// @brief Method add_didChangeDifficultyBeatmapEvent addr 0x22b9160 size 0xb0 virtual false final false
  inline void add_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IDifficultyBeatmap*>* value);

  /// @brief Method remove_didChangeDifficultyBeatmapEvent addr 0x22b9210 size 0xb0 virtual false final false
  inline void remove_didChangeDifficultyBeatmapEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IDifficultyBeatmap*>* value);

  /// @brief Method get_selectedDifficultyBeatmap addr 0x22b92c0 size 0x24 virtual false final false
  inline ::GlobalNamespace::IDifficultyBeatmap* get_selectedDifficultyBeatmap();

  /// @brief Method get_selectedBeatmapLevel addr 0x22b9300 size 0x1c virtual false final false
  inline ::GlobalNamespace::IPreviewBeatmapLevel* get_selectedBeatmapLevel();

  /// @brief Method SetData addr 0x22b931c size 0x19c virtual false final false
  inline void SetData(::GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection, bool showPackHeader, bool showPracticeButton, ::StringW actionButtonText,
                      bool sortAlphabetically, ::UnityEngine::GameObject* noDataInfoPrefab, ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask,
                      ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> notAllowedCharacteristics);

  /// @brief Method SelectLevel addr 0x22b96f0 size 0x34 virtual false final false
  inline void SelectLevel(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel);

  /// @brief Method AnimateCanvasGroupAlpha addr 0x22b9758 size 0x1ec virtual false final false
  inline void AnimateCanvasGroupAlpha(::GlobalNamespace::__LevelCollectionNavigationController__AlphaAnimationType animationType);

  /// @brief Method DidActivate addr 0x22b9944 size 0x4a8 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate addr 0x22ba36c size 0x338 virtual true final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method SetDataForPack addr 0x22b94b8 size 0x1f4 virtual false final false
  inline void SetDataForPack(::GlobalNamespace::IBeatmapLevelPack* levelPack, bool showPackHeader, bool showPracticeButton, ::StringW actionButtonText, bool sortPreviewBeatmapLevels);

  /// @brief Method SetDataForLevelCollection addr 0x22b96ac size 0x44 virtual false final false
  inline void SetDataForLevelCollection(::GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection, bool showPracticeButton, ::StringW actionButtonText,
                                        ::UnityEngine::GameObject* noDataInfoPrefab, bool sortPreviewBeatmapLevels);

  /// @brief Method RefreshDetail addr 0x22bb470 size 0x24 virtual false final false
  inline void RefreshDetail();

  /// @brief Method ClearSelected addr 0x22bb4b0 size 0x24 virtual false final false
  inline void ClearSelected();

  /// @brief Method ShowLoading addr 0x22bb4f0 size 0xdc virtual false final false
  inline void ShowLoading();

  /// @brief Method PresentViewControllersForPack addr 0x22bb398 size 0x78 virtual false final false
  inline void PresentViewControllersForPack();

  /// @brief Method PresentViewControllersForLevelCollection addr 0x22bb410 size 0x60 virtual false final false
  inline void PresentViewControllersForLevelCollection();

  /// @brief Method HideLoading addr 0x22bb5cc size 0x24 virtual false final false
  inline void HideLoading();

  /// @brief Method HideDetailViewController addr 0x22bb7a0 size 0x54 virtual false final false
  inline void HideDetailViewController();

  /// @brief Method HandleLevelCollectionViewControllerDidSelectLevel addr 0x22bb7f4 size 0xa4 virtual false final false
  inline void HandleLevelCollectionViewControllerDidSelectLevel(::GlobalNamespace::LevelCollectionViewController* viewController, ::GlobalNamespace::IPreviewBeatmapLevel* level);

  /// @brief Method HandleLevelCollectionViewControllerDidSelectPack addr 0x22bbc3c size 0x5c virtual false final false
  inline void HandleLevelCollectionViewControllerDidSelectPack(::GlobalNamespace::LevelCollectionViewController* viewController);

  /// @brief Method PresentDetailViewController addr 0x22bb5f0 size 0x1b0 virtual false final false
  inline void PresentDetailViewController(::HMUI::ViewController* viewController, bool immediately);

  /// @brief Method HandleLevelDetailViewControllerDidPressActionButton addr 0x22bbca0 size 0x20 virtual false final false
  inline void HandleLevelDetailViewControllerDidPressActionButton(::GlobalNamespace::StandardLevelDetailViewController* viewController);

  /// @brief Method HandleLevelDetailViewControllerDidPressPracticeButton addr 0x22bbcc0 size 0x20 virtual false final false
  inline void HandleLevelDetailViewControllerDidPressPracticeButton(::GlobalNamespace::StandardLevelDetailViewController* viewController, ::GlobalNamespace::IBeatmapLevel* level);

  /// @brief Method HandleLevelDetailViewControllerDidChangeDifficultyBeatmap addr 0x22bbce0 size 0x20 virtual false final false
  inline void HandleLevelDetailViewControllerDidChangeDifficultyBeatmap(::GlobalNamespace::StandardLevelDetailViewController* viewController, ::GlobalNamespace::IDifficultyBeatmap* beatmap);

  /// @brief Method HandleLevelDetailViewControllerDidPresentContent addr 0x22bbd00 size 0x20 virtual false final false
  inline void HandleLevelDetailViewControllerDidPresentContent(::GlobalNamespace::StandardLevelDetailViewController* viewController,
                                                               ::GlobalNamespace::__StandardLevelDetailViewController__ContentType contentType);

  /// @brief Method HandleLevelDetailViewControllerDidPressOpenLevelPackButton addr 0x22bbd20 size 0x20 virtual false final false
  inline void HandleLevelDetailViewControllerDidPressOpenLevelPackButton(::GlobalNamespace::StandardLevelDetailViewController* viewController, ::GlobalNamespace::IBeatmapLevelPack* levelPack);

  /// @brief Method HandleLevelDetailViewControllerLevelFavoriteStatusDidChange addr 0x22bbd40 size 0x18 virtual false final false
  inline void HandleLevelDetailViewControllerLevelFavoriteStatusDidChange(::GlobalNamespace::StandardLevelDetailViewController* viewController, bool favoriteStatus);

  static inline ::GlobalNamespace::LevelCollectionNavigationController* New_ctor();

  /// @brief Method .ctor addr 0x22bbd88 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <AnimateCanvasGroupAlpha>b__40_0 addr 0x22bbd90 size 0x30 virtual false final false
  inline void _AnimateCanvasGroupAlpha_b__40_0(float_t f);

  /// @brief Method <AnimateCanvasGroupAlpha>b__40_1 addr 0x22bbdc0 size 0x88 virtual false final false
  inline void _AnimateCanvasGroupAlpha_b__40_1();

  // Ctor Parameters [CppParam { name: "", ty: "LevelCollectionNavigationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelCollectionNavigationController(LevelCollectionNavigationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelCollectionNavigationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelCollectionNavigationController(LevelCollectionNavigationController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelCollectionNavigationController();

public:
  /// @brief Field _loadingControl, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::LoadingControl* ____loadingControl;

  /// @brief Field _levelCollectionViewController, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::LevelCollectionViewController* ____levelCollectionViewController;

  /// @brief Field _levelPackDetailViewController, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::LevelPackDetailViewController* ____levelPackDetailViewController;

  /// @brief Field _levelDetailViewController, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelDetailViewController* ____levelDetailViewController;

  /// @brief Field _appStaticSettings, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::AppStaticSettingsSO* ____appStaticSettings;

  /// @brief Field _timeTweeningManager, offset: 0xc0, size: 0x8, def value: None
  ::Tweening::TimeTweeningManager* ____timeTweeningManager;

  /// @brief Field didChangeLevelDetailContentEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::__StandardLevelDetailViewController__ContentType>* ___didChangeLevelDetailContentEvent;

  /// @brief Field didSelectLevelPackEvent, offset: 0xd0, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>* ___didSelectLevelPackEvent;

  /// @brief Field didPressActionButtonEvent, offset: 0xd8, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>* ___didPressActionButtonEvent;

  /// @brief Field didPressOpenPackButtonEvent, offset: 0xe0, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevelPack*>* ___didPressOpenPackButtonEvent;

  /// @brief Field didPressPracticeButtonEvent, offset: 0xe8, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IBeatmapLevel*>* ___didPressPracticeButtonEvent;

  /// @brief Field didChangeDifficultyBeatmapEvent, offset: 0xf0, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::IDifficultyBeatmap*>* ___didChangeDifficultyBeatmapEvent;

  /// @brief Field _showPracticeButtonInDetailView, offset: 0xf8, size: 0x1, def value: None
  bool ____showPracticeButtonInDetailView;

  /// @brief Field _actionButtonTextInDetailView, offset: 0x100, size: 0x8, def value: None
  ::StringW ____actionButtonTextInDetailView;

  /// @brief Field _levelPack, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelPack* ____levelPack;

  /// @brief Field _allowedBeatmapDifficultyMask, offset: 0x110, size: 0x1, def value: None
  ::GlobalNamespace::BeatmapDifficultyMask ____allowedBeatmapDifficultyMask;

  /// @brief Field _beatmapLevelToBeSelectedAfterPresent, offset: 0x118, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* ____beatmapLevelToBeSelectedAfterPresent;

  /// @brief Field _loading, offset: 0x120, size: 0x1, def value: None
  bool ____loading;

  /// @brief Field _hideDetailViewController, offset: 0x121, size: 0x1, def value: None
  bool ____hideDetailViewController;

  /// @brief Field _notAllowedCharacteristics, offset: 0x128, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> ____notAllowedCharacteristics;

  /// @brief Field _floatTween, offset: 0x130, size: 0x8, def value: None
  ::Tweening::FloatTween* ____floatTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelCollectionNavigationController, 0x138>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelCollectionNavigationController__AlphaAnimationType, "", "LevelCollectionNavigationController/AlphaAnimationType");
NEED_NO_BOX(::GlobalNamespace::LevelCollectionNavigationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCollectionNavigationController*, "", "LevelCollectionNavigationController");
NEED_NO_BOX(::GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelCollectionNavigationController____c__DisplayClass54_0*, "", "LevelCollectionNavigationController/<>c__DisplayClass54_0");
