#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__LevelFilter_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelSearchViewController)
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class IEntitlementModel;
}
namespace GlobalNamespace {
struct LevelFilter;
}
namespace GlobalNamespace {
struct LevelSelectionOptions;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class SongPackMasksModel;
}
namespace GlobalNamespace {
struct __LevelSearchViewController___RefreshAsync_d__34;
}
namespace HMUI {
class InputFieldView;
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
namespace System::Text {
class StringBuilder;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelSearchViewController;
}
namespace GlobalNamespace {
struct __LevelSearchViewController___RefreshAsync_d__34;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelSearchViewController);
MARK_VAL_T(::GlobalNamespace::__LevelSearchViewController___RefreshAsync_d__34);
// Type: ::<RefreshAsync>d__34
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LevelSearchViewController::<RefreshAsync>d__34
struct CORDL_TYPE __LevelSearchViewController___RefreshAsync_d__34 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2425af4, size 0x8c8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x24263bc, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelSearchViewController___RefreshAsync_d__34();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LevelSearchViewController>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::BeatmapLevel*,::Array<::GlobalNamespace::BeatmapLevel*>*>>", modifiers: "", def_value: None }]
  constexpr __LevelSearchViewController___RefreshAsync_d__34(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::LevelSearchViewController> __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelSearchViewController> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelSearchViewController___RefreshAsync_d__34, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelSearchViewController___RefreshAsync_d__34, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelSearchViewController___RefreshAsync_d__34, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelSearchViewController___RefreshAsync_d__34, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelSearchViewController___RefreshAsync_d__34, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelSearchViewController
// SizeInfo { instance_size: 328, native_size: -1, calculated_instance_size: 328, calculated_native_size: 328, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LevelSearchViewController*
class CORDL_TYPE LevelSearchViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using _RefreshAsync_d__34 = ::GlobalNamespace::__LevelSearchViewController___RefreshAsync_d__34;

  /// @brief Field _beatmapCharacteristicCollection, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicCollection,
                      put = __cordl_internal_set__beatmapCharacteristicCollection))::GlobalNamespace::BeatmapCharacteristicCollection* _beatmapCharacteristicCollection;

  /// @brief Field _beatmapLevelPack, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelPack, put = __cordl_internal_set__beatmapLevelPack))::GlobalNamespace::BeatmapLevelPack* _beatmapLevelPack;

  /// @brief Field _beatmapLevelPacks, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelPacks,
                      put = __cordl_internal_set__beatmapLevelPacks))::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> _beatmapLevelPacks;

  /// @brief Field _cancellationTokenSource, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationTokenSource, put = __cordl_internal_set__cancellationTokenSource))::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _clearFiltersButton, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__clearFiltersButton, put = __cordl_internal_set__clearFiltersButton))::UnityW<::UnityEngine::UI::Button> _clearFiltersButton;

  /// @brief Field _currentSearchFilter, offset 0xe8, size 0x50
  __declspec(property(get = __cordl_internal_get__currentSearchFilter, put = __cordl_internal_set__currentSearchFilter))::GlobalNamespace::LevelFilter _currentSearchFilter;

  /// @brief Field _entitlementModel, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlementModel, put = __cordl_internal_set__entitlementModel))::GlobalNamespace::IEntitlementModel* _entitlementModel;

  /// @brief Field _filterParamsText, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__filterParamsText, put = __cordl_internal_set__filterParamsText))::UnityW<::TMPro::TextMeshProUGUI> _filterParamsText;

  /// @brief Field _filterPlaceholder, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__filterPlaceholder, put = __cordl_internal_set__filterPlaceholder))::UnityW<::UnityEngine::GameObject> _filterPlaceholder;

  /// @brief Field _playerDataModel, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _preferredBeatmapCharacteristic, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__preferredBeatmapCharacteristic,
                      put = __cordl_internal_set__preferredBeatmapCharacteristic))::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> _preferredBeatmapCharacteristic;

  /// @brief Field _preferredBeatmapDifficulty, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__preferredBeatmapDifficulty,
                      put = __cordl_internal_set__preferredBeatmapDifficulty))::System::Nullable_1<::GlobalNamespace::BeatmapDifficulty> _preferredBeatmapDifficulty;

  /// @brief Field _searchButton, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__searchButton, put = __cordl_internal_set__searchButton))::UnityW<::UnityEngine::UI::Button> _searchButton;

  /// @brief Field _searchTextInputFieldView, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__searchTextInputFieldView, put = __cordl_internal_set__searchTextInputFieldView))::UnityW<::HMUI::InputFieldView> _searchTextInputFieldView;

  /// @brief Field _songPackMasksModel, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__songPackMasksModel, put = __cordl_internal_set__songPackMasksModel))::GlobalNamespace::SongPackMasksModel* _songPackMasksModel;

  /// @brief Field didFilterBeatmapLevelCollectionEvent, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_didFilterBeatmapLevelCollectionEvent,
                      put = __cordl_internal_set_didFilterBeatmapLevelCollectionEvent))::System::Action_2<::GlobalNamespace::BeatmapLevelPack*,
                                                                                                          ::GlobalNamespace::LevelSelectionOptions>* didFilterBeatmapLevelCollectionEvent;

  /// @brief Field didPressSearchButtonEvent, offset 0xb8, size 0x8
  __declspec(property(
      get = __cordl_internal_get_didPressSearchButtonEvent,
      put = __cordl_internal_set_didPressSearchButtonEvent))::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>* didPressSearchButtonEvent;

  /// @brief Field didStartLoadingEvent, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_didStartLoadingEvent,
                      put = __cordl_internal_set_didStartLoadingEvent))::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>* didStartLoadingEvent;

  /// @brief Method DidActivate, addr 0x24250dc, size 0x198, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x2425274, size 0xbc, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method IsFilteringPlayCounts, addr 0x24233f8, size 0x8, virtual false, abstract: false, final false
  inline bool IsFilteringPlayCounts();

  /// @brief Method LocalizedLevelFilterParamsDescription, addr 0x24253dc, size 0x604, virtual false, abstract: false, final false
  static inline ::StringW LocalizedLevelFilterParamsDescription(ByRef<::GlobalNamespace::LevelFilter> filter, ::GlobalNamespace::SongPackMasksModel* songPackMasksModel,
                                                                ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* characteristics);

  static inline ::GlobalNamespace::LevelSearchViewController* New_ctor();

  /// @brief Method Refresh, addr 0x2423400, size 0x4, virtual false, abstract: false, final false
  inline void Refresh();

  /// @brief Method Refresh, addr 0x24250bc, size 0x20, virtual false, abstract: false, final false
  inline void Refresh(ByRef<::GlobalNamespace::LevelFilter> filter);

  /// @brief Method RefreshAsync, addr 0x2425028, size 0x94, virtual false, abstract: false, final false
  inline void RefreshAsync();

  /// @brief Method ResetAllFilterSettings, addr 0x2424fc4, size 0x64, virtual false, abstract: false, final false
  inline void ResetAllFilterSettings(bool onlyFavorites);

  /// @brief Method ResetFilter, addr 0x242321c, size 0x1c, virtual false, abstract: false, final false
  inline void ResetFilter(bool onlyFavorites);

  /// @brief Method ResetOptionFilterSettings, addr 0x2425338, size 0x88, virtual false, abstract: false, final false
  inline void ResetOptionFilterSettings(bool onlyFavorites);

  /// @brief Method ResetTextFilterSettings, addr 0x2425330, size 0x8, virtual false, abstract: false, final false
  inline void ResetTextFilterSettings(::StringW text);

  /// @brief Method SearchTextInputFieldViewOnValueChanged, addr 0x24253c0, size 0x1c, virtual false, abstract: false, final false
  inline void SearchTextInputFieldViewOnValueChanged(::HMUI::InputFieldView* inputFieldView);

  /// @brief Method Setup, addr 0x2424fbc, size 0x8, virtual false, abstract: false, final false
  inline void Setup(::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> beatmapLevelPacks);

  /// @brief Method <DidActivate>b__29_0, addr 0x2425a64, size 0x6c, virtual false, abstract: false, final false
  inline void _DidActivate_b__29_0();

  /// @brief Method <DidActivate>b__29_1, addr 0x2425ad0, size 0x24, virtual false, abstract: false, final false
  inline void _DidActivate_b__29_1();

  /// @brief Method <LocalizedLevelFilterParamsDescription>g__Append|36_0, addr 0x24259e0, size 0x7c, virtual false, abstract: false, final false
  static inline void _LocalizedLevelFilterParamsDescription_g__Append_36_0(::System::Text::StringBuilder* sb, ::StringW value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __cordl_internal_get__beatmapCharacteristicCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollection*> const& __cordl_internal_get__beatmapCharacteristicCollection() const;

  constexpr ::GlobalNamespace::BeatmapLevelPack*& __cordl_internal_get__beatmapLevelPack();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPack*> const& __cordl_internal_get__beatmapLevelPack() const;

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> const& __cordl_internal_get__beatmapLevelPacks() const;

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>& __cordl_internal_get__beatmapLevelPacks();

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __cordl_internal_get__cancellationTokenSource() const;

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__clearFiltersButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__clearFiltersButton();

  constexpr ::GlobalNamespace::LevelFilter const& __cordl_internal_get__currentSearchFilter() const;

  constexpr ::GlobalNamespace::LevelFilter& __cordl_internal_get__currentSearchFilter();

  constexpr ::GlobalNamespace::IEntitlementModel*& __cordl_internal_get__entitlementModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IEntitlementModel*> const& __cordl_internal_get__entitlementModel() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__filterParamsText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__filterParamsText();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__filterPlaceholder() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__filterPlaceholder();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get__preferredBeatmapCharacteristic() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get__preferredBeatmapCharacteristic();

  constexpr ::System::Nullable_1<::GlobalNamespace::BeatmapDifficulty> const& __cordl_internal_get__preferredBeatmapDifficulty() const;

  constexpr ::System::Nullable_1<::GlobalNamespace::BeatmapDifficulty>& __cordl_internal_get__preferredBeatmapDifficulty();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__searchButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__searchButton();

  constexpr ::UnityW<::HMUI::InputFieldView> const& __cordl_internal_get__searchTextInputFieldView() const;

  constexpr ::UnityW<::HMUI::InputFieldView>& __cordl_internal_get__searchTextInputFieldView();

  constexpr ::GlobalNamespace::SongPackMasksModel*& __cordl_internal_get__songPackMasksModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPackMasksModel*> const& __cordl_internal_get__songPackMasksModel() const;

  constexpr ::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>*& __cordl_internal_get_didFilterBeatmapLevelCollectionEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>*> const&
  __cordl_internal_get_didFilterBeatmapLevelCollectionEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>*& __cordl_internal_get_didPressSearchButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>*> const&
  __cordl_internal_get_didPressSearchButtonEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>*& __cordl_internal_get_didStartLoadingEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>*> const& __cordl_internal_get_didStartLoadingEvent() const;

  constexpr void __cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value);

  constexpr void __cordl_internal_set__beatmapLevelPack(::GlobalNamespace::BeatmapLevelPack* value);

  constexpr void __cordl_internal_set__beatmapLevelPacks(::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> value);

  constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__clearFiltersButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__currentSearchFilter(::GlobalNamespace::LevelFilter value);

  constexpr void __cordl_internal_set__entitlementModel(::GlobalNamespace::IEntitlementModel* value);

  constexpr void __cordl_internal_set__filterParamsText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__filterPlaceholder(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__preferredBeatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  constexpr void __cordl_internal_set__preferredBeatmapDifficulty(::System::Nullable_1<::GlobalNamespace::BeatmapDifficulty> value);

  constexpr void __cordl_internal_set__searchButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__searchTextInputFieldView(::UnityW<::HMUI::InputFieldView> value);

  constexpr void __cordl_internal_set__songPackMasksModel(::GlobalNamespace::SongPackMasksModel* value);

  constexpr void __cordl_internal_set_didFilterBeatmapLevelCollectionEvent(::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>* value);

  constexpr void __cordl_internal_set_didPressSearchButtonEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>* value);

  constexpr void __cordl_internal_set_didStartLoadingEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>* value);

  /// @brief Method .ctor, addr 0x2425a5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFilterBeatmapLevelCollectionEvent, addr 0x24223d0, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFilterBeatmapLevelCollectionEvent(::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>* value);

  /// @brief Method add_didPressSearchButtonEvent, addr 0x2424e5c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didPressSearchButtonEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>* value);

  /// @brief Method add_didStartLoadingEvent, addr 0x2422480, size 0xb0, virtual false, abstract: false, final false
  inline void add_didStartLoadingEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>* value);

  /// @brief Method remove_didFilterBeatmapLevelCollectionEvent, addr 0x2422abc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFilterBeatmapLevelCollectionEvent(::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>* value);

  /// @brief Method remove_didPressSearchButtonEvent, addr 0x2424f0c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didPressSearchButtonEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>* value);

  /// @brief Method remove_didStartLoadingEvent, addr 0x2422b6c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didStartLoadingEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelSearchViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelSearchViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelSearchViewController(LevelSearchViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelSearchViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelSearchViewController(LevelSearchViewController const&) = delete;

  /// @brief Field _searchButton, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____searchButton;

  /// @brief Field _clearFiltersButton, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____clearFiltersButton;

  /// @brief Field _filterParamsText, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____filterParamsText;

  /// @brief Field _filterPlaceholder, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____filterPlaceholder;

  /// @brief Field _searchTextInputFieldView, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::HMUI::InputFieldView> ____searchTextInputFieldView;

  /// @brief Field _playerDataModel, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _songPackMasksModel, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::SongPackMasksModel* ____songPackMasksModel;

  /// @brief Field _entitlementModel, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::IEntitlementModel* ____entitlementModel;

  /// @brief Field _beatmapCharacteristicCollection, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollection* ____beatmapCharacteristicCollection;

  /// @brief Field didPressSearchButtonEvent, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>* ___didPressSearchButtonEvent;

  /// @brief Field didFilterBeatmapLevelCollectionEvent, offset: 0xc0, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>* ___didFilterBeatmapLevelCollectionEvent;

  /// @brief Field didStartLoadingEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>* ___didStartLoadingEvent;

  /// @brief Field _beatmapLevelPack, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPack* ____beatmapLevelPack;

  /// @brief Field _preferredBeatmapCharacteristic, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ____preferredBeatmapCharacteristic;

  /// @brief Field _preferredBeatmapDifficulty, offset: 0xe0, size: 0x8, def value: None
  ::System::Nullable_1<::GlobalNamespace::BeatmapDifficulty> ____preferredBeatmapDifficulty;

  /// @brief Field _currentSearchFilter, offset: 0xe8, size: 0x50, def value: None
  ::GlobalNamespace::LevelFilter ____currentSearchFilter;

  /// @brief Field _cancellationTokenSource, offset: 0x138, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  /// @brief Field _beatmapLevelPacks, offset: 0x140, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> ____beatmapLevelPacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelSearchViewController, 0x148>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____searchButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____clearFiltersButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____filterParamsText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____filterPlaceholder) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____searchTextInputFieldView) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____playerDataModel) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____songPackMasksModel) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____entitlementModel) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____beatmapCharacteristicCollection) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ___didPressSearchButtonEvent) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ___didFilterBeatmapLevelCollectionEvent) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ___didStartLoadingEvent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____beatmapLevelPack) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____preferredBeatmapCharacteristic) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____preferredBeatmapDifficulty) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____currentSearchFilter) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____cancellationTokenSource) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____beatmapLevelPacks) == 0x140, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelSearchViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelSearchViewController*, "", "LevelSearchViewController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelSearchViewController___RefreshAsync_d__34, "", "LevelSearchViewController/<RefreshAsync>d__34");
