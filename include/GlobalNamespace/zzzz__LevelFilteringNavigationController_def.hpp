#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IBeatmapLevelPackCollection_def.hpp"
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
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5> class Action_5;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
struct __SelectLevelCategoryViewController__LevelCategory;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace GlobalNamespace {
class __LevelFilteringNavigationController____c__DisplayClass53_0;
}
namespace GlobalNamespace {
struct __LevelFilteringNavigationController___UpdateCustomSongs_d__54;
}
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
namespace GlobalNamespace {
class __LevelFilteringNavigationController____c;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class SelectLevelCategoryViewController;
}
namespace HMUI {
class ViewController;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class AnnotatedBeatmapLevelCollectionsViewController;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class LevelSearchViewController;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace System {
template <typename T, typename TResult> class Func_2;
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
struct CancellationToken;
}
namespace GlobalNamespace {
class IBeatmapLevelPackCollection;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5661))
// CS Name: ::LevelFilteringNavigationController::<>c__DisplayClass53_0*
class CORDL_TYPE __LevelFilteringNavigationController____c__DisplayClass53_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field levelPack, offset 0x10, size 0x8
  __declspec(property(get = __get_levelPack, put = __set_levelPack))::GlobalNamespace::IBeatmapLevelPack* levelPack;

  constexpr ::GlobalNamespace::IBeatmapLevelPack*& __get_levelPack();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> const& __get_levelPack() const;

  constexpr void __set_levelPack(::GlobalNamespace::IBeatmapLevelPack* value);

  static inline ::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0* New_ctor();

  /// @brief Method .ctor addr 0x22bf42c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <SelectAnnotatedBeatmapLevelCollection>b__1 addr 0x22bf5ec size 0xb4 virtual false final false
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
  ::GlobalNamespace::IBeatmapLevelPack* ___levelPack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5662))
