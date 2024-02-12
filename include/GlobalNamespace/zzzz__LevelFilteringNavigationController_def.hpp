#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelsRepository_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "HMUI/zzzz__NavigationController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class LevelSearchViewController;
}
namespace GlobalNamespace {
struct LevelSelectionOptions;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class SelectLevelCategoryViewController;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
struct __LevelFilteringNavigationController___UpdateCustomSongs_d__54;
}
namespace GlobalNamespace {
class __LevelFilteringNavigationController____c;
}
namespace GlobalNamespace {
class __LevelFilteringNavigationController____c__DisplayClass53_0;
}
namespace GlobalNamespace {
struct __SelectLevelCategoryViewController__LevelCategory;
}
namespace HMUI {
class ViewController;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
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
class __LevelFilteringNavigationController____c;
}
namespace GlobalNamespace {
class __LevelFilteringNavigationController____c__DisplayClass53_0;
}
namespace GlobalNamespace {
struct __LevelFilteringNavigationController___UpdateCustomSongs_d__54;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelFilteringNavigationController);
MARK_REF_PTR_T(::GlobalNamespace::__LevelFilteringNavigationController____c);
MARK_REF_PTR_T(::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0);
MARK_VAL_T(::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54);
// Type: ::<>c__DisplayClass53_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4964))
// CS Name: ::LevelFilteringNavigationController::<>c__DisplayClass53_0*
class CORDL_TYPE __LevelFilteringNavigationController____c__DisplayClass53_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field levelPack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_levelPack, put = __cordl_internal_set_levelPack))::GlobalNamespace::BeatmapLevelPack* levelPack;

  constexpr ::GlobalNamespace::BeatmapLevelPack*& __cordl_internal_get_levelPack();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPack*> const& __cordl_internal_get_levelPack() const;

  constexpr void __cordl_internal_set_levelPack(::GlobalNamespace::BeatmapLevelPack* value);

  static inline ::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0* New_ctor();

  /// @brief Method .ctor, addr 0x22eed38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SelectAnnotatedBeatmapLevelCollection>b__1, addr 0x22eed40, size 0x24, virtual false, abstract: false, final false
  inline bool _SelectAnnotatedBeatmapLevelCollection_b__1(::StringW packID);

  // Ctor Parameters [CppParam { name: "", ty: "__LevelFilteringNavigationController____c__DisplayClass53_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LevelFilteringNavigationController____c__DisplayClass53_0(__LevelFilteringNavigationController____c__DisplayClass53_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LevelFilteringNavigationController____c__DisplayClass53_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LevelFilteringNavigationController____c__DisplayClass53_0(__LevelFilteringNavigationController____c__DisplayClass53_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelFilteringNavigationController____c__DisplayClass53_0();

public:
  /// @brief Field levelPack, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPack* ___levelPack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0, ___levelPack) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4965))
