#pragma once
// IWYU pragma private; include "GlobalNamespace\SettingsFlowCoordinator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
#include "GlobalNamespace/zzzz__SettingsNavigationController_def.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SettingsFlowCoordinator)
namespace BeatSaber::GameSettings {
class ControllerProfilesModel;
}
namespace BeatSaber::GameSettings {
class ControllerProfilesSettingsViewController;
}
namespace GlobalNamespace {
class DropdownDialogPromptViewController;
}
namespace GlobalNamespace {
class IFileStorage;
}
namespace GlobalNamespace {
class MainSettingsMenuViewController;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class SettingsApplicatorSO;
}
namespace GlobalNamespace {
struct SettingsFlowCoordinator_FinishAction;
}
namespace GlobalNamespace {
struct SettingsFlowCoordinator__ApplySettingsAsync_d__28;
}
namespace GlobalNamespace {
struct SettingsFlowCoordinator__CancelSettingsAsync_d__29;
}
namespace GlobalNamespace {
struct SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace GlobalNamespace {
struct SettingsNavigationController_FinishAction;
}
namespace GlobalNamespace {
class SettingsNavigationController;
}
namespace GlobalNamespace {
class SettingsSubMenuInfo;
}
namespace HMUI {
class ViewController;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct SettingsFlowCoordinator_FinishAction;
}
namespace GlobalNamespace {
class SettingsFlowCoordinator;
}
namespace GlobalNamespace {
struct SettingsFlowCoordinator__ApplySettingsAsync_d__28;
}
namespace GlobalNamespace {
struct SettingsFlowCoordinator__CancelSettingsAsync_d__29;
}
namespace GlobalNamespace {
struct SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SettingsFlowCoordinator_FinishAction);
MARK_REF_T(::GlobalNamespace::SettingsFlowCoordinator*);
MARK_VAL_T(::GlobalNamespace::SettingsFlowCoordinator__ApplySettingsAsync_d__28);
MARK_VAL_T(::GlobalNamespace::SettingsFlowCoordinator__CancelSettingsAsync_d__29);
MARK_VAL_T(::GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SettingsFlowCoordinator_FinishAction, "", "SettingsFlowCoordinator/FinishAction");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SettingsFlowCoordinator*, "", "SettingsFlowCoordinator");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SettingsFlowCoordinator__ApplySettingsAsync_d__28, "", "SettingsFlowCoordinator/<ApplySettingsAsync>d__28");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SettingsFlowCoordinator__CancelSettingsAsync_d__29, "", "SettingsFlowCoordinator/<CancelSettingsAsync>d__29");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27, "",
                    "SettingsFlowCoordinator/<HandleSettingsNavigationControllerDidFinishAsync>d__27");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: SettingsFlowCoordinator/FinishAction
