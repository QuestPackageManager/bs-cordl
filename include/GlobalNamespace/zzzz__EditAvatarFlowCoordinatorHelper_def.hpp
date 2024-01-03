#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EditAvatarFlowCoordinatorHelper)
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
namespace BeatSaber::AvatarCore {
struct __AvatarEditorFlowCoordinator__EditMode;
}
namespace BeatSaber::AvatarCore {
struct __AvatarEditorFlowCoordinator__FinishAction;
}
namespace GlobalNamespace {
class AvatarSystemSelectionFlowCoordinator;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
struct __AvatarSystemSelectionFlowCoordinator__FinishAction;
}
namespace GlobalNamespace {
struct __EditAvatarFlowCoordinatorHelper__FinishAction;
}
namespace GlobalNamespace {
struct __EditAvatarFlowCoordinatorHelper___Initialize_d__13;
}
namespace GlobalNamespace {
struct __EditAvatarFlowCoordinatorHelper___Show_d__12;
}
namespace HMUI {
class FlowCoordinator;
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
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
struct __EditAvatarFlowCoordinatorHelper__FinishAction;
}
namespace GlobalNamespace {
class EditAvatarFlowCoordinatorHelper;
}
namespace GlobalNamespace {
struct __EditAvatarFlowCoordinatorHelper___Initialize_d__13;
}
namespace GlobalNamespace {
struct __EditAvatarFlowCoordinatorHelper___Show_d__12;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction);
MARK_REF_PTR_T(::GlobalNamespace::EditAvatarFlowCoordinatorHelper);
MARK_VAL_T(::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13);
MARK_VAL_T(::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12);
// Type: ::FinishAction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5490))
// CS Name: ::EditAvatarFlowCoordinatorHelper::FinishAction
struct CORDL_TYPE __EditAvatarFlowCoordinatorHelper__FinishAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____EditAvatarFlowCoordinatorHelper__FinishAction_Unwrapped
  enum struct ____EditAvatarFlowCoordinatorHelper__FinishAction_Unwrapped : int32_t {
    __E_Continue = static_cast<int32_t>(0x0),
    __E_Back = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____EditAvatarFlowCoordinatorHelper__FinishAction_Unwrapped() const noexcept {
    return static_cast<____EditAvatarFlowCoordinatorHelper__FinishAction_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __EditAvatarFlowCoordinatorHelper__FinishAction(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EditAvatarFlowCoordinatorHelper__FinishAction();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Continue value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction const Continue;

  /// @brief Field Back value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction const Back;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<Show>d__12
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3400)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 105
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(5491)) CS Name: ::EditAvatarFlowCoordinatorHelper::<Show>d__12
struct CORDL_TYPE __EditAvatarFlowCoordinatorHelper___Show_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x22882d8, size 0x2b0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x228868c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::EditAvatarFlowCoordinatorHelper*",
  // modifiers: "", def_value: None }, CppParam { name: "parentFlowCoordinator", ty: "::HMUI::FlowCoordinator*", modifiers: "", def_value: None }, CppParam { name: "immediately", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "replaceTopViewController", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "backButtonVisible", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __EditAvatarFlowCoordinatorHelper___Show_d__12(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                           ::GlobalNamespace::EditAvatarFlowCoordinatorHelper* __4__this, ::HMUI::FlowCoordinator* parentFlowCoordinator, bool immediately,
                                                           bool replaceTopViewController, bool backButtonVisible, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EditAvatarFlowCoordinatorHelper___Show_d__12();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::EditAvatarFlowCoordinatorHelper* __4__this;

  /// @brief Field parentFlowCoordinator, offset: 0x30, size: 0x8, def value: None
  ::HMUI::FlowCoordinator* parentFlowCoordinator;

  /// @brief Field immediately, offset: 0x38, size: 0x1, def value: None
  bool immediately;

  /// @brief Field replaceTopViewController, offset: 0x39, size: 0x1, def value: None
  bool replaceTopViewController;

  /// @brief Field backButtonVisible, offset: 0x3a, size: 0x1, def value: None
  bool backButtonVisible;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12, parentFlowCoordinator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12, immediately) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12, replaceTopViewController) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12, backButtonVisible) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<Initialize>d__13
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15172)), TypeDefinitionIndex(TypeDefinitionIndex(3400)), TypeDefinitionIndex(TypeDefinitionIndex(3394)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 5064 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(5492)) CS Name:
// ::EditAvatarFlowCoordinatorHelper::<Initialize>d__13
struct CORDL_TYPE __EditAvatarFlowCoordinatorHelper___Initialize_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x2288698, size 0x494, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2288b2c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::EditAvatarFlowCoordinatorHelper*",
  // modifiers: "", def_value: None }, CppParam { name: "_avatarSystem_5__2", ty: "::BeatSaber::AvatarCore::IAvatarSystem*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*>", modifiers: "", def_value: None }]
  constexpr __EditAvatarFlowCoordinatorHelper___Initialize_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                 ::GlobalNamespace::EditAvatarFlowCoordinatorHelper* __4__this, ::BeatSaber::AvatarCore::IAvatarSystem* _avatarSystem_5__2,
                                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __EditAvatarFlowCoordinatorHelper___Initialize_d__13();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::EditAvatarFlowCoordinatorHelper* __4__this;

  /// @brief Field <avatarSystem>5__2, offset: 0x30, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::IAvatarSystem* _avatarSystem_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13, _avatarSystem_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::EditAvatarFlowCoordinatorHelper
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5493))
// CS Name: ::EditAvatarFlowCoordinatorHelper*
class CORDL_TYPE EditAvatarFlowCoordinatorHelper : public ::System::Object {
public:
  // Declarations
  using _Initialize_d__13 = ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13;

