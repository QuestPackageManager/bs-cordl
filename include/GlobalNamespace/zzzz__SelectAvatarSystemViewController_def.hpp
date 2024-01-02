#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectAvatarSystemViewController)
namespace GlobalNamespace {
struct __SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31;
}
namespace HMUI {
class __TableView__IDataSource;
}
namespace Zenject {
class DiContainer;
}
namespace HMUI {
class TableCell;
}
namespace BeatSaber::AvatarCore {
class AvatarSystemCollection;
}
namespace BeatSaber::AvatarCore {
class IAvatarSystemMetadata;
}
namespace GlobalNamespace {
class SelectAvatarSystemCell;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace HMUI {
class TableView;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace HMUI {
class HoverHint;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SelectAvatarSystemViewController;
}
namespace GlobalNamespace {
struct __SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SelectAvatarSystemViewController);
MARK_VAL_T(::GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31);
// Type: ::<ReloadContinueButtonInteractability>d__31
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3400)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 105
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(5746)) CS Name: ::SelectAvatarSystemViewController::<ReloadContinueButtonInteractability>d__31
struct CORDL_TYPE __SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22d9690, size 0x228, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22d98b8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::SelectAvatarSystemViewController*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                           ::GlobalNamespace::SelectAvatarSystemViewController* __4__this,
                                                                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::SelectAvatarSystemViewController* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SelectAvatarSystemViewController
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 216, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5747))
// CS Name: ::SelectAvatarSystemViewController*
class CORDL_TYPE SelectAvatarSystemViewController : public ::HMUI::ViewController {
public:
  // Declarations
  using _ReloadContinueButtonInteractability_d__31 = ::GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31;

  /// @brief Field _tableView, offset 0x70, size 0x8
  __declspec(property(get = __get__tableView, put = __set__tableView))::HMUI::TableView* _tableView;

  /// @brief Field _continueButton, offset 0x78, size 0x8
  __declspec(property(get = __get__continueButton, put = __set__continueButton))::UnityEngine::UI::Button* _continueButton;

  /// @brief Field _hoverHint, offset 0x80, size 0x8
  __declspec(property(get = __get__hoverHint, put = __set__hoverHint))::HMUI::HoverHint* _hoverHint;

  /// @brief Field _cellPrefab, offset 0x88, size 0x8
  __declspec(property(get = __get__cellPrefab, put = __set__cellPrefab))::GlobalNamespace::SelectAvatarSystemCell* _cellPrefab;

  /// @brief Field _container, offset 0x90, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _avatarSystemCollection, offset 0x98, size 0x8
  __declspec(property(get = __get__avatarSystemCollection, put = __set__avatarSystemCollection))::BeatSaber::AvatarCore::AvatarSystemCollection* _avatarSystemCollection;

  /// @brief Field _playerDataModel, offset 0xa0, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field didSetAvatarSystemPreferredEvent, offset 0xa8, size 0x8
  __declspec(property(get = __get_didSetAvatarSystemPreferredEvent,
                      put = __set_didSetAvatarSystemPreferredEvent))::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* didSetAvatarSystemPreferredEvent;

  /// @brief Field didRequestEditOfAvatarEvent, offset 0xb0, size 0x8
  __declspec(property(get = __get_didRequestEditOfAvatarEvent,
                      put = __set_didRequestEditOfAvatarEvent))::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* didRequestEditOfAvatarEvent;

  /// @brief Field didRequestCreationOfAvatarEvent, offset 0xb8, size 0x8
  __declspec(property(get = __get_didRequestCreationOfAvatarEvent,
                      put = __set_didRequestCreationOfAvatarEvent))::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* didRequestCreationOfAvatarEvent;

  /// @brief Field didPressContinueButtonEvent, offset 0xc0, size 0x8
  __declspec(property(get = __get_didPressContinueButtonEvent, put = __set_didPressContinueButtonEvent))::System::Action* didPressContinueButtonEvent;

  /// @brief Field _avatarSystems, offset 0xc8, size 0x8
  __declspec(property(get = __get__avatarSystems, put = __set__avatarSystems))::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* _avatarSystems;

  /// @brief Field _selectedAvatarSystem, offset 0xd0, size 0x8
  __declspec(property(get = __get__selectedAvatarSystem, put = __set__selectedAvatarSystem))::BeatSaber::AvatarCore::IAvatarSystemMetadata* _selectedAvatarSystem;

