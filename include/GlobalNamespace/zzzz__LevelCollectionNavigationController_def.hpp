#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelCollectionNavigationController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "HMUI/zzzz__NavigationController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelCollectionNavigationController)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
struct LevelCollectionNavigationController_AlphaAnimationType;
}
namespace GlobalNamespace {
class LevelCollectionNavigationController___c__DisplayClass53_0;
}
namespace GlobalNamespace {
class LevelCollectionViewController;
}
namespace GlobalNamespace {
class LevelPackDetailViewController;
}
namespace GlobalNamespace {
class LoadingControl;
}
namespace GlobalNamespace {
struct StandardLevelDetailViewController_ContentType;
}
namespace GlobalNamespace {
class StandardLevelDetailViewController;
}
namespace HMUI {
class ViewController;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace Tweening {
class FloatTween;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct LevelCollectionNavigationController_AlphaAnimationType;
}
namespace GlobalNamespace {
class LevelCollectionNavigationController;
}
namespace GlobalNamespace {
class LevelCollectionNavigationController___c__DisplayClass53_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LevelCollectionNavigationController_AlphaAnimationType);
MARK_REF_PTR_T(::GlobalNamespace::LevelCollectionNavigationController);
MARK_REF_PTR_T(::GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: LevelCollectionNavigationController/AlphaAnimationType
struct CORDL_TYPE LevelCollectionNavigationController_AlphaAnimationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LevelCollectionNavigationController_AlphaAnimationType_Unwrapped
  enum struct __LevelCollectionNavigationController_AlphaAnimationType_Unwrapped : int32_t {
    __E_In = static_cast<int32_t>(0x0),
    __E_Out = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LevelCollectionNavigationController_AlphaAnimationType_Unwrapped() const noexcept {
    return static_cast<__LevelCollectionNavigationController_AlphaAnimationType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelCollectionNavigationController_AlphaAnimationType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LevelCollectionNavigationController_AlphaAnimationType(int32_t value__) noexcept;

  /// @brief Field In value: I32(0)
  static ::GlobalNamespace::LevelCollectionNavigationController_AlphaAnimationType const In;

  /// @brief Field Out value: I32(1)
  static ::GlobalNamespace::LevelCollectionNavigationController_AlphaAnimationType const Out;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5334 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelCollectionNavigationController_AlphaAnimationType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelCollectionNavigationController_AlphaAnimationType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelCollectionNavigationController/<>c__DisplayClass53_0
class CORDL_TYPE LevelCollectionNavigationController___c__DisplayClass53_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::LevelCollectionNavigationController> __4__this;

  /// @brief Field viewController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_viewController, put = __cordl_internal_set_viewController)) ::UnityW<::HMUI::ViewController> viewController;

  static inline ::GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0* New_ctor();

  /// @brief Method <PresentDetailViewController>b__0, addr 0x3b5d520, size 0x2c, virtual false, abstract: false, final false
  inline void _PresentDetailViewController_b__0();

  constexpr ::UnityW<::GlobalNamespace::LevelCollectionNavigationController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::LevelCollectionNavigationController>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::HMUI::ViewController> const& __cordl_internal_get_viewController() const;

  constexpr ::UnityW<::HMUI::ViewController>& __cordl_internal_get_viewController();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LevelCollectionNavigationController> value);

  constexpr void __cordl_internal_set_viewController(::UnityW<::HMUI::ViewController> value);

  /// @brief Method .ctor, addr 0x3b5d370, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelCollectionNavigationController___c__DisplayClass53_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelCollectionNavigationController___c__DisplayClass53_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelCollectionNavigationController___c__DisplayClass53_0(LevelCollectionNavigationController___c__DisplayClass53_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelCollectionNavigationController___c__DisplayClass53_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelCollectionNavigationController___c__DisplayClass53_0(LevelCollectionNavigationController___c__DisplayClass53_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5335 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelCollectionNavigationController> _____4__this;

  /// @brief Field viewController, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::ViewController> ___viewController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0, ___viewController) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapDifficultyMask, HMUI.NavigationController
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelCollectionNavigationController
class CORDL_TYPE LevelCollectionNavigationController : public ::HMUI::NavigationController {
public:
  // Declarations
  using AlphaAnimationType = ::GlobalNamespace::LevelCollectionNavigationController_AlphaAnimationType;

  using __c__DisplayClass53_0 = ::GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0;

  /// @brief Field _actionButtonTextInDetailView, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__actionButtonTextInDetailView, put = __cordl_internal_set__actionButtonTextInDetailView)) ::StringW _actionButtonTextInDetailView;

  /// @brief Field _allowedBeatmapDifficultyMask, offset 0x110, size 0x1
  __declspec(property(get = __cordl_internal_get__allowedBeatmapDifficultyMask,
                      put = __cordl_internal_set__allowedBeatmapDifficultyMask)) ::GlobalNamespace::BeatmapDifficultyMask _allowedBeatmapDifficultyMask;

  /// @brief Field _beatmapLevelToBeSelectedAfterPresent, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelToBeSelectedAfterPresent,
                      put = __cordl_internal_set__beatmapLevelToBeSelectedAfterPresent)) ::GlobalNamespace::BeatmapLevel* _beatmapLevelToBeSelectedAfterPresent;

  /// @brief Field _floatTween, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__floatTween, put = __cordl_internal_set__floatTween)) ::Tweening::FloatTween* _floatTween;

  /// @brief Field _hideDetailViewController, offset 0x121, size 0x1
  __declspec(property(get = __cordl_internal_get__hideDetailViewController, put = __cordl_internal_set__hideDetailViewController)) bool _hideDetailViewController;

  /// @brief Field _levelCollectionViewController, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__levelCollectionViewController, put = __cordl_internal_set__levelCollectionViewController)) ::UnityW<::GlobalNamespace::LevelCollectionViewController>
      _levelCollectionViewController;

  /// @brief Field _levelDetailViewController, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__levelDetailViewController, put = __cordl_internal_set__levelDetailViewController)) ::UnityW<::GlobalNamespace::StandardLevelDetailViewController>
      _levelDetailViewController;

  /// @brief Field _levelPack, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPack, put = __cordl_internal_set__levelPack)) ::GlobalNamespace::BeatmapLevelPack* _levelPack;

  /// @brief Field _levelPackDetailViewController, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackDetailViewController, put = __cordl_internal_set__levelPackDetailViewController)) ::UnityW<::GlobalNamespace::LevelPackDetailViewController>
      _levelPackDetailViewController;

  /// @brief Field _loading, offset 0x120, size 0x1
  __declspec(property(get = __cordl_internal_get__loading, put = __cordl_internal_set__loading)) bool _loading;

  /// @brief Field _loadingControl, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__loadingControl, put = __cordl_internal_set__loadingControl)) ::UnityW<::GlobalNamespace::LoadingControl> _loadingControl;

  /// @brief Field _notAllowedCharacteristics, offset 0x128, size 0x8
  __declspec(property(
      get = __cordl_internal_get__notAllowedCharacteristics,
      put = __cordl_internal_set__notAllowedCharacteristics)) ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>
      _notAllowedCharacteristics;

  /// @brief Field _showPracticeButtonInDetailView, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get__showPracticeButtonInDetailView, put = __cordl_internal_set__showPracticeButtonInDetailView)) bool _showPracticeButtonInDetailView;

  /// @brief Field _timeTweeningManager, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__timeTweeningManager, put = __cordl_internal_set__timeTweeningManager)) ::UnityW<::Tweening::TimeTweeningManager> _timeTweeningManager;

  __declspec(property(get = get_beatmapKey)) ::GlobalNamespace::BeatmapKey beatmapKey;

  __declspec(property(get = get_beatmapLevel)) ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field didChangeDifficultyBeatmapEvent, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeDifficultyBeatmapEvent,
                      put = __cordl_internal_set_didChangeDifficultyBeatmapEvent)) ::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>* didChangeDifficultyBeatmapEvent;

  /// @brief Field didChangeLevelDetailContentEvent, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeLevelDetailContentEvent, put = __cordl_internal_set_didChangeLevelDetailContentEvent)) ::System::Action_2<
      ::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* didChangeLevelDetailContentEvent;

  /// @brief Field didPressActionButtonEvent, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressActionButtonEvent,
                      put = __cordl_internal_set_didPressActionButtonEvent)) ::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>* didPressActionButtonEvent;

  /// @brief Field didPressOpenPackButtonEvent, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressOpenPackButtonEvent,
                      put = __cordl_internal_set_didPressOpenPackButtonEvent)) ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::BeatmapLevelPack*>*
      didPressOpenPackButtonEvent;

  /// @brief Field didPressPracticeButtonEvent, offset 0xe8, size 0x8
  __declspec(property(
      get = __cordl_internal_get_didPressPracticeButtonEvent,
      put =
          __cordl_internal_set_didPressPracticeButtonEvent)) ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::BeatmapLevel*>* didPressPracticeButtonEvent;

  /// @brief Field didSelectLevelPackEvent, offset 0xd0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_didSelectLevelPackEvent,
      put = __cordl_internal_set_didSelectLevelPackEvent)) ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::BeatmapLevelPack*>* didSelectLevelPackEvent;

  /// @brief Method AnimateCanvasGroupAlpha, addr 0x3b5bf6c, size 0x1e8, virtual false, abstract: false, final false
  inline void AnimateCanvasGroupAlpha(::GlobalNamespace::LevelCollectionNavigationController_AlphaAnimationType animationType);

  /// @brief Method ClearSelected, addr 0x3b5cf70, size 0x1c, virtual false, abstract: false, final false
  inline void ClearSelected();

  /// @brief Method DidActivate, addr 0x3b5c154, size 0x49c, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3b5c750, size 0x31c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleLevelCollectionViewControllerDidSelectLevel, addr 0x3b5d28c, size 0x84, virtual false, abstract: false, final false
  inline void HandleLevelCollectionViewControllerDidSelectLevel(::GlobalNamespace::LevelCollectionViewController* viewController, ::GlobalNamespace::BeatmapLevel* level);

  /// @brief Method HandleLevelCollectionViewControllerDidSelectPack, addr 0x3b5d310, size 0x60, virtual false, abstract: false, final false
  inline void HandleLevelCollectionViewControllerDidSelectPack(::GlobalNamespace::LevelCollectionViewController* viewController);

  /// @brief Method HandleLevelDetailViewControllerDidChangeDifficultyBeatmap, addr 0x3b5d3b8, size 0x20, virtual false, abstract: false, final false
  inline void HandleLevelDetailViewControllerDidChangeDifficultyBeatmap(::GlobalNamespace::StandardLevelDetailViewController* viewController);

  /// @brief Method HandleLevelDetailViewControllerDidPresentContent, addr 0x3b5d3d8, size 0x20, virtual false, abstract: false, final false
  inline void HandleLevelDetailViewControllerDidPresentContent(::GlobalNamespace::StandardLevelDetailViewController* viewController,
                                                               ::GlobalNamespace::StandardLevelDetailViewController_ContentType contentType);

  /// @brief Method HandleLevelDetailViewControllerDidPressActionButton, addr 0x3b5d378, size 0x20, virtual false, abstract: false, final false
  inline void HandleLevelDetailViewControllerDidPressActionButton(::GlobalNamespace::StandardLevelDetailViewController* viewController);

  /// @brief Method HandleLevelDetailViewControllerDidPressOpenLevelPackButton, addr 0x3b5d3f8, size 0x20, virtual false, abstract: false, final false
  inline void HandleLevelDetailViewControllerDidPressOpenLevelPackButton(::GlobalNamespace::StandardLevelDetailViewController* viewController, ::GlobalNamespace::BeatmapLevelPack* levelPack);

  /// @brief Method HandleLevelDetailViewControllerDidPressPracticeButton, addr 0x3b5d398, size 0x20, virtual false, abstract: false, final false
  inline void HandleLevelDetailViewControllerDidPressPracticeButton(::GlobalNamespace::StandardLevelDetailViewController* viewController, ::GlobalNamespace::BeatmapLevel* beatmapLevel);

  /// @brief Method HandleLevelDetailViewControllerLevelFavoriteStatusDidChange, addr 0x3b5d418, size 0x18, virtual false, abstract: false, final false
  inline void HandleLevelDetailViewControllerLevelFavoriteStatusDidChange(::GlobalNamespace::StandardLevelDetailViewController* viewController, bool favoriteStatus);

  /// @brief Method HideDetailViewController, addr 0x3b5d238, size 0x54, virtual false, abstract: false, final false
  inline void HideDetailViewController();

  /// @brief Method HideLoading, addr 0x3b5d068, size 0x24, virtual false, abstract: false, final false
  inline void HideLoading();

  static inline ::GlobalNamespace::LevelCollectionNavigationController* New_ctor();

  /// @brief Method PresentDetailViewController, addr 0x3b5d08c, size 0x1ac, virtual false, abstract: false, final false
  inline void PresentDetailViewController(::HMUI::ViewController* viewController, bool immediately);

  /// @brief Method PresentViewControllersForLevelCollection, addr 0x3b5cef4, size 0x60, virtual false, abstract: false, final false
  inline void PresentViewControllersForLevelCollection();

  /// @brief Method PresentViewControllersForPack, addr 0x3b5ce7c, size 0x78, virtual false, abstract: false, final false
  inline void PresentViewControllersForPack();

  /// @brief Method RefreshDetail, addr 0x3b5cf54, size 0x1c, virtual false, abstract: false, final false
  inline void RefreshDetail();

  /// @brief Method SelectLevel, addr 0x3b5bf04, size 0x34, virtual false, abstract: false, final false
  inline void SelectLevel(::GlobalNamespace::BeatmapLevel* beatmapLevel);

  /// @brief Method SetData, addr 0x3b5bcdc, size 0x3c, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, bool showPackHeader, bool showPracticeButton, ::StringW actionButtonText, bool sortAlphabetically,
                      ::UnityEngine::GameObject* noDataInfoPrefab, ::GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask,
                      ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> notAllowedCharacteristics, bool isFiltered);

  /// @brief Method SetDataForLevelCollection, addr 0x3b5bdec, size 0x118, virtual false, abstract: false, final false
  inline void SetDataForLevelCollection(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, bool showPracticeButton, ::StringW actionButtonText, ::UnityEngine::GameObject* noDataInfoPrefab,
                                        bool sortBeatmapLevels);

  /// @brief Method SetDataForPack, addr 0x3b5bd18, size 0xd4, virtual false, abstract: false, final false
  inline void SetDataForPack(::GlobalNamespace::BeatmapLevelPack* levelPack, bool showPackHeader, bool showPracticeButton, ::StringW actionButtonText, bool sortBeatmapLevels);

  /// @brief Method ShowLoading, addr 0x3b5cf8c, size 0xdc, virtual false, abstract: false, final false
  inline void ShowLoading();

  /// @brief Method <AnimateCanvasGroupAlpha>b__39_0, addr 0x3b5d468, size 0x30, virtual false, abstract: false, final false
  inline void _AnimateCanvasGroupAlpha_b__39_0(float_t f);

  /// @brief Method <AnimateCanvasGroupAlpha>b__39_1, addr 0x3b5d498, size 0x88, virtual false, abstract: false, final false
  inline void _AnimateCanvasGroupAlpha_b__39_1();

  constexpr ::StringW const& __cordl_internal_get__actionButtonTextInDetailView() const;

  constexpr ::StringW& __cordl_internal_get__actionButtonTextInDetailView();

  constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __cordl_internal_get__allowedBeatmapDifficultyMask() const;

  constexpr ::GlobalNamespace::BeatmapDifficultyMask& __cordl_internal_get__allowedBeatmapDifficultyMask();

  constexpr ::GlobalNamespace::BeatmapLevel* const& __cordl_internal_get__beatmapLevelToBeSelectedAfterPresent() const;

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get__beatmapLevelToBeSelectedAfterPresent();

  constexpr ::Tweening::FloatTween* const& __cordl_internal_get__floatTween() const;

  constexpr ::Tweening::FloatTween*& __cordl_internal_get__floatTween();

  constexpr bool const& __cordl_internal_get__hideDetailViewController() const;

  constexpr bool& __cordl_internal_get__hideDetailViewController();

  constexpr ::UnityW<::GlobalNamespace::LevelCollectionViewController> const& __cordl_internal_get__levelCollectionViewController() const;

  constexpr ::UnityW<::GlobalNamespace::LevelCollectionViewController>& __cordl_internal_get__levelCollectionViewController();

  constexpr ::UnityW<::GlobalNamespace::StandardLevelDetailViewController> const& __cordl_internal_get__levelDetailViewController() const;

  constexpr ::UnityW<::GlobalNamespace::StandardLevelDetailViewController>& __cordl_internal_get__levelDetailViewController();

  constexpr ::GlobalNamespace::BeatmapLevelPack* const& __cordl_internal_get__levelPack() const;

  constexpr ::GlobalNamespace::BeatmapLevelPack*& __cordl_internal_get__levelPack();

  constexpr ::UnityW<::GlobalNamespace::LevelPackDetailViewController> const& __cordl_internal_get__levelPackDetailViewController() const;

  constexpr ::UnityW<::GlobalNamespace::LevelPackDetailViewController>& __cordl_internal_get__levelPackDetailViewController();

  constexpr bool const& __cordl_internal_get__loading() const;

  constexpr bool& __cordl_internal_get__loading();

  constexpr ::UnityW<::GlobalNamespace::LoadingControl> const& __cordl_internal_get__loadingControl() const;

  constexpr ::UnityW<::GlobalNamespace::LoadingControl>& __cordl_internal_get__loadingControl();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> const&
  __cordl_internal_get__notAllowedCharacteristics() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>& __cordl_internal_get__notAllowedCharacteristics();

  constexpr bool const& __cordl_internal_get__showPracticeButtonInDetailView() const;

  constexpr bool& __cordl_internal_get__showPracticeButtonInDetailView();

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__timeTweeningManager() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__timeTweeningManager();

  constexpr ::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>* const& __cordl_internal_get_didChangeDifficultyBeatmapEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>*& __cordl_internal_get_didChangeDifficultyBeatmapEvent();

  constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* const&
  __cordl_internal_get_didChangeLevelDetailContentEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>*&
  __cordl_internal_get_didChangeLevelDetailContentEvent();

  constexpr ::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>* const& __cordl_internal_get_didPressActionButtonEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>*& __cordl_internal_get_didPressActionButtonEvent();

  constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::BeatmapLevelPack*>* const& __cordl_internal_get_didPressOpenPackButtonEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::BeatmapLevelPack*>*& __cordl_internal_get_didPressOpenPackButtonEvent();

  constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::BeatmapLevel*>* const& __cordl_internal_get_didPressPracticeButtonEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::BeatmapLevel*>*& __cordl_internal_get_didPressPracticeButtonEvent();

  constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::BeatmapLevelPack*>* const& __cordl_internal_get_didSelectLevelPackEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::BeatmapLevelPack*>*& __cordl_internal_get_didSelectLevelPackEvent();

  constexpr void __cordl_internal_set__actionButtonTextInDetailView(::StringW value);

  constexpr void __cordl_internal_set__allowedBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask value);

  constexpr void __cordl_internal_set__beatmapLevelToBeSelectedAfterPresent(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set__floatTween(::Tweening::FloatTween* value);

  constexpr void __cordl_internal_set__hideDetailViewController(bool value);

  constexpr void __cordl_internal_set__levelCollectionViewController(::UnityW<::GlobalNamespace::LevelCollectionViewController> value);

  constexpr void __cordl_internal_set__levelDetailViewController(::UnityW<::GlobalNamespace::StandardLevelDetailViewController> value);

  constexpr void __cordl_internal_set__levelPack(::GlobalNamespace::BeatmapLevelPack* value);

  constexpr void __cordl_internal_set__levelPackDetailViewController(::UnityW<::GlobalNamespace::LevelPackDetailViewController> value);

  constexpr void __cordl_internal_set__loading(bool value);

  constexpr void __cordl_internal_set__loadingControl(::UnityW<::GlobalNamespace::LoadingControl> value);

  constexpr void __cordl_internal_set__notAllowedCharacteristics(::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> value);

  constexpr void __cordl_internal_set__showPracticeButtonInDetailView(bool value);

  constexpr void __cordl_internal_set__timeTweeningManager(::UnityW<::Tweening::TimeTweeningManager> value);

  constexpr void __cordl_internal_set_didChangeDifficultyBeatmapEvent(::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>* value);

  constexpr void __cordl_internal_set_didChangeLevelDetailContentEvent(
      ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* value);

  constexpr void __cordl_internal_set_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>* value);

  constexpr void __cordl_internal_set_didPressOpenPackButtonEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::BeatmapLevelPack*>* value);

  constexpr void __cordl_internal_set_didPressPracticeButtonEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::BeatmapLevel*>* value);

  constexpr void __cordl_internal_set_didSelectLevelPackEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::BeatmapLevelPack*>* value);

  /// @brief Method .ctor, addr 0x3b5d460, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didChangeDifficultyBeatmapEvent, addr 0x3b5bb20, size 0xb0, virtual false, abstract: false, final false
  inline void add_didChangeDifficultyBeatmapEvent(::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>* value);

  /// @brief Method add_didChangeLevelDetailContentEvent, addr 0x3b5b440, size 0xb0, virtual false, abstract: false, final false
  inline void
  add_didChangeLevelDetailContentEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* value);

  /// @brief Method add_didPressActionButtonEvent, addr 0x3b5b700, size 0xb0, virtual false, abstract: false, final false
  inline void add_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>* value);

  /// @brief Method add_didPressOpenPackButtonEvent, addr 0x3b5b860, size 0xb0, virtual false, abstract: false, final false
  inline void add_didPressOpenPackButtonEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::BeatmapLevelPack*>* value);

  /// @brief Method add_didPressPracticeButtonEvent, addr 0x3b5b9c0, size 0xb0, virtual false, abstract: false, final false
  inline void add_didPressPracticeButtonEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::BeatmapLevel*>* value);

  /// @brief Method add_didSelectLevelPackEvent, addr 0x3b5b5a0, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectLevelPackEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::BeatmapLevelPack*>* value);

  /// @brief Method get_beatmapKey, addr 0x3b5bc80, size 0x40, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKey get_beatmapKey();

  /// @brief Method get_beatmapLevel, addr 0x3b5bcc0, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevel* get_beatmapLevel();

  /// @brief Method remove_didChangeDifficultyBeatmapEvent, addr 0x3b5bbd0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didChangeDifficultyBeatmapEvent(::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>* value);

  /// @brief Method remove_didChangeLevelDetailContentEvent, addr 0x3b5b4f0, size 0xb0, virtual false, abstract: false, final false
  inline void
  remove_didChangeLevelDetailContentEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* value);

  /// @brief Method remove_didPressActionButtonEvent, addr 0x3b5b7b0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didPressActionButtonEvent(::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>* value);

  /// @brief Method remove_didPressOpenPackButtonEvent, addr 0x3b5b910, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didPressOpenPackButtonEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::BeatmapLevelPack*>* value);

  /// @brief Method remove_didPressPracticeButtonEvent, addr 0x3b5ba70, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didPressPracticeButtonEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::BeatmapLevel*>* value);

  /// @brief Method remove_didSelectLevelPackEvent, addr 0x3b5b650, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectLevelPackEvent(::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::BeatmapLevelPack*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelCollectionNavigationController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelCollectionNavigationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelCollectionNavigationController(LevelCollectionNavigationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelCollectionNavigationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelCollectionNavigationController(LevelCollectionNavigationController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5336 };

  /// @brief Field _loadingControl, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LoadingControl> ____loadingControl;

  /// @brief Field _levelCollectionViewController, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelCollectionViewController> ____levelCollectionViewController;

  /// @brief Field _levelPackDetailViewController, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelPackDetailViewController> ____levelPackDetailViewController;

  /// @brief Field _levelDetailViewController, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelDetailViewController> ____levelDetailViewController;

  /// @brief Field _timeTweeningManager, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ____timeTweeningManager;

  /// @brief Field didChangeLevelDetailContentEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::StandardLevelDetailViewController_ContentType>* ___didChangeLevelDetailContentEvent;

  /// @brief Field didSelectLevelPackEvent, offset: 0xd0, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::BeatmapLevelPack*>* ___didSelectLevelPackEvent;

  /// @brief Field didPressActionButtonEvent, offset: 0xd8, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>* ___didPressActionButtonEvent;

  /// @brief Field didPressOpenPackButtonEvent, offset: 0xe0, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::BeatmapLevelPack*>* ___didPressOpenPackButtonEvent;

  /// @brief Field didPressPracticeButtonEvent, offset: 0xe8, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::LevelCollectionNavigationController*, ::GlobalNamespace::BeatmapLevel*>* ___didPressPracticeButtonEvent;

  /// @brief Field didChangeDifficultyBeatmapEvent, offset: 0xf0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::LevelCollectionNavigationController*>* ___didChangeDifficultyBeatmapEvent;

  /// @brief Field _showPracticeButtonInDetailView, offset: 0xf8, size: 0x1, def value: None
  bool ____showPracticeButtonInDetailView;

  /// @brief Field _actionButtonTextInDetailView, offset: 0x100, size: 0x8, def value: None
  ::StringW ____actionButtonTextInDetailView;

  /// @brief Field _levelPack, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPack* ____levelPack;

  /// @brief Field _allowedBeatmapDifficultyMask, offset: 0x110, size: 0x1, def value: None
  ::GlobalNamespace::BeatmapDifficultyMask ____allowedBeatmapDifficultyMask;

  /// @brief Field _beatmapLevelToBeSelectedAfterPresent, offset: 0x118, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ____beatmapLevelToBeSelectedAfterPresent;

  /// @brief Field _loading, offset: 0x120, size: 0x1, def value: None
  bool ____loading;

  /// @brief Field _hideDetailViewController, offset: 0x121, size: 0x1, def value: None
  bool ____hideDetailViewController;

  /// @brief Field _notAllowedCharacteristics, offset: 0x128, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> ____notAllowedCharacteristics;

  /// @brief Field _floatTween, offset: 0x130, size: 0x8, def value: None
  ::Tweening::FloatTween* ____floatTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelCollectionNavigationController, ____loadingControl) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionNavigationController, ____levelCollectionViewController) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionNavigationController, ____levelPackDetailViewController) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionNavigationController, ____levelDetailViewController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionNavigationController, ____timeTweeningManager) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionNavigationController, ___didChangeLevelDetailContentEvent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionNavigationController, ___didSelectLevelPackEvent) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionNavigationController, ___didPressActionButtonEvent) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionNavigationController, ___didPressOpenPackButtonEvent) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionNavigationController, ___didPressPracticeButtonEvent) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionNavigationController, ___didChangeDifficultyBeatmapEvent) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionNavigationController, ____showPracticeButtonInDetailView) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionNavigationController, ____actionButtonTextInDetailView) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionNavigationController, ____levelPack) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionNavigationController, ____allowedBeatmapDifficultyMask) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionNavigationController, ____beatmapLevelToBeSelectedAfterPresent) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionNavigationController, ____loading) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionNavigationController, ____hideDetailViewController) == 0x121, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionNavigationController, ____notAllowedCharacteristics) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelCollectionNavigationController, ____floatTween) == 0x130, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelCollectionNavigationController, 0x138>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCollectionNavigationController_AlphaAnimationType, "", "LevelCollectionNavigationController/AlphaAnimationType");
NEED_NO_BOX(::GlobalNamespace::LevelCollectionNavigationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCollectionNavigationController*, "", "LevelCollectionNavigationController");
NEED_NO_BOX(::GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCollectionNavigationController___c__DisplayClass53_0*, "", "LevelCollectionNavigationController/<>c__DisplayClass53_0");