  using _Show_d__12 = ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12;

  using FinishAction = ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction;

  /// @brief Field _avatarSystemSelectionFlowCoordinator, offset 0x10, size 0x8
  __declspec(property(get = __get__avatarSystemSelectionFlowCoordinator,
                      put = __set__avatarSystemSelectionFlowCoordinator))::GlobalNamespace::AvatarSystemSelectionFlowCoordinator* _avatarSystemSelectionFlowCoordinator;

  /// @brief Field _playerDataModel, offset 0x18, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _avatarSystemCollection, offset 0x20, size 0x8
  __declspec(property(get = __get__avatarSystemCollection, put = __set__avatarSystemCollection))::BeatSaber::AvatarCore::AvatarSystemCollection* _avatarSystemCollection;

  /// @brief Field _container, offset 0x28, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field didFinishEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_didFinishEvent,
                      put = __set_didFinishEvent))::System::Action_2<::HMUI::FlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>* didFinishEvent;

  /// @brief Field _parentFlowCoordinator, offset 0x38, size 0x8
  __declspec(property(get = __get__parentFlowCoordinator, put = __set__parentFlowCoordinator))::HMUI::FlowCoordinator* _parentFlowCoordinator;

  /// @brief Field _singleAvatarEditorFlowCoordinator, offset 0x40, size 0x8
  __declspec(property(get = __get__singleAvatarEditorFlowCoordinator,
                      put = __set__singleAvatarEditorFlowCoordinator))::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator* _singleAvatarEditorFlowCoordinator;

  __declspec(property(get = get__hasOnlyOneAvatarSystem)) bool _hasOnlyOneAvatarSystem;

  constexpr ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*& __get__avatarSystemSelectionFlowCoordinator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarSystemSelectionFlowCoordinator*> const& __get__avatarSystemSelectionFlowCoordinator() const;

  constexpr void __set__avatarSystemSelectionFlowCoordinator(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& __get__avatarSystemCollection();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSystemCollection*> const& __get__avatarSystemCollection() const;

  constexpr void __set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value);

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::System::Action_2<::HMUI::FlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::HMUI::FlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>*> const& __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action_2<::HMUI::FlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>* value);

  constexpr ::HMUI::FlowCoordinator*& __get__parentFlowCoordinator();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> const& __get__parentFlowCoordinator() const;

  constexpr void __set__parentFlowCoordinator(::HMUI::FlowCoordinator* value);

  constexpr ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*& __get__singleAvatarEditorFlowCoordinator();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator*> const& __get__singleAvatarEditorFlowCoordinator() const;

  constexpr void __set__singleAvatarEditorFlowCoordinator(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator* value);

  /// @brief Method add_didFinishEvent, addr 0x2287dc0, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<::HMUI::FlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>* value);

  /// @brief Method remove_didFinishEvent, addr 0x2287e70, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<::HMUI::FlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>* value);

  /// @brief Method get__hasOnlyOneAvatarSystem, addr 0x2287f20, size 0x60, virtual false, abstract: false, final false
  inline bool get__hasOnlyOneAvatarSystem();

  /// @brief Method Show, addr 0x2287f80, size 0xc0, virtual false, abstract: false, final false
  inline void Show(::HMUI::FlowCoordinator* parentFlowCoordinator, bool backButtonVisible, bool immediately, bool replaceTopViewController);

  /// @brief Method Initialize, addr 0x2288040, size 0x90, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method PresentAvatarEditorFlowCoordinator, addr 0x22880d0, size 0xec, virtual false, abstract: false, final false
  inline void PresentAvatarEditorFlowCoordinator(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator* flowCoordinator, ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__EditMode editMode,
                                                 ::HMUI::FlowCoordinator* parentFlowCoordinator, bool immediately, bool replaceTopViewController);

  /// @brief Method HandleAvatarEditorFlowCoordinatorDidFinish, addr 0x22881bc, size 0xcc, virtual false, abstract: false, final false
  inline void HandleAvatarEditorFlowCoordinatorDidFinish(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator* flowCoordinator, ::BeatSaber::AvatarCore::IAvatarSystemMetadata* avatarSystem,
                                                         ::BeatSaber::AvatarCore::__AvatarEditorFlowCoordinator__FinishAction finishAction);

  /// @brief Method HandleAvatarSystemSelectionFlowCoordinatorDidFinish, addr 0x2288288, size 0x48, virtual false, abstract: false, final false
  inline void HandleAvatarSystemSelectionFlowCoordinatorDidFinish(::GlobalNamespace::AvatarSystemSelectionFlowCoordinator* flowCoordinator,
                                                                  ::GlobalNamespace::__AvatarSystemSelectionFlowCoordinator__FinishAction finishAction);

  static inline ::GlobalNamespace::EditAvatarFlowCoordinatorHelper* New_ctor();

  /// @brief Method .ctor, addr 0x22882d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EditAvatarFlowCoordinatorHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EditAvatarFlowCoordinatorHelper(EditAvatarFlowCoordinatorHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EditAvatarFlowCoordinatorHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EditAvatarFlowCoordinatorHelper(EditAvatarFlowCoordinatorHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EditAvatarFlowCoordinatorHelper();