struct CORDL_TYPE SettingsFlowCoordinator_FinishAction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SettingsFlowCoordinator_FinishAction_Unwrapped
  enum struct __SettingsFlowCoordinator_FinishAction_Unwrapped : int32_t {
    __E_Cancel = static_cast<int32_t>(0x0),
    __E_Ok = static_cast<int32_t>(0x1),
    __E_Apply = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SettingsFlowCoordinator_FinishAction_Unwrapped() const noexcept {
    return static_cast<__SettingsFlowCoordinator_FinishAction_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsFlowCoordinator_FinishAction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SettingsFlowCoordinator_FinishAction(int32_t value__) noexcept;

  /// @brief Field Apply value: I32(2)
  static ::GlobalNamespace::SettingsFlowCoordinator_FinishAction const Apply;

  /// @brief Field Cancel value: I32(0)
  static ::GlobalNamespace::SettingsFlowCoordinator_FinishAction const Cancel;

  /// @brief Field Ok value: I32(1)
  static ::GlobalNamespace::SettingsFlowCoordinator_FinishAction const Ok;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6367 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator_FinishAction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SettingsFlowCoordinator_FinishAction) == 0x4, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: SettingsFlowCoordinator/<ApplySettingsAsync>d__28
struct CORDL_TYPE SettingsFlowCoordinator__ApplySettingsAsync_d__28 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5a0e3bc, size 0x47c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5a0e838, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsFlowCoordinator__ApplySettingsAsync_d__28();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::SettingsFlowCoordinator>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr SettingsFlowCoordinator__ApplySettingsAsync_d__28(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                              ::UnityW<::GlobalNamespace::SettingsFlowCoordinator> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6368 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsFlowCoordinator> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator__ApplySettingsAsync_d__28, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator__ApplySettingsAsync_d__28, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator__ApplySettingsAsync_d__28, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator__ApplySettingsAsync_d__28, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SettingsFlowCoordinator__ApplySettingsAsync_d__28) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: SettingsFlowCoordinator/<CancelSettingsAsync>d__29
struct CORDL_TYPE SettingsFlowCoordinator__CancelSettingsAsync_d__29 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5a0e8a4, size 0x3bc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5a0ec60, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsFlowCoordinator__CancelSettingsAsync_d__29();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::SettingsFlowCoordinator>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr SettingsFlowCoordinator__CancelSettingsAsync_d__29(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                               ::UnityW<::GlobalNamespace::SettingsFlowCoordinator> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6369 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsFlowCoordinator> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator__CancelSettingsAsync_d__29, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator__CancelSettingsAsync_d__29, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator__CancelSettingsAsync_d__29, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator__CancelSettingsAsync_d__29, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SettingsFlowCoordinator__CancelSettingsAsync_d__29) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies SettingsNavigationController::FinishAction, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: SettingsFlowCoordinator/<HandleSettingsNavigationControllerDidFinishAsync>d__27
struct CORDL_TYPE SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x5a0eccc, size 0x434, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x5a0f100, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "finishAction", ty:
  // "::GlobalNamespace::SettingsNavigationController_FinishAction", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::SettingsFlowCoordinator>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                            ::GlobalNamespace::SettingsNavigationController_FinishAction finishAction,
                                                                                            ::UnityW<::GlobalNamespace::SettingsFlowCoordinator> __4__this,
                                                                                            ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6370 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field finishAction, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::SettingsNavigationController_FinishAction finishAction;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsFlowCoordinator> __4__this;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27, finishAction) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatSaber.Settings.Settings, HMUI.FlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// CS Name: SettingsFlowCoordinator
