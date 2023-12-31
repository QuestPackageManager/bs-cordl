#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IBeatmapLevelCollection_def.hpp"
#include "GlobalNamespace/zzzz__LevelFilter_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
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
class IAdditionalContentModel;
}
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
namespace GlobalNamespace {
class IBeatmapLevelCollection;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
struct LevelFilter;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class SongPackMasksModel;
}
namespace GlobalNamespace {
class __LevelSearchViewController__BeatmapLevelPackCollection;
}
namespace GlobalNamespace {
struct __LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__31;
}
namespace HMUI {
class InputFieldView;
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
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
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
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelSearchViewController;
}
namespace GlobalNamespace {
class __LevelSearchViewController__BeatmapLevelPackCollection;
}
namespace GlobalNamespace {
struct __LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__31;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelSearchViewController);
MARK_REF_PTR_T(::GlobalNamespace::__LevelSearchViewController__BeatmapLevelPackCollection);
MARK_VAL_T(::GlobalNamespace::__LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__31);
// Type: ::BeatmapLevelPackCollection
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5670))
// CS Name: ::LevelSearchViewController::BeatmapLevelPackCollection*
class CORDL_TYPE __LevelSearchViewController__BeatmapLevelPackCollection : public ::System::Object {
public:
  // Declarations
  /// @brief Field <beatmapLevelCollection>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__beatmapLevelCollection_k__BackingField,
                      put = __set__beatmapLevelCollection_k__BackingField))::GlobalNamespace::IBeatmapLevelCollection* _beatmapLevelCollection_k__BackingField;

  __declspec(property(get = get_collectionName))::StringW collectionName;

  __declspec(property(get = get_coverImage))::UnityEngine::Sprite* coverImage;

  __declspec(property(get = get_smallCoverImage))::UnityEngine::Sprite* smallCoverImage;

  __declspec(property(get = get_beatmapLevelCollection, put = set_beatmapLevelCollection))::GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection;

  /// @brief Convert operator to "::GlobalNamespace::IAnnotatedBeatmapLevelCollection"
  constexpr operator ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IAnnotatedBeatmapLevelCollection"
  constexpr ::GlobalNamespace::IAnnotatedBeatmapLevelCollection* i___GlobalNamespace__IAnnotatedBeatmapLevelCollection() noexcept;

  constexpr ::GlobalNamespace::IBeatmapLevelCollection*& __get__beatmapLevelCollection_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelCollection*> const& __get__beatmapLevelCollection_k__BackingField() const;

  constexpr void __set__beatmapLevelCollection_k__BackingField(::GlobalNamespace::IBeatmapLevelCollection* value);

  /// @brief Method get_collectionName, addr 0x22c1fc8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_collectionName();

  /// @brief Method get_coverImage, addr 0x22c1fd0, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Sprite* get_coverImage();

  /// @brief Method get_smallCoverImage, addr 0x22c1fd8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Sprite* get_smallCoverImage();

  /// @brief Method get_beatmapLevelCollection, addr 0x22c1fe0, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::IBeatmapLevelCollection* get_beatmapLevelCollection();

  /// @brief Method set_beatmapLevelCollection, addr 0x22c1fe8, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmapLevelCollection(::GlobalNamespace::IBeatmapLevelCollection* value);

  static inline ::GlobalNamespace::__LevelSearchViewController__BeatmapLevelPackCollection* New_ctor(::GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection);

  /// @brief Method .ctor, addr 0x22c1ff0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection);

  // Ctor Parameters [CppParam { name: "", ty: "__LevelSearchViewController__BeatmapLevelPackCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LevelSearchViewController__BeatmapLevelPackCollection(__LevelSearchViewController__BeatmapLevelPackCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LevelSearchViewController__BeatmapLevelPackCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LevelSearchViewController__BeatmapLevelPackCollection(__LevelSearchViewController__BeatmapLevelPackCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelSearchViewController__BeatmapLevelPackCollection();