public:
  /// @brief Field _avatarSystemSelectionFlowCoordinator, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::AvatarSystemSelectionFlowCoordinator* ____avatarSystemSelectionFlowCoordinator;

  /// @brief Field _playerDataModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _avatarSystemCollection, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::AvatarSystemCollection* ____avatarSystemCollection;

  /// @brief Field _container, offset: 0x28, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field didFinishEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_2<::HMUI::FlowCoordinator*, ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction>* ___didFinishEvent;

  /// @brief Field _parentFlowCoordinator, offset: 0x38, size: 0x8, def value: None
  ::HMUI::FlowCoordinator* ____parentFlowCoordinator;

  /// @brief Field _singleAvatarEditorFlowCoordinator, offset: 0x40, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator* ____singleAvatarEditorFlowCoordinator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EditAvatarFlowCoordinatorHelper, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper, ____avatarSystemSelectionFlowCoordinator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper, ____playerDataModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper, ____avatarSystemCollection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper, ____container) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper, ___didFinishEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper, ____parentFlowCoordinator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditAvatarFlowCoordinatorHelper, ____singleAvatarEditorFlowCoordinator) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction, "", "EditAvatarFlowCoordinatorHelper/FinishAction");
NEED_NO_BOX(::GlobalNamespace::EditAvatarFlowCoordinatorHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditAvatarFlowCoordinatorHelper*, "", "EditAvatarFlowCoordinatorHelper");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Initialize_d__13, "", "EditAvatarFlowCoordinatorHelper/<Initialize>d__13");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EditAvatarFlowCoordinatorHelper___Show_d__12, "", "EditAvatarFlowCoordinatorHelper/<Show>d__12");
