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
class AppStaticSettingsSO;
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
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
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
struct __EditAvatarFlowCoordinatorHelper__FinishAction;
}
namespace GlobalNamespace {
struct __HowToPlayViewController__HowToPlayOptions;
}
namespace GlobalNamespace {
struct __MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35;
}
namespace GlobalNamespace {
struct __MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30;
}
namespace GlobalNamespace {
struct __MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43;
}
namespace GlobalNamespace {
class __MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44;
}
namespace GlobalNamespace {
struct __MainFlowCoordinator___ProcessMenuDestinationRequest_d__42;
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
class __MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44;
}
namespace GlobalNamespace {
struct __MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35;
}
namespace GlobalNamespace {
struct __MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30;
}
namespace GlobalNamespace {
struct __MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43;
}
namespace GlobalNamespace {
struct __MainFlowCoordinator___ProcessMenuDestinationRequest_d__42;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainFlowCoordinator);
MARK_REF_PTR_T(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44);
MARK_VAL_T(::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35);
MARK_VAL_T(::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30);
MARK_VAL_T(::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43);
MARK_VAL_T(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42);
// Type: ::<HandleMultiplayerDisclaimerDidFinishAction>d__30
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(3400)),
// TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3393))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5502)) CS Name:
// ::MainFlowCoordinator::<HandleMultiplayerDisclaimerDidFinishAction>d__30
struct CORDL_TYPE __MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x228ceb4, size 0x5b4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x228d468, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "buttonNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::GlobalNamespace::MainFlowCoordinator*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
  // def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, int32_t buttonNumber,
                                                                                     ::GlobalNamespace::MainFlowCoordinator* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field buttonNumber, offset: 0x28, size: 0x4, def value: None
  int32_t buttonNumber;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MainFlowCoordinator* __4__this;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30, buttonNumber) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30, __u__2) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<HandleEditAvatarFlowCoordinatorHelperDidFinish>d__35
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 105 }), TypeDefinitionIndex(TypeDefinitionIndex(5490)),
// TypeDefinitionIndex(TypeDefinitionIndex(3400)), TypeDefinitionIndex(TypeDefinitionIndex(3394))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5503)) CS Name:
// ::MainFlowCoordinator::<HandleEditAvatarFlowCoordinatorHelperDidFinish>d__35
struct CORDL_TYPE __MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x228d474, size 0x22c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x228d6a0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MainFlowCoordinator*", modifiers: "",
  // def_value: None }, CppParam { name: "finishAction", ty: "::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction", modifiers: "", def_value: None }, CppParam { name: "flowCoordinator",
  // ty: "::HMUI::FlowCoordinator*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                         ::GlobalNamespace::MainFlowCoordinator* __4__this,
                                                                                         ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction finishAction,
                                                                                         ::HMUI::FlowCoordinator* flowCoordinator,
                                                                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MainFlowCoordinator* __4__this;

  /// @brief Field finishAction, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction finishAction;

  /// @brief Field flowCoordinator, offset: 0x38, size: 0x8, def value: None
  ::HMUI::FlowCoordinator* flowCoordinator;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35, finishAction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35, flowCoordinator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ProcessMenuDestinationRequest>d__42
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3400)), TypeDefinitionIndex(TypeDefinitionIndex(3393))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5504))
// CS Name: ::MainFlowCoordinator::<ProcessMenuDestinationRequest>d__42
struct CORDL_TYPE __MainFlowCoordinator___ProcessMenuDestinationRequest_d__42 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x228d6ac, size 0x6f8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x228e380, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MainFlowCoordinator*", modifiers: "",
  // def_value: None }, CppParam { name: "destination", ty: "::GlobalNamespace::MenuDestination*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __MainFlowCoordinator___ProcessMenuDestinationRequest_d__42(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                        ::GlobalNamespace::MainFlowCoordinator* __4__this, ::GlobalNamespace::MenuDestination* destination,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainFlowCoordinator___ProcessMenuDestinationRequest_d__42();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MainFlowCoordinator* __4__this;

  /// @brief Field destination, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MenuDestination* destination;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42, destination) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator>d__43
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(3400)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 105
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(5505)) CS Name: ::MainFlowCoordinator::<PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator>d__43
struct CORDL_TYPE __MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x228e38c, size 0x5e4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x228e970, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MainFlowCoordinator*", modifiers: "",
  // def_value: None }, CppParam { name: "presentImmediately", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>",
  // modifiers: "", def_value: None }]
  constexpr __MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43(int32_t __1__state,
                                                                                                                       ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                                       ::GlobalNamespace::MainFlowCoordinator* __4__this, bool presentImmediately,
                                                                                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MainFlowCoordinator* __4__this;

  /// @brief Field presentImmediately, offset: 0x30, size: 0x1, def value: None
  bool presentImmediately;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43, presentImmediately) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ProcessMenuDestinationRequestAfterFrameCoroutine>d__44
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5506))
// CS Name: ::MainFlowCoordinator::<ProcessMenuDestinationRequestAfterFrameCoroutine>d__44*
class CORDL_TYPE __MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::MainFlowCoordinator* __4__this;

  /// @brief Field destination, offset 0x28, size 0x8
  __declspec(property(get = __get_destination, put = __set_destination))::GlobalNamespace::MenuDestination* destination;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::GlobalNamespace::MainFlowCoordinator*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainFlowCoordinator*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::MainFlowCoordinator* value);

  constexpr ::GlobalNamespace::MenuDestination*& __get_destination();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuDestination*> const& __get_destination() const;

  constexpr void __set_destination(::GlobalNamespace::MenuDestination* value);

  static inline ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x228ccd0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x228e97c, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x228e980, size 0x54, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x228e9d4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x228e9dc, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x228ea1c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44(__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44(__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MainFlowCoordinator* _____4__this;

  /// @brief Field destination, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MenuDestination* ___destination;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44, ___destination) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MainFlowCoordinator
// SizeInfo { instance_size: 352, native_size: -1, calculated_instance_size: 352, calculated_native_size: 345, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13582))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5507))
// CS Name: ::MainFlowCoordinator*
class CORDL_TYPE MainFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using _ProcessMenuDestinationRequestAfterFrameCoroutine_d__44 = ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44;

  using _PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43 =
      ::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43;

  using _ProcessMenuDestinationRequest_d__42 = ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42;

  using _HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35 = ::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35;

  using _HandleMultiplayerDisclaimerDidFinishAction_d__30 = ::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30;

  /// @brief Field _defaultLightsPreset, offset 0xa8, size 0x8
  __declspec(property(get = __get__defaultLightsPreset, put = __set__defaultLightsPreset))::GlobalNamespace::MenuLightsPresetSO* _defaultLightsPreset;

  /// @brief Field _soloFreePlayFlowCoordinator, offset 0xb0, size 0x8
  __declspec(property(get = __get__soloFreePlayFlowCoordinator, put = __set__soloFreePlayFlowCoordinator))::GlobalNamespace::SoloFreePlayFlowCoordinator* _soloFreePlayFlowCoordinator;

  /// @brief Field _partyFreePlayFlowCoordinator, offset 0xb8, size 0x8
  __declspec(property(get = __get__partyFreePlayFlowCoordinator, put = __set__partyFreePlayFlowCoordinator))::GlobalNamespace::PartyFreePlayFlowCoordinator* _partyFreePlayFlowCoordinator;

  /// @brief Field _campaignFlowCoordinator, offset 0xc0, size 0x8
  __declspec(property(get = __get__campaignFlowCoordinator, put = __set__campaignFlowCoordinator))::GlobalNamespace::CampaignFlowCoordinator* _campaignFlowCoordinator;

  /// @brief Field _settingsFlowCoordinator, offset 0xc8, size 0x8
  __declspec(property(get = __get__settingsFlowCoordinator, put = __set__settingsFlowCoordinator))::GlobalNamespace::SettingsFlowCoordinator* _settingsFlowCoordinator;

  /// @brief Field _multiplayerModeSelectionFlowCoordinator, offset 0xd0, size 0x8
  __declspec(property(get = __get__multiplayerModeSelectionFlowCoordinator,
                      put = __set__multiplayerModeSelectionFlowCoordinator))::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* _multiplayerModeSelectionFlowCoordinator;

  /// @brief Field _helpFlowCoordinator, offset 0xd8, size 0x8
  __declspec(property(get = __get__helpFlowCoordinator, put = __set__helpFlowCoordinator))::GlobalNamespace::HelpFlowCoordinator* _helpFlowCoordinator;

  /// @brief Field _editAvatarFlowCoordinatorHelper, offset 0xe0, size 0x8
  __declspec(property(get = __get__editAvatarFlowCoordinatorHelper, put = __set__editAvatarFlowCoordinatorHelper))::GlobalNamespace::EditAvatarFlowCoordinatorHelper* _editAvatarFlowCoordinatorHelper;

  /// @brief Field _simpleDialogPromptViewController, offset 0xe8, size 0x8
  __declspec(property(get = __get__simpleDialogPromptViewController,
                      put = __set__simpleDialogPromptViewController))::GlobalNamespace::SimpleDialogPromptViewController* _simpleDialogPromptViewController;

  /// @brief Field _mainMenuViewController, offset 0xf0, size 0x8
  __declspec(property(get = __get__mainMenuViewController, put = __set__mainMenuViewController))::GlobalNamespace::MainMenuViewController* _mainMenuViewController;

  /// @brief Field _playerOptionsViewController, offset 0xf8, size 0x8
  __declspec(property(get = __get__playerOptionsViewController, put = __set__playerOptionsViewController))::GlobalNamespace::PlayerOptionsViewController* _playerOptionsViewController;

  /// @brief Field _optionsViewController, offset 0x100, size 0x8
  __declspec(property(get = __get__optionsViewController, put = __set__optionsViewController))::GlobalNamespace::OptionsViewController* _optionsViewController;

  /// @brief Field _playerDataModel, offset 0x108, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _menuLightsManager, offset 0x110, size 0x8
  __declspec(property(get = __get__menuLightsManager, put = __set__menuLightsManager))::GlobalNamespace::MenuLightsManager* _menuLightsManager;

  /// @brief Field _fadeInOut, offset 0x118, size 0x8
  __declspec(property(get = __get__fadeInOut, put = __set__fadeInOut))::GlobalNamespace::FadeInOutController* _fadeInOut;

  /// @brief Field _beatmapLevelsModel, offset 0x120, size 0x8
  __declspec(property(get = __get__beatmapLevelsModel, put = __set__beatmapLevelsModel))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _menuTransitionsHelper, offset 0x128, size 0x8
  __declspec(property(get = __get__menuTransitionsHelper, put = __set__menuTransitionsHelper))::GlobalNamespace::MenuTransitionsHelper* _menuTransitionsHelper;

  /// @brief Field _appStaticSettings, offset 0x130, size 0x8
  __declspec(property(get = __get__appStaticSettings, put = __set__appStaticSettings))::GlobalNamespace::AppStaticSettingsSO* _appStaticSettings;

  /// @brief Field _analyticsModel, offset 0x138, size 0x8
  __declspec(property(get = __get__analyticsModel, put = __set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _avatarSystemCollection, offset 0x140, size 0x8
  __declspec(property(get = __get__avatarSystemCollection, put = __set__avatarSystemCollection))::BeatSaber::AvatarCore::AvatarSystemCollection* _avatarSystemCollection;

  /// @brief Field _menuDestinationRequest, offset 0x148, size 0x8
  __declspec(property(get = __get__menuDestinationRequest, put = __set__menuDestinationRequest))::GlobalNamespace::MenuDestination* _menuDestinationRequest;

  /// @brief Field _afterDialogPromptFlowCoordinator, offset 0x150, size 0x8
  __declspec(property(get = __get__afterDialogPromptFlowCoordinator, put = __set__afterDialogPromptFlowCoordinator))::HMUI::FlowCoordinator* _afterDialogPromptFlowCoordinator;

  /// @brief Field _goToMultiplayerAfterAvatarCreation, offset 0x158, size 0x1
  __declspec(property(get = __get__goToMultiplayerAfterAvatarCreation, put = __set__goToMultiplayerAfterAvatarCreation)) bool _goToMultiplayerAfterAvatarCreation;

  /// @brief Field _startWithSettings, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__startWithSettings, put = setStaticF__startWithSettings)) bool _startWithSettings;

  constexpr ::GlobalNamespace::MenuLightsPresetSO*& __get__defaultLightsPreset();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> const& __get__defaultLightsPreset() const;

  constexpr void __set__defaultLightsPreset(::GlobalNamespace::MenuLightsPresetSO* value);

  constexpr ::GlobalNamespace::SoloFreePlayFlowCoordinator*& __get__soloFreePlayFlowCoordinator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SoloFreePlayFlowCoordinator*> const& __get__soloFreePlayFlowCoordinator() const;

  constexpr void __set__soloFreePlayFlowCoordinator(::GlobalNamespace::SoloFreePlayFlowCoordinator* value);

  constexpr ::GlobalNamespace::PartyFreePlayFlowCoordinator*& __get__partyFreePlayFlowCoordinator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PartyFreePlayFlowCoordinator*> const& __get__partyFreePlayFlowCoordinator() const;

  constexpr void __set__partyFreePlayFlowCoordinator(::GlobalNamespace::PartyFreePlayFlowCoordinator* value);

  constexpr ::GlobalNamespace::CampaignFlowCoordinator*& __get__campaignFlowCoordinator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CampaignFlowCoordinator*> const& __get__campaignFlowCoordinator() const;

  constexpr void __set__campaignFlowCoordinator(::GlobalNamespace::CampaignFlowCoordinator* value);

  constexpr ::GlobalNamespace::SettingsFlowCoordinator*& __get__settingsFlowCoordinator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsFlowCoordinator*> const& __get__settingsFlowCoordinator() const;

  constexpr void __set__settingsFlowCoordinator(::GlobalNamespace::SettingsFlowCoordinator* value);

  constexpr ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*& __get__multiplayerModeSelectionFlowCoordinator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*> const& __get__multiplayerModeSelectionFlowCoordinator() const;

  constexpr void __set__multiplayerModeSelectionFlowCoordinator(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* value);

  constexpr ::GlobalNamespace::HelpFlowCoordinator*& __get__helpFlowCoordinator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HelpFlowCoordinator*> const& __get__helpFlowCoordinator() const;

  constexpr void __set__helpFlowCoordinator(::GlobalNamespace::HelpFlowCoordinator* value);

  constexpr ::GlobalNamespace::EditAvatarFlowCoordinatorHelper*& __get__editAvatarFlowCoordinatorHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EditAvatarFlowCoordinatorHelper*> const& __get__editAvatarFlowCoordinatorHelper() const;

  constexpr void __set__editAvatarFlowCoordinatorHelper(::GlobalNamespace::EditAvatarFlowCoordinatorHelper* value);

  constexpr ::GlobalNamespace::SimpleDialogPromptViewController*& __get__simpleDialogPromptViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SimpleDialogPromptViewController*> const& __get__simpleDialogPromptViewController() const;

  constexpr void __set__simpleDialogPromptViewController(::GlobalNamespace::SimpleDialogPromptViewController* value);

  constexpr ::GlobalNamespace::MainMenuViewController*& __get__mainMenuViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainMenuViewController*> const& __get__mainMenuViewController() const;

  constexpr void __set__mainMenuViewController(::GlobalNamespace::MainMenuViewController* value);

  constexpr ::GlobalNamespace::PlayerOptionsViewController*& __get__playerOptionsViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerOptionsViewController*> const& __get__playerOptionsViewController() const;

  constexpr void __set__playerOptionsViewController(::GlobalNamespace::PlayerOptionsViewController* value);

  constexpr ::GlobalNamespace::OptionsViewController*& __get__optionsViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OptionsViewController*> const& __get__optionsViewController() const;

  constexpr void __set__optionsViewController(::GlobalNamespace::OptionsViewController* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::GlobalNamespace::MenuLightsManager*& __get__menuLightsManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsManager*> const& __get__menuLightsManager() const;

  constexpr void __set__menuLightsManager(::GlobalNamespace::MenuLightsManager* value);

  constexpr ::GlobalNamespace::FadeInOutController*& __get__fadeInOut();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FadeInOutController*> const& __get__fadeInOut() const;

  constexpr void __set__fadeInOut(::GlobalNamespace::FadeInOutController* value);

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __get__beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __get__beatmapLevelsModel() const;

  constexpr void __set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr ::GlobalNamespace::MenuTransitionsHelper*& __get__menuTransitionsHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuTransitionsHelper*> const& __get__menuTransitionsHelper() const;

  constexpr void __set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper* value);

  constexpr ::GlobalNamespace::AppStaticSettingsSO*& __get__appStaticSettings();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppStaticSettingsSO*> const& __get__appStaticSettings() const;

  constexpr void __set__appStaticSettings(::GlobalNamespace::AppStaticSettingsSO* value);

  constexpr ::GlobalNamespace::IAnalyticsModel*& __get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __get__analyticsModel() const;

  constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& __get__avatarSystemCollection();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSystemCollection*> const& __get__avatarSystemCollection() const;

  constexpr void __set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value);

  constexpr ::GlobalNamespace::MenuDestination*& __get__menuDestinationRequest();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuDestination*> const& __get__menuDestinationRequest() const;

  constexpr void __set__menuDestinationRequest(::GlobalNamespace::MenuDestination* value);

  constexpr ::HMUI::FlowCoordinator*& __get__afterDialogPromptFlowCoordinator();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> const& __get__afterDialogPromptFlowCoordinator() const;

  constexpr void __set__afterDialogPromptFlowCoordinator(::HMUI::FlowCoordinator* value);

  constexpr bool& __get__goToMultiplayerAfterAvatarCreation();

  constexpr bool const& __get__goToMultiplayerAfterAvatarCreation() const;

  constexpr void __set__goToMultiplayerAfterAvatarCreation(bool value);

  static inline void setStaticF__startWithSettings(bool value);

  static inline bool getStaticF__startWithSettings();

  /// @brief Method DidActivate, addr 0x228b468, size 0x49c, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method TopViewControllerWillChange, addr 0x228bb90, size 0x194, virtual true, abstract: false, final false
  inline void TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController, ::HMUI::__ViewController__AnimationType animationType);

  /// @brief Method InitialViewControllerWasPresented, addr 0x228bd24, size 0x78, virtual true, abstract: false, final false
  inline void InitialViewControllerWasPresented();

  /// @brief Method DidDeactivate, addr 0x228bd9c, size 0x43c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method PresentFlowCoordinatorOrAskForTutorial, addr 0x228c3f0, size 0x1d0, virtual false, abstract: false, final false
  inline void PresentFlowCoordinatorOrAskForTutorial(::HMUI::FlowCoordinator* flowCoordinator);

  /// @brief Method HandleMainMenuViewControllerDidFinish, addr 0x228c5c0, size 0x174, virtual false, abstract: false, final false
  inline void HandleMainMenuViewControllerDidFinish(::GlobalNamespace::MainMenuViewController* viewController, ::GlobalNamespace::__MainMenuViewController__MenuButton subMenuType);

  /// @brief Method HandleMultiplayerDisclaimerDidFinishAction, addr 0x228c7d4, size 0xa4, virtual false, abstract: false, final false
  inline void HandleMultiplayerDisclaimerDidFinishAction(int32_t buttonNumber);

  /// @brief Method HandleOptionsViewControllerDidFinish, addr 0x228c878, size 0xe0, virtual false, abstract: false, final false
  inline void HandleOptionsViewControllerDidFinish(::GlobalNamespace::__OptionsViewController__OptionsButton optionsType);

  /// @brief Method HandlePlayerOptionsViewControllerDidFinish, addr 0x228c958, size 0x14, virtual false, abstract: false, final false
  inline void HandlePlayerOptionsViewControllerDidFinish(::HMUI::ViewController* viewController);

  /// @brief Method HandleHowToPlayViewControllerDidFinish, addr 0x228c96c, size 0x78, virtual false, abstract: false, final false
  inline void HandleHowToPlayViewControllerDidFinish(::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions howToPlayOptions);

  /// @brief Method HandleCampaignFlowCoordinatorDidFinish, addr 0x228c9e4, size 0x14, virtual false, abstract: false, final false
  inline void HandleCampaignFlowCoordinatorDidFinish(::GlobalNamespace::CampaignFlowCoordinator* flowCoordinator);

  /// @brief Method HandleEditAvatarFlowCoordinatorHelperDidFinish, addr 0x228c9f8, size 0xac, virtual false, abstract: false, final false
  inline void HandleEditAvatarFlowCoordinatorHelperDidFinish(::HMUI::FlowCoordinator* flowCoordinator, ::GlobalNamespace::__EditAvatarFlowCoordinatorHelper__FinishAction finishAction);

  /// @brief Method HandleSoloFreePlayFlowCoordinatorDidFinish, addr 0x228caa4, size 0x14, virtual false, abstract: false, final false
  inline void HandleSoloFreePlayFlowCoordinatorDidFinish(::GlobalNamespace::LevelSelectionFlowCoordinator* flowCoordinator);

  /// @brief Method HandlePartyFreePlayFlowCoordinatorDidFinish, addr 0x228cab8, size 0x14, virtual false, abstract: false, final false
  inline void HandlePartyFreePlayFlowCoordinatorDidFinish(::GlobalNamespace::LevelSelectionFlowCoordinator* flowCoordinator);

  /// @brief Method HandleSettingsFlowCoordinatorDidFinish, addr 0x228cacc, size 0x94, virtual false, abstract: false, final false
  inline void HandleSettingsFlowCoordinatorDidFinish(::GlobalNamespace::SettingsFlowCoordinator* settingsFlowCoordinator, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction finishAction);

  /// @brief Method HandleHelpFlowCoordinatorDidFinish, addr 0x228cb60, size 0x14, virtual false, abstract: false, final false
  inline void HandleHelpFlowCoordinatorDidFinish(::GlobalNamespace::HelpFlowCoordinator* helpFlowCoordinator);

  /// @brief Method HandleMultiplayerModeSelectionFlowCoordinatorDidFinish, addr 0x228cb74, size 0x14, virtual false, abstract: false, final false
  inline void HandleMultiplayerModeSelectionFlowCoordinatorDidFinish(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* multiplayerModeSelectionFlowCoordinator);

  /// @brief Method HandleMainMenuViewControllerMusicPackPromoButtonWasPressed, addr 0x228cb88, size 0xac, virtual false, abstract: false, final false
  inline void HandleMainMenuViewControllerMusicPackPromoButtonWasPressed(::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel);

  /// @brief Method ProcessMenuDestinationRequest, addr 0x228cc34, size 0x9c, virtual false, abstract: false, final false
  inline void ProcessMenuDestinationRequest(::GlobalNamespace::MenuDestination* destination);

  /// @brief Method PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator, addr 0x228c734, size 0xa0, virtual false, abstract: false, final false
  inline void PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator(bool presentImmediately);

  /// @brief Method ProcessMenuDestinationRequestAfterFrameCoroutine, addr 0x228bb1c, size 0x74, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* ProcessMenuDestinationRequestAfterFrameCoroutine(::GlobalNamespace::MenuDestination* destination);

  /// @brief Method BackButtonWasPressed, addr 0x228ccf8, size 0x9c, virtual true, abstract: false, final false
  inline void BackButtonWasPressed(::HMUI::ViewController* topViewController);

  static inline ::GlobalNamespace::MainFlowCoordinator* New_ctor();

  /// @brief Method .ctor, addr 0x228cd94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <PresentFlowCoordinatorOrAskForTutorial>b__28_0, addr 0x228cd9c, size 0xe0, virtual false, abstract: false, final false
  inline void _PresentFlowCoordinatorOrAskForTutorial_b__28_0(int32_t buttonNumber);

  /// @brief Method <PresentFlowCoordinatorOrAskForTutorial>b__28_1, addr 0x228ce7c, size 0x18, virtual false, abstract: false, final false
  inline void _PresentFlowCoordinatorOrAskForTutorial_b__28_1();

  /// @brief Method <HandleMainMenuViewControllerDidFinish>b__29_0, addr 0x228ce94, size 0x1c, virtual false, abstract: false, final false
  inline void _HandleMainMenuViewControllerDidFinish_b__29_0();

  /// @brief Method <PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator>b__43_0, addr 0x228ceb0, size 0x4, virtual false, abstract: false, final false
  inline void _PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_b__43_0(int32_t buttonNumber);

  // Ctor Parameters [CppParam { name: "", ty: "MainFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainFlowCoordinator(MainFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainFlowCoordinator(MainFlowCoordinator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainFlowCoordinator();

public:
  /// @brief Field _defaultLightsPreset, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::MenuLightsPresetSO* ____defaultLightsPreset;

  /// @brief Field _soloFreePlayFlowCoordinator, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::SoloFreePlayFlowCoordinator* ____soloFreePlayFlowCoordinator;

  /// @brief Field _partyFreePlayFlowCoordinator, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::PartyFreePlayFlowCoordinator* ____partyFreePlayFlowCoordinator;

  /// @brief Field _campaignFlowCoordinator, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::CampaignFlowCoordinator* ____campaignFlowCoordinator;

  /// @brief Field _settingsFlowCoordinator, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::SettingsFlowCoordinator* ____settingsFlowCoordinator;

  /// @brief Field _multiplayerModeSelectionFlowCoordinator, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* ____multiplayerModeSelectionFlowCoordinator;

  /// @brief Field _helpFlowCoordinator, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::HelpFlowCoordinator* ____helpFlowCoordinator;

  /// @brief Field _editAvatarFlowCoordinatorHelper, offset: 0xe0, size: 0x8, def value: None
  ::GlobalNamespace::EditAvatarFlowCoordinatorHelper* ____editAvatarFlowCoordinatorHelper;

  /// @brief Field _simpleDialogPromptViewController, offset: 0xe8, size: 0x8, def value: None
  ::GlobalNamespace::SimpleDialogPromptViewController* ____simpleDialogPromptViewController;

  /// @brief Field _mainMenuViewController, offset: 0xf0, size: 0x8, def value: None
  ::GlobalNamespace::MainMenuViewController* ____mainMenuViewController;

  /// @brief Field _playerOptionsViewController, offset: 0xf8, size: 0x8, def value: None
  ::GlobalNamespace::PlayerOptionsViewController* ____playerOptionsViewController;

  /// @brief Field _optionsViewController, offset: 0x100, size: 0x8, def value: None
  ::GlobalNamespace::OptionsViewController* ____optionsViewController;

  /// @brief Field _playerDataModel, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _menuLightsManager, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::MenuLightsManager* ____menuLightsManager;

  /// @brief Field _fadeInOut, offset: 0x118, size: 0x8, def value: None
  ::GlobalNamespace::FadeInOutController* ____fadeInOut;

  /// @brief Field _beatmapLevelsModel, offset: 0x120, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _menuTransitionsHelper, offset: 0x128, size: 0x8, def value: None
  ::GlobalNamespace::MenuTransitionsHelper* ____menuTransitionsHelper;

  /// @brief Field _appStaticSettings, offset: 0x130, size: 0x8, def value: None
  ::GlobalNamespace::AppStaticSettingsSO* ____appStaticSettings;

  /// @brief Field _analyticsModel, offset: 0x138, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field _avatarSystemCollection, offset: 0x140, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::AvatarSystemCollection* ____avatarSystemCollection;

  /// @brief Field _menuDestinationRequest, offset: 0x148, size: 0x8, def value: None
  ::GlobalNamespace::MenuDestination* ____menuDestinationRequest;

  /// @brief Field _afterDialogPromptFlowCoordinator, offset: 0x150, size: 0x8, def value: None
  ::HMUI::FlowCoordinator* ____afterDialogPromptFlowCoordinator;

  /// @brief Field _goToMultiplayerAfterAvatarCreation, offset: 0x158, size: 0x1, def value: None
  bool ____goToMultiplayerAfterAvatarCreation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainFlowCoordinator, 0x160>, "Size mismatch!");

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

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____appStaticSettings) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____analyticsModel) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____avatarSystemCollection) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____menuDestinationRequest) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____afterDialogPromptFlowCoordinator) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____goToMultiplayerAfterAvatarCreation) == 0x158, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainFlowCoordinator*, "", "MainFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__44*, "",
                       "MainFlowCoordinator/<ProcessMenuDestinationRequestAfterFrameCoroutine>d__44");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainFlowCoordinator___HandleEditAvatarFlowCoordinatorHelperDidFinish_d__35, "",
                       "MainFlowCoordinator/<HandleEditAvatarFlowCoordinatorHelperDidFinish>d__35");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainFlowCoordinator___HandleMultiplayerDisclaimerDidFinishAction_d__30, "", "MainFlowCoordinator/<HandleMultiplayerDisclaimerDidFinishAction>d__30");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainFlowCoordinator___PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_d__43, "",
                       "MainFlowCoordinator/<PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator>d__43");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequest_d__42, "", "MainFlowCoordinator/<ProcessMenuDestinationRequest>d__42");
