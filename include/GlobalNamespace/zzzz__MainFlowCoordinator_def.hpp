#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EditAvatarFlowCoordinatorHelper_def.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MainFlowCoordinator)
namespace BeatSaber::AvatarCore {
class AvatarSystemCollection;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class CampaignFlowCoordinator;
}
namespace GlobalNamespace {
class EditAvatarFlowCoordinatorHelper;
}
namespace GlobalNamespace {
class FadeInOutController;
}
namespace GlobalNamespace {
class HelpFlowCoordinator;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class LevelSelectionFlowCoordinator;
}
namespace GlobalNamespace {
class MainMenuViewController;
}
namespace GlobalNamespace {
class MenuDestination;
}
namespace GlobalNamespace {
class MenuLightsManager;
}
namespace GlobalNamespace {
class MenuLightsPresetSO;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class MultiplayerModeSelectionFlowCoordinator;
}
namespace GlobalNamespace {
class OptionsViewController;
}
namespace GlobalNamespace {
class PartyFreePlayFlowCoordinator;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class PlayerOptionsViewController;
}
namespace GlobalNamespace {
class SettingsFlowCoordinator;
}
namespace GlobalNamespace {
class SimpleDialogPromptViewController;
}
namespace GlobalNamespace {
class SoloFreePlayFlowCoordinator;
}
namespace GlobalNamespace {
class __DlcPromoPanelModel__PromoInfo;
}
namespace GlobalNamespace {
struct __EditAvatarFlowCoordinatorHelper__FinishAction;
}
namespace GlobalNamespace {
struct __HowToPlayViewController__HowToPlayOptions;
}
namespace GlobalNamespace {
struct __MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34;
}
namespace GlobalNamespace {
struct __MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29;
}
namespace GlobalNamespace {
struct __MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42;
}
namespace GlobalNamespace {
class __MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43;
}
namespace GlobalNamespace {
struct __MainFlowCoordinator___ProcessMenuDestinationRequest_d__41;
}
namespace GlobalNamespace {
struct __MainMenuViewController__MenuButton;
}
namespace GlobalNamespace {
struct __OptionsViewController__OptionsButton;
}
namespace GlobalNamespace {
struct __SettingsFlowCoordinator__FinishAction;
}
namespace HMUI {
class FlowCoordinator;
}
namespace HMUI {
class ViewController;
}
namespace HMUI {
struct __ViewController__AnimationType;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
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
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class MainFlowCoordinator;
}
namespace GlobalNamespace {
class __MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43;
}
namespace GlobalNamespace {
struct __MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34;
}
namespace GlobalNamespace {
struct __MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29;
}
namespace GlobalNamespace {
struct __MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42;
}
namespace GlobalNamespace {
struct __MainFlowCoordinator___ProcessMenuDestinationRequest_d__41;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainFlowCoordinator);
MARK_REF_PTR_T(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43);
MARK_VAL_T(::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34);
MARK_VAL_T(::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29);
MARK_VAL_T(::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42);
MARK_VAL_T(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41);
// Type: ::<HandleMultiplayerDisclaimerDidFinishAction>d__29
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MainFlowCoordinator::<HandleMultiplayerDisclaimerDidFinishAction>d__29
struct CORDL_TYPE __MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x24b75f8, size 0x5bc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x24b7bb4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "buttonNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::UnityW<::GlobalNamespace::MainFlowCoordinator>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, int32_t buttonNumber,
                                                                                     ::UnityW<::GlobalNamespace::MainFlowCoordinator> __4__this,
                                                                                     ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field buttonNumber, offset: 0x28, size: 0x4, def value: None
  int32_t buttonNumber;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainFlowCoordinator> __4__this;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29, buttonNumber) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29, __u__2) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<HandleEditAvatarFlowCoordinatorHelperDidFinish>d__34
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MainFlowCoordinator::<HandleEditAvatarFlowCoordinatorHelperDidFinish>d__34
struct CORDL_TYPE __MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x24b7bc0, size 0x230, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x24b7df0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MainFlowCoordinator>", modifiers:
  // "", def_value: None }, CppParam { name: "finishAction", ty: "::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction", modifiers: "", def_value: None }, CppParam { name:
  // "flowCoordinator", ty: "::UnityW<::HMUI::FlowCoordinator>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers:
  // "", def_value: None }]
  constexpr __MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                         ::UnityW<::GlobalNamespace::MainFlowCoordinator> __4__this,
                                                                                         ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction finishAction,
                                                                                         ::UnityW<::HMUI::FlowCoordinator> flowCoordinator,
                                                                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainFlowCoordinator> __4__this;

  /// @brief Field finishAction, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction finishAction;

  /// @brief Field flowCoordinator, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::HMUI::FlowCoordinator> flowCoordinator;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34, finishAction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34, flowCoordinator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ProcessMenuDestinationRequest>d__41
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MainFlowCoordinator::<ProcessMenuDestinationRequest>d__41
struct CORDL_TYPE __MainFlowCoordinator___ProcessMenuDestinationRequest_d__41 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x24b7dfc, size 0x6c0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x24b8860, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainFlowCoordinator___ProcessMenuDestinationRequest_d__41();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MainFlowCoordinator>", modifiers:
  // "", def_value: None }, CppParam { name: "destination", ty: "::GlobalNamespace::MenuDestination*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __MainFlowCoordinator___ProcessMenuDestinationRequest_d__41(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                        ::UnityW<::GlobalNamespace::MainFlowCoordinator> __4__this, ::GlobalNamespace::MenuDestination* destination,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainFlowCoordinator> __4__this;

  /// @brief Field destination, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MenuDestination* destination;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41, destination) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator>d__42
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MainFlowCoordinator::<PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator>d__42
struct CORDL_TYPE __MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x24b886c, size 0x5ec, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x24b8e58, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MainFlowCoordinator>", modifiers:
  // "", def_value: None }, CppParam { name: "presentImmediately", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42(int32_t __1__state,
                                                                                                                       ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                                       ::UnityW<::GlobalNamespace::MainFlowCoordinator> __4__this,
                                                                                                                       bool presentImmediately,
                                                                                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainFlowCoordinator> __4__this;

  /// @brief Field presentImmediately, offset: 0x30, size: 0x1, def value: None
  bool presentImmediately;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42, presentImmediately) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ProcessMenuDestinationRequestAfterFrameCoroutine>d__43
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MainFlowCoordinator::<ProcessMenuDestinationRequestAfterFrameCoroutine>d__43*
class CORDL_TYPE __MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MainFlowCoordinator> __4__this;

  /// @brief Field destination, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_destination, put = __cordl_internal_set_destination))::GlobalNamespace::MenuDestination* destination;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x24b8e68, size 0x54, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x24b8ebc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x24b8ec4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x24b8f04, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x24b8e64, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MainFlowCoordinator> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MainFlowCoordinator>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::MenuDestination*& __cordl_internal_get_destination();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuDestination*> const& __cordl_internal_get_destination() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MainFlowCoordinator> value);

  constexpr void __cordl_internal_set_destination(::GlobalNamespace::MenuDestination* value);

  /// @brief Method .ctor, addr 0x24b7414, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43(__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43(__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainFlowCoordinator> _____4__this;

  /// @brief Field destination, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MenuDestination* ___destination;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43, ___destination) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MainFlowCoordinator
