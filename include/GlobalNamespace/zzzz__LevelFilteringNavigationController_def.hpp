#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelFilteringNavigationController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "HMUI/zzzz__NavigationController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelFilteringNavigationController)
namespace GlobalNamespace {
class AnnotatedBeatmapLevelCollectionsViewController;
}
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class BeatmapLevelsRepository;
}
namespace GlobalNamespace {
struct LevelFilteringNavigationController__UpdateCustomSongs_d__54;
}
namespace GlobalNamespace {
class LevelFilteringNavigationController___c;
}
namespace GlobalNamespace {
class LevelFilteringNavigationController___c__DisplayClass53_0;
}
namespace GlobalNamespace {
class LevelSearchViewController;
}
namespace GlobalNamespace {
struct LevelSelectionOptions;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
struct SelectLevelCategoryViewController_LevelCategory;
}
namespace GlobalNamespace {
class SelectLevelCategoryViewController;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace HMUI {
class ViewController;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Action_4;
}
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelFilteringNavigationController;
}
namespace GlobalNamespace {
class LevelFilteringNavigationController___c;
}
namespace GlobalNamespace {
class LevelFilteringNavigationController___c__DisplayClass53_0;
}
namespace GlobalNamespace {
struct LevelFilteringNavigationController__UpdateCustomSongs_d__54;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelFilteringNavigationController);
MARK_REF_PTR_T(::GlobalNamespace::LevelFilteringNavigationController___c);
MARK_REF_PTR_T(::GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0);
MARK_VAL_T(::GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelFilteringNavigationController/<>c
class CORDL_TYPE LevelFilteringNavigationController___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::LevelFilteringNavigationController___c* __9;

  /// @brief Field <>9__53_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__53_0, put = setStaticF___9__53_0)) ::System::Func_2<::GlobalNamespace::BeatmapLevelPack*, ::StringW>* __9__53_0;

  static inline ::GlobalNamespace::LevelFilteringNavigationController___c* New_ctor();

  /// @brief Method <SelectAnnotatedBeatmapLevelCollection>b__53_0, addr 0x574c484, size 0x14, virtual false, abstract: false, final false
  inline ::StringW _SelectAnnotatedBeatmapLevelCollection_b__53_0(::GlobalNamespace::BeatmapLevelPack* pack);

  /// @brief Method .ctor, addr 0x574c480, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::LevelFilteringNavigationController___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::BeatmapLevelPack*, ::StringW>* getStaticF___9__53_0();

  static inline void setStaticF___9(::GlobalNamespace::LevelFilteringNavigationController___c* value);

  static inline void setStaticF___9__53_0(::System::Func_2<::GlobalNamespace::BeatmapLevelPack*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelFilteringNavigationController___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelFilteringNavigationController___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelFilteringNavigationController___c(LevelFilteringNavigationController___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelFilteringNavigationController___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelFilteringNavigationController___c(LevelFilteringNavigationController___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6936 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelFilteringNavigationController___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelFilteringNavigationController/<>c__DisplayClass53_0
class CORDL_TYPE LevelFilteringNavigationController___c__DisplayClass53_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field levelPack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_levelPack, put = __cordl_internal_set_levelPack)) ::GlobalNamespace::BeatmapLevelPack* levelPack;

  static inline ::GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0* New_ctor();

  /// @brief Method <SelectAnnotatedBeatmapLevelCollection>b__1, addr 0x574c498, size 0x20, virtual false, abstract: false, final false
  inline bool _SelectAnnotatedBeatmapLevelCollection_b__1(::StringW packID);

  constexpr ::GlobalNamespace::BeatmapLevelPack* const& __cordl_internal_get_levelPack() const;

  constexpr ::GlobalNamespace::BeatmapLevelPack*& __cordl_internal_get_levelPack();

  constexpr void __cordl_internal_set_levelPack(::GlobalNamespace::BeatmapLevelPack* value);

  /// @brief Method .ctor, addr 0x574c31c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelFilteringNavigationController___c__DisplayClass53_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelFilteringNavigationController___c__DisplayClass53_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelFilteringNavigationController___c__DisplayClass53_0(LevelFilteringNavigationController___c__DisplayClass53_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelFilteringNavigationController___c__DisplayClass53_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelFilteringNavigationController___c__DisplayClass53_0(LevelFilteringNavigationController___c__DisplayClass53_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6937 };

  /// @brief Field levelPack, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPack* ___levelPack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0, ___levelPack) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: LevelFilteringNavigationController/<UpdateCustomSongs>d__54
struct CORDL_TYPE LevelFilteringNavigationController__UpdateCustomSongs_d__54 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x574c4b8, size 0x5d8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x574ca90, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelFilteringNavigationController__UpdateCustomSongs_d__54();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::LevelFilteringNavigationController>", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelsRepository*>", modifiers: "", def_value: None
  // }]
  constexpr LevelFilteringNavigationController__UpdateCustomSongs_d__54(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                        ::UnityW<::GlobalNamespace::LevelFilteringNavigationController> __4__this,
                                                                        ::System::Threading::CancellationToken _cancellationToken_5__2,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelsRepository*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6938 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelFilteringNavigationController> __4__this;

  /// @brief Field <cancellationToken>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken _cancellationToken_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelsRepository*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54, _cancellationToken_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies HMUI.NavigationController, SongPackMask
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelFilteringNavigationController
class CORDL_TYPE LevelFilteringNavigationController : public ::HMUI::NavigationController {
public:
  // Declarations
  using _UpdateCustomSongs_d__54 = ::GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54;

  using __c = ::GlobalNamespace::LevelFilteringNavigationController___c;

  using __c__DisplayClass53_0 = ::GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0;

  /// @brief Field _allBeatmapLevelPacks, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get__allBeatmapLevelPacks,
                      put = __cordl_internal_set__allBeatmapLevelPacks)) ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>
      _allBeatmapLevelPacks;

  /// @brief Field _allOfficialBeatmapLevelPacks, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get__allOfficialBeatmapLevelPacks,
                      put = __cordl_internal_set__allOfficialBeatmapLevelPacks)) ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>
      _allOfficialBeatmapLevelPacks;

  /// @brief Field _annotatedBeatmapLevelCollectionsViewController, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__annotatedBeatmapLevelCollectionsViewController,
                      put = __cordl_internal_set__annotatedBeatmapLevelCollectionsViewController)) ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController>
      _annotatedBeatmapLevelCollectionsViewController;

  /// @brief Field _beatmapLevelsModel, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _cancellationTokenSource, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationTokenSource, put = __cordl_internal_set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _currentNoDataInfoPrefab, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__currentNoDataInfoPrefab, put = __cordl_internal_set__currentNoDataInfoPrefab)) ::UnityW<::UnityEngine::GameObject> _currentNoDataInfoPrefab;

  /// @brief Field _customLevelPacks, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get__customLevelPacks,
                      put = __cordl_internal_set__customLevelPacks)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* _customLevelPacks;

  /// @brief Field _emptyCustomSongListInfoPrefab, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__emptyCustomSongListInfoPrefab, put = __cordl_internal_set__emptyCustomSongListInfoPrefab)) ::UnityW<::UnityEngine::GameObject>
      _emptyCustomSongListInfoPrefab;

  /// @brief Field _emptyFavoritesListInfoPrefab, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__emptyFavoritesListInfoPrefab, put = __cordl_internal_set__emptyFavoritesListInfoPrefab)) ::UnityW<::UnityEngine::GameObject>
      _emptyFavoritesListInfoPrefab;

  /// @brief Field _enableCustomLevels, offset 0x119, size 0x1
  __declspec(property(get = __cordl_internal_get__enableCustomLevels, put = __cordl_internal_set__enableCustomLevels)) bool _enableCustomLevels;

  /// @brief Field _enabledLevelCategories, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__enabledLevelCategories,
                      put = __cordl_internal_set__enabledLevelCategories)) ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory,
                                                                                    ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*>
      _enabledLevelCategories;

  /// @brief Field _hidePacksIfOneOrNone, offset 0x118, size 0x1
  __declspec(property(get = __cordl_internal_get__hidePacksIfOneOrNone, put = __cordl_internal_set__hidePacksIfOneOrNone)) bool _hidePacksIfOneOrNone;

  /// @brief Field _levelPackIdToBeSelectedAfterPresent, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackIdToBeSelectedAfterPresent, put = __cordl_internal_set__levelPackIdToBeSelectedAfterPresent)) ::StringW _levelPackIdToBeSelectedAfterPresent;

  /// @brief Field _levelSearchViewController, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__levelSearchViewController, put = __cordl_internal_set__levelSearchViewController)) ::UnityW<::GlobalNamespace::LevelSearchViewController>
      _levelSearchViewController;

  /// @brief Field _musicPacksBeatmapLevelPacks, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get__musicPacksBeatmapLevelPacks,
                      put = __cordl_internal_set__musicPacksBeatmapLevelPacks)) ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>
      _musicPacksBeatmapLevelPacks;

  /// @brief Field _ostBeatmapLevelPacks, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__ostBeatmapLevelPacks,
                      put = __cordl_internal_set__ostBeatmapLevelPacks)) ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>
      _ostBeatmapLevelPacks;

  /// @brief Field _playerDataModel, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _selectLevelCategoryViewController, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__selectLevelCategoryViewController,
                      put = __cordl_internal_set__selectLevelCategoryViewController)) ::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>
      _selectLevelCategoryViewController;

  /// @brief Field _songPackMask, offset 0x120, size 0x20
  __declspec(property(get = __cordl_internal_get__songPackMask, put = __cordl_internal_set__songPackMask)) ::GlobalNamespace::SongPackMask _songPackMask;

  /// @brief Field didCloseBeatmapLevelCollectionsEvent, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_didCloseBeatmapLevelCollectionsEvent,
                      put = __cordl_internal_set_didCloseBeatmapLevelCollectionsEvent)) ::System::Action* didCloseBeatmapLevelCollectionsEvent;

  /// @brief Field didOpenBeatmapLevelCollectionsEvent, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_didOpenBeatmapLevelCollectionsEvent,
                      put = __cordl_internal_set_didOpenBeatmapLevelCollectionsEvent)) ::System::Action* didOpenBeatmapLevelCollectionsEvent;

  /// @brief Field didPressAllSongsEvent, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressAllSongsEvent,
                      put = __cordl_internal_set_didPressAllSongsEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* didPressAllSongsEvent;

  /// @brief Field didSelectBeatmapLevelPackEvent, offset 0xd8, size 0x8
  __declspec(property(
      get = __cordl_internal_get_didSelectBeatmapLevelPackEvent,
      put = __cordl_internal_set_didSelectBeatmapLevelPackEvent)) ::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*,
                                                                                     ::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::LevelSelectionOptions>* didSelectBeatmapLevelPackEvent;

  /// @brief Field didStartLoadingEvent, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_didStartLoadingEvent,
                      put = __cordl_internal_set_didStartLoadingEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* didStartLoadingEvent;

  __declspec(property(get = get_selectedBeatmapLevelPack)) ::GlobalNamespace::BeatmapLevelPack* selectedBeatmapLevelPack;

  __declspec(property(get = get_selectedLevelCategory)) ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory selectedLevelCategory;

  /// @brief Method DidActivate, addr 0x574ad8c, size 0x460, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x574b640, size 0x3d0, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections, addr 0x574c0b0, size 0x1c, virtual false, abstract: false, final false
  inline void HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections();

  /// @brief Method HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections, addr 0x574c094, size 0x1c, virtual false, abstract: false, final false
  inline void HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections();

  /// @brief Method HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection, addr 0x574c0cc, size 0x54, virtual false, abstract: false, final false
  inline void HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection(::GlobalNamespace::BeatmapLevelPack* annotatedBeatmapLevelCollection);

  /// @brief Method HandleIncreaseNumberOfGameplays, addr 0x574c03c, size 0x4c, virtual false, abstract: false, final false
  inline void HandleIncreaseNumberOfGameplays();

  /// @brief Method HandleLevelSearchViewControllerDidFilterBeatmapLevelCollection, addr 0x574bc50, size 0x58, virtual false, abstract: false, final false
  inline void HandleLevelSearchViewControllerDidFilterBeatmapLevelCollection(::GlobalNamespace::BeatmapLevelPack* annotatedBeatmapLevelCollection, ::GlobalNamespace::LevelSelectionOptions options);

  /// @brief Method HandleLevelSearchViewControllerDidStartLoading, addr 0x574b620, size 0x20, virtual false, abstract: false, final false
  inline void HandleLevelSearchViewControllerDidStartLoading(::GlobalNamespace::LevelSearchViewController* obj);

  /// @brief Method HandlePlayerDataFavoriteLevelsSetDidChange, addr 0x574bff8, size 0x44, virtual false, abstract: false, final false
  inline void HandlePlayerDataFavoriteLevelsSetDidChange();

  /// @brief Method HandleSelectLevelCategoryViewControllerDidSelectLevelCategory, addr 0x574bca8, size 0x8, virtual false, abstract: false, final false
  inline void HandleSelectLevelCategoryViewControllerDidSelectLevelCategory(::GlobalNamespace::SelectLevelCategoryViewController* viewController,
                                                                            ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory levelCategory);

  static inline ::GlobalNamespace::LevelFilteringNavigationController* New_ctor();

  /// @brief Method ReplaceSecondViewController, addr 0x574bea4, size 0xb4, virtual false, abstract: false, final false
  inline void ReplaceSecondViewController(::HMUI::ViewController* viewController);

  /// @brief Method SelectAnnotatedBeatmapLevelCollection, addr 0x574c120, size 0x1fc, virtual false, abstract: false, final false
  inline void SelectAnnotatedBeatmapLevelCollection(::GlobalNamespace::BeatmapLevelPack* levelPack);

  /// @brief Method Setup, addr 0x574a5b8, size 0xa0, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::SongPackMask songPackMask, ::GlobalNamespace::BeatmapLevelPack* levelPackToBeSelectedAfterPresent,
                    ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory startLevelCategory, bool hidePacksIfOneOrNone, bool enableCustomLevels);

  /// @brief Method SetupBeatmapLevelPacks, addr 0x574a658, size 0x3e0, virtual false, abstract: false, final false
  inline void SetupBeatmapLevelPacks();

  /// @brief Method ShowPacksInSecondChildController, addr 0x574bcb0, size 0x1c8, virtual false, abstract: false, final false
  inline void ShowPacksInSecondChildController(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* beatmapLevelPacks);

  /// @brief Method UpdateCustomSongs, addr 0x574bf58, size 0xa0, virtual false, abstract: false, final false
  inline void UpdateCustomSongs();

  /// @brief Method UpdateSecondChildControllerContent, addr 0x574b42c, size 0x1f4, virtual false, abstract: false, final false
  inline void UpdateSecondChildControllerContent(::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory levelCategory);

  /// @brief Method <SetupBeatmapLevelPacks>b__39_0, addr 0x574c32c, size 0x80, virtual false, abstract: false, final false
  inline bool _SetupBeatmapLevelPacks_b__39_0(::GlobalNamespace::BeatmapLevelPack* pack);

  /// @brief Method <SetupBeatmapLevelPacks>b__39_1, addr 0x574c3ac, size 0x80, virtual false, abstract: false, final false
  inline bool _SetupBeatmapLevelPacks_b__39_1(::GlobalNamespace::BeatmapLevelPack* pack);

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> const& __cordl_internal_get__allBeatmapLevelPacks() const;

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>& __cordl_internal_get__allBeatmapLevelPacks();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> const& __cordl_internal_get__allOfficialBeatmapLevelPacks() const;

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>& __cordl_internal_get__allOfficialBeatmapLevelPacks();

  constexpr ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController> const& __cordl_internal_get__annotatedBeatmapLevelCollectionsViewController() const;

  constexpr ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController>& __cordl_internal_get__annotatedBeatmapLevelCollectionsViewController();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cancellationTokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__currentNoDataInfoPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__currentNoDataInfoPrefab();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* const& __cordl_internal_get__customLevelPacks() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*& __cordl_internal_get__customLevelPacks();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__emptyCustomSongListInfoPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__emptyCustomSongListInfoPrefab();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__emptyFavoritesListInfoPrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__emptyFavoritesListInfoPrefab();

  constexpr bool const& __cordl_internal_get__enableCustomLevels() const;

  constexpr bool& __cordl_internal_get__enableCustomLevels();

  constexpr ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*> const&
  __cordl_internal_get__enabledLevelCategories() const;

  constexpr ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*>&
  __cordl_internal_get__enabledLevelCategories();

  constexpr bool const& __cordl_internal_get__hidePacksIfOneOrNone() const;

  constexpr bool& __cordl_internal_get__hidePacksIfOneOrNone();

  constexpr ::StringW const& __cordl_internal_get__levelPackIdToBeSelectedAfterPresent() const;

  constexpr ::StringW& __cordl_internal_get__levelPackIdToBeSelectedAfterPresent();

  constexpr ::UnityW<::GlobalNamespace::LevelSearchViewController> const& __cordl_internal_get__levelSearchViewController() const;

  constexpr ::UnityW<::GlobalNamespace::LevelSearchViewController>& __cordl_internal_get__levelSearchViewController();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> const& __cordl_internal_get__musicPacksBeatmapLevelPacks() const;

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>& __cordl_internal_get__musicPacksBeatmapLevelPacks();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> const& __cordl_internal_get__ostBeatmapLevelPacks() const;

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>& __cordl_internal_get__ostBeatmapLevelPacks();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::SelectLevelCategoryViewController> const& __cordl_internal_get__selectLevelCategoryViewController() const;

  constexpr ::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>& __cordl_internal_get__selectLevelCategoryViewController();

  constexpr ::GlobalNamespace::SongPackMask const& __cordl_internal_get__songPackMask() const;

  constexpr ::GlobalNamespace::SongPackMask& __cordl_internal_get__songPackMask();

  constexpr ::System::Action* const& __cordl_internal_get_didCloseBeatmapLevelCollectionsEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didCloseBeatmapLevelCollectionsEvent();

  constexpr ::System::Action* const& __cordl_internal_get_didOpenBeatmapLevelCollectionsEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didOpenBeatmapLevelCollectionsEvent();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* const& __cordl_internal_get_didPressAllSongsEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*& __cordl_internal_get_didPressAllSongsEvent();

  constexpr ::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*, ::UnityW<::UnityEngine::GameObject>,
                               ::GlobalNamespace::LevelSelectionOptions>* const&
  __cordl_internal_get_didSelectBeatmapLevelPackEvent() const;

  constexpr ::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*, ::UnityW<::UnityEngine::GameObject>,
                               ::GlobalNamespace::LevelSelectionOptions>*&
  __cordl_internal_get_didSelectBeatmapLevelPackEvent();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* const& __cordl_internal_get_didStartLoadingEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*& __cordl_internal_get_didStartLoadingEvent();

  constexpr void __cordl_internal_set__allBeatmapLevelPacks(::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> value);

  constexpr void __cordl_internal_set__allOfficialBeatmapLevelPacks(::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> value);

  constexpr void __cordl_internal_set__annotatedBeatmapLevelCollectionsViewController(::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController> value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__currentNoDataInfoPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__customLevelPacks(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* value);

  constexpr void __cordl_internal_set__emptyCustomSongListInfoPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__emptyFavoritesListInfoPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__enableCustomLevels(bool value);

  constexpr void __cordl_internal_set__enabledLevelCategories(
      ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*> value);

  constexpr void __cordl_internal_set__hidePacksIfOneOrNone(bool value);

  constexpr void __cordl_internal_set__levelPackIdToBeSelectedAfterPresent(::StringW value);

  constexpr void __cordl_internal_set__levelSearchViewController(::UnityW<::GlobalNamespace::LevelSearchViewController> value);

  constexpr void __cordl_internal_set__musicPacksBeatmapLevelPacks(::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> value);

  constexpr void __cordl_internal_set__ostBeatmapLevelPacks(::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__selectLevelCategoryViewController(::UnityW<::GlobalNamespace::SelectLevelCategoryViewController> value);

  constexpr void __cordl_internal_set__songPackMask(::GlobalNamespace::SongPackMask value);

  constexpr void __cordl_internal_set_didCloseBeatmapLevelCollectionsEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didOpenBeatmapLevelCollectionsEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didPressAllSongsEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* value);

  constexpr void __cordl_internal_set_didSelectBeatmapLevelPackEvent(::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*,
                                                                                        ::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::LevelSelectionOptions>* value);

  constexpr void __cordl_internal_set_didStartLoadingEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* value);

  /// @brief Method .ctor, addr 0x574c320, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didCloseBeatmapLevelCollectionsEvent, addr 0x574a3ec, size 0xac, virtual false, abstract: false, final false
  inline void add_didCloseBeatmapLevelCollectionsEvent(::System::Action* value);

  /// @brief Method add_didOpenBeatmapLevelCollectionsEvent, addr 0x574a294, size 0xac, virtual false, abstract: false, final false
  inline void add_didOpenBeatmapLevelCollectionsEvent(::System::Action* value);

  /// @brief Method add_didPressAllSongsEvent, addr 0x574a114, size 0xc0, virtual false, abstract: false, final false
  inline void add_didPressAllSongsEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* value);

  /// @brief Method add_didSelectBeatmapLevelPackEvent, addr 0x5749e14, size 0xc0, virtual false, abstract: false, final false
  inline void add_didSelectBeatmapLevelPackEvent(::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*,
                                                                    ::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::LevelSelectionOptions>* value);

  /// @brief Method add_didStartLoadingEvent, addr 0x5749f94, size 0xc0, virtual false, abstract: false, final false
  inline void add_didStartLoadingEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* value);

  /// @brief Method get_selectedBeatmapLevelPack, addr 0x574a544, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelPack* get_selectedBeatmapLevelPack();

  /// @brief Method get_selectedLevelCategory, addr 0x574a558, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory get_selectedLevelCategory();

  /// @brief Method remove_didCloseBeatmapLevelCollectionsEvent, addr 0x574a498, size 0xac, virtual false, abstract: false, final false
  inline void remove_didCloseBeatmapLevelCollectionsEvent(::System::Action* value);

  /// @brief Method remove_didOpenBeatmapLevelCollectionsEvent, addr 0x574a340, size 0xac, virtual false, abstract: false, final false
  inline void remove_didOpenBeatmapLevelCollectionsEvent(::System::Action* value);

  /// @brief Method remove_didPressAllSongsEvent, addr 0x574a1d4, size 0xc0, virtual false, abstract: false, final false
  inline void remove_didPressAllSongsEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* value);

  /// @brief Method remove_didSelectBeatmapLevelPackEvent, addr 0x5749ed4, size 0xc0, virtual false, abstract: false, final false
  inline void remove_didSelectBeatmapLevelPackEvent(::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*,
                                                                       ::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::LevelSelectionOptions>* value);

  /// @brief Method remove_didStartLoadingEvent, addr 0x574a054, size 0xc0, virtual false, abstract: false, final false
  inline void remove_didStartLoadingEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelFilteringNavigationController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelFilteringNavigationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelFilteringNavigationController(LevelFilteringNavigationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelFilteringNavigationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelFilteringNavigationController(LevelFilteringNavigationController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6939 };

  /// @brief Field _emptyFavoritesListInfoPrefab, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____emptyFavoritesListInfoPrefab;

  /// @brief Field _emptyCustomSongListInfoPrefab, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____emptyCustomSongListInfoPrefab;

  /// @brief Field _playerDataModel, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _selectLevelCategoryViewController, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SelectLevelCategoryViewController> ____selectLevelCategoryViewController;

  /// @brief Field _annotatedBeatmapLevelCollectionsViewController, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController> ____annotatedBeatmapLevelCollectionsViewController;

  /// @brief Field _levelSearchViewController, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelSearchViewController> ____levelSearchViewController;

  /// @brief Field _beatmapLevelsModel, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field didSelectBeatmapLevelPackEvent, offset: 0xd8, size: 0x8, def value: None
  ::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*, ::UnityW<::UnityEngine::GameObject>,
                     ::GlobalNamespace::LevelSelectionOptions>* ___didSelectBeatmapLevelPackEvent;

  /// @brief Field didStartLoadingEvent, offset: 0xe0, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* ___didStartLoadingEvent;

  /// @brief Field didPressAllSongsEvent, offset: 0xe8, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* ___didPressAllSongsEvent;

  /// @brief Field didOpenBeatmapLevelCollectionsEvent, offset: 0xf0, size: 0x8, def value: None
  ::System::Action* ___didOpenBeatmapLevelCollectionsEvent;

  /// @brief Field didCloseBeatmapLevelCollectionsEvent, offset: 0xf8, size: 0x8, def value: None
  ::System::Action* ___didCloseBeatmapLevelCollectionsEvent;

  /// @brief Field _cancellationTokenSource, offset: 0x100, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  /// @brief Field _currentNoDataInfoPrefab, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____currentNoDataInfoPrefab;

  /// @brief Field _levelPackIdToBeSelectedAfterPresent, offset: 0x110, size: 0x8, def value: None
  ::StringW ____levelPackIdToBeSelectedAfterPresent;

  /// @brief Field _hidePacksIfOneOrNone, offset: 0x118, size: 0x1, def value: None
  bool ____hidePacksIfOneOrNone;

  /// @brief Field _enableCustomLevels, offset: 0x119, size: 0x1, def value: None
  bool ____enableCustomLevels;

  /// @brief Field _songPackMask, offset: 0x120, size: 0x20, def value: None
  ::GlobalNamespace::SongPackMask ____songPackMask;

  /// @brief Field _enabledLevelCategories, offset: 0x140, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory, ::Array<::GlobalNamespace::SelectLevelCategoryViewController_LevelCategory>*> ____enabledLevelCategories;

  /// @brief Field _ostBeatmapLevelPacks, offset: 0x148, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> ____ostBeatmapLevelPacks;

  /// @brief Field _musicPacksBeatmapLevelPacks, offset: 0x150, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> ____musicPacksBeatmapLevelPacks;

  /// @brief Field _customLevelPacks, offset: 0x158, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* ____customLevelPacks;

  /// @brief Field _allOfficialBeatmapLevelPacks, offset: 0x160, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> ____allOfficialBeatmapLevelPacks;

  /// @brief Field _allBeatmapLevelPacks, offset: 0x168, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> ____allBeatmapLevelPacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____emptyFavoritesListInfoPrefab) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____emptyCustomSongListInfoPrefab) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____playerDataModel) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____selectLevelCategoryViewController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____annotatedBeatmapLevelCollectionsViewController) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____levelSearchViewController) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____beatmapLevelsModel) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ___didSelectBeatmapLevelPackEvent) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ___didStartLoadingEvent) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ___didPressAllSongsEvent) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ___didOpenBeatmapLevelCollectionsEvent) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ___didCloseBeatmapLevelCollectionsEvent) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____cancellationTokenSource) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____currentNoDataInfoPrefab) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____levelPackIdToBeSelectedAfterPresent) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____hidePacksIfOneOrNone) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____enableCustomLevels) == 0x119, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____songPackMask) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____enabledLevelCategories) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____ostBeatmapLevelPacks) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____musicPacksBeatmapLevelPacks) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____customLevelPacks) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____allOfficialBeatmapLevelPacks) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____allBeatmapLevelPacks) == 0x168, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelFilteringNavigationController, 0x170>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelFilteringNavigationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFilteringNavigationController*, "", "LevelFilteringNavigationController");
NEED_NO_BOX(::GlobalNamespace::LevelFilteringNavigationController___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFilteringNavigationController___c*, "", "LevelFilteringNavigationController/<>c");
NEED_NO_BOX(::GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFilteringNavigationController___c__DisplayClass53_0*, "", "LevelFilteringNavigationController/<>c__DisplayClass53_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFilteringNavigationController__UpdateCustomSongs_d__54, "", "LevelFilteringNavigationController/<UpdateCustomSongs>d__54");
