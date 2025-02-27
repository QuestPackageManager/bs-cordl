#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelSearchViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__LevelFilter_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
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
struct LevelSearchViewController__RefreshAsync_d__35;
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
class UIKeyboardManager;
}
namespace HMUI {
class InputFieldView;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
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
struct LevelSearchViewController__RefreshAsync_d__35;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelSearchViewController);
MARK_VAL_T(::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__35);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: LevelSearchViewController/<RefreshAsync>d__35
struct CORDL_TYPE LevelSearchViewController__RefreshAsync_d__35 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3b71f98, size 0x904, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3b7289c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelSearchViewController__RefreshAsync_d__35();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LevelSearchViewController>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::BeatmapLevel*,::Array<::GlobalNamespace::BeatmapLevel*>*>>", modifiers: "", def_value: None }]
  constexpr LevelSearchViewController__RefreshAsync_d__35(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::LevelSearchViewController> __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5353 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelSearchViewController> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__35, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__35, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__35, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__35, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__35, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapDifficulty, HMUI.ViewController, LevelFilter, System.Nullable`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelSearchViewController
class CORDL_TYPE LevelSearchViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using _RefreshAsync_d__35 = ::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__35;

  /// @brief Field _beatmapCharacteristicCollection, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicCollection,
                      put = __cordl_internal_set__beatmapCharacteristicCollection)) ::GlobalNamespace::BeatmapCharacteristicCollection* _beatmapCharacteristicCollection;

  /// @brief Field _beatmapLevelPack, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelPack, put = __cordl_internal_set__beatmapLevelPack)) ::GlobalNamespace::BeatmapLevelPack* _beatmapLevelPack;

  /// @brief Field _beatmapLevelPacks, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelPacks,
                      put = __cordl_internal_set__beatmapLevelPacks)) ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>
      _beatmapLevelPacks;

  /// @brief Field _cancellationTokenSource, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationTokenSource, put = __cordl_internal_set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _clearFiltersButton, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__clearFiltersButton, put = __cordl_internal_set__clearFiltersButton)) ::UnityW<::UnityEngine::UI::Button> _clearFiltersButton;

  /// @brief Field _currentSearchFilter, offset 0xf8, size 0x50
  __declspec(property(get = __cordl_internal_get__currentSearchFilter, put = __cordl_internal_set__currentSearchFilter)) ::GlobalNamespace::LevelFilter _currentSearchFilter;

  /// @brief Field _entitlementModel, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlementModel, put = __cordl_internal_set__entitlementModel)) ::GlobalNamespace::IEntitlementModel* _entitlementModel;

  /// @brief Field _filterParamsText, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__filterParamsText, put = __cordl_internal_set__filterParamsText)) ::UnityW<::TMPro::TextMeshProUGUI> _filterParamsText;

  /// @brief Field _filterPlaceholder, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__filterPlaceholder, put = __cordl_internal_set__filterPlaceholder)) ::UnityW<::UnityEngine::GameObject> _filterPlaceholder;

  /// @brief Field _playerDataModel, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _preferredBeatmapCharacteristic, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__preferredBeatmapCharacteristic, put = __cordl_internal_set__preferredBeatmapCharacteristic)) ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>
      _preferredBeatmapCharacteristic;

  /// @brief Field _preferredBeatmapDifficulty, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__preferredBeatmapDifficulty, put = __cordl_internal_set__preferredBeatmapDifficulty)) ::System::Nullable_1<::GlobalNamespace::BeatmapDifficulty>
      _preferredBeatmapDifficulty;

  /// @brief Field _searchButton, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__searchButton, put = __cordl_internal_set__searchButton)) ::UnityW<::UnityEngine::UI::Button> _searchButton;

  /// @brief Field _searchTextInputFieldView, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__searchTextInputFieldView, put = __cordl_internal_set__searchTextInputFieldView)) ::UnityW<::HMUI::InputFieldView> _searchTextInputFieldView;

  /// @brief Field _songPackMasksModel, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__songPackMasksModel, put = __cordl_internal_set__songPackMasksModel)) ::GlobalNamespace::SongPackMasksModel* _songPackMasksModel;

  /// @brief Field _uiKeyboardManager, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__uiKeyboardManager, put = __cordl_internal_set__uiKeyboardManager)) ::UnityW<::GlobalNamespace::UIKeyboardManager> _uiKeyboardManager;

  /// @brief Field didFilterBeatmapLevelCollectionEvent, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_didFilterBeatmapLevelCollectionEvent,
                      put = __cordl_internal_set_didFilterBeatmapLevelCollectionEvent)) ::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>*
      didFilterBeatmapLevelCollectionEvent;

  /// @brief Field didPressSearchButtonEvent, offset 0xc8, size 0x8
  __declspec(property(
      get = __cordl_internal_get_didPressSearchButtonEvent,
      put = __cordl_internal_set_didPressSearchButtonEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>* didPressSearchButtonEvent;

  /// @brief Field didStartLoadingEvent, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_didStartLoadingEvent,
                      put = __cordl_internal_set_didStartLoadingEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>* didStartLoadingEvent;

  /// @brief Method DidActivate, addr 0x3b71510, size 0x18c, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3b7169c, size 0xc8, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method IsFilteringPlayCounts, addr 0x3b713cc, size 0x8, virtual false, abstract: false, final false
  inline bool IsFilteringPlayCounts();

  /// @brief Method LocalizedLevelFilterParamsDescription, addr 0x3b71834, size 0x650, virtual false, abstract: false, final false
  static inline ::StringW LocalizedLevelFilterParamsDescription(::ByRef<::GlobalNamespace::LevelFilter> filter, ::GlobalNamespace::SongPackMasksModel* songPackMasksModel,
                                                                ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* characteristics,
                                                                bool isPlayerSensitivityForced);

  static inline ::GlobalNamespace::LevelSearchViewController* New_ctor();

  /// @brief Method Refresh, addr 0x3b7145c, size 0x4, virtual false, abstract: false, final false
  inline void Refresh();

  /// @brief Method Refresh, addr 0x3b714f0, size 0x20, virtual false, abstract: false, final false
  inline void Refresh(::ByRef<::GlobalNamespace::LevelFilter> filter);

  /// @brief Method RefreshAsync, addr 0x3b71460, size 0x90, virtual false, abstract: false, final false
  inline void RefreshAsync();

  /// @brief Method ResetAllFilterSettings, addr 0x3b713f8, size 0x64, virtual false, abstract: false, final false
  inline void ResetAllFilterSettings(bool onlyFavorites);

  /// @brief Method ResetFilter, addr 0x3b713dc, size 0x1c, virtual false, abstract: false, final false
  inline void ResetFilter(bool onlyFavorites);

  /// @brief Method ResetOptionFilterSettings, addr 0x3b7176c, size 0xac, virtual false, abstract: false, final false
  inline void ResetOptionFilterSettings(bool onlyFavorites);

  /// @brief Method ResetTextFilterSettings, addr 0x3b71764, size 0x8, virtual false, abstract: false, final false
  inline void ResetTextFilterSettings(::StringW text);

  /// @brief Method SearchTextInputFieldViewOnValueChanged, addr 0x3b71818, size 0x1c, virtual false, abstract: false, final false
  inline void SearchTextInputFieldViewOnValueChanged(::HMUI::InputFieldView* inputFieldView);

  /// @brief Method Setup, addr 0x3b713d4, size 0x8, virtual false, abstract: false, final false
  inline void Setup(::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> beatmapLevelPacks);

  /// @brief Method <DidActivate>b__30_0, addr 0x3b71f08, size 0x6c, virtual false, abstract: false, final false
  inline void _DidActivate_b__30_0();

  /// @brief Method <DidActivate>b__30_1, addr 0x3b71f74, size 0x24, virtual false, abstract: false, final false
  inline void _DidActivate_b__30_1();

  /// @brief Method <LocalizedLevelFilterParamsDescription>g__Append|37_0, addr 0x3b71e84, size 0x7c, virtual false, abstract: false, final false
  static inline void _LocalizedLevelFilterParamsDescription_g__Append_37_0(::System::Text::StringBuilder* sb, ::StringW value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* const& __cordl_internal_get__beatmapCharacteristicCollection() const;

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __cordl_internal_get__beatmapCharacteristicCollection();

  constexpr ::GlobalNamespace::BeatmapLevelPack* const& __cordl_internal_get__beatmapLevelPack() const;

  constexpr ::GlobalNamespace::BeatmapLevelPack*& __cordl_internal_get__beatmapLevelPack();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> const& __cordl_internal_get__beatmapLevelPacks() const;

  constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>& __cordl_internal_get__beatmapLevelPacks();

  constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cancellationTokenSource() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__clearFiltersButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__clearFiltersButton();

  constexpr ::GlobalNamespace::LevelFilter const& __cordl_internal_get__currentSearchFilter() const;

  constexpr ::GlobalNamespace::LevelFilter& __cordl_internal_get__currentSearchFilter();

  constexpr ::GlobalNamespace::IEntitlementModel* const& __cordl_internal_get__entitlementModel() const;

  constexpr ::GlobalNamespace::IEntitlementModel*& __cordl_internal_get__entitlementModel();

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

  constexpr ::GlobalNamespace::SongPackMasksModel* const& __cordl_internal_get__songPackMasksModel() const;

  constexpr ::GlobalNamespace::SongPackMasksModel*& __cordl_internal_get__songPackMasksModel();

  constexpr ::UnityW<::GlobalNamespace::UIKeyboardManager> const& __cordl_internal_get__uiKeyboardManager() const;

  constexpr ::UnityW<::GlobalNamespace::UIKeyboardManager>& __cordl_internal_get__uiKeyboardManager();

  constexpr ::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>* const& __cordl_internal_get_didFilterBeatmapLevelCollectionEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>*& __cordl_internal_get_didFilterBeatmapLevelCollectionEvent();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>* const& __cordl_internal_get_didPressSearchButtonEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>*& __cordl_internal_get_didPressSearchButtonEvent();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>* const& __cordl_internal_get_didStartLoadingEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>*& __cordl_internal_get_didStartLoadingEvent();

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

  constexpr void __cordl_internal_set__uiKeyboardManager(::UnityW<::GlobalNamespace::UIKeyboardManager> value);

  constexpr void __cordl_internal_set_didFilterBeatmapLevelCollectionEvent(::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>* value);

  constexpr void __cordl_internal_set_didPressSearchButtonEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>* value);

  constexpr void __cordl_internal_set_didStartLoadingEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>* value);

  /// @brief Method .ctor, addr 0x3b71f00, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFilterBeatmapLevelCollectionEvent, addr 0x3b7110c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFilterBeatmapLevelCollectionEvent(::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>* value);

  /// @brief Method add_didPressSearchButtonEvent, addr 0x3b70fac, size 0xb0, virtual false, abstract: false, final false
  inline void add_didPressSearchButtonEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>* value);

  /// @brief Method add_didStartLoadingEvent, addr 0x3b7126c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didStartLoadingEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>* value);

  /// @brief Method remove_didFilterBeatmapLevelCollectionEvent, addr 0x3b711bc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFilterBeatmapLevelCollectionEvent(::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>* value);

  /// @brief Method remove_didPressSearchButtonEvent, addr 0x3b7105c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didPressSearchButtonEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>* value);

  /// @brief Method remove_didStartLoadingEvent, addr 0x3b7131c, size 0xb0, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5354 };

  /// @brief Field _searchButton, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____searchButton;

  /// @brief Field _clearFiltersButton, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____clearFiltersButton;

  /// @brief Field _filterParamsText, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____filterParamsText;

  /// @brief Field _filterPlaceholder, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____filterPlaceholder;

  /// @brief Field _searchTextInputFieldView, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::HMUI::InputFieldView> ____searchTextInputFieldView;

  /// @brief Field _playerDataModel, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _songPackMasksModel, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::SongPackMasksModel* ____songPackMasksModel;

  /// @brief Field _entitlementModel, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::IEntitlementModel* ____entitlementModel;

  /// @brief Field _beatmapCharacteristicCollection, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollection* ____beatmapCharacteristicCollection;

  /// @brief Field _uiKeyboardManager, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::UIKeyboardManager> ____uiKeyboardManager;

  /// @brief Field didPressSearchButtonEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>* ___didPressSearchButtonEvent;

  /// @brief Field didFilterBeatmapLevelCollectionEvent, offset: 0xd0, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>* ___didFilterBeatmapLevelCollectionEvent;

  /// @brief Field didStartLoadingEvent, offset: 0xd8, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>* ___didStartLoadingEvent;

  /// @brief Field _beatmapLevelPack, offset: 0xe0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPack* ____beatmapLevelPack;

  /// @brief Field _preferredBeatmapCharacteristic, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ____preferredBeatmapCharacteristic;

  /// @brief Field _preferredBeatmapDifficulty, offset: 0xf0, size: 0x8, def value: None
  ::System::Nullable_1<::GlobalNamespace::BeatmapDifficulty> ____preferredBeatmapDifficulty;

  /// @brief Field _currentSearchFilter, offset: 0xf8, size: 0x50, def value: None
  ::GlobalNamespace::LevelFilter ____currentSearchFilter;

  /// @brief Field _cancellationTokenSource, offset: 0x148, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  /// @brief Field _beatmapLevelPacks, offset: 0x150, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> ____beatmapLevelPacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____searchButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____clearFiltersButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____filterParamsText) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____filterPlaceholder) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____searchTextInputFieldView) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____playerDataModel) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____songPackMasksModel) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____entitlementModel) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____beatmapCharacteristicCollection) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____uiKeyboardManager) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ___didPressSearchButtonEvent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ___didFilterBeatmapLevelCollectionEvent) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ___didStartLoadingEvent) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____beatmapLevelPack) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____preferredBeatmapCharacteristic) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____preferredBeatmapDifficulty) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____currentSearchFilter) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____cancellationTokenSource) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____beatmapLevelPacks) == 0x150, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelSearchViewController, 0x158>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelSearchViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelSearchViewController*, "", "LevelSearchViewController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__35, "", "LevelSearchViewController/<RefreshAsync>d__35");