// SizeInfo { instance_size: 344, native_size: -1, calculated_instance_size: 344, calculated_native_size: 337, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MainFlowCoordinator*
class CORDL_TYPE MainFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using _HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34 = ::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34;

  using _HandleMultiplayerDisclaimerDidFinishAction_d__29 = ::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29;

  using _PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42 =
      ::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42;

  using _ProcessMenuDestinationRequestAfterFrameCoroutine_d__43 = ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43;

  using _ProcessMenuDestinationRequest_d__41 = ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41;

  /// @brief Field _afterDialogPromptFlowCoordinator, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__afterDialogPromptFlowCoordinator,
                      put = __cordl_internal_set__afterDialogPromptFlowCoordinator))::UnityW<::HMUI::FlowCoordinator> _afterDialogPromptFlowCoordinator;

  /// @brief Field _analyticsModel, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsModel, put = __cordl_internal_set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _avatarSystemCollection, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__avatarSystemCollection, put = __cordl_internal_set__avatarSystemCollection))::BeatSaber::AvatarCore::AvatarSystemCollection* _avatarSystemCollection;

  /// @brief Field _beatmapLevelsModel, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _campaignFlowCoordinator, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__campaignFlowCoordinator,
                      put = __cordl_internal_set__campaignFlowCoordinator))::UnityW<::GlobalNamespace::CampaignFlowCoordinator> _campaignFlowCoordinator;

  /// @brief Field _defaultLightsPreset, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultLightsPreset, put = __cordl_internal_set__defaultLightsPreset))::UnityW<::GlobalNamespace::MenuLightsPresetSO> _defaultLightsPreset;

  /// @brief Field _editAvatarFlowCoordinatorHelper, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__editAvatarFlowCoordinatorHelper,
                      put = __cordl_internal_set__editAvatarFlowCoordinatorHelper))::GlobalNamespace::EditAvatarFlowCoordinatorHelper* _editAvatarFlowCoordinatorHelper;

  /// @brief Field _fadeInOut, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeInOut, put = __cordl_internal_set__fadeInOut))::UnityW<::GlobalNamespace::FadeInOutController> _fadeInOut;

  /// @brief Field _goToMultiplayerAfterAvatarCreation, offset 0x150, size 0x1
  __declspec(property(get = __cordl_internal_get__goToMultiplayerAfterAvatarCreation, put = __cordl_internal_set__goToMultiplayerAfterAvatarCreation)) bool _goToMultiplayerAfterAvatarCreation;

  /// @brief Field _helpFlowCoordinator, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__helpFlowCoordinator, put = __cordl_internal_set__helpFlowCoordinator))::UnityW<::GlobalNamespace::HelpFlowCoordinator> _helpFlowCoordinator;

  /// @brief Field _mainMenuViewController, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__mainMenuViewController,
                      put = __cordl_internal_set__mainMenuViewController))::UnityW<::GlobalNamespace::MainMenuViewController> _mainMenuViewController;

  /// @brief Field _menuDestinationRequest, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__menuDestinationRequest, put = __cordl_internal_set__menuDestinationRequest))::GlobalNamespace::MenuDestination* _menuDestinationRequest;

  /// @brief Field _menuLightsManager, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__menuLightsManager, put = __cordl_internal_set__menuLightsManager))::UnityW<::GlobalNamespace::MenuLightsManager> _menuLightsManager;

  /// @brief Field _menuTransitionsHelper, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__menuTransitionsHelper, put = __cordl_internal_set__menuTransitionsHelper))::UnityW<::GlobalNamespace::MenuTransitionsHelper> _menuTransitionsHelper;

  /// @brief Field _multiplayerModeSelectionFlowCoordinator, offset 0xd0, size 0x8
  __declspec(
      property(get = __cordl_internal_get__multiplayerModeSelectionFlowCoordinator,
               put = __cordl_internal_set__multiplayerModeSelectionFlowCoordinator))::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> _multiplayerModeSelectionFlowCoordinator;

  /// @brief Field _optionsViewController, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__optionsViewController, put = __cordl_internal_set__optionsViewController))::UnityW<::GlobalNamespace::OptionsViewController> _optionsViewController;

  /// @brief Field _partyFreePlayFlowCoordinator, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__partyFreePlayFlowCoordinator,
                      put = __cordl_internal_set__partyFreePlayFlowCoordinator))::UnityW<::GlobalNamespace::PartyFreePlayFlowCoordinator> _partyFreePlayFlowCoordinator;

  /// @brief Field _playerDataModel, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _playerOptionsViewController, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__playerOptionsViewController,
                      put = __cordl_internal_set__playerOptionsViewController))::UnityW<::GlobalNamespace::PlayerOptionsViewController> _playerOptionsViewController;

  /// @brief Field _settingsFlowCoordinator, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsFlowCoordinator,
                      put = __cordl_internal_set__settingsFlowCoordinator))::UnityW<::GlobalNamespace::SettingsFlowCoordinator> _settingsFlowCoordinator;

  /// @brief Field _simpleDialogPromptViewController, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__simpleDialogPromptViewController,
                      put = __cordl_internal_set__simpleDialogPromptViewController))::UnityW<::GlobalNamespace::SimpleDialogPromptViewController> _simpleDialogPromptViewController;

  /// @brief Field _soloFreePlayFlowCoordinator, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__soloFreePlayFlowCoordinator,
                      put = __cordl_internal_set__soloFreePlayFlowCoordinator))::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator> _soloFreePlayFlowCoordinator;

  /// @brief Field _startWithSettings, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__startWithSettings, put = setStaticF__startWithSettings)) bool _startWithSettings;

  /// @brief Method BackButtonWasPressed, addr 0x24b743c, size 0x9c, virtual true, abstract: false, final false
  inline void BackButtonWasPressed(::HMUI::ViewController* topViewController);

  /// @brief Method DidActivate, addr 0x24b5a0c, size 0x4a8, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x24b634c, size 0x448, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleCampaignFlowCoordinatorDidFinish, addr 0x24b6fe8, size 0x14, virtual false, abstract: false, final false
  inline void HandleCampaignFlowCoordinatorDidFinish(::GlobalNamespace::CampaignFlowCoordinator* flowCoordinator);

  /// @brief Method HandleEditAvatarFlowCoordinatorHelperDidFinish, addr 0x24b6ffc, size 0xac, virtual false, abstract: false, final false
  inline void HandleEditAvatarFlowCoordinatorHelperDidFinish(::HMUI::FlowCoordinator* flowCoordinator, ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction finishAction);

  /// @brief Method HandleHelpFlowCoordinatorDidFinish, addr 0x24b7164, size 0x14, virtual false, abstract: false, final false
  inline void HandleHelpFlowCoordinatorDidFinish(::GlobalNamespace::HelpFlowCoordinator* helpFlowCoordinator);

  /// @brief Method HandleHowToPlayViewControllerDidFinish, addr 0x24b6f70, size 0x78, virtual false, abstract: false, final false
  inline void HandleHowToPlayViewControllerDidFinish(::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions howToPlayOptions);

  /// @brief Method HandleMainMenuViewControllerDidFinish, addr 0x24b6bd0, size 0x164, virtual false, abstract: false, final false
  inline void HandleMainMenuViewControllerDidFinish(::GlobalNamespace::MainMenuViewController* viewController, ::GlobalNamespace::__MainMenuViewController__MenuButton subMenuType);

  /// @brief Method HandleMainMenuViewControllerPromoButtonWasPressed, addr 0x24b718c, size 0x1ec, virtual false, abstract: false, final false
  inline void HandleMainMenuViewControllerPromoButtonWasPressed(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* promoInfo);

  /// @brief Method HandleMultiplayerDisclaimerDidFinishAction, addr 0x24b6dd4, size 0xa4, virtual false, abstract: false, final false
  inline void HandleMultiplayerDisclaimerDidFinishAction(int32_t buttonNumber);

  /// @brief Method HandleMultiplayerModeSelectionFlowCoordinatorDidFinish, addr 0x24b7178, size 0x14, virtual false, abstract: false, final false
  inline void HandleMultiplayerModeSelectionFlowCoordinatorDidFinish(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* multiplayerModeSelectionFlowCoordinator);

  /// @brief Method HandleOptionsViewControllerDidFinish, addr 0x24b6e78, size 0xe4, virtual false, abstract: false, final false
  inline void HandleOptionsViewControllerDidFinish(::GlobalNamespace::__OptionsViewController__OptionsButton optionsType);

  /// @brief Method HandlePartyFreePlayFlowCoordinatorDidFinish, addr 0x24b70bc, size 0x14, virtual false, abstract: false, final false
  inline void HandlePartyFreePlayFlowCoordinatorDidFinish(::GlobalNamespace::LevelSelectionFlowCoordinator* flowCoordinator);

  /// @brief Method HandlePlayerOptionsViewControllerDidFinish, addr 0x24b6f5c, size 0x14, virtual false, abstract: false, final false
  inline void HandlePlayerOptionsViewControllerDidFinish(::HMUI::ViewController* viewController);

  /// @brief Method HandleSettingsFlowCoordinatorDidFinish, addr 0x24b70d0, size 0x94, virtual false, abstract: false, final false
  inline void HandleSettingsFlowCoordinatorDidFinish(::GlobalNamespace::SettingsFlowCoordinator* settingsFlowCoordinator, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction finishAction);

  /// @brief Method HandleSoloFreePlayFlowCoordinatorDidFinish, addr 0x24b70a8, size 0x14, virtual false, abstract: false, final false
  inline void HandleSoloFreePlayFlowCoordinatorDidFinish(::GlobalNamespace::LevelSelectionFlowCoordinator* flowCoordinator);

  /// @brief Method InitialViewControllerWasPresented, addr 0x24b62d4, size 0x78, virtual true, abstract: false, final false
  inline void InitialViewControllerWasPresented();

  static inline ::GlobalNamespace::MainFlowCoordinator* New_ctor();

  /// @brief Method PresentFlowCoordinatorOrAskForTutorial, addr 0x24b69ac, size 0x224, virtual false, abstract: false, final false
  inline void PresentFlowCoordinatorOrAskForTutorial(::HMUI::FlowCoordinator* flowCoordinator);

  /// @brief Method PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator, addr 0x24b6d34, size 0xa0, virtual false, abstract: false, final false
  inline void PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator(bool presentImmediately);

  /// @brief Method ProcessMenuDestinationRequest, addr 0x24b7378, size 0x9c, virtual false, abstract: false, final false
  inline void ProcessMenuDestinationRequest(::GlobalNamespace::MenuDestination* destination);

  /// @brief Method ProcessMenuDestinationRequestAfterFrameCoroutine, addr 0x24b60cc, size 0x74, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ProcessMenuDestinationRequestAfterFrameCoroutine(::GlobalNamespace::MenuDestination* destination);

  /// @brief Method TopViewControllerWillChange, addr 0x24b6140, size 0x194, virtual true, abstract: false, final false
  inline void TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController, ::HMUI::__ViewController__AnimationType animationType);

  /// @brief Method <HandleMainMenuViewControllerDidFinish>b__28_0, addr 0x24b75d8, size 0x1c, virtual false, abstract: false, final false
  inline void _HandleMainMenuViewControllerDidFinish_b__28_0();

  /// @brief Method <PresentFlowCoordinatorOrAskForTutorial>b__27_0, addr 0x24b74e0, size 0xe0, virtual false, abstract: false, final false
  inline void _PresentFlowCoordinatorOrAskForTutorial_b__27_0(int32_t buttonNumber);

  /// @brief Method <PresentFlowCoordinatorOrAskForTutorial>b__27_1, addr 0x24b75c0, size 0x18, virtual false, abstract: false, final false
  inline void _PresentFlowCoordinatorOrAskForTutorial_b__27_1();

  /// @brief Method <PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator>b__42_0, addr 0x24b75f4, size 0x4, virtual false, abstract: false, final false
  inline void _PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_b__42_0(int32_t buttonNumber);

  constexpr ::UnityW<::HMUI::FlowCoordinator> const& __cordl_internal_get__afterDialogPromptFlowCoordinator() const;

  constexpr ::UnityW<::HMUI::FlowCoordinator>& __cordl_internal_get__afterDialogPromptFlowCoordinator();

  constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __cordl_internal_get__analyticsModel() const;

  constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& __cordl_internal_get__avatarSystemCollection();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSystemCollection*> const& __cordl_internal_get__avatarSystemCollection() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::UnityW<::GlobalNamespace::CampaignFlowCoordinator> const& __cordl_internal_get__campaignFlowCoordinator() const;

  constexpr ::UnityW<::GlobalNamespace::CampaignFlowCoordinator>& __cordl_internal_get__campaignFlowCoordinator();

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& __cordl_internal_get__defaultLightsPreset() const;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& __cordl_internal_get__defaultLightsPreset();

  constexpr ::GlobalNamespace::EditAvatarFlowCoordinatorHelper*& __cordl_internal_get__editAvatarFlowCoordinatorHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*> const& __cordl_internal_get__editAvatarFlowCoordinatorHelper() const;

  constexpr ::UnityW<::GlobalNamespace::FadeInOutController> const& __cordl_internal_get__fadeInOut() const;

  constexpr ::UnityW<::GlobalNamespace::FadeInOutController>& __cordl_internal_get__fadeInOut();

  constexpr bool const& __cordl_internal_get__goToMultiplayerAfterAvatarCreation() const;

  constexpr bool& __cordl_internal_get__goToMultiplayerAfterAvatarCreation();

  constexpr ::UnityW<::GlobalNamespace::HelpFlowCoordinator> const& __cordl_internal_get__helpFlowCoordinator() const;

  constexpr ::UnityW<::GlobalNamespace::HelpFlowCoordinator>& __cordl_internal_get__helpFlowCoordinator();

  constexpr ::UnityW<::GlobalNamespace::MainMenuViewController> const& __cordl_internal_get__mainMenuViewController() const;

  constexpr ::UnityW<::GlobalNamespace::MainMenuViewController>& __cordl_internal_get__mainMenuViewController();

  constexpr ::GlobalNamespace::MenuDestination*& __cordl_internal_get__menuDestinationRequest();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuDestination*> const& __cordl_internal_get__menuDestinationRequest() const;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsManager> const& __cordl_internal_get__menuLightsManager() const;

  constexpr ::UnityW<::GlobalNamespace::MenuLightsManager>& __cordl_internal_get__menuLightsManager();

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get__menuTransitionsHelper() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get__menuTransitionsHelper();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> const& __cordl_internal_get__multiplayerModeSelectionFlowCoordinator() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator>& __cordl_internal_get__multiplayerModeSelectionFlowCoordinator();

  constexpr ::UnityW<::GlobalNamespace::OptionsViewController> const& __cordl_internal_get__optionsViewController() const;

  constexpr ::UnityW<::GlobalNamespace::OptionsViewController>& __cordl_internal_get__optionsViewController();

  constexpr ::UnityW<::GlobalNamespace::PartyFreePlayFlowCoordinator> const& __cordl_internal_get__partyFreePlayFlowCoordinator() const;

  constexpr ::UnityW<::GlobalNamespace::PartyFreePlayFlowCoordinator>& __cordl_internal_get__partyFreePlayFlowCoordinator();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerOptionsViewController> const& __cordl_internal_get__playerOptionsViewController() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerOptionsViewController>& __cordl_internal_get__playerOptionsViewController();

  constexpr ::UnityW<::GlobalNamespace::SettingsFlowCoordinator> const& __cordl_internal_get__settingsFlowCoordinator() const;

  constexpr ::UnityW<::GlobalNamespace::SettingsFlowCoordinator>& __cordl_internal_get__settingsFlowCoordinator();

  constexpr ::UnityW<::GlobalNamespace::SimpleDialogPromptViewController> const& __cordl_internal_get__simpleDialogPromptViewController() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleDialogPromptViewController>& __cordl_internal_get__simpleDialogPromptViewController();

  constexpr ::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator> const& __cordl_internal_get__soloFreePlayFlowCoordinator() const;

  constexpr ::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator>& __cordl_internal_get__soloFreePlayFlowCoordinator();

  constexpr void __cordl_internal_set__afterDialogPromptFlowCoordinator(::UnityW<::HMUI::FlowCoordinator> value);

  constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr void __cordl_internal_set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__campaignFlowCoordinator(::UnityW<::GlobalNamespace::CampaignFlowCoordinator> value);

  constexpr void __cordl_internal_set__defaultLightsPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO> value);

  constexpr void __cordl_internal_set__editAvatarFlowCoordinatorHelper(::GlobalNamespace::EditAvatarFlowCoordinatorHelper* value);

  constexpr void __cordl_internal_set__fadeInOut(::UnityW<::GlobalNamespace::FadeInOutController> value);

  constexpr void __cordl_internal_set__goToMultiplayerAfterAvatarCreation(bool value);

  constexpr void __cordl_internal_set__helpFlowCoordinator(::UnityW<::GlobalNamespace::HelpFlowCoordinator> value);

  constexpr void __cordl_internal_set__mainMenuViewController(::UnityW<::GlobalNamespace::MainMenuViewController> value);

  constexpr void __cordl_internal_set__menuDestinationRequest(::GlobalNamespace::MenuDestination* value);

  constexpr void __cordl_internal_set__menuLightsManager(::UnityW<::GlobalNamespace::MenuLightsManager> value);

  constexpr void __cordl_internal_set__menuTransitionsHelper(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set__multiplayerModeSelectionFlowCoordinator(::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> value);

  constexpr void __cordl_internal_set__optionsViewController(::UnityW<::GlobalNamespace::OptionsViewController> value);

  constexpr void __cordl_internal_set__partyFreePlayFlowCoordinator(::UnityW<::GlobalNamespace::PartyFreePlayFlowCoordinator> value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__playerOptionsViewController(::UnityW<::GlobalNamespace::PlayerOptionsViewController> value);

  constexpr void __cordl_internal_set__settingsFlowCoordinator(::UnityW<::GlobalNamespace::SettingsFlowCoordinator> value);

  constexpr void __cordl_internal_set__simpleDialogPromptViewController(::UnityW<::GlobalNamespace::SimpleDialogPromptViewController> value);

  constexpr void __cordl_internal_set__soloFreePlayFlowCoordinator(::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator> value);

  /// @brief Method .ctor, addr 0x24b74d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF__startWithSettings();

  static inline void setStaticF__startWithSettings(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainFlowCoordinator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainFlowCoordinator(MainFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainFlowCoordinator(MainFlowCoordinator const&) = delete;

  /// @brief Field _defaultLightsPreset, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuLightsPresetSO> ____defaultLightsPreset;

  /// @brief Field _soloFreePlayFlowCoordinator, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SoloFreePlayFlowCoordinator> ____soloFreePlayFlowCoordinator;

  /// @brief Field _partyFreePlayFlowCoordinator, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PartyFreePlayFlowCoordinator> ____partyFreePlayFlowCoordinator;

  /// @brief Field _campaignFlowCoordinator, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CampaignFlowCoordinator> ____campaignFlowCoordinator;

  /// @brief Field _settingsFlowCoordinator, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsFlowCoordinator> ____settingsFlowCoordinator;

  /// @brief Field _multiplayerModeSelectionFlowCoordinator, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator> ____multiplayerModeSelectionFlowCoordinator;

  /// @brief Field _helpFlowCoordinator, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HelpFlowCoordinator> ____helpFlowCoordinator;

  /// @brief Field _editAvatarFlowCoordinatorHelper, offset: 0xe0, size: 0x8, def value: None
  ::GlobalNamespace::EditAvatarFlowCoordinatorHelper* ____editAvatarFlowCoordinatorHelper;

  /// @brief Field _simpleDialogPromptViewController, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleDialogPromptViewController> ____simpleDialogPromptViewController;

  /// @brief Field _mainMenuViewController, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainMenuViewController> ____mainMenuViewController;

  /// @brief Field _playerOptionsViewController, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerOptionsViewController> ____playerOptionsViewController;

  /// @brief Field _optionsViewController, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OptionsViewController> ____optionsViewController;

  /// @brief Field _playerDataModel, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _menuLightsManager, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuLightsManager> ____menuLightsManager;

  /// @brief Field _fadeInOut, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FadeInOutController> ____fadeInOut;

  /// @brief Field _beatmapLevelsModel, offset: 0x120, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _menuTransitionsHelper, offset: 0x128, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> ____menuTransitionsHelper;

  /// @brief Field _analyticsModel, offset: 0x130, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field _avatarSystemCollection, offset: 0x138, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::AvatarSystemCollection* ____avatarSystemCollection;

  /// @brief Field _menuDestinationRequest, offset: 0x140, size: 0x8, def value: None
  ::GlobalNamespace::MenuDestination* ____menuDestinationRequest;

  /// @brief Field _afterDialogPromptFlowCoordinator, offset: 0x148, size: 0x8, def value: None
  ::UnityW<::HMUI::FlowCoordinator> ____afterDialogPromptFlowCoordinator;

  /// @brief Field _goToMultiplayerAfterAvatarCreation, offset: 0x150, size: 0x1, def value: None
  bool ____goToMultiplayerAfterAvatarCreation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainFlowCoordinator, 0x158>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____defaultLightsPreset) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____soloFreePlayFlowCoordinator) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____partyFreePlayFlowCoordinator) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____campaignFlowCoordinator) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____settingsFlowCoordinator) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____multiplayerModeSelectionFlowCoordinator) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____helpFlowCoordinator) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____editAvatarFlowCoordinatorHelper) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____simpleDialogPromptViewController) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____mainMenuViewController) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____playerOptionsViewController) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____optionsViewController) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____playerDataModel) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____menuLightsManager) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____fadeInOut) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____beatmapLevelsModel) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____menuTransitionsHelper) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____analyticsModel) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____avatarSystemCollection) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____menuDestinationRequest) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____afterDialogPromptFlowCoordinator) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____goToMultiplayerAfterAvatarCreation) == 0x150, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainFlowCoordinator*, "", "MainFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__43*, "",
                       "MainFlowCoordinator/<ProcessMenuDestinationRequestAfterFrameCoroutine>d__43");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__34, "",
                       "MainFlowCoordinator/<HandleEditAvatarFlowCoordinatorHelperDidFinish>d__34");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__29, "", "MainFlowCoordinator/<HandleMultiplayerDisclaimerDidFinishAction>d__29");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__42, "",
                       "MainFlowCoordinator/<PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator>d__42");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__41, "", "MainFlowCoordinator/<ProcessMenuDestinationRequest>d__41");
