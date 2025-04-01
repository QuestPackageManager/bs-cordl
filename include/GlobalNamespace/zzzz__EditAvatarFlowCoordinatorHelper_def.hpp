#pragma once
// IWYU pragma private; include "GlobalNamespace/EditAvatarFlowCoordinatorHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EditAvatarFlowCoordinatorHelper)
namespace BeatSaber::AvatarCore {
struct AvatarEditorFlowCoordinator_EditMode;
}
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
class IAvatarSystemMetadata;
}
namespace BeatSaber::AvatarCore {
class IAvatarSystem;
}
namespace GlobalNamespace {
struct AvatarSystemSelectionFlowCoordinator_FinishAction;
}
namespace GlobalNamespace {
class AvatarSystemSelectionFlowCoordinator;
}
namespace GlobalNamespace {
struct EditAvatarFlowCoordinatorHelper_FinishAction;
}
namespace GlobalNamespace {
struct EditAvatarFlowCoordinatorHelper__Initialize_d__13;
}
namespace GlobalNamespace {
struct EditAvatarFlowCoordinatorHelper__Show_d__12;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace HMUI {
class FlowCoordinator;
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
struct EditAvatarFlowCoordinatorHelper_FinishAction;
}
namespace GlobalNamespace {
class EditAvatarFlowCoordinatorHelper;
}
namespace GlobalNamespace {
struct EditAvatarFlowCoordinatorHelper__Initialize_d__13;
}
namespace GlobalNamespace {
struct EditAvatarFlowCoordinatorHelper__Show_d__12;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction);
MARK_REF_PTR_T(::GlobalNamespace::EditAvatarFlowCoordinatorHelper);
MARK_VAL_T(::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13);
MARK_VAL_T(::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: EditAvatarFlowCoordinatorHelper/FinishAction
struct CORDL_TYPE EditAvatarFlowCoordinatorHelper_FinishAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EditAvatarFlowCoordinatorHelper_FinishAction_Unwrapped
  enum struct __EditAvatarFlowCoordinatorHelper_FinishAction_Unwrapped : int32_t {
    __E_Continue = static_cast<int32_t>(0x0),
    __E_Back = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EditAvatarFlowCoordinatorHelper_FinishAction_Unwrapped() const noexcept {
    return static_cast<__EditAvatarFlowCoordinatorHelper_FinishAction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EditAvatarFlowCoordinatorHelper_FinishAction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EditAvatarFlowCoordinatorHelper_FinishAction(int32_t value__) noexcept;

  /// @brief Field Back value: I32(1)
  static ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction const Back;

  /// @brief Field Continue value: I32(0)
  static ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction const Continue;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4786 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EditAvatarFlowCoordinatorHelper/<Initialize>d__13
struct CORDL_TYPE EditAvatarFlowCoordinatorHelper__Initialize_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3c009b4, size 0x494, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3c00e48, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr EditAvatarFlowCoordinatorHelper__Initialize_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::EditAvatarFlowCoordinatorHelper*",
  // modifiers: "", def_value: None }, CppParam { name: "_avatarSystem_5__2", ty: "::BeatSaber::AvatarCore::IAvatarSystem*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>>", modifiers: "", def_value: None }]
  constexpr EditAvatarFlowCoordinatorHelper__Initialize_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                              ::GlobalNamespace::EditAvatarFlowCoordinatorHelper* __4__this, ::BeatSaber::AvatarCore::IAvatarSystem* _avatarSystem_5__2,
                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4787 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::EditAvatarFlowCoordinatorHelper* __4__this;

  /// @brief Field <avatarSystem>5__2, offset: 0x30, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IAvatarSystem* _avatarSystem_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13, _avatarSystem_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: EditAvatarFlowCoordinatorHelper/<Show>d__12
struct CORDL_TYPE EditAvatarFlowCoordinatorHelper__Show_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3c00e54, size 0x2a4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3c011f4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr EditAvatarFlowCoordinatorHelper__Show_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::EditAvatarFlowCoordinatorHelper*",
  // modifiers: "", def_value: None }, CppParam { name: "parentFlowCoordinator", ty: "::UnityW<::HMUI::FlowCoordinator>", modifiers: "", def_value: None }, CppParam { name: "immediately", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "replaceTopViewController", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "backButtonVisible", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr EditAvatarFlowCoordinatorHelper__Show_d__12(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                        ::GlobalNamespace::EditAvatarFlowCoordinatorHelper* __4__this, ::UnityW<::HMUI::FlowCoordinator> parentFlowCoordinator, bool immediately,
                                                        bool replaceTopViewController, bool backButtonVisible, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4788 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::EditAvatarFlowCoordinatorHelper* __4__this;

  /// @brief Field parentFlowCoordinator, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::HMUI::FlowCoordinator> parentFlowCoordinator;

  /// @brief Field immediately, offset: 0x38, size: 0x1, def value: None
  bool immediately;

  /// @brief Field replaceTopViewController, offset: 0x39, size: 0x1, def value: None
  bool replaceTopViewController;

  /// @brief Field backButtonVisible, offset: 0x3a, size: 0x1, def value: None
  bool backButtonVisible;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12, parentFlowCoordinator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12, immediately) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12, replaceTopViewController) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12, backButtonVisible) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EditAvatarFlowCoordinatorHelper
class CORDL_TYPE EditAvatarFlowCoordinatorHelper : public ::System::Object {
public:
  // Declarations
  using FinishAction = ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction;