  __declspec(property(get = get_continueButtonVisible, put = set_continueButtonVisible)) bool continueButtonVisible;

  /// @brief Convert operator to "::HMUI::__TableView__IDataSource"
  constexpr operator ::HMUI::__TableView__IDataSource*() noexcept;

  constexpr ::HMUI::TableView*& __get__tableView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::TableView*> const& __get__tableView() const;

  constexpr void __set__tableView(::HMUI::TableView* value);

  constexpr ::UnityEngine::UI::Button*& __get__continueButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__continueButton() const;

  constexpr void __set__continueButton(::UnityEngine::UI::Button* value);

  constexpr ::HMUI::HoverHint*& __get__hoverHint();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverHint*> const& __get__hoverHint() const;

  constexpr void __set__hoverHint(::HMUI::HoverHint* value);

  constexpr ::GlobalNamespace::SelectAvatarSystemCell*& __get__cellPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SelectAvatarSystemCell*> const& __get__cellPrefab() const;

  constexpr void __set__cellPrefab(::GlobalNamespace::SelectAvatarSystemCell* value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& __get__avatarSystemCollection();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSystemCollection*> const& __get__avatarSystemCollection() const;

  constexpr void __set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*& __get_didSetAvatarSystemPreferredEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*> const& __get_didSetAvatarSystemPreferredEvent() const;

  constexpr void __set_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*& __get_didRequestEditOfAvatarEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*> const& __get_didRequestEditOfAvatarEvent() const;

  constexpr void __set_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  constexpr ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*& __get_didRequestCreationOfAvatarEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*> const& __get_didRequestCreationOfAvatarEvent() const;

  constexpr void __set_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  constexpr ::System::Action*& __get_didPressContinueButtonEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didPressContinueButtonEvent() const;

  constexpr void __set_didPressContinueButtonEvent(::System::Action* value);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*& __get__avatarSystems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*> const& __get__avatarSystems() const;

  constexpr void __set__avatarSystems(::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  constexpr ::BeatSaber::AvatarCore::IAvatarSystemMetadata*& __get__selectedAvatarSystem();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::IAvatarSystemMetadata*> const& __get__selectedAvatarSystem() const;

  constexpr void __set__selectedAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata* value);

  /// @brief Method add_didSetAvatarSystemPreferredEvent, addr 0x22d7f00, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method remove_didSetAvatarSystemPreferredEvent, addr 0x22d7fb0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSetAvatarSystemPreferredEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method add_didRequestEditOfAvatarEvent, addr 0x22d8060, size 0xb0, virtual false, abstract: false, final false
  inline void add_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method remove_didRequestEditOfAvatarEvent, addr 0x22d8110, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didRequestEditOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method add_didRequestCreationOfAvatarEvent, addr 0x22d81c0, size 0xb0, virtual false, abstract: false, final false
  inline void add_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method remove_didRequestCreationOfAvatarEvent, addr 0x22d8270, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didRequestCreationOfAvatarEvent(::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* value);

  /// @brief Method add_didPressContinueButtonEvent, addr 0x22d8320, size 0x9c, virtual false, abstract: false, final false
  inline void add_didPressContinueButtonEvent(::System::Action* value);

  /// @brief Method remove_didPressContinueButtonEvent, addr 0x22d83bc, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didPressContinueButtonEvent(::System::Action* value);

  /// @brief Method get_continueButtonVisible, addr 0x22d8458, size 0x28, virtual false, abstract: false, final false
  inline bool get_continueButtonVisible();

  /// @brief Method set_continueButtonVisible, addr 0x22d8480, size 0x30, virtual false, abstract: false, final false
  inline void set_continueButtonVisible(bool value);

  /// @brief Method Prewarm, addr 0x22d84b0, size 0x40, virtual false, abstract: false, final false
  inline void Prewarm(::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* avatarSystems,
                      ::BeatSaber::AvatarCore::IAvatarSystemMetadata* selectedAvatarSystem);

  /// @brief Method DidActivate, addr 0x22d8b5c, size 0x388, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x22d9294, size 0x10, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method SetSelectedAvatarSystem, addr 0x22d84f0, size 0x330, virtual false, abstract: false, final false
  inline void SetSelectedAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata* selectedAvatarSystem);

  /// @brief Method ReloadCreateEditButtonOfAvatarSystem, addr 0x22d8ee4, size 0x31c, virtual false, abstract: false, final false
  inline void ReloadCreateEditButtonOfAvatarSystem(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem);

