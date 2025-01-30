#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectAvatarSystemViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableView_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectAvatarSystemViewController)
namespace BeatSaber::AvatarCore {
class AvatarSystemCollection;
}
namespace BeatSaber::AvatarCore {
class IAvatarSystemMetadata;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class SelectAvatarSystemCell;
}
namespace GlobalNamespace {
struct SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31;
}
namespace HMUI {
class HoverHint;
}
namespace HMUI {
class TableCell;
}
namespace HMUI {
class TableView;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class SelectAvatarSystemViewController;
}
namespace GlobalNamespace {
struct SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SelectAvatarSystemViewController);
MARK_VAL_T(::GlobalNamespace::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: SelectAvatarSystemViewController/<ReloadContinueButtonInteractability>d__31
struct CORDL_TYPE SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3afadd4, size 0x228, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3afaffc, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::SelectAvatarSystemViewController>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                        ::UnityW<::GlobalNamespace::SelectAvatarSystemViewController> __4__this,
                                                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4942 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SelectAvatarSystemViewController> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies HMUI.TableView::IDataSource, HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: SelectAvatarSystemViewController
class CORDL_TYPE SelectAvatarSystemViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using _ReloadContinueButtonInteractability_d__31 = ::GlobalNamespace::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31;

  /// @brief Field _avatarSystemCollection, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarSystemCollection, put = __cordl_internal_set__avatarSystemCollection)) ::BeatSaber::AvatarCore::AvatarSystemCollection* _avatarSystemCollection;

  /// @brief Field _avatarSystems, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarSystems,
                      put = __cordl_internal_set__avatarSystems)) ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* _avatarSystems;

  /// @brief Field _cellPrefab, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__cellPrefab, put = __cordl_internal_set__cellPrefab)) ::UnityW<::GlobalNamespace::SelectAvatarSystemCell> _cellPrefab;

  /// @brief Field _container, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _continueButton, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__continueButton, put = __cordl_internal_set__continueButton)) ::UnityW<::UnityEngine::UI::Button> _continueButton;

  /// @brief Field _hoverHint, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__hoverHint, put = __cordl_internal_set__hoverHint)) ::UnityW<::HMUI::HoverHint> _hoverHint;

  /// @brief Field _playerDataModel, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _selectedAvatarSystem, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedAvatarSystem, put = __cordl_internal_set__selectedAvatarSystem)) ::BeatSaber::AvatarCore::IAvatarSystemMetadata* _selectedAvatarSystem;

  /// @brief Field _tableView, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__tableView, put = __cordl_internal_set__tableView)) ::UnityW<::HMUI::TableView> _tableView;

  __declspec(property(get = get_continueButtonVisible, put = set_continueButtonVisible)) bool continueButtonVisible;

  /// @brief Field didPressContinueButtonEvent, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_didPressContinueButtonEvent, put = __cordl_internal_set_didPressContinueButtonEvent)) ::System::Action* didPressContinueButtonEvent;

  /// @brief Field didRequestCreationOfAvatarEvent, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_didRequestCreationOfAvatarEvent,
                      put = __cordl_internal_set_didRequestCreationOfAvatarEvent)) ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* didRequestCreationOfAvatarEvent;

  /// @brief Field didRequestEditOfAvatarEvent, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_didRequestEditOfAvatarEvent,
                      put = __cordl_internal_set_didRequestEditOfAvatarEvent)) ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* didRequestEditOfAvatarEvent;

  /// @brief Field didSetAvatarSystemPreferredEvent, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_didSetAvatarSystemPreferredEvent,
                      put = __cordl_internal_set_didSetAvatarSystemPreferredEvent)) ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* didSetAvatarSystemPreferredEvent;

  /// @brief Convert operator to "::HMUI::TableView_IDataSource"
  constexpr operator ::HMUI::TableView_IDataSource*() noexcept;

  /// @brief Method CellForIdx, addr 0x3afa810, size 0x294, virtual true, abstract: false, final true
  inline ::UnityW<::HMUI::TableCell> CellForIdx(::HMUI::TableView* tableView, int32_t idx);

  /// @brief Method CellSize, addr 0x3afa764, size 0xc, virtual true, abstract: false, final true
  inline float_t CellSize(int32_t idx);

  /// @brief Method DidActivate, addr 0x3af9dc0, size 0x388, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3afa4ec, size 0x10, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleLoadedSelectionViewDidPressCreateButton, addr 0x3afad94, size 0x1c, virtual false, abstract: false, final false
  inline void HandleLoadedSelectionViewDidPressCreateButton(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem);

  /// @brief Method HandleLoadedSelectionViewDidPressEditButton, addr 0x3afad78, size 0x1c, virtual false, abstract: false, final false
  inline void HandleLoadedSelectionViewDidPressEditButton(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem);

  /// @brief Method HandleLoadedSelectionViewDidPressPreferredButton, addr 0x3afad4c, size 0x2c, virtual false, abstract: false, final false
  inline void HandleLoadedSelectionViewDidPressPreferredButton(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem);

  static inline ::GlobalNamespace::SelectAvatarSystemViewController* New_ctor();

  /// @brief Method NumberOfCells, addr 0x3afa770, size 0xa0, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method Prewarm, addr 0x3af9720, size 0x48, virtual false, abstract: false, final false
  inline void Prewarm(::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* avatarSystems,
                      ::BeatSaber::AvatarCore::IAvatarSystemMetadata* selectedAvatarSystem);

  /// @brief Method ReloadContinueButtonInteractability, addr 0x3afa45c, size 0x90, virtual false, abstract: false, final false
  inline void ReloadContinueButtonInteractability();

  /// @brief Method ReloadCreateEditButtonOfAvatarSystem, addr 0x3afa148, size 0x314, virtual false, abstract: false, final false
  inline void ReloadCreateEditButtonOfAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem);

  /// @brief Method SetAllCellsActive, addr 0x3af9a90, size 0x330, virtual false, abstract: false, final false
  inline void SetAllCellsActive(bool active);

  /// @brief Method SetSelectedAvatarSystem, addr 0x3af9768, size 0x328, virtual false, abstract: false, final false
  inline void SetSelectedAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata* selectedAvatarSystem);

  /// @brief Method <DidActivate>b__26_0, addr 0x3afadb8, size 0x1c, virtual false, abstract: false, final false
  inline void _DidActivate_b__26_0();

  constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection* const& __cordl_internal_get__avatarSystemCollection() const;

  constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& __cordl_internal_get__avatarSystemCollection();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* const& __cordl_internal_get__avatarSystems() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*& __cordl_internal_get__avatarSystems();

  constexpr ::UnityW<::GlobalNamespace::SelectAvatarSystemCell> const& __cordl_internal_get__cellPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::SelectAvatarSystemCell>& __cordl_internal_get__cellPrefab();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__continueButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__continueButton();

  constexpr ::UnityW<::HMUI::HoverHint> const& __cordl_internal_get__hoverHint() const;

  constexpr ::UnityW<::HMUI::HoverHint>& __cordl_internal_get__hoverHint();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata* const& __cordl_internal_get__selectedAvatarSystem() const;

  constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata*& __cordl_internal_get__selectedAvatarSystem();

  constexpr ::UnityW<::HMUI::TableView> const& __cordl_internal_get__tableView() const;

  constexpr ::UnityW<::HMUI::TableView>& __cordl_internal_get__tableView();

  constexpr ::System::Action* const& __cordl_internal_get_didPressContinueButtonEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didPressContinueButtonEvent();

  constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* const& __cordl_internal_get_didRequestCreationOfAvatarEvent() const;

  constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*& __cordl_internal_get_didRequestCreationOfAvatarEvent();

  constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* const& __cordl_internal_get_didRequestEditOfAvatarEvent() const;

  constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*& __cordl_internal_get_didRequestEditOfAvatarEvent();

  constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* const& __cordl_internal_get_didSetAvatarSystemPreferredEvent() const;

  constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*& __cordl_internal_get_didSetAvatarSystemPreferredEvent();

  constexpr void __cordl_internal_set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value);

  constexpr void __cordl_internal_set__avatarSystems(::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  constexpr void __cordl_internal_set__cellPrefab(::UnityW<::GlobalNamespace::SelectAvatarSystemCell> value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__continueButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__hoverHint(::UnityW<::HMUI::HoverHint> value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__selectedAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata* value);

  constexpr void __cordl_internal_set__tableView(::UnityW<::HMUI::TableView> value);

  constexpr void __cordl_internal_set_didPressContinueButtonEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  constexpr void __cordl_internal_set_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  constexpr void __cordl_internal_set_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method .ctor, addr 0x3afadb0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didPressContinueButtonEvent, addr 0x3af9590, size 0x9c, virtual false, abstract: false, final false
  inline void add_didPressContinueButtonEvent(::System::Action* value);

  /// @brief Method add_didRequestCreationOfAvatarEvent, addr 0x3af9430, size 0xb0, virtual false, abstract: false, final false
  inline void add_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method add_didRequestEditOfAvatarEvent, addr 0x3af92d0, size 0xb0, virtual false, abstract: false, final false
  inline void add_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method add_didSetAvatarSystemPreferredEvent, addr 0x3af9170, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method get_continueButtonVisible, addr 0x3af96c8, size 0x28, virtual false, abstract: false, final false
  inline bool get_continueButtonVisible();

  /// @brief Convert to "::HMUI::TableView_IDataSource"
  constexpr ::HMUI::TableView_IDataSource* i___HMUI__TableView_IDataSource() noexcept;

  /// @brief Method remove_didPressContinueButtonEvent, addr 0x3af962c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didPressContinueButtonEvent(::System::Action* value);

  /// @brief Method remove_didRequestCreationOfAvatarEvent, addr 0x3af94e0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method remove_didRequestEditOfAvatarEvent, addr 0x3af9380, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method remove_didSetAvatarSystemPreferredEvent, addr 0x3af9220, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method set_continueButtonVisible, addr 0x3af96f0, size 0x30, virtual false, abstract: false, final false
  inline void set_continueButtonVisible(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectAvatarSystemViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectAvatarSystemViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectAvatarSystemViewController(SelectAvatarSystemViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectAvatarSystemViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectAvatarSystemViewController(SelectAvatarSystemViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4943 };

  /// @brief Field kCellIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kCellIdentifier{ u"cellPrefab" };

  /// @brief Field _tableView, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HMUI::TableView> ____tableView;

  /// @brief Field _continueButton, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____continueButton;

  /// @brief Field _hoverHint, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::HMUI::HoverHint> ____hoverHint;

  /// @brief Field _cellPrefab, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SelectAvatarSystemCell> ____cellPrefab;

  /// @brief Field _container, offset: 0x98, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _avatarSystemCollection, offset: 0xa0, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::AvatarSystemCollection* ____avatarSystemCollection;

  /// @brief Field _playerDataModel, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field didSetAvatarSystemPreferredEvent, offset: 0xb0, size: 0x8, def value: None
  ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* ___didSetAvatarSystemPreferredEvent;

  /// @brief Field didRequestEditOfAvatarEvent, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* ___didRequestEditOfAvatarEvent;

  /// @brief Field didRequestCreationOfAvatarEvent, offset: 0xc0, size: 0x8, def value: None
  ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* ___didRequestCreationOfAvatarEvent;

  /// @brief Field didPressContinueButtonEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action* ___didPressContinueButtonEvent;

  /// @brief Field _avatarSystems, offset: 0xd0, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* ____avatarSystems;

  /// @brief Field _selectedAvatarSystem, offset: 0xd8, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IAvatarSystemMetadata* ____selectedAvatarSystem;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ____tableView) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ____continueButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ____hoverHint) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ____cellPrefab) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ____container) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ____avatarSystemCollection) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ____playerDataModel) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ___didSetAvatarSystemPreferredEvent) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ___didRequestEditOfAvatarEvent) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ___didRequestCreationOfAvatarEvent) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ___didPressContinueButtonEvent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ____avatarSystems) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ____selectedAvatarSystem) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectAvatarSystemViewController, 0xe0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SelectAvatarSystemViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectAvatarSystemViewController*, "", "SelectAvatarSystemViewController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectAvatarSystemViewController__ReloadContinueButtonInteractability_d__31, "",
                       "SelectAvatarSystemViewController/<ReloadContinueButtonInteractability>d__31");