// CS Name: ::LevelFilteringNavigationController::<>c*
class CORDL_TYPE __LevelFilteringNavigationController____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__LevelFilteringNavigationController____c* __9;

  /// @brief Field <>9__53_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__53_0, put = setStaticF___9__53_0))::System::Func_2<::GlobalNamespace::BeatmapLevelPack*, ::StringW>* __9__53_0;

  static inline void setStaticF___9(::GlobalNamespace::__LevelFilteringNavigationController____c* value);

  static inline ::GlobalNamespace::__LevelFilteringNavigationController____c* getStaticF___9();

  static inline void setStaticF___9__53_0(::System::Func_2<::GlobalNamespace::BeatmapLevelPack*, ::StringW>* value);

  static inline ::System::Func_2<::GlobalNamespace::BeatmapLevelPack*, ::StringW>* getStaticF___9__53_0();

  static inline ::GlobalNamespace::__LevelFilteringNavigationController____c* New_ctor();

  /// @brief Method .ctor, addr 0x22eedc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SelectAnnotatedBeatmapLevelCollection>b__53_0, addr 0x22eedd0, size 0x18, virtual false, abstract: false, final false
  inline ::StringW _SelectAnnotatedBeatmapLevelCollection_b__53_0(::GlobalNamespace::BeatmapLevelPack* pack);

  // Ctor Parameters [CppParam { name: "", ty: "__LevelFilteringNavigationController____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LevelFilteringNavigationController____c(__LevelFilteringNavigationController____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LevelFilteringNavigationController____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LevelFilteringNavigationController____c(__LevelFilteringNavigationController____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelFilteringNavigationController____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelFilteringNavigationController____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<UpdateCustomSongs>d__54
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3390)), TypeDefinitionIndex(TypeDefinitionIndex(3396)),
// TypeDefinitionIndex(TypeDefinitionIndex(10789)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3390), inst: 882 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(4966)) CS
// Name: ::LevelFilteringNavigationController::<UpdateCustomSongs>d__54
struct CORDL_TYPE __LevelFilteringNavigationController___UpdateCustomSongs_d__54 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x22eede8, size 0x4b0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22ef2f0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::LevelFilteringNavigationController>", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelsRepository*>", modifiers: "", def_value: None
  // }]
  constexpr __LevelFilteringNavigationController___UpdateCustomSongs_d__54(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                           ::UnityW<::GlobalNamespace::LevelFilteringNavigationController> __4__this,
                                                                           ::System::Threading::CancellationToken _cancellationToken_5__2,
                                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelsRepository*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelFilteringNavigationController___UpdateCustomSongs_d__54();

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54, _cancellationToken_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelFilteringNavigationController
// SizeInfo { instance_size: 360, native_size: -1, calculated_instance_size: 360, calculated_native_size: 360, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13541)), TypeDefinitionIndex(TypeDefinitionIndex(14920))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4967))
// CS Name: ::LevelFilteringNavigationController*
class CORDL_TYPE LevelFilteringNavigationController : public ::HMUI::NavigationController {
public:
  // Declarations
  using _UpdateCustomSongs_d__54 = ::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54;

  using __c = ::GlobalNamespace::__LevelFilteringNavigationController____c;

  using __c__DisplayClass53_0 = ::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0;

  /// @brief Field _emptyFavoritesListInfoPrefab, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__emptyFavoritesListInfoPrefab,
                      put = __cordl_internal_set__emptyFavoritesListInfoPrefab))::UnityW<::UnityEngine::GameObject> _emptyFavoritesListInfoPrefab;

  /// @brief Field _emptyCustomSongListInfoPrefab, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__emptyCustomSongListInfoPrefab,
                      put = __cordl_internal_set__emptyCustomSongListInfoPrefab))::UnityW<::UnityEngine::GameObject> _emptyCustomSongListInfoPrefab;

  /// @brief Field _playerDataModel, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _selectLevelCategoryViewController, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__selectLevelCategoryViewController,
                      put = __cordl_internal_set__selectLevelCategoryViewController))::UnityW<::GlobalNamespace::SelectLevelCategoryViewController> _selectLevelCategoryViewController;

  /// @brief Field _annotatedBeatmapLevelCollectionsViewController, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__annotatedBeatmapLevelCollectionsViewController, put = __cordl_internal_set__annotatedBeatmapLevelCollectionsViewController))::UnityW<
      ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController> _annotatedBeatmapLevelCollectionsViewController;

  /// @brief Field _levelSearchViewController, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__levelSearchViewController,
                      put = __cordl_internal_set__levelSearchViewController))::UnityW<::GlobalNamespace::LevelSearchViewController> _levelSearchViewController;

  /// @brief Field _beatmapLevelsModel, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field didSelectBeatmapLevelPackEvent, offset 0xd0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_didSelectBeatmapLevelPackEvent,
      put = __cordl_internal_set_didSelectBeatmapLevelPackEvent))::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*,
                                                                                    ::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::LevelSelectionOptions>* didSelectBeatmapLevelPackEvent;

  /// @brief Field didStartLoadingEvent, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_didStartLoadingEvent,
                      put = __cordl_internal_set_didStartLoadingEvent))::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* didStartLoadingEvent;

  /// @brief Field didPressAllSongsEvent, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressAllSongsEvent,
                      put = __cordl_internal_set_didPressAllSongsEvent))::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* didPressAllSongsEvent;

  /// @brief Field didOpenBeatmapLevelCollectionsEvent, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_didOpenBeatmapLevelCollectionsEvent,
                      put = __cordl_internal_set_didOpenBeatmapLevelCollectionsEvent))::System::Action* didOpenBeatmapLevelCollectionsEvent;

  /// @brief Field didCloseBeatmapLevelCollectionsEvent, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_didCloseBeatmapLevelCollectionsEvent,
                      put = __cordl_internal_set_didCloseBeatmapLevelCollectionsEvent))::System::Action* didCloseBeatmapLevelCollectionsEvent;

  /// @brief Field _cancellationTokenSource, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationTokenSource, put = __cordl_internal_set__cancellationTokenSource))::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _currentNoDataInfoPrefab, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__currentNoDataInfoPrefab, put = __cordl_internal_set__currentNoDataInfoPrefab))::UnityW<::UnityEngine::GameObject> _currentNoDataInfoPrefab;

  /// @brief Field _levelPackIdToBeSelectedAfterPresent, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackIdToBeSelectedAfterPresent, put = __cordl_internal_set__levelPackIdToBeSelectedAfterPresent))::StringW _levelPackIdToBeSelectedAfterPresent;

  /// @brief Field _hidePacksIfOneOrNone, offset 0x110, size 0x1
  __declspec(property(get = __cordl_internal_get__hidePacksIfOneOrNone, put = __cordl_internal_set__hidePacksIfOneOrNone)) bool _hidePacksIfOneOrNone;

  /// @brief Field _enableCustomLevels, offset 0x111, size 0x1
  __declspec(property(get = __cordl_internal_get__enableCustomLevels, put = __cordl_internal_set__enableCustomLevels)) bool _enableCustomLevels;

  /// @brief Field _songPackMask, offset 0x118, size 0x20
  __declspec(property(get = __cordl_internal_get__songPackMask, put = __cordl_internal_set__songPackMask))::GlobalNamespace::SongPackMask _songPackMask;

  /// @brief Field _enabledLevelCategories, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__enabledLevelCategories,
                      put = __cordl_internal_set__enabledLevelCategories))::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory,
                                                                                   ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*> _enabledLevelCategories;

  /// @brief Field _ostBeatmapLevelPacks, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__ostBeatmapLevelPacks,
                      put = __cordl_internal_set__ostBeatmapLevelPacks))::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> _ostBeatmapLevelPacks;

  /// @brief Field _musicPacksBeatmapLevelPacks, offset 0x148, size 0x8
  __declspec(
      property(get = __cordl_internal_get__musicPacksBeatmapLevelPacks,
               put = __cordl_internal_set__musicPacksBeatmapLevelPacks))::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> _musicPacksBeatmapLevelPacks;

  /// @brief Field _customLevelPacks, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get__customLevelPacks,
                      put = __cordl_internal_set__customLevelPacks))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* _customLevelPacks;

  /// @brief Field _allOfficialBeatmapLevelPacks, offset 0x158, size 0x8
  __declspec(
      property(get = __cordl_internal_get__allOfficialBeatmapLevelPacks,
               put = __cordl_internal_set__allOfficialBeatmapLevelPacks))::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> _allOfficialBeatmapLevelPacks;

  /// @brief Field _allBeatmapLevelPacks, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get__allBeatmapLevelPacks,
                      put = __cordl_internal_set__allBeatmapLevelPacks))::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> _allBeatmapLevelPacks;

  __declspec(property(get = get_selectedBeatmapLevelPack))::GlobalNamespace::BeatmapLevelPack* selectedBeatmapLevelPack;

  __declspec(property(get = get_selectedLevelCategory))::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory selectedLevelCategory;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__emptyFavoritesListInfoPrefab();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__emptyFavoritesListInfoPrefab() const;

  constexpr void __cordl_internal_set__emptyFavoritesListInfoPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__emptyCustomSongListInfoPrefab();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__emptyCustomSongListInfoPrefab() const;

  constexpr void __cordl_internal_set__emptyCustomSongListInfoPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr ::UnityW<::GlobalNamespace::SelectLevelCategoryViewController>& __cordl_internal_get__selectLevelCategoryViewController();

  constexpr ::UnityW<::GlobalNamespace::SelectLevelCategoryViewController> const& __cordl_internal_get__selectLevelCategoryViewController() const;

  constexpr void __cordl_internal_set__selectLevelCategoryViewController(::UnityW<::GlobalNamespace::SelectLevelCategoryViewController> value);

  constexpr ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController>& __cordl_internal_get__annotatedBeatmapLevelCollectionsViewController();

  constexpr ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController> const& __cordl_internal_get__annotatedBeatmapLevelCollectionsViewController() const;

  constexpr void __cordl_internal_set__annotatedBeatmapLevelCollectionsViewController(::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController> value);

  constexpr ::UnityW<::GlobalNamespace::LevelSearchViewController>& __cordl_internal_get__levelSearchViewController();

  constexpr ::UnityW<::GlobalNamespace::LevelSearchViewController> const& __cordl_internal_get__levelSearchViewController() const;

  constexpr void __cordl_internal_set__levelSearchViewController(::UnityW<::GlobalNamespace::LevelSearchViewController> value);

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr ::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*, ::UnityW<::UnityEngine::GameObject>,
                               ::GlobalNamespace::LevelSelectionOptions>*&
  __cordl_internal_get_didSelectBeatmapLevelPackEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*,
                                                                   ::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::LevelSelectionOptions>*> const&
  __cordl_internal_get_didSelectBeatmapLevelPackEvent() const;

  constexpr void __cordl_internal_set_didSelectBeatmapLevelPackEvent(::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*,
                                                                                        ::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::LevelSelectionOptions>* value);

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*& __cordl_internal_get_didStartLoadingEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*> const& __cordl_internal_get_didStartLoadingEvent() const;

  constexpr void __cordl_internal_set_didStartLoadingEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* value);

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*& __cordl_internal_get_didPressAllSongsEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>*> const& __cordl_internal_get_didPressAllSongsEvent() const;

  constexpr void __cordl_internal_set_didPressAllSongsEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* value);

  constexpr ::System::Action*& __cordl_internal_get_didOpenBeatmapLevelCollectionsEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didOpenBeatmapLevelCollectionsEvent() const;

  constexpr void __cordl_internal_set_didOpenBeatmapLevelCollectionsEvent(::System::Action* value);

  constexpr ::System::Action*& __cordl_internal_get_didCloseBeatmapLevelCollectionsEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didCloseBeatmapLevelCollectionsEvent() const;

  constexpr void __cordl_internal_set_didCloseBeatmapLevelCollectionsEvent(::System::Action* value);

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __cordl_internal_get__cancellationTokenSource() const;

  constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__currentNoDataInfoPrefab();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__currentNoDataInfoPrefab() const;

  constexpr void __cordl_internal_set__currentNoDataInfoPrefab(::UnityW<::UnityEngine::GameObject> value);

  constexpr ::StringW& __cordl_internal_get__levelPackIdToBeSelectedAfterPresent();

  constexpr ::StringW const& __cordl_internal_get__levelPackIdToBeSelectedAfterPresent() const;

  constexpr void __cordl_internal_set__levelPackIdToBeSelectedAfterPresent(::StringW value);

  constexpr bool& __cordl_internal_get__hidePacksIfOneOrNone();

  constexpr bool const& __cordl_internal_get__hidePacksIfOneOrNone() const;

  constexpr void __cordl_internal_set__hidePacksIfOneOrNone(bool value);

  constexpr bool& __cordl_internal_get__enableCustomLevels();

  constexpr bool const& __cordl_internal_get__enableCustomLevels() const;

  constexpr void __cordl_internal_set__enableCustomLevels(bool value);

  constexpr ::GlobalNamespace::SongPackMask& __cordl_internal_get__songPackMask();

  constexpr ::GlobalNamespace::SongPackMask const& __cordl_internal_get__songPackMask() const;

  constexpr void __cordl_internal_set__songPackMask(::GlobalNamespace::SongPackMask value);

  constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>&
  __cordl_internal_get__enabledLevelCategories();

  constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*> const&
  __cordl_internal_get__enabledLevelCategories() const;

  constexpr void __cordl_internal_set__enabledLevelCategories(
      ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*> value);

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>& __cordl_internal_get__ostBeatmapLevelPacks();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> const& __cordl_internal_get__ostBeatmapLevelPacks() const;

  constexpr void __cordl_internal_set__ostBeatmapLevelPacks(::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>& __cordl_internal_get__musicPacksBeatmapLevelPacks();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> const& __cordl_internal_get__musicPacksBeatmapLevelPacks() const;

  constexpr void __cordl_internal_set__musicPacksBeatmapLevelPacks(::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> value);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*& __cordl_internal_get__customLevelPacks();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*> const& __cordl_internal_get__customLevelPacks() const;

  constexpr void __cordl_internal_set__customLevelPacks(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* value);

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>& __cordl_internal_get__allOfficialBeatmapLevelPacks();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> const& __cordl_internal_get__allOfficialBeatmapLevelPacks() const;

  constexpr void __cordl_internal_set__allOfficialBeatmapLevelPacks(::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>& __cordl_internal_get__allBeatmapLevelPacks();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> const& __cordl_internal_get__allBeatmapLevelPacks() const;

  constexpr void __cordl_internal_set__allBeatmapLevelPacks(::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> value);

  /// @brief Method add_didSelectBeatmapLevelPackEvent, addr 0x22ece1c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectBeatmapLevelPackEvent(::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*,
                                                                    ::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::LevelSelectionOptions>* value);

  /// @brief Method remove_didSelectBeatmapLevelPackEvent, addr 0x22ececc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectBeatmapLevelPackEvent(::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*,
                                                                       ::UnityW<::UnityEngine::GameObject>, ::GlobalNamespace::LevelSelectionOptions>* value);

  /// @brief Method add_didStartLoadingEvent, addr 0x22ecf7c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didStartLoadingEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* value);

  /// @brief Method remove_didStartLoadingEvent, addr 0x22ed02c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didStartLoadingEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* value);

  /// @brief Method add_didPressAllSongsEvent, addr 0x22ed0dc, size 0xb0, virtual false, abstract: false, final false
  inline void add_didPressAllSongsEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* value);

  /// @brief Method remove_didPressAllSongsEvent, addr 0x22ed18c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didPressAllSongsEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* value);

  /// @brief Method add_didOpenBeatmapLevelCollectionsEvent, addr 0x22ed23c, size 0x9c, virtual false, abstract: false, final false
  inline void add_didOpenBeatmapLevelCollectionsEvent(::System::Action* value);

  /// @brief Method remove_didOpenBeatmapLevelCollectionsEvent, addr 0x22ed2d8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didOpenBeatmapLevelCollectionsEvent(::System::Action* value);

  /// @brief Method add_didCloseBeatmapLevelCollectionsEvent, addr 0x22ed374, size 0x9c, virtual false, abstract: false, final false
  inline void add_didCloseBeatmapLevelCollectionsEvent(::System::Action* value);

  /// @brief Method remove_didCloseBeatmapLevelCollectionsEvent, addr 0x22ed410, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didCloseBeatmapLevelCollectionsEvent(::System::Action* value);

  /// @brief Method get_selectedBeatmapLevelPack, addr 0x22ed4ac, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelPack* get_selectedBeatmapLevelPack();

  /// @brief Method get_selectedLevelCategory, addr 0x22ed4c4, size 0x1c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory get_selectedLevelCategory();

  /// @brief Method Setup, addr 0x22ed4e0, size 0xb0, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::SongPackMask songPackMask, ::GlobalNamespace::BeatmapLevelPack* levelPackToBeSelectedAfterPresent,
                    ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory startLevelCategory, bool hidePacksIfOneOrNone, bool enableCustomLevels);

  /// @brief Method SetupBeatmapLevelPacks, addr 0x22ed590, size 0x3cc, virtual false, abstract: false, final false
  inline void SetupBeatmapLevelPacks();

  /// @brief Method DidActivate, addr 0x22ed95c, size 0x3ec, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method HandleLevelSearchViewControllerDidStartLoading, addr 0x22edebc, size 0x20, virtual false, abstract: false, final false
  inline void HandleLevelSearchViewControllerDidStartLoading(::GlobalNamespace::LevelSearchViewController* obj);

  /// @brief Method DidDeactivate, addr 0x22ededc, size 0x348, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleLevelSearchViewControllerDidFilterBeatmapLevelCollection, addr 0x22ee224, size 0x64, virtual false, abstract: false, final false
  inline void HandleLevelSearchViewControllerDidFilterBeatmapLevelCollection(::GlobalNamespace::BeatmapLevelPack* annotatedBeatmapLevelCollection, ::GlobalNamespace::LevelSelectionOptions options);

  /// @brief Method HandleSelectLevelCategoryViewControllerDidSelectLevelCategory, addr 0x22ee288, size 0x8, virtual false, abstract: false, final false
  inline void HandleSelectLevelCategoryViewControllerDidSelectLevelCategory(::GlobalNamespace::SelectLevelCategoryViewController* viewController,
                                                                            ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory levelCategory);

  /// @brief Method UpdateSecondChildControllerContent, addr 0x22edd48, size 0x174, virtual false, abstract: false, final false
  inline void UpdateSecondChildControllerContent(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory levelCategory);

  /// @brief Method ShowPacksInSecondChildController, addr 0x22ee290, size 0x588, virtual false, abstract: false, final false
  inline void ShowPacksInSecondChildController(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* beatmapLevelPacks);

  /// @brief Method ReplaceSecondViewController, addr 0x22ee818, size 0xa0, virtual false, abstract: false, final false
  inline void ReplaceSecondViewController(::HMUI::ViewController* viewController);

  /// @brief Method HandlePlayerDataFavoriteLevelsSetDidChange, addr 0x22ee948, size 0x4c, virtual false, abstract: false, final false
  inline void HandlePlayerDataFavoriteLevelsSetDidChange();

  /// @brief Method HandleIncreaseNumberOfGameplays, addr 0x22ee994, size 0x64, virtual false, abstract: false, final false
  inline void HandleIncreaseNumberOfGameplays();

  /// @brief Method HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections, addr 0x22ee9f8, size 0x1c, virtual false, abstract: false, final false
  inline void HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections();

  /// @brief Method HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections, addr 0x22eea14, size 0x1c, virtual false, abstract: false, final false
  inline void HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections();

  /// @brief Method HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection, addr 0x22eea30, size 0x6c, virtual false, abstract: false, final false
  inline void HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection(::GlobalNamespace::BeatmapLevelPack* annotatedBeatmapLevelCollection);

  /// @brief Method SelectAnnotatedBeatmapLevelCollection, addr 0x22eea9c, size 0x1f4, virtual false, abstract: false, final false
  inline void SelectAnnotatedBeatmapLevelCollection(::GlobalNamespace::BeatmapLevelPack* levelPack);

  /// @brief Method UpdateCustomSongs, addr 0x22ee8b8, size 0x90, virtual false, abstract: false, final false
  inline void UpdateCustomSongs();

  static inline ::GlobalNamespace::LevelFilteringNavigationController* New_ctor();

  /// @brief Method .ctor, addr 0x22eec90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <SetupBeatmapLevelPacks>b__39_0, addr 0x22eec98, size 0x50, virtual false, abstract: false, final false
  inline bool _SetupBeatmapLevelPacks_b__39_0(::GlobalNamespace::BeatmapLevelPack* pack);

  /// @brief Method <SetupBeatmapLevelPacks>b__39_1, addr 0x22eece8, size 0x50, virtual false, abstract: false, final false
  inline bool _SetupBeatmapLevelPacks_b__39_1(::GlobalNamespace::BeatmapLevelPack* pack);

  // Ctor Parameters [CppParam { name: "", ty: "LevelFilteringNavigationController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelFilteringNavigationController(LevelFilteringNavigationController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelFilteringNavigationController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelFilteringNavigationController(LevelFilteringNavigationController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelFilteringNavigationController();