  /// @brief Method SetAllCellsActive, addr 0x22d8820, size 0x33c, virtual false, abstract: false, final false
  inline void SetAllCellsActive(bool active);

  /// @brief Method ReloadContinueButtonInteractability, addr 0x22d9200, size 0x94, virtual false, abstract: false, final false
  inline void ReloadContinueButtonInteractability();

  /// @brief Method CellSize, addr 0x22d92a4, size 0xc, virtual true, abstract: false, final true
  inline float_t CellSize();

  /// @brief Method NumberOfCells, addr 0x22d92b0, size 0xa0, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method CellForIdx, addr 0x22d9350, size 0x2b8, virtual true, abstract: false, final true
  inline ::HMUI::TableCell* CellForIdx(::HMUI::TableView* tableView, int32_t idx);

  /// @brief Method HandleLoadedSelectionViewDidPressPreferredButton, addr 0x22d9608, size 0x2c, virtual false, abstract: false, final false
  inline void HandleLoadedSelectionViewDidPressPreferredButton(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem);

  /// @brief Method HandleLoadedSelectionViewDidPressEditButton, addr 0x22d9634, size 0x1c, virtual false, abstract: false, final false
  inline void HandleLoadedSelectionViewDidPressEditButton(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem);

  /// @brief Method HandleLoadedSelectionViewDidPressCreateButton, addr 0x22d9650, size 0x1c, virtual false, abstract: false, final false
  inline void HandleLoadedSelectionViewDidPressCreateButton(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem);

  static inline ::GlobalNamespace::SelectAvatarSystemViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22d966c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__26_0, addr 0x22d9674, size 0x1c, virtual false, abstract: false, final false
  inline void _DidActivate_b__26_0();

  // Ctor Parameters [CppParam { name: "", ty: "SelectAvatarSystemViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectAvatarSystemViewController(SelectAvatarSystemViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectAvatarSystemViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectAvatarSystemViewController(SelectAvatarSystemViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectAvatarSystemViewController();

public:
  /// @brief Field _tableView, offset: 0x70, size: 0x8, def value: None
  ::HMUI::TableView* ____tableView;

  /// @brief Field _continueButton, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____continueButton;

  /// @brief Field _hoverHint, offset: 0x80, size: 0x8, def value: None
  ::HMUI::HoverHint* ____hoverHint;

  /// @brief Field _cellPrefab, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::SelectAvatarSystemCell* ____cellPrefab;

  /// @brief Field _container, offset: 0x90, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _avatarSystemCollection, offset: 0x98, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::AvatarSystemCollection* ____avatarSystemCollection;

  /// @brief Field _playerDataModel, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field didSetAvatarSystemPreferredEvent, offset: 0xa8, size: 0x8, def value: None
  ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* ___didSetAvatarSystemPreferredEvent;

  /// @brief Field didRequestEditOfAvatarEvent, offset: 0xb0, size: 0x8, def value: None
  ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* ___didRequestEditOfAvatarEvent;

  /// @brief Field didRequestCreationOfAvatarEvent, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* ___didRequestCreationOfAvatarEvent;

  /// @brief Field didPressContinueButtonEvent, offset: 0xc0, size: 0x8, def value: None
  ::System::Action* ___didPressContinueButtonEvent;

  /// @brief Field _avatarSystems, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* ____avatarSystems;

  /// @brief Field _selectedAvatarSystem, offset: 0xd0, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IAvatarSystemMetadata* ____selectedAvatarSystem;

  /// @brief Field kCellIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kCellIdentifier{ u"cellPrefab" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectAvatarSystemViewController, 0xd8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ____tableView) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ____continueButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ____hoverHint) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ____cellPrefab) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ____container) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ____avatarSystemCollection) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ____playerDataModel) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ___didSetAvatarSystemPreferredEvent) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ___didRequestEditOfAvatarEvent) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ___didRequestCreationOfAvatarEvent) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ___didPressContinueButtonEvent) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ____avatarSystems) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectAvatarSystemViewController, ____selectedAvatarSystem) == 0xd0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SelectAvatarSystemViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectAvatarSystemViewController*, "", "SelectAvatarSystemViewController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SelectAvatarSystemViewController___ReloadContinueButtonInteractability_d__31, "",
                       "SelectAvatarSystemViewController/<ReloadContinueButtonInteractability>d__31");
