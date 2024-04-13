#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SettingsNavigationController_def.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsFlowCoordinator)
namespace GlobalNamespace {
class IFileStorage;
}
namespace GlobalNamespace {
class MainSettingsMenuViewController;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class SettingsNavigationController;
}
namespace GlobalNamespace {
class SettingsSubMenuInfo;
}
namespace GlobalNamespace {
struct __SettingsFlowCoordinator__FinishAction;
}
namespace GlobalNamespace {
struct __SettingsFlowCoordinator___ApplySettingsAsync_d__15;
}
namespace GlobalNamespace {
struct __SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14;
}
namespace GlobalNamespace {
struct __SettingsNavigationController__FinishAction;
}
namespace HMUI {
class ViewController;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct __SettingsFlowCoordinator__FinishAction;
}
namespace GlobalNamespace {
class SettingsFlowCoordinator;
}
namespace GlobalNamespace {
struct __SettingsFlowCoordinator___ApplySettingsAsync_d__15;
}
namespace GlobalNamespace {
struct __SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__SettingsFlowCoordinator__FinishAction);
MARK_REF_PTR_T(::GlobalNamespace::SettingsFlowCoordinator);
MARK_VAL_T(::GlobalNamespace::__SettingsFlowCoordinator___ApplySettingsAsync_d__15);
MARK_VAL_T(::GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14);
// Type: ::FinishAction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SettingsFlowCoordinator::FinishAction
struct CORDL_TYPE __SettingsFlowCoordinator__FinishAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SettingsFlowCoordinator__FinishAction_Unwrapped
  enum struct ____SettingsFlowCoordinator__FinishAction_Unwrapped : int32_t {
    __E_Cancel = static_cast<int32_t>(0x0),
    __E_Ok = static_cast<int32_t>(0x1),
    __E_Apply = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SettingsFlowCoordinator__FinishAction_Unwrapped() const noexcept {
    return static_cast<____SettingsFlowCoordinator__FinishAction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SettingsFlowCoordinator__FinishAction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SettingsFlowCoordinator__FinishAction(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Apply value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction const Apply;

  /// @brief Field Cancel value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction const Cancel;

  /// @brief Field Ok value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction const Ok;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SettingsFlowCoordinator__FinishAction, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsFlowCoordinator__FinishAction, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<HandleSettingsNavigationControllerDidFinishAsync>d__14
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SettingsFlowCoordinator::<HandleSettingsNavigationControllerDidFinishAsync>d__14
struct CORDL_TYPE __SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x265b820, size 0x43c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x265bc5c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "finishAction", ty:
  // "::GlobalNamespace::__SettingsNavigationController__FinishAction", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::SettingsFlowCoordinator>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                               ::GlobalNamespace::__SettingsNavigationController__FinishAction finishAction,
                                                                                               ::UnityW<::GlobalNamespace::SettingsFlowCoordinator> __4__this,
                                                                                               ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field finishAction, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__SettingsNavigationController__FinishAction finishAction;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsFlowCoordinator> __4__this;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14, finishAction) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ApplySettingsAsync>d__15
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::SettingsFlowCoordinator::<ApplySettingsAsync>d__15
struct CORDL_TYPE __SettingsFlowCoordinator___ApplySettingsAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x265bc68, size 0x250, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x265beb8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SettingsFlowCoordinator___ApplySettingsAsync_d__15();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::SettingsFlowCoordinator>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __SettingsFlowCoordinator___ApplySettingsAsync_d__15(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                 ::UnityW<::GlobalNamespace::SettingsFlowCoordinator> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsFlowCoordinator> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SettingsFlowCoordinator___ApplySettingsAsync_d__15, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsFlowCoordinator___ApplySettingsAsync_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsFlowCoordinator___ApplySettingsAsync_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsFlowCoordinator___ApplySettingsAsync_d__15, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SettingsFlowCoordinator___ApplySettingsAsync_d__15, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SettingsFlowCoordinator
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SettingsFlowCoordinator*
class CORDL_TYPE SettingsFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using FinishAction = ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction;

  using _ApplySettingsAsync_d__15 = ::GlobalNamespace::__SettingsFlowCoordinator___ApplySettingsAsync_d__15;

  using _HandleSettingsNavigationControllerDidFinishAsync_d__14 = ::GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14;

  /// @brief Field _fileStorage, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__fileStorage, put = __cordl_internal_set__fileStorage))::GlobalNamespace::IFileStorage* _fileStorage;

  /// @brief Field _mainSettingsMenuViewController, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsMenuViewController,
                      put = __cordl_internal_set__mainSettingsMenuViewController))::UnityW<::GlobalNamespace::MainSettingsMenuViewController> _mainSettingsMenuViewController;

  /// @brief Field _mainSettingsModel, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsModel, put = __cordl_internal_set__mainSettingsModel))::UnityW<::GlobalNamespace::MainSettingsModelSO> _mainSettingsModel;

  /// @brief Field _selectedSettingsSubMenuInfoIdx, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__selectedSettingsSubMenuInfoIdx, put = setStaticF__selectedSettingsSubMenuInfoIdx)) int32_t _selectedSettingsSubMenuInfoIdx;

  /// @brief Field _settingsNavigationController, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsNavigationController,
                      put = __cordl_internal_set__settingsNavigationController))::UnityW<::GlobalNamespace::SettingsNavigationController> _settingsNavigationController;

  /// @brief Field didFinishEvent, offset 0xc8, size 0x8
  __declspec(property(
      get = __cordl_internal_get_didFinishEvent,
      put = __cordl_internal_set_didFinishEvent))::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>* didFinishEvent;

  /// @brief Method ApplySettingsAsync, addr 0x265b728, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ApplySettingsAsync();

  /// @brief Method CancelSettingsAsync, addr 0x265b7f0, size 0x28, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CancelSettingsAsync();

  /// @brief Method DidActivate, addr 0x265b1c8, size 0x2b0, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x265b478, size 0x10c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleDidSelectSettingsSubMenu, addr 0x265b61c, size 0x6c, virtual false, abstract: false, final false
  inline void HandleDidSelectSettingsSubMenu(::GlobalNamespace::SettingsSubMenuInfo* settingsSubMenuInfo, int32_t idx);

  /// @brief Method HandleSettingsNavigationControllerDidFinishAsync, addr 0x265b688, size 0xa0, virtual false, abstract: false, final false
  inline void HandleSettingsNavigationControllerDidFinishAsync(::GlobalNamespace::__SettingsNavigationController__FinishAction finishAction);

  static inline ::GlobalNamespace::SettingsFlowCoordinator* New_ctor();

  /// @brief Method ReplaceViewController, addr 0x265b588, size 0x94, virtual false, abstract: false, final false
  inline void ReplaceViewController(::HMUI::ViewController* viewController);

  /// @brief Method ShowSecretViewController, addr 0x265b584, size 0x4, virtual false, abstract: false, final false
  inline void ShowSecretViewController(::HMUI::ViewController* viewController);

  constexpr ::GlobalNamespace::IFileStorage*& __cordl_internal_get__fileStorage();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IFileStorage*> const& __cordl_internal_get__fileStorage() const;

  constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController> const& __cordl_internal_get__mainSettingsMenuViewController() const;

  constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController>& __cordl_internal_get__mainSettingsMenuViewController();

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO> const& __cordl_internal_get__mainSettingsModel() const;

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO>& __cordl_internal_get__mainSettingsModel();

  constexpr ::UnityW<::GlobalNamespace::SettingsNavigationController> const& __cordl_internal_get__settingsNavigationController() const;

  constexpr ::UnityW<::GlobalNamespace::SettingsNavigationController>& __cordl_internal_get__settingsNavigationController();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>*& __cordl_internal_get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>*> const&
  __cordl_internal_get_didFinishEvent() const;

  constexpr void __cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value);

  constexpr void __cordl_internal_set__mainSettingsMenuViewController(::UnityW<::GlobalNamespace::MainSettingsMenuViewController> value);

  constexpr void __cordl_internal_set__mainSettingsModel(::UnityW<::GlobalNamespace::MainSettingsModelSO> value);

  constexpr void __cordl_internal_set__settingsNavigationController(::UnityW<::GlobalNamespace::SettingsNavigationController> value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>* value);

  /// @brief Method .ctor, addr 0x265b818, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x264b4b8, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>* value);

  static inline int32_t getStaticF__selectedSettingsSubMenuInfoIdx();

  /// @brief Method remove_didFinishEvent, addr 0x264bce0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>* value);

  static inline void setStaticF__selectedSettingsSubMenuInfoIdx(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsFlowCoordinator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsFlowCoordinator(SettingsFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsFlowCoordinator(SettingsFlowCoordinator const&) = delete;

  /// @brief Field _mainSettingsModel, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsModelSO> ____mainSettingsModel;

  /// @brief Field _mainSettingsMenuViewController, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsMenuViewController> ____mainSettingsMenuViewController;

  /// @brief Field _settingsNavigationController, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsNavigationController> ____settingsNavigationController;

  /// @brief Field _fileStorage, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* ____fileStorage;

  /// @brief Field didFinishEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction>* ___didFinishEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SettingsFlowCoordinator, 0xd0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator, ____mainSettingsModel) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator, ____mainSettingsMenuViewController) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator, ____settingsNavigationController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator, ____fileStorage) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator, ___didFinishEvent) == 0xc8, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SettingsFlowCoordinator__FinishAction, "", "SettingsFlowCoordinator/FinishAction");
NEED_NO_BOX(::GlobalNamespace::SettingsFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SettingsFlowCoordinator*, "", "SettingsFlowCoordinator");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SettingsFlowCoordinator___ApplySettingsAsync_d__15, "", "SettingsFlowCoordinator/<ApplySettingsAsync>d__15");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SettingsFlowCoordinator___HandleSettingsNavigationControllerDidFinishAsync_d__14, "",
                       "SettingsFlowCoordinator/<HandleSettingsNavigationControllerDidFinishAsync>d__14");