  using _Initialize_d__13 = ::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13;

  using _Show_d__12 = ::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12;

  /// @brief Field _avatarSystemCollection, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarSystemCollection, put = __cordl_internal_set__avatarSystemCollection)) ::BeatSaber::AvatarCore::AvatarSystemCollection* _avatarSystemCollection;

  /// @brief Field _avatarSystemSelectionFlowCoordinator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarSystemSelectionFlowCoordinator,
                      put = __cordl_internal_set__avatarSystemSelectionFlowCoordinator)) ::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator>
      _avatarSystemSelectionFlowCoordinator;

  /// @brief Field _container, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  __declspec(property(get = get__hasOnlyOneAvatarSystem)) bool _hasOnlyOneAvatarSystem;

  /// @brief Field _parentFlowCoordinator, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__parentFlowCoordinator, put = __cordl_internal_set__parentFlowCoordinator)) ::UnityW<::HMUI::FlowCoordinator> _parentFlowCoordinator;

  /// @brief Field _playerDataModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _singleAvatarEditorFlowCoordinator, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__singleAvatarEditorFlowCoordinator,
                      put = __cordl_internal_set__singleAvatarEditorFlowCoordinator)) ::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>
      _singleAvatarEditorFlowCoordinator;

  /// @brief Field didFinishEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent,
                      put =
                          __cordl_internal_set_didFinishEvent)) ::System::Action_2<::UnityW<::HMUI::FlowCoordinator>, ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction>* didFinishEvent;

  /// @brief Method HandleAvatarEditorFlowCoordinatorDidFinish, addr 0x3c00890, size 0xd4, virtual false, abstract: false, final false
  inline void HandleAvatarEditorFlowCoordinatorDidFinish(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator* flowCoordinator, ::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem,
                                                         ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_FinishAction finishAction);

  /// @brief Method HandleAvatarSystemSelectionFlowCoordinatorDidFinish, addr 0x3c00964, size 0x48, virtual false, abstract: false, final false
  inline void HandleAvatarSystemSelectionFlowCoordinatorDidFinish(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator* flowCoordinator,
                                                                  ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator_FinishAction finishAction);

  /// @brief Method Initialize, addr 0x3c0071c, size 0x8c, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::EditAvatarFlowCoordinatorHelper* New_ctor();

  /// @brief Method PresentAvatarEditorFlowCoordinator, addr 0x3c007a8, size 0xe8, virtual false, abstract: false, final false
  inline void PresentAvatarEditorFlowCoordinator(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator* flowCoordinator, ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode editMode,
                                                 ::HMUI::FlowCoordinator* parentFlowCoordinator, bool immediately, bool replaceTopViewController);

  /// @brief Method Show, addr 0x3c00654, size 0xc8, virtual false, abstract: false, final false
  inline void Show(::HMUI::FlowCoordinator* parentFlowCoordinator, bool backButtonVisible, bool immediately, bool replaceTopViewController);

  constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection* const& __cordl_internal_get__avatarSystemCollection() const;

  constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& __cordl_internal_get__avatarSystemCollection();

  constexpr ::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator> const& __cordl_internal_get__avatarSystemSelectionFlowCoordinator() const;

  constexpr ::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator>& __cordl_internal_get__avatarSystemSelectionFlowCoordinator();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::UnityW<::HMUI::FlowCoordinator> const& __cordl_internal_get__parentFlowCoordinator() const;

  constexpr ::UnityW<::HMUI::FlowCoordinator>& __cordl_internal_get__parentFlowCoordinator();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator> const& __cordl_internal_get__singleAvatarEditorFlowCoordinator() const;

  constexpr ::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator>& __cordl_internal_get__singleAvatarEditorFlowCoordinator();

  constexpr ::System::Action_2<::UnityW<::HMUI::FlowCoordinator>, ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction>* const& __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_2<::UnityW<::HMUI::FlowCoordinator>, ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction>*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value);

  constexpr void __cordl_internal_set__avatarSystemSelectionFlowCoordinator(::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator> value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__parentFlowCoordinator(::UnityW<::HMUI::FlowCoordinator> value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__singleAvatarEditorFlowCoordinator(::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator> value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_2<::UnityW<::HMUI::FlowCoordinator>, ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction>* value);

  /// @brief Method .ctor, addr 0x3c009ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x3c00494, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<::UnityW<::HMUI::FlowCoordinator>, ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction>* value);

  /// @brief Method get__hasOnlyOneAvatarSystem, addr 0x3c005f4, size 0x60, virtual false, abstract: false, final false
  inline bool get__hasOnlyOneAvatarSystem();

  /// @brief Method remove_didFinishEvent, addr 0x3c00544, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<::UnityW<::HMUI::FlowCoordinator>, ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EditAvatarFlowCoordinatorHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EditAvatarFlowCoordinatorHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EditAvatarFlowCoordinatorHelper(EditAvatarFlowCoordinatorHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EditAvatarFlowCoordinatorHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EditAvatarFlowCoordinatorHelper(EditAvatarFlowCoordinatorHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4789 };

  /// @brief Field _avatarSystemSelectionFlowCoordinator, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator> ____avatarSystemSelectionFlowCoordinator;

  /// @brief Field _playerDataModel, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _avatarSystemCollection, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::AvatarSystemCollection* ____avatarSystemCollection;

  /// @brief Field _container, offset: 0x28, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field didFinishEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::HMUI::FlowCoordinator>, ::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction>* ___didFinishEvent;

  /// @brief Field _parentFlowCoordinator, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::HMUI::FlowCoordinator> ____parentFlowCoordinator;

  /// @brief Field _singleAvatarEditorFlowCoordinator, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator> ____singleAvatarEditorFlowCoordinator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper, ____avatarSystemSelectionFlowCoordinator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper, ____playerDataModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper, ____avatarSystemCollection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper, ____container) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper, ___didFinishEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper, ____parentFlowCoordinator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper, ____singleAvatarEditorFlowCoordinator) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EditAvatarFlowCoordinatorHelper, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditAvatarFlowCoordinatorHelper_FinishAction, "", "EditAvatarFlowCoordinatorHelper/FinishAction");
NEED_NO_BOX(::GlobalNamespace::EditAvatarFlowCoordinatorHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditAvatarFlowCoordinatorHelper*, "", "EditAvatarFlowCoordinatorHelper");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Initialize_d__13, "", "EditAvatarFlowCoordinatorHelper/<Initialize>d__13");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditAvatarFlowCoordinatorHelper__Show_d__12, "", "EditAvatarFlowCoordinatorHelper/<Show>d__12");