public:
  /// @brief Field _emptyFavoritesListInfoPrefab, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____emptyFavoritesListInfoPrefab;

  /// @brief Field _emptyCustomSongListInfoPrefab, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____emptyCustomSongListInfoPrefab;

  /// @brief Field _playerDataModel, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _selectLevelCategoryViewController, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SelectLevelCategoryViewController> ____selectLevelCategoryViewController;

  /// @brief Field _annotatedBeatmapLevelCollectionsViewController, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController> ____annotatedBeatmapLevelCollectionsViewController;

  /// @brief Field _levelSearchViewController, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelSearchViewController> ____levelSearchViewController;

  /// @brief Field _beatmapLevelsModel, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field didSelectBeatmapLevelPackEvent, offset: 0xd0, size: 0x8, def value: None
  ::System::Action_4<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>, ::GlobalNamespace::BeatmapLevelPack*, ::UnityW<::UnityEngine::GameObject>,
                     ::GlobalNamespace::LevelSelectionOptions>* ___didSelectBeatmapLevelPackEvent;

  /// @brief Field didStartLoadingEvent, offset: 0xd8, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* ___didStartLoadingEvent;

  /// @brief Field didPressAllSongsEvent, offset: 0xe0, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::LevelFilteringNavigationController>>* ___didPressAllSongsEvent;

  /// @brief Field didOpenBeatmapLevelCollectionsEvent, offset: 0xe8, size: 0x8, def value: None
  ::System::Action* ___didOpenBeatmapLevelCollectionsEvent;

  /// @brief Field didCloseBeatmapLevelCollectionsEvent, offset: 0xf0, size: 0x8, def value: None
  ::System::Action* ___didCloseBeatmapLevelCollectionsEvent;

  /// @brief Field _cancellationTokenSource, offset: 0xf8, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  /// @brief Field _currentNoDataInfoPrefab, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____currentNoDataInfoPrefab;

  /// @brief Field _levelPackIdToBeSelectedAfterPresent, offset: 0x108, size: 0x8, def value: None
  ::StringW ____levelPackIdToBeSelectedAfterPresent;

  /// @brief Field _hidePacksIfOneOrNone, offset: 0x110, size: 0x1, def value: None
  bool ____hidePacksIfOneOrNone;

  /// @brief Field _enableCustomLevels, offset: 0x111, size: 0x1, def value: None
  bool ____enableCustomLevels;

  /// @brief Field _songPackMask, offset: 0x118, size: 0x20, def value: None
  ::GlobalNamespace::SongPackMask ____songPackMask;

  /// @brief Field _enabledLevelCategories, offset: 0x138, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*> ____enabledLevelCategories;

  /// @brief Field _ostBeatmapLevelPacks, offset: 0x140, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> ____ostBeatmapLevelPacks;

  /// @brief Field _musicPacksBeatmapLevelPacks, offset: 0x148, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> ____musicPacksBeatmapLevelPacks;

  /// @brief Field _customLevelPacks, offset: 0x150, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* ____customLevelPacks;

  /// @brief Field _allOfficialBeatmapLevelPacks, offset: 0x158, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> ____allOfficialBeatmapLevelPacks;

  /// @brief Field _allBeatmapLevelPacks, offset: 0x160, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> ____allBeatmapLevelPacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelFilteringNavigationController, 0x168>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____emptyFavoritesListInfoPrefab) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____emptyCustomSongListInfoPrefab) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____playerDataModel) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____selectLevelCategoryViewController) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____annotatedBeatmapLevelCollectionsViewController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____levelSearchViewController) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____beatmapLevelsModel) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ___didSelectBeatmapLevelPackEvent) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ___didStartLoadingEvent) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ___didPressAllSongsEvent) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ___didOpenBeatmapLevelCollectionsEvent) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ___didCloseBeatmapLevelCollectionsEvent) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____cancellationTokenSource) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____currentNoDataInfoPrefab) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____levelPackIdToBeSelectedAfterPresent) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____hidePacksIfOneOrNone) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____enableCustomLevels) == 0x111, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____songPackMask) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____enabledLevelCategories) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____ostBeatmapLevelPacks) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____musicPacksBeatmapLevelPacks) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____customLevelPacks) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____allOfficialBeatmapLevelPacks) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelFilteringNavigationController, ____allBeatmapLevelPacks) == 0x160, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelFilteringNavigationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFilteringNavigationController*, "", "LevelFilteringNavigationController");
NEED_NO_BOX(::GlobalNamespace::__LevelFilteringNavigationController____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelFilteringNavigationController____c*, "", "LevelFilteringNavigationController/<>c");
NEED_NO_BOX(::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0*, "", "LevelFilteringNavigationController/<>c__DisplayClass53_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54, "", "LevelFilteringNavigationController/<UpdateCustomSongs>d__54");