// CS Name: ::LevelFilteringNavigationController::<>c*
class CORDL_TYPE __LevelFilteringNavigationController____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__LevelFilteringNavigationController____c* __9;

  /// @brief Field <>9__53_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__53_0, put = setStaticF___9__53_0))::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::StringW>* __9__53_0;

  static inline void setStaticF___9(::GlobalNamespace::__LevelFilteringNavigationController____c* value);

  static inline ::GlobalNamespace::__LevelFilteringNavigationController____c* getStaticF___9();

  static inline void setStaticF___9__53_0(::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::StringW>* value);

  static inline ::System::Func_2<::GlobalNamespace::IBeatmapLevelPack*, ::StringW>* getStaticF___9__53_0();

  static inline ::GlobalNamespace::__LevelFilteringNavigationController____c* New_ctor();

  /// @brief Method .ctor addr 0x22bf704 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <SelectAnnotatedBeatmapLevelCollection>b__53_0 addr 0x22bf70c size 0x9c virtual false final false
  inline ::StringW _SelectAnnotatedBeatmapLevelCollection_b__53_0(::GlobalNamespace::IBeatmapLevelPack* pack);

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(3400)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 889
// }), TypeDefinitionIndex(TypeDefinitionIndex(4352)), TypeDefinitionIndex(TypeDefinitionIndex(3394))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5663)) CS Name:
// ::LevelFilteringNavigationController::<UpdateCustomSongs>d__54
struct CORDL_TYPE __LevelFilteringNavigationController___UpdateCustomSongs_d__54 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x22bf7a8 size 0x4ec virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x22bfc94 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelFilteringNavigationController*",
  // modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*>", modifiers: "", def_value: None }]
  constexpr __LevelFilteringNavigationController___UpdateCustomSongs_d__54(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                           ::GlobalNamespace::LevelFilteringNavigationController* __4__this,
                                                                           ::System::Threading::CancellationToken _cancellationToken_5__2,
                                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelFilteringNavigationController___UpdateCustomSongs_d__54();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::LevelFilteringNavigationController* __4__this;

  /// @brief Field <cancellationToken>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken _cancellationToken_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelPackCollection*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelFilteringNavigationController
// SizeInfo { instance_size: 360, native_size: -1, calculated_instance_size: 360, calculated_native_size: 360, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15047)), TypeDefinitionIndex(TypeDefinitionIndex(13588))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5664))
// CS Name: ::LevelFilteringNavigationController*
class CORDL_TYPE LevelFilteringNavigationController : public ::HMUI::NavigationController {
public:
  // Declarations
  using _UpdateCustomSongs_d__54 = ::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54;

  using __c = ::GlobalNamespace::__LevelFilteringNavigationController____c;

  using __c__DisplayClass53_0 = ::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0;

  /// @brief Field _emptyFavoritesListInfoPrefab, offset 0x98, size 0x8
  __declspec(property(get = __get__emptyFavoritesListInfoPrefab, put = __set__emptyFavoritesListInfoPrefab))::UnityEngine::GameObject* _emptyFavoritesListInfoPrefab;

  /// @brief Field _emptyCustomSongListInfoPrefab, offset 0xa0, size 0x8
  __declspec(property(get = __get__emptyCustomSongListInfoPrefab, put = __set__emptyCustomSongListInfoPrefab))::UnityEngine::GameObject* _emptyCustomSongListInfoPrefab;

  /// @brief Field _playerDataModel, offset 0xa8, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _selectLevelCategoryViewController, offset 0xb0, size 0x8
  __declspec(property(get = __get__selectLevelCategoryViewController,
                      put = __set__selectLevelCategoryViewController))::GlobalNamespace::SelectLevelCategoryViewController* _selectLevelCategoryViewController;

  /// @brief Field _annotatedBeatmapLevelCollectionsViewController, offset 0xb8, size 0x8
  __declspec(property(get = __get__annotatedBeatmapLevelCollectionsViewController,
                      put = __set__annotatedBeatmapLevelCollectionsViewController))::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController* _annotatedBeatmapLevelCollectionsViewController;

  /// @brief Field _levelSearchViewController, offset 0xc0, size 0x8
  __declspec(property(get = __get__levelSearchViewController, put = __set__levelSearchViewController))::GlobalNamespace::LevelSearchViewController* _levelSearchViewController;

  /// @brief Field _beatmapLevelsModel, offset 0xc8, size 0x8
  __declspec(property(get = __get__beatmapLevelsModel, put = __set__beatmapLevelsModel))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field didSelectAnnotatedBeatmapLevelCollectionEvent, offset 0xd0, size 0x8
  __declspec(property(get = __get_didSelectAnnotatedBeatmapLevelCollectionEvent,
                      put = __set_didSelectAnnotatedBeatmapLevelCollectionEvent))::System::Action_5<::GlobalNamespace::LevelFilteringNavigationController*,
                                                                                                    ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::UnityEngine::GameObject*, bool,
                                                                                                    ::GlobalNamespace::BeatmapCharacteristicSO*>* didSelectAnnotatedBeatmapLevelCollectionEvent;

  /// @brief Field didStartLoadingEvent, offset 0xd8, size 0x8
  __declspec(property(get = __get_didStartLoadingEvent, put = __set_didStartLoadingEvent))::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>* didStartLoadingEvent;

  /// @brief Field didPressAllSongsEvent, offset 0xe0, size 0x8
  __declspec(property(get = __get_didPressAllSongsEvent, put = __set_didPressAllSongsEvent))::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>* didPressAllSongsEvent;

  /// @brief Field didOpenBeatmapLevelCollectionsEvent, offset 0xe8, size 0x8
  __declspec(property(get = __get_didOpenBeatmapLevelCollectionsEvent, put = __set_didOpenBeatmapLevelCollectionsEvent))::System::Action* didOpenBeatmapLevelCollectionsEvent;

  /// @brief Field didCloseBeatmapLevelCollectionsEvent, offset 0xf0, size 0x8
  __declspec(property(get = __get_didCloseBeatmapLevelCollectionsEvent, put = __set_didCloseBeatmapLevelCollectionsEvent))::System::Action* didCloseBeatmapLevelCollectionsEvent;

  /// @brief Field _cancellationTokenSource, offset 0xf8, size 0x8
  __declspec(property(get = __get__cancellationTokenSource, put = __set__cancellationTokenSource))::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _currentNoDataInfoPrefab, offset 0x100, size 0x8
  __declspec(property(get = __get__currentNoDataInfoPrefab, put = __set__currentNoDataInfoPrefab))::UnityEngine::GameObject* _currentNoDataInfoPrefab;

  /// @brief Field _levelPackIdToBeSelectedAfterPresent, offset 0x108, size 0x8
  __declspec(property(get = __get__levelPackIdToBeSelectedAfterPresent, put = __set__levelPackIdToBeSelectedAfterPresent))::StringW _levelPackIdToBeSelectedAfterPresent;

  /// @brief Field _hidePacksIfOneOrNone, offset 0x110, size 0x1
  __declspec(property(get = __get__hidePacksIfOneOrNone, put = __set__hidePacksIfOneOrNone)) bool _hidePacksIfOneOrNone;

  /// @brief Field _enableCustomLevels, offset 0x111, size 0x1
  __declspec(property(get = __get__enableCustomLevels, put = __set__enableCustomLevels)) bool _enableCustomLevels;

  /// @brief Field _songPackMask, offset 0x118, size 0x20
  __declspec(property(get = __get__songPackMask, put = __set__songPackMask))::GlobalNamespace::SongPackMask _songPackMask;

  /// @brief Field _enabledLevelCategories, offset 0x138, size 0x8
  __declspec(property(get = __get__enabledLevelCategories,
                      put = __set__enabledLevelCategories))::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory,
                                                                    ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*> _enabledLevelCategories;

  /// @brief Field _ostBeatmapLevelPacks, offset 0x140, size 0x8
  __declspec(property(get = __get__ostBeatmapLevelPacks,
                      put = __set__ostBeatmapLevelPacks))::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> _ostBeatmapLevelPacks;

  /// @brief Field _musicPacksBeatmapLevelPacks, offset 0x148, size 0x8
  __declspec(property(get = __get__musicPacksBeatmapLevelPacks,
                      put = __set__musicPacksBeatmapLevelPacks))::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> _musicPacksBeatmapLevelPacks;

  /// @brief Field _customLevelPacks, offset 0x150, size 0x8
  __declspec(property(get = __get__customLevelPacks, put = __set__customLevelPacks))::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> _customLevelPacks;

  /// @brief Field _allOfficialBeatmapLevelPacks, offset 0x158, size 0x8
  __declspec(property(get = __get__allOfficialBeatmapLevelPacks,
                      put = __set__allOfficialBeatmapLevelPacks))::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> _allOfficialBeatmapLevelPacks;

  /// @brief Field _allBeatmapLevelPacks, offset 0x160, size 0x8
  __declspec(property(get = __get__allBeatmapLevelPacks,
                      put = __set__allBeatmapLevelPacks))::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> _allBeatmapLevelPacks;

  __declspec(property(get = get_selectedBeatmapLevelPack))::GlobalNamespace::IBeatmapLevelPack* selectedBeatmapLevelPack;

  __declspec(property(get = get_selectedLevelCategory))::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory selectedLevelCategory;

  constexpr ::UnityEngine::GameObject*& __get__emptyFavoritesListInfoPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__emptyFavoritesListInfoPrefab() const;

  constexpr void __set__emptyFavoritesListInfoPrefab(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__emptyCustomSongListInfoPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__emptyCustomSongListInfoPrefab() const;

  constexpr void __set__emptyCustomSongListInfoPrefab(::UnityEngine::GameObject* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::GlobalNamespace::SelectLevelCategoryViewController*& __get__selectLevelCategoryViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SelectLevelCategoryViewController*> const& __get__selectLevelCategoryViewController() const;

  constexpr void __set__selectLevelCategoryViewController(::GlobalNamespace::SelectLevelCategoryViewController* value);

  constexpr ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*& __get__annotatedBeatmapLevelCollectionsViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController*> const& __get__annotatedBeatmapLevelCollectionsViewController() const;

  constexpr void __set__annotatedBeatmapLevelCollectionsViewController(::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController* value);

  constexpr ::GlobalNamespace::LevelSearchViewController*& __get__levelSearchViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelSearchViewController*> const& __get__levelSearchViewController() const;

  constexpr void __set__levelSearchViewController(::GlobalNamespace::LevelSearchViewController* value);

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __get__beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __get__beatmapLevelsModel() const;

  constexpr void __set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr ::System::Action_5<::GlobalNamespace::LevelFilteringNavigationController*, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::UnityEngine::GameObject*, bool,
                               ::GlobalNamespace::BeatmapCharacteristicSO*>*&
  __get_didSelectAnnotatedBeatmapLevelCollectionEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_5<::GlobalNamespace::LevelFilteringNavigationController*, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,
                                                                   ::UnityEngine::GameObject*, bool, ::GlobalNamespace::BeatmapCharacteristicSO*>*> const&
  __get_didSelectAnnotatedBeatmapLevelCollectionEvent() const;

  constexpr void __set_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_5<::GlobalNamespace::LevelFilteringNavigationController*, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,
                                                                                        ::UnityEngine::GameObject*, bool, ::GlobalNamespace::BeatmapCharacteristicSO*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*& __get_didStartLoadingEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*> const& __get_didStartLoadingEvent() const;

  constexpr void __set_didStartLoadingEvent(::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*& __get_didPressAllSongsEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>*> const& __get_didPressAllSongsEvent() const;

  constexpr void __set_didPressAllSongsEvent(::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>* value);

  constexpr ::System::Action*& __get_didOpenBeatmapLevelCollectionsEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didOpenBeatmapLevelCollectionsEvent() const;

  constexpr void __set_didOpenBeatmapLevelCollectionsEvent(::System::Action* value);

  constexpr ::System::Action*& __get_didCloseBeatmapLevelCollectionsEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didCloseBeatmapLevelCollectionsEvent() const;

  constexpr void __set_didCloseBeatmapLevelCollectionsEvent(::System::Action* value);

  constexpr ::System::Threading::CancellationTokenSource*& __get__cancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __get__cancellationTokenSource() const;

  constexpr void __set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr ::UnityEngine::GameObject*& __get__currentNoDataInfoPrefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__currentNoDataInfoPrefab() const;

  constexpr void __set__currentNoDataInfoPrefab(::UnityEngine::GameObject* value);

  constexpr ::StringW& __get__levelPackIdToBeSelectedAfterPresent();

  constexpr ::StringW const& __get__levelPackIdToBeSelectedAfterPresent() const;

  constexpr void __set__levelPackIdToBeSelectedAfterPresent(::StringW value);

  constexpr bool& __get__hidePacksIfOneOrNone();

  constexpr bool const& __get__hidePacksIfOneOrNone() const;

  constexpr void __set__hidePacksIfOneOrNone(bool value);

  constexpr bool& __get__enableCustomLevels();

  constexpr bool const& __get__enableCustomLevels() const;

  constexpr void __set__enableCustomLevels(bool value);

  constexpr ::GlobalNamespace::SongPackMask& __get__songPackMask();

  constexpr ::GlobalNamespace::SongPackMask const& __get__songPackMask() const;

  constexpr void __set__songPackMask(::GlobalNamespace::SongPackMask value);

  constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*>&
  __get__enabledLevelCategories();

  constexpr ::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*> const&
  __get__enabledLevelCategories() const;

  constexpr void
  __set__enabledLevelCategories(::ArrayW<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory, ::Array<::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory>*> value);

  constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*>& __get__ostBeatmapLevelPacks();

  constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> const& __get__ostBeatmapLevelPacks() const;

  constexpr void __set__ostBeatmapLevelPacks(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*>& __get__musicPacksBeatmapLevelPacks();

  constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> const& __get__musicPacksBeatmapLevelPacks() const;

  constexpr void __set__musicPacksBeatmapLevelPacks(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*>& __get__customLevelPacks();

  constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> const& __get__customLevelPacks() const;

  constexpr void __set__customLevelPacks(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*>& __get__allOfficialBeatmapLevelPacks();

  constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> const& __get__allOfficialBeatmapLevelPacks() const;

  constexpr void __set__allOfficialBeatmapLevelPacks(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*>& __get__allBeatmapLevelPacks();

  constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> const& __get__allBeatmapLevelPacks() const;

  constexpr void __set__allBeatmapLevelPacks(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> value);

  /// @brief Method add_didSelectAnnotatedBeatmapLevelCollectionEvent addr 0x22bcb6c size 0xb0 virtual false final false
  inline void add_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_5<::GlobalNamespace::LevelFilteringNavigationController*, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,
                                                                                   ::UnityEngine::GameObject*, bool, ::GlobalNamespace::BeatmapCharacteristicSO*>* value);

  /// @brief Method remove_didSelectAnnotatedBeatmapLevelCollectionEvent addr 0x22bcc1c size 0xb0 virtual false final false
  inline void remove_didSelectAnnotatedBeatmapLevelCollectionEvent(::System::Action_5<::GlobalNamespace::LevelFilteringNavigationController*, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*,
                                                                                      ::UnityEngine::GameObject*, bool, ::GlobalNamespace::BeatmapCharacteristicSO*>* value);

  /// @brief Method add_didStartLoadingEvent addr 0x22bcccc size 0xb0 virtual false final false
  inline void add_didStartLoadingEvent(::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>* value);

  /// @brief Method remove_didStartLoadingEvent addr 0x22bcd7c size 0xb0 virtual false final false
  inline void remove_didStartLoadingEvent(::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>* value);

  /// @brief Method add_didPressAllSongsEvent addr 0x22bce2c size 0xb0 virtual false final false
  inline void add_didPressAllSongsEvent(::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>* value);

  /// @brief Method remove_didPressAllSongsEvent addr 0x22bcedc size 0xb0 virtual false final false
  inline void remove_didPressAllSongsEvent(::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>* value);

  /// @brief Method add_didOpenBeatmapLevelCollectionsEvent addr 0x22bcf8c size 0x9c virtual false final false
  inline void add_didOpenBeatmapLevelCollectionsEvent(::System::Action* value);

  /// @brief Method remove_didOpenBeatmapLevelCollectionsEvent addr 0x22bd028 size 0x9c virtual false final false
  inline void remove_didOpenBeatmapLevelCollectionsEvent(::System::Action* value);

  /// @brief Method add_didCloseBeatmapLevelCollectionsEvent addr 0x22bd0c4 size 0x9c virtual false final false
  inline void add_didCloseBeatmapLevelCollectionsEvent(::System::Action* value);

  /// @brief Method remove_didCloseBeatmapLevelCollectionsEvent addr 0x22bd160 size 0x9c virtual false final false
  inline void remove_didCloseBeatmapLevelCollectionsEvent(::System::Action* value);

  /// @brief Method get_selectedBeatmapLevelPack addr 0x22bd1fc size 0x54 virtual false final false
  inline ::GlobalNamespace::IBeatmapLevelPack* get_selectedBeatmapLevelPack();

  /// @brief Method get_selectedLevelCategory addr 0x22bd250 size 0x18 virtual false final false
  inline ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory get_selectedLevelCategory();

  /// @brief Method Setup addr 0x22bd2c0 size 0x150 virtual false final false
  inline void Setup(::GlobalNamespace::SongPackMask songPackMask, ::GlobalNamespace::IBeatmapLevelPack* levelPackToBeSelectedAfterPresent,
                    ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory startLevelCategory, bool hidePacksIfOneOrNone, bool enableCustomLevels);

  /// @brief Method SetupBeatmapLevelPacks addr 0x22bd410 size 0x458 virtual false final false
  inline void SetupBeatmapLevelPacks();

  /// @brief Method DidActivate addr 0x22bdb8c size 0x3dc virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method LevelSearchViewControllerDidStartLoading addr 0x22be318 size 0x20 virtual false final false
  inline void LevelSearchViewControllerDidStartLoading(::GlobalNamespace::LevelSearchViewController* obj);

  /// @brief Method DidDeactivate addr 0x22be338 size 0x33c virtual true final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method LevelSearchViewControllerDidFilterBeatmapLevelCollection addr 0x22be884 size 0x38 virtual false final false
  inline void LevelSearchViewControllerDidFilterBeatmapLevelCollection(::GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection,
                                                                       ::GlobalNamespace::BeatmapCharacteristicSO* preferredBeatmapCharacteristic, bool alphabeticallySort);

  /// @brief Method SelectLevelCategoryViewControllerDidSelectLevelCategory addr 0x22be8bc size 0x8 virtual false final false
  inline void SelectLevelCategoryViewControllerDidSelectLevelCategory(::GlobalNamespace::SelectLevelCategoryViewController* viewController,
                                                                      ::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory levelCategory);

  /// @brief Method UpdateSecondChildControllerContent addr 0x22be178 size 0x1a0 virtual false final false
  inline void UpdateSecondChildControllerContent(::GlobalNamespace::__SelectLevelCategoryViewController__LevelCategory levelCategory);

  /// @brief Method ShowPacksInSecondChildController addr 0x22be8c4 size 0x6b0 virtual false final false
  inline void ShowPacksInSecondChildController(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks);

  /// @brief Method ReplaceSecondViewController addr 0x22befa4 size 0xa0 virtual false final false
  inline void ReplaceSecondViewController(::HMUI::ViewController* viewController);

  /// @brief Method HandlePlayerDataFavoriteLevelsSetDidChange addr 0x22bf0d4 size 0x44 virtual false final false
  inline void HandlePlayerDataFavoriteLevelsSetDidChange();

  /// @brief Method HandleIncreaseNumberOfGameplays addr 0x22bf118 size 0x40 virtual false final false
  inline void HandleIncreaseNumberOfGameplays();

  /// @brief Method HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections addr 0x22bf168 size 0x1c virtual false final false
  inline void HandleAnnotatedBeatmapLevelCollectionsViewControllerDidOpenBeatmapLevelCollections();

  /// @brief Method HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections addr 0x22bf184 size 0x1c virtual false final false
  inline void HandleAnnotatedBeatmapLevelCollectionsViewControllerDidCloseBeatmapLevelCollections();

  /// @brief Method HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection addr 0x22bf1a0 size 0x34 virtual false final false
  inline void HandleAnnotatedBeatmapLevelCollectionsViewControllerDidSelectAnnotatedBeatmapLevelCollection(::GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection);

  /// @brief Method SelectAnnotatedBeatmapLevelCollection addr 0x22bf1d4 size 0x258 virtual false final false
  inline void SelectAnnotatedBeatmapLevelCollection(::GlobalNamespace::IBeatmapLevelPack* levelPack);

  /// @brief Method UpdateCustomSongs addr 0x22bf044 size 0x90 virtual false final false
  inline void UpdateCustomSongs();

  static inline ::GlobalNamespace::LevelFilteringNavigationController* New_ctor();

  /// @brief Method .ctor addr 0x22bf434 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <SetupBeatmapLevelPacks>b__39_0 addr 0x22bf43c size 0xd8 virtual false final false
  inline bool _SetupBeatmapLevelPacks_b__39_0(::GlobalNamespace::IBeatmapLevelPack* pack);

  /// @brief Method <SetupBeatmapLevelPacks>b__39_1 addr 0x22bf514 size 0xd8 virtual false final false
  inline bool _SetupBeatmapLevelPacks_b__39_1(::GlobalNamespace::IBeatmapLevelPack* pack);

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
  ::UnityEngine::GameObject* ____emptyFavoritesListInfoPrefab;

  /// @brief Field _emptyCustomSongListInfoPrefab, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____emptyCustomSongListInfoPrefab;

  /// @brief Field _playerDataModel, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _selectLevelCategoryViewController, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::SelectLevelCategoryViewController* ____selectLevelCategoryViewController;

  /// @brief Field _annotatedBeatmapLevelCollectionsViewController, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::AnnotatedBeatmapLevelCollectionsViewController* ____annotatedBeatmapLevelCollectionsViewController;

  /// @brief Field _levelSearchViewController, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::LevelSearchViewController* ____levelSearchViewController;

  /// @brief Field _beatmapLevelsModel, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field didSelectAnnotatedBeatmapLevelCollectionEvent, offset: 0xd0, size: 0x8, def value: None
  ::System::Action_5<::GlobalNamespace::LevelFilteringNavigationController*, ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::UnityEngine::GameObject*, bool,
                     ::GlobalNamespace::BeatmapCharacteristicSO*>* ___didSelectAnnotatedBeatmapLevelCollectionEvent;

  /// @brief Field didStartLoadingEvent, offset: 0xd8, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>* ___didStartLoadingEvent;

  /// @brief Field didPressAllSongsEvent, offset: 0xe0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::LevelFilteringNavigationController*>* ___didPressAllSongsEvent;

  /// @brief Field didOpenBeatmapLevelCollectionsEvent, offset: 0xe8, size: 0x8, def value: None
  ::System::Action* ___didOpenBeatmapLevelCollectionsEvent;

  /// @brief Field didCloseBeatmapLevelCollectionsEvent, offset: 0xf0, size: 0x8, def value: None
  ::System::Action* ___didCloseBeatmapLevelCollectionsEvent;

  /// @brief Field _cancellationTokenSource, offset: 0xf8, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  /// @brief Field _currentNoDataInfoPrefab, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____currentNoDataInfoPrefab;

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
  ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> ____ostBeatmapLevelPacks;

  /// @brief Field _musicPacksBeatmapLevelPacks, offset: 0x148, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> ____musicPacksBeatmapLevelPacks;

  /// @brief Field _customLevelPacks, offset: 0x150, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> ____customLevelPacks;

  /// @brief Field _allOfficialBeatmapLevelPacks, offset: 0x158, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> ____allOfficialBeatmapLevelPacks;

  /// @brief Field _allBeatmapLevelPacks, offset: 0x160, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> ____allBeatmapLevelPacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelFilteringNavigationController, 0x168>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelFilteringNavigationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFilteringNavigationController*, "", "LevelFilteringNavigationController");
NEED_NO_BOX(::GlobalNamespace::__LevelFilteringNavigationController____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelFilteringNavigationController____c*, "", "LevelFilteringNavigationController/<>c");
NEED_NO_BOX(::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelFilteringNavigationController____c__DisplayClass53_0*, "", "LevelFilteringNavigationController/<>c__DisplayClass53_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelFilteringNavigationController___UpdateCustomSongs_d__54, "", "LevelFilteringNavigationController/<UpdateCustomSongs>d__54");