public:
  /// @brief Field <beatmapLevelCollection>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelCollection* ____beatmapLevelCollection_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelSearchViewController__BeatmapLevelPackCollection, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelSearchViewController__BeatmapLevelPackCollection, ____beatmapLevelCollection_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<UpdateBeatmapLevelPackCollectionAsync>d__31
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3400)), TypeDefinitionIndex(TypeDefinitionIndex(4344)), TypeDefinitionIndex(TypeDefinitionIndex(3394)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 888 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(5671)) CS Name:
// ::LevelSearchViewController::<UpdateBeatmapLevelPackCollectionAsync>d__31
struct CORDL_TYPE __LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__31 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x22c2018, size 0x88c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22c28a4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LevelSearchViewController*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelCollection*>", modifiers: "", def_value: None }]
  constexpr __LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__31(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                      ::GlobalNamespace::LevelSearchViewController* __4__this,
                                                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelCollection*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__31();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::LevelSearchViewController* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::IBeatmapLevelCollection*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__31, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__31, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__31, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__31, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__31, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelSearchViewController
// SizeInfo { instance_size: 328, native_size: -1, calculated_instance_size: 328, calculated_native_size: 328, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4402)), TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5672))
// CS Name: ::LevelSearchViewController*
class CORDL_TYPE LevelSearchViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using _UpdateBeatmapLevelPackCollectionAsync_d__31 = ::GlobalNamespace::__LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__31;

  using BeatmapLevelPackCollection = ::GlobalNamespace::__LevelSearchViewController__BeatmapLevelPackCollection;

  /// @brief Field _searchButton, offset 0x70, size 0x8
  __declspec(property(get = __get__searchButton, put = __set__searchButton))::UnityEngine::UI::Button* _searchButton;

  /// @brief Field _clearFiltersButton, offset 0x78, size 0x8
  __declspec(property(get = __get__clearFiltersButton, put = __set__clearFiltersButton))::UnityEngine::UI::Button* _clearFiltersButton;

  /// @brief Field _filterParamsText, offset 0x80, size 0x8
  __declspec(property(get = __get__filterParamsText, put = __set__filterParamsText))::TMPro::TextMeshProUGUI* _filterParamsText;

  /// @brief Field _filterPlaceholder, offset 0x88, size 0x8
  __declspec(property(get = __get__filterPlaceholder, put = __set__filterPlaceholder))::UnityEngine::GameObject* _filterPlaceholder;

  /// @brief Field _searchTextInputFieldView, offset 0x90, size 0x8
  __declspec(property(get = __get__searchTextInputFieldView, put = __set__searchTextInputFieldView))::HMUI::InputFieldView* _searchTextInputFieldView;

  /// @brief Field _playerDataModel, offset 0x98, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _songPackMasksModel, offset 0xa0, size 0x8
  __declspec(property(get = __get__songPackMasksModel, put = __set__songPackMasksModel))::GlobalNamespace::SongPackMasksModel* _songPackMasksModel;

  /// @brief Field _additionalContentModel, offset 0xa8, size 0x8
  __declspec(property(get = __get__additionalContentModel, put = __set__additionalContentModel))::GlobalNamespace::IAdditionalContentModel* _additionalContentModel;

  /// @brief Field _beatmapCharacteristicCollection, offset 0xb0, size 0x8
  __declspec(property(get = __get__beatmapCharacteristicCollection, put = __set__beatmapCharacteristicCollection))::GlobalNamespace::BeatmapCharacteristicCollection* _beatmapCharacteristicCollection;

  /// @brief Field didPressSearchButtonEvent, offset 0xb8, size 0x8
  __declspec(property(get = __get_didPressSearchButtonEvent,
                      put = __set_didPressSearchButtonEvent))::System::Action_2<::GlobalNamespace::LevelSearchViewController*, ::GlobalNamespace::LevelFilter>* didPressSearchButtonEvent;

  /// @brief Field didFilterBeatmapLevelCollectionEvent, offset 0xc0, size 0x8
  __declspec(property(get = __get_didFilterBeatmapLevelCollectionEvent,
                      put = __set_didFilterBeatmapLevelCollectionEvent))::System::Action_3<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::BeatmapCharacteristicSO*,
                                                                                           bool>* didFilterBeatmapLevelCollectionEvent;

  /// @brief Field didStartLoadingEvent, offset 0xc8, size 0x8
  __declspec(property(get = __get_didStartLoadingEvent, put = __set_didStartLoadingEvent))::System::Action_1<::GlobalNamespace::LevelSearchViewController*>* didStartLoadingEvent;

  /// @brief Field _beatmapLevelPackCollection, offset 0xd0, size 0x8
  __declspec(property(get = __get__beatmapLevelPackCollection,
                      put = __set__beatmapLevelPackCollection))::GlobalNamespace::__LevelSearchViewController__BeatmapLevelPackCollection* _beatmapLevelPackCollection;

  /// @brief Field _preferredBeatmapCharacteristic, offset 0xd8, size 0x8
  __declspec(property(get = __get__preferredBeatmapCharacteristic, put = __set__preferredBeatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* _preferredBeatmapCharacteristic;

  /// @brief Field _currentSearchFilter, offset 0xe0, size 0x50
  __declspec(property(get = __get__currentSearchFilter, put = __set__currentSearchFilter))::GlobalNamespace::LevelFilter _currentSearchFilter;

  /// @brief Field _onlyFavorites, offset 0x130, size 0x1
  __declspec(property(get = __get__onlyFavorites, put = __set__onlyFavorites)) bool _onlyFavorites;

  /// @brief Field _cancellationTokenSource, offset 0x138, size 0x8
  __declspec(property(get = __get__cancellationTokenSource, put = __set__cancellationTokenSource))::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field _beatmapLevelPacks, offset 0x140, size 0x8
  __declspec(property(get = __get__beatmapLevelPacks,
                      put = __set__beatmapLevelPacks))::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> _beatmapLevelPacks;

  constexpr ::UnityEngine::UI::Button*& __get__searchButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__searchButton() const;

  constexpr void __set__searchButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__clearFiltersButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__clearFiltersButton() const;

  constexpr void __set__clearFiltersButton(::UnityEngine::UI::Button* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__filterParamsText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__filterParamsText() const;

  constexpr void __set__filterParamsText(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::GameObject*& __get__filterPlaceholder();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__filterPlaceholder() const;

  constexpr void __set__filterPlaceholder(::UnityEngine::GameObject* value);

  constexpr ::HMUI::InputFieldView*& __get__searchTextInputFieldView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::InputFieldView*> const& __get__searchTextInputFieldView() const;

  constexpr void __set__searchTextInputFieldView(::HMUI::InputFieldView* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::GlobalNamespace::SongPackMasksModel*& __get__songPackMasksModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPackMasksModel*> const& __get__songPackMasksModel() const;

  constexpr void __set__songPackMasksModel(::GlobalNamespace::SongPackMasksModel* value);

  constexpr ::GlobalNamespace::IAdditionalContentModel*& __get__additionalContentModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> const& __get__additionalContentModel() const;

  constexpr void __set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __get__beatmapCharacteristicCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicCollection*> const& __get__beatmapCharacteristicCollection() const;

  constexpr void __set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value);

  constexpr ::System::Action_2<::GlobalNamespace::LevelSearchViewController*, ::GlobalNamespace::LevelFilter>*& __get_didPressSearchButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::LevelSearchViewController*, ::GlobalNamespace::LevelFilter>*> const& __get_didPressSearchButtonEvent() const;

  constexpr void __set_didPressSearchButtonEvent(::System::Action_2<::GlobalNamespace::LevelSearchViewController*, ::GlobalNamespace::LevelFilter>* value);

  constexpr ::System::Action_3<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::BeatmapCharacteristicSO*, bool>*& __get_didFilterBeatmapLevelCollectionEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::BeatmapCharacteristicSO*, bool>*> const&
  __get_didFilterBeatmapLevelCollectionEvent() const;

  constexpr void __set_didFilterBeatmapLevelCollectionEvent(::System::Action_3<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::BeatmapCharacteristicSO*, bool>* value);

  constexpr ::System::Action_1<::GlobalNamespace::LevelSearchViewController*>*& __get_didStartLoadingEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::LevelSearchViewController*>*> const& __get_didStartLoadingEvent() const;

  constexpr void __set_didStartLoadingEvent(::System::Action_1<::GlobalNamespace::LevelSearchViewController*>* value);

  constexpr ::GlobalNamespace::__LevelSearchViewController__BeatmapLevelPackCollection*& __get__beatmapLevelPackCollection();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__LevelSearchViewController__BeatmapLevelPackCollection*> const& __get__beatmapLevelPackCollection() const;

  constexpr void __set__beatmapLevelPackCollection(::GlobalNamespace::__LevelSearchViewController__BeatmapLevelPackCollection* value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& __get__preferredBeatmapCharacteristic();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& __get__preferredBeatmapCharacteristic() const;

  constexpr void __set__preferredBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value);

  constexpr ::GlobalNamespace::LevelFilter& __get__currentSearchFilter();

  constexpr ::GlobalNamespace::LevelFilter const& __get__currentSearchFilter() const;

  constexpr void __set__currentSearchFilter(::GlobalNamespace::LevelFilter value);

  constexpr bool& __get__onlyFavorites();

  constexpr bool const& __get__onlyFavorites() const;

  constexpr void __set__onlyFavorites(bool value);

  constexpr ::System::Threading::CancellationTokenSource*& __get__cancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __get__cancellationTokenSource() const;

  constexpr void __set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*>& __get__beatmapLevelPacks();

  constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> const& __get__beatmapLevelPacks() const;

  constexpr void __set__beatmapLevelPacks(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> value);

  /// @brief Method add_didPressSearchButtonEvent, addr 0x22c0fd8, size 0xb0, virtual false, abstract: false, final false
  inline void add_didPressSearchButtonEvent(::System::Action_2<::GlobalNamespace::LevelSearchViewController*, ::GlobalNamespace::LevelFilter>* value);

  /// @brief Method remove_didPressSearchButtonEvent, addr 0x22c1088, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didPressSearchButtonEvent(::System::Action_2<::GlobalNamespace::LevelSearchViewController*, ::GlobalNamespace::LevelFilter>* value);

  /// @brief Method add_didFilterBeatmapLevelCollectionEvent, addr 0x22be018, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFilterBeatmapLevelCollectionEvent(::System::Action_3<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::BeatmapCharacteristicSO*, bool>* value);

  /// @brief Method remove_didFilterBeatmapLevelCollectionEvent, addr 0x22be724, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFilterBeatmapLevelCollectionEvent(::System::Action_3<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::BeatmapCharacteristicSO*, bool>* value);

  /// @brief Method add_didStartLoadingEvent, addr 0x22be0c8, size 0xb0, virtual false, abstract: false, final false
  inline void add_didStartLoadingEvent(::System::Action_1<::GlobalNamespace::LevelSearchViewController*>* value);

  /// @brief Method remove_didStartLoadingEvent, addr 0x22be7d4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didStartLoadingEvent(::System::Action_1<::GlobalNamespace::LevelSearchViewController*>* value);

  /// @brief Method Setup, addr 0x22bdb80, size 0xc, virtual false, abstract: false, final false
  inline void Setup(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> beatmapLevelPacks);

  /// @brief Method ResetFilterParams, addr 0x22bef74, size 0x30, virtual false, abstract: false, final false
  inline void ResetFilterParams(bool onlyFavorites);

  /// @brief Method UpdateSearchLevelFilterParams, addr 0x22c1358, size 0x20, virtual false, abstract: false, final false
  inline void UpdateSearchLevelFilterParams(ByRef<::GlobalNamespace::LevelFilter> filter);

  /// @brief Method DidActivate, addr 0x22c137c, size 0x200, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x22c157c, size 0xc4, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method ResetCurrentFilterParams, addr 0x22c1138, size 0x118, virtual false, abstract: false, final false
  inline void ResetCurrentFilterParams();

  /// @brief Method UpdateBeatmapLevelPackCollectionAsync, addr 0x22c12c4, size 0x94, virtual false, abstract: false, final false
  inline void UpdateBeatmapLevelPackCollectionAsync();

  /// @brief Method SearchTextInputFieldViewOnValueChanged, addr 0x22c1640, size 0x1c, virtual false, abstract: false, final false
  inline void SearchTextInputFieldViewOnValueChanged(::HMUI::InputFieldView* inputFieldView);

  /// @brief Method UpdateCurrentFilterParams, addr 0x22c1250, size 0x74, virtual false, abstract: false, final false
  inline void UpdateCurrentFilterParams();

  /// @brief Method RefreshAfterIncreaseNumberOfGameplay, addr 0x22bf158, size 0x10, virtual false, abstract: false, final false
  inline void RefreshAfterIncreaseNumberOfGameplay();

  /// @brief Method Refresh, addr 0x22c1378, size 0x4, virtual false, abstract: false, final false
  inline void Refresh();

  /// @brief Method LocalizedLevelFilterParamsDescription, addr 0x22c165c, size 0x8e0, virtual false, abstract: false, final false
  inline ::StringW LocalizedLevelFilterParamsDescription(ByRef<::GlobalNamespace::LevelFilter> filter);

  static inline ::GlobalNamespace::LevelSearchViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22c1f3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__28_0, addr 0x22c1f44, size 0x6c, virtual false, abstract: false, final false
  inline void _DidActivate_b__28_0();

  /// @brief Method <DidActivate>b__28_1, addr 0x22c1fb0, size 0x18, virtual false, abstract: false, final false
  inline void _DidActivate_b__28_1();

  // Ctor Parameters [CppParam { name: "", ty: "LevelSearchViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelSearchViewController(LevelSearchViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelSearchViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelSearchViewController(LevelSearchViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelSearchViewController();

public:
  /// @brief Field _searchButton, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____searchButton;

  /// @brief Field _clearFiltersButton, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____clearFiltersButton;

  /// @brief Field _filterParamsText, offset: 0x80, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____filterParamsText;

  /// @brief Field _filterPlaceholder, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____filterPlaceholder;

  /// @brief Field _searchTextInputFieldView, offset: 0x90, size: 0x8, def value: None
  ::HMUI::InputFieldView* ____searchTextInputFieldView;

  /// @brief Field _playerDataModel, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _songPackMasksModel, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::SongPackMasksModel* ____songPackMasksModel;

  /// @brief Field _additionalContentModel, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::IAdditionalContentModel* ____additionalContentModel;

  /// @brief Field _beatmapCharacteristicCollection, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollection* ____beatmapCharacteristicCollection;

  /// @brief Field didPressSearchButtonEvent, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::LevelSearchViewController*, ::GlobalNamespace::LevelFilter>* ___didPressSearchButtonEvent;

  /// @brief Field didFilterBeatmapLevelCollectionEvent, offset: 0xc0, size: 0x8, def value: None
  ::System::Action_3<::GlobalNamespace::IAnnotatedBeatmapLevelCollection*, ::GlobalNamespace::BeatmapCharacteristicSO*, bool>* ___didFilterBeatmapLevelCollectionEvent;

  /// @brief Field didStartLoadingEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::LevelSearchViewController*>* ___didStartLoadingEvent;

  /// @brief Field _beatmapLevelPackCollection, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::__LevelSearchViewController__BeatmapLevelPackCollection* ____beatmapLevelPackCollection;

  /// @brief Field _preferredBeatmapCharacteristic, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicSO* ____preferredBeatmapCharacteristic;

  /// @brief Field _currentSearchFilter, offset: 0xe0, size: 0x50, def value: None
  ::GlobalNamespace::LevelFilter ____currentSearchFilter;

  /// @brief Field _onlyFavorites, offset: 0x130, size: 0x1, def value: None
  bool ____onlyFavorites;

  /// @brief Field _cancellationTokenSource, offset: 0x138, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  /// @brief Field _beatmapLevelPacks, offset: 0x140, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> ____beatmapLevelPacks;

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

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____additionalContentModel) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____beatmapCharacteristicCollection) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ___didPressSearchButtonEvent) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ___didFilterBeatmapLevelCollectionEvent) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ___didStartLoadingEvent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____beatmapLevelPackCollection) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____preferredBeatmapCharacteristic) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____currentSearchFilter) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____onlyFavorites) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____cancellationTokenSource) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelSearchViewController, ____beatmapLevelPacks) == 0x140, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelSearchViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelSearchViewController*, "", "LevelSearchViewController");
NEED_NO_BOX(::GlobalNamespace::__LevelSearchViewController__BeatmapLevelPackCollection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelSearchViewController__BeatmapLevelPackCollection*, "", "LevelSearchViewController/BeatmapLevelPackCollection");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LevelSearchViewController___UpdateBeatmapLevelPackCollectionAsync_d__31, "", "LevelSearchViewController/<UpdateBeatmapLevelPackCollectionAsync>d__31");