class CORDL_TYPE SettingsFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using FinishAction = ::GlobalNamespace::SettingsFlowCoordinator_FinishAction;

  using _ApplySettingsAsync_d__28 = ::GlobalNamespace::SettingsFlowCoordinator__ApplySettingsAsync_d__28;

  using _CancelSettingsAsync_d__29 = ::GlobalNamespace::SettingsFlowCoordinator__CancelSettingsAsync_d__29;

  using _HandleSettingsNavigationControllerDidFinishAsync_d__27 = ::GlobalNamespace::SettingsFlowCoordinator__HandleSettingsNavigationControllerDidFinishAsync_d__27;

  /// @brief Field _controllerProfilesModel, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__controllerProfilesModel,
                      put = __cordl_internal_set__controllerProfilesModel)) ::BeatSaber::GameSettings::ControllerProfilesModel* _controllerProfilesModel;

  /// @brief Field _controllerProfilesViewController, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__controllerProfilesViewController,
                      put = __cordl_internal_set__controllerProfilesViewController)) ::UnityW<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController>
      _controllerProfilesViewController;

  /// @brief Field _dropdownDialogPromptViewController, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__dropdownDialogPromptViewController,
                      put = __cordl_internal_set__dropdownDialogPromptViewController)) ::UnityW<::GlobalNamespace::DropdownDialogPromptViewController>
      _dropdownDialogPromptViewController;

  /// @brief Field _mainSettingsMenuViewController, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsMenuViewController,
                      put = __cordl_internal_set__mainSettingsMenuViewController)) ::UnityW<::GlobalNamespace::MainSettingsMenuViewController>
      _mainSettingsMenuViewController;

  /// @brief Field _playerDataModel, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _selectedSettingsSubMenuInfoIdx, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__selectedSettingsSubMenuInfoIdx, put = setStaticF__selectedSettingsSubMenuInfoIdx)) int32_t _selectedSettingsSubMenuInfoIdx;

  /// @brief Field _settingsApplicator, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsApplicator, put = __cordl_internal_set__settingsApplicator)) ::UnityW<::GlobalNamespace::SettingsApplicatorSO> _settingsApplicator;

  /// @brief Field _settingsManager, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _settingsNavigationController, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsNavigationController, put = __cordl_internal_set__settingsNavigationController)) ::UnityW<::GlobalNamespace::SettingsNavigationController>
      _settingsNavigationController;

  /// @brief Field _undoSettings, offset 0x100, size 0xf0
  __declspec(property(get = __cordl_internal_get__undoSettings, put = __cordl_internal_set__undoSettings)) ::BeatSaber::Settings::Settings _undoSettings;

  /// @brief Field didFinishEvent, offset 0xb0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_didFinishEvent,
      put = __cordl_internal_set_didFinishEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::SettingsFlowCoordinator_FinishAction>* didFinishEvent;

  /// @brief Field fileStorage, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_fileStorage, put = __cordl_internal_set_fileStorage)) ::GlobalNamespace::IFileStorage* fileStorage;

  /// @brief Method ApplySettingsAsync, addr 0x5a0e1b0, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ApplySettingsAsync();

  /// @brief Method CancelSettingsAsync, addr 0x5a0e260, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* CancelSettingsAsync();

  /// @brief Method DidActivate, addr 0x5a0d8bc, size 0x360, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x5a0dc1c, size 0x1b8, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleDidSelectSettingsSubMenu, addr 0x5a0de74, size 0x70, virtual false, abstract: false, final false
  inline void HandleDidSelectSettingsSubMenu(::GlobalNamespace::SettingsSubMenuInfo* settingsSubMenuInfo, int32_t idx);

  /// @brief Method HandleRequestToSelectProfileToCopyFrom, addr 0x5a0dee4, size 0x21c, virtual false, abstract: false, final false
  inline void HandleRequestToSelectProfileToCopyFrom(::ArrayW<::System::ValueTuple_2<::StringW, int32_t>> profilesToCopyFrom);

  /// @brief Method HandleSettingsNavigationControllerDidFinishAsync, addr 0x5a0e100, size 0xb0, virtual false, abstract: false, final false
  inline void HandleSettingsNavigationControllerDidFinishAsync(::GlobalNamespace::SettingsNavigationController_FinishAction finishAction);

  static inline ::GlobalNamespace::SettingsFlowCoordinator* New_ctor();

  /// @brief Method ReplaceViewController, addr 0x5a0ddd4, size 0x9c, virtual false, abstract: false, final false
  inline void ReplaceViewController(::HMUI::ViewController* viewController);

  /// @brief Method ShowSecretViewController, addr 0x5a0de70, size 0x4, virtual false, abstract: false, final false
  inline void ShowSecretViewController(::HMUI::ViewController* viewController);

  /// @brief Method <HandleRequestToSelectProfileToCopyFrom>b__26_0, addr 0x5a0e318, size 0xa4, virtual false, abstract: false, final false
  inline void _HandleRequestToSelectProfileToCopyFrom_b__26_0(::System::ValueTuple_2<int32_t, int32_t> arguments);

  constexpr ::BeatSaber::GameSettings::ControllerProfilesModel* const& __cordl_internal_get__controllerProfilesModel() const;

  constexpr ::BeatSaber::GameSettings::ControllerProfilesModel*& __cordl_internal_get__controllerProfilesModel();

  constexpr ::UnityW<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController> const& __cordl_internal_get__controllerProfilesViewController() const;

  constexpr ::UnityW<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController>& __cordl_internal_get__controllerProfilesViewController();

  constexpr ::UnityW<::GlobalNamespace::DropdownDialogPromptViewController> const& __cordl_internal_get__dropdownDialogPromptViewController() const;

  constexpr ::UnityW<::GlobalNamespace::DropdownDialogPromptViewController>& __cordl_internal_get__dropdownDialogPromptViewController();

  constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController> const& __cordl_internal_get__mainSettingsMenuViewController() const;

  constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController>& __cordl_internal_get__mainSettingsMenuViewController();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& __cordl_internal_get__settingsApplicator() const;

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& __cordl_internal_get__settingsApplicator();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::UnityW<::GlobalNamespace::SettingsNavigationController> const& __cordl_internal_get__settingsNavigationController() const;

  constexpr ::UnityW<::GlobalNamespace::SettingsNavigationController>& __cordl_internal_get__settingsNavigationController();

  constexpr ::BeatSaber::Settings::Settings const& __cordl_internal_get__undoSettings() const;

  constexpr ::BeatSaber::Settings::Settings& __cordl_internal_get__undoSettings();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::SettingsFlowCoordinator_FinishAction>* const& __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::SettingsFlowCoordinator_FinishAction>*& __cordl_internal_get_didFinishEvent();

  constexpr ::GlobalNamespace::IFileStorage* const& __cordl_internal_get_fileStorage() const;

  constexpr ::GlobalNamespace::IFileStorage*& __cordl_internal_get_fileStorage();

  constexpr void __cordl_internal_set__controllerProfilesModel(::BeatSaber::GameSettings::ControllerProfilesModel* value);

  constexpr void __cordl_internal_set__controllerProfilesViewController(::UnityW<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController> value);

  constexpr void __cordl_internal_set__dropdownDialogPromptViewController(::UnityW<::GlobalNamespace::DropdownDialogPromptViewController> value);

  constexpr void __cordl_internal_set__mainSettingsMenuViewController(::UnityW<::GlobalNamespace::MainSettingsMenuViewController> value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__settingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__settingsNavigationController(::UnityW<::GlobalNamespace::SettingsNavigationController> value);

  constexpr void __cordl_internal_set__undoSettings(::BeatSaber::Settings::Settings value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::SettingsFlowCoordinator_FinishAction>* value);

  constexpr void __cordl_internal_set_fileStorage(::GlobalNamespace::IFileStorage* value);

  /// @brief Method .ctor, addr 0x5a0e310, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x5a0d73c, size 0xc0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::SettingsFlowCoordinator_FinishAction>* value);

  static inline int32_t getStaticF__selectedSettingsSubMenuInfoIdx();

  /// @brief Method remove_didFinishEvent, addr 0x5a0d7fc, size 0xc0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::SettingsFlowCoordinator_FinishAction>* value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6371 };

  /// @brief Field kButtonCancelLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kButtonCancelLocalizationKey{ u"BUTTON_CANCEL" };

  /// @brief Field kControllerProfilesCopyButtonLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kControllerProfilesCopyButtonLocalizationKey{ u"CONTROLLER_PROFILES_BUTTON_COPY" };

  /// @brief Field kControllerProfilesCopyFromProfileButtonLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kControllerProfilesCopyFromProfileButtonLocalizationKey{ u"CONTROLLER_PROFILES_BUTTON_COPY_FROM_PROFILE" };

  /// @brief Field kControllerProfilesCopyFromProfileMessageLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kControllerProfilesCopyFromProfileMessageLocalizationKey{ u"CONTROLLER_PROFILES_LABEL_COPY_FROM_PROFILE_MESSAGE" };

  /// @brief Field kControllerProfilesSelectProfileLabelLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kControllerProfilesSelectProfileLabelLocalizationKey{ u"CONTROLLER_PROFILES_LABEL_SELECT_PROFILE" };

  /// @brief Field kTitleSettingsLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kTitleSettingsLocalizationKey{ u"TITLE_SETTINGS" };

  /// @brief Field didFinishEvent, offset: 0xb0, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::SettingsFlowCoordinator>, ::GlobalNamespace::SettingsFlowCoordinator_FinishAction>* ___didFinishEvent;

  /// @brief Field _mainSettingsMenuViewController, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsMenuViewController> ____mainSettingsMenuViewController;

  /// @brief Field _settingsNavigationController, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsNavigationController> ____settingsNavigationController;

  /// @brief Field fileStorage, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* ___fileStorage;

  /// @brief Field _settingsManager, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _playerDataModel, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _settingsApplicator, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsApplicatorSO> ____settingsApplicator;

  /// @brief Field _controllerProfilesViewController, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::BeatSaber::GameSettings::ControllerProfilesSettingsViewController> ____controllerProfilesViewController;

  /// @brief Field _dropdownDialogPromptViewController, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DropdownDialogPromptViewController> ____dropdownDialogPromptViewController;

  /// @brief Field _controllerProfilesModel, offset: 0xf8, size: 0x8, def value: None
  ::BeatSaber::GameSettings::ControllerProfilesModel* ____controllerProfilesModel;

  /// @brief Field _undoSettings, offset: 0x100, size: 0xf0, def value: None
  ::BeatSaber::Settings::Settings ____undoSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator, ___didFinishEvent) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator, ____mainSettingsMenuViewController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator, ____settingsNavigationController) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator, ___fileStorage) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator, ____settingsManager) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator, ____playerDataModel) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator, ____settingsApplicator) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator, ____controllerProfilesViewController) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator, ____dropdownDialogPromptViewController) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator, ____controllerProfilesModel) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SettingsFlowCoordinator, ____undoSettings) == 0x100, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SettingsFlowCoordinator) == 0x1f0, "Size mismatch!");

} // namespace GlobalNamespace
