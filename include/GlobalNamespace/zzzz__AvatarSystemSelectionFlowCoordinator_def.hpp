#pragma once
// IWYU pragma private; include "GlobalNamespace/AvatarSystemSelectionFlowCoordinator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarSystemSelectionFlowCoordinator)
namespace BeatSaber::AvatarCore {
struct AvatarEditorFlowCoordinator_FinishAction;
}
namespace BeatSaber::AvatarCore {
class AvatarEditorFlowCoordinator;
}
namespace BeatSaber::AvatarCore {
class AvatarSystemCollection;
}
namespace BeatSaber::AvatarCore {
struct AvatarSystemIdentifier;
}
namespace BeatSaber::AvatarCore {
class IAvatarSystemMetadata;
}
namespace GlobalNamespace {
struct AvatarSystemSelectionFlowCoordinator_FinishAction;
}
namespace GlobalNamespace {
struct AvatarSystemSelectionFlowCoordinator__Initialize_d__10;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class SelectAvatarSystemViewController;
}
namespace HMUI {
struct ViewController_AnimationType;
}
namespace HMUI {
class ViewController;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
struct AvatarSystemSelectionFlowCoordinator_FinishAction;
}
namespace GlobalNamespace {
class AvatarSystemSelectionFlowCoordinator;
}
namespace GlobalNamespace {
struct AvatarSystemSelectionFlowCoordinator__Initialize_d__10;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction);
MARK_REF_PTR_T(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator);
MARK_VAL_T(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__10);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: AvatarSystemSelectionFlowCoordinator/FinishAction
struct CORDL_TYPE AvatarSystemSelectionFlowCoordinator_FinishAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AvatarSystemSelectionFlowCoordinator_FinishAction_Unwrapped
  enum struct __AvatarSystemSelectionFlowCoordinator_FinishAction_Unwrapped : int32_t {
    __E_Continue = static_cast<int32_t>(0x0),
    __E_Back = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AvatarSystemSelectionFlowCoordinator_FinishAction_Unwrapped() const noexcept {
    return static_cast<__AvatarSystemSelectionFlowCoordinator_FinishAction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarSystemSelectionFlowCoordinator_FinishAction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AvatarSystemSelectionFlowCoordinator_FinishAction(int32_t value__) noexcept;

  /// @brief Field Back value: I32(1)
  static ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction const Back;

  /// @brief Field Continue value: I32(0)
  static ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction const Continue;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4783 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: AvatarSystemSelectionFlowCoordinator/<Initialize>d__10
struct CORDL_TYPE AvatarSystemSelectionFlowCoordinator__Initialize_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3c122b4, size 0x6d8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3c1298c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarSystemSelectionFlowCoordinator__Initialize_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "avatarSystemsMetadata", ty:
  // "::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap1", ty:
  // "::System::Collections::Generic::IEnumerator_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>*", modifiers: "", def_value: None }, CppParam { name: "_selectableAvatarSystemMetadata_5__3", ty:
  // "::BeatSaber::AvatarCore::IAvatarSystemMetadata*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>>", modifiers: "", def_value: None }]
  constexpr AvatarSystemSelectionFlowCoordinator__Initialize_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                   ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* avatarSystemsMetadata,
                                                                   ::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator> __4__this,
                                                                   ::System::Collections::Generic::IEnumerator_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* __7__wrap1,
                                                                   ::BeatSaber::AvatarCore::IAvatarSystemMetadata* _selectableAvatarSystemMetadata_5__3,
                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4784 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field avatarSystemsMetadata, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* avatarSystemsMetadata;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator> __4__this;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* __7__wrap1;

  /// @brief Field <selectableAvatarSystemMetadata>5__3, offset: 0x40, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IAvatarSystemMetadata* _selectableAvatarSystemMetadata_5__3;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__10, avatarSystemsMetadata) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__10, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__10, __7__wrap1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__10, _selectableAvatarSystemMetadata_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__10, __u__1) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__10, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies HMUI.FlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// CS Name: AvatarSystemSelectionFlowCoordinator
class CORDL_TYPE AvatarSystemSelectionFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using FinishAction = ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction;

  using _Initialize_d__10 = ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__10;

  /// @brief Field _avatarFlowCoordinators, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarFlowCoordinators, put = __cordl_internal_set__avatarFlowCoordinators)) ::System::Collections::Generic::Dictionary_2<
      ::BeatSaber::AvatarCore::AvatarSystemIdentifier, ::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>>* _avatarFlowCoordinators;

  /// @brief Field _avatarSystemCollection, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarSystemCollection, put = __cordl_internal_set__avatarSystemCollection)) ::BeatSaber::AvatarCore::AvatarSystemCollection* _avatarSystemCollection;

  /// @brief Field _container, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _continueButtonVisible, offset 0xe0, size 0x1
  __declspec(property(get = __cordl_internal_get__continueButtonVisible, put = __cordl_internal_set__continueButtonVisible)) bool _continueButtonVisible;

  /// @brief Field _playerDataModel, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _selectAvatarSystemViewController, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__selectAvatarSystemViewController,
                      put = __cordl_internal_set__selectAvatarSystemViewController)) ::UnityW<::GlobalNamespace::SelectAvatarSystemViewController>
      _selectAvatarSystemViewController;

  /// @brief Field didFinishEvent, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent,
                      put = __cordl_internal_set_didFinishEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator>,
                                                                                     ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction>* didFinishEvent;

  /// @brief Method BackButtonWasPressed, addr 0x3c12158, size 0x24, virtual true, abstract: false, final false
  inline void BackButtonWasPressed(::HMUI::ViewController* topViewController);

  /// @brief Method DidActivate, addr 0x3c11818, size 0x1f4, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3c11a0c, size 0x17c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleAvatarEditorFlowCoordinatorDidFinish, addr 0x3c1201c, size 0x118, virtual false, abstract: false, final false
  inline void HandleAvatarEditorFlowCoordinatorDidFinish(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator* flowCoordinator, ::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem,
                                                         ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction finishAction);

  /// @brief Method HandleSelectAvatarSystemViewControllerDidPressContinueButton, addr 0x3c12134, size 0x24, virtual false, abstract: false, final false
  inline void HandleSelectAvatarSystemViewControllerDidPressContinueButton();

  /// @brief Method HandleSelectAvatarSystemViewControllerDidRequestCreationOfAvatar, addr 0x3c11eac, size 0x170, virtual false, abstract: false, final false
  inline void HandleSelectAvatarSystemViewControllerDidRequestCreationOfAvatar(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem);

  /// @brief Method HandleSelectAvatarSystemViewControllerDidRequestEditOfAvatar, addr 0x3c11d3c, size 0x170, virtual false, abstract: false, final false
  inline void HandleSelectAvatarSystemViewControllerDidRequestEditOfAvatar(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem);

  /// @brief Method HandleSelectAvatarSystemViewControllerDidSetAvatarSystemPreferred, addr 0x3c11d38, size 0x4, virtual false, abstract: false, final false
  inline void HandleSelectAvatarSystemViewControllerDidSetAvatarSystemPreferred(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem);

  /// @brief Method Initialize, addr 0x3c11770, size 0x9c, virtual false, abstract: false, final false
  inline void Initialize(::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::AvatarCore::IAvatarSystemMetadata*>* avatarSystemsMetadata);

  static inline ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator* New_ctor();

  /// @brief Method SetAvatarSystemPreferred, addr 0x3c11c08, size 0x130, virtual false, abstract: false, final false
  inline void SetAvatarSystemPreferred(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem);

  /// @brief Method Setup, addr 0x3c1180c, size 0xc, virtual false, abstract: false, final false
  inline void Setup(bool continueButtonVisible);

  /// @brief Method TopViewControllerWillChange, addr 0x3c11b88, size 0x80, virtual true, abstract: false, final false
  inline void TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController, ::HMUI::ViewController_AnimationType animationType);

  /// @brief Method <Initialize>b__10_0, addr 0x3c121f8, size 0xbc, virtual false, abstract: false, final false
  inline bool _Initialize_b__10_0(::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem);

  constexpr ::System::Collections::Generic::Dictionary_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier, ::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>>* const&
  __cordl_internal_get__avatarFlowCoordinators() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier, ::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>>*&
  __cordl_internal_get__avatarFlowCoordinators();

  constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection* const& __cordl_internal_get__avatarSystemCollection() const;

  constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& __cordl_internal_get__avatarSystemCollection();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr bool const& __cordl_internal_get__continueButtonVisible() const;

  constexpr bool& __cordl_internal_get__continueButtonVisible();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::SelectAvatarSystemViewController> const& __cordl_internal_get__selectAvatarSystemViewController() const;

  constexpr ::UnityW<::GlobalNamespace::SelectAvatarSystemViewController>& __cordl_internal_get__selectAvatarSystemViewController();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator>, ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction>* const&
  __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator>, ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction>*&
  __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set__avatarFlowCoordinators(
      ::System::Collections::Generic::Dictionary_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier, ::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>>* value);

  constexpr void __cordl_internal_set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__continueButtonVisible(bool value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__selectAvatarSystemViewController(::UnityW<::GlobalNamespace::SelectAvatarSystemViewController> value);

  constexpr void __cordl_internal_set_didFinishEvent(
      ::System::Action_2<::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator>, ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction>* value);

  /// @brief Method .ctor, addr 0x3c1217c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x3c11610, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator>, ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction>* value);

  /// @brief Method remove_didFinishEvent, addr 0x3c116c0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator>, ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarSystemSelectionFlowCoordinator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarSystemSelectionFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarSystemSelectionFlowCoordinator(AvatarSystemSelectionFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarSystemSelectionFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarSystemSelectionFlowCoordinator(AvatarSystemSelectionFlowCoordinator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4785 };

  /// @brief Field _selectAvatarSystemViewController, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SelectAvatarSystemViewController> ____selectAvatarSystemViewController;

  /// @brief Field _avatarSystemCollection, offset: 0xb8, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::AvatarSystemCollection* ____avatarSystemCollection;

  /// @brief Field _playerDataModel, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _container, offset: 0xc8, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field didFinishEvent, offset: 0xd0, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator>, ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction>* ___didFinishEvent;

  /// @brief Field _avatarFlowCoordinators, offset: 0xd8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::BeatSaber::AvatarCore::AvatarSystemIdentifier, ::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>>* ____avatarFlowCoordinators;

  /// @brief Field _continueButtonVisible, offset: 0xe0, size: 0x1, def value: None
  bool ____continueButtonVisible;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator, ____selectAvatarSystemViewController) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator, ____avatarSystemCollection) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator, ____playerDataModel) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator, ____container) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator, ___didFinishEvent) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator, ____avatarFlowCoordinators) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator, ____continueButtonVisible) == 0xe0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator, 0xe8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction, "", "AvatarSystemSelectionFlowCoordinator/FinishAction");
NEED_NO_BOX(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*, "", "AvatarSystemSelectionFlowCoordinator");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator__Initialize_d__10, "", "AvatarSystemSelectionFlowCoordinator/<Initialize>d__10");
