#pragma once
// IWYU pragma private; include "GlobalNamespace/HealthWarningFlowCoordinator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/Polyglot/zzzz__LocalizationLanguage_def.hpp"
#include "GlobalNamespace/zzzz__EulaViewController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "GlobalNamespace/zzzz__SelectRegionViewController_def.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__UserAgeCategory_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HealthWarningFlowCoordinator)
namespace BGLib::Polyglot {
struct LocalizationLanguage;
}
namespace GlobalNamespace {
class BeatmapLevelsEntitlementModel;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
template <typename T> class CompletableViewController_1;
}
namespace GlobalNamespace {
class CompletableViewController;
}
namespace GlobalNamespace {
class EndOfLifeNoticeViewController;
}
namespace GlobalNamespace {
class EulaViewController;
}
namespace GlobalNamespace {
class ExplicitContentWarningViewController;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__AgreeToEulaAsync_d__31;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__30;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__22;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__RunAsync_d__26;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__SelectLanguageAsync_d__27;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__SelectRegionAsync_d__29;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__33;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__32;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__28;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__UpdateUacAsync_d__34;
}
namespace GlobalNamespace {
class HealthWarningSceneSetupData;
}
namespace GlobalNamespace {
class HealthWarningViewController;
}
namespace GlobalNamespace {
class IFileStorage;
}
namespace GlobalNamespace {
class NoUserAgeWarningViewController;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class PlayerData;
}
namespace GlobalNamespace {
class PrivacyPolicyViewController;
}
namespace GlobalNamespace {
class SelectLanguageViewController;
}
namespace GlobalNamespace {
class SelectRegionViewController;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace HMUI {
struct ViewController_AnimationType;
}
namespace HMUI {
class ViewController;
}
namespace OculusStudios::Platform::Core {
class IPlatform;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
// Forward declare root types
namespace GlobalNamespace {
class HealthWarningFlowCoordinator;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__AgreeToEulaAsync_d__31;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__30;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__22;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__RunAsync_d__26;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__SelectLanguageAsync_d__27;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__SelectRegionAsync_d__29;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__33;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__32;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__28;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__UpdateUacAsync_d__34;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HealthWarningFlowCoordinator);
MARK_VAL_T(::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__31);
MARK_VAL_T(::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__30);
MARK_VAL_T(::GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__22);
MARK_VAL_T(::GlobalNamespace::HealthWarningFlowCoordinator__RunAsync_d__26);
MARK_VAL_T(::GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__27);
MARK_VAL_T(::GlobalNamespace::HealthWarningFlowCoordinator__SelectRegionAsync_d__29);
MARK_VAL_T(::GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__33);
MARK_VAL_T(::GlobalNamespace::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__32);
MARK_VAL_T(::GlobalNamespace::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__28);
MARK_VAL_T(::GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__34);
// Dependencies EulaViewController::ButtonType, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: HealthWarningFlowCoordinator/<AgreeToEulaAsync>d__31
struct CORDL_TYPE HealthWarningFlowCoordinator__AgreeToEulaAsync_d__31 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x57fbe28, size 0x33c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x57fc164, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthWarningFlowCoordinator__AgreeToEulaAsync_d__31();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EulaViewController_ButtonType>", modifiers: "", def_value:
  // None }]
  constexpr HealthWarningFlowCoordinator__AgreeToEulaAsync_d__31(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                 ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this,
                                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EulaViewController_ButtonType> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6375 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EulaViewController_ButtonType> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__31, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__31, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__31, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__31, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__31, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: HealthWarningFlowCoordinator/<AgreeToPrivacyPolicyAsync>d__30
struct CORDL_TYPE HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__30 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x57fc1d0, size 0x28c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x57fc45c, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__30();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__30(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                          ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this,
                                                                          ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6376 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__30, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__30, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__30, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__30, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__30, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: HealthWarningFlowCoordinator/<FilterExcludedSongsAsync>d__22
struct CORDL_TYPE HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__22 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x57fc4c8, size 0x598, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x57fca60, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__22();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
  // modifiers: "", def_value: None }, CppParam { name: "_timeoutTokenSource_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None }, CppParam { name: "__u__1",
  // ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW,::Array<::StringW>*>>", modifiers: "", def_value: None }]
  constexpr HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__22(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                         ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this,
                                                                         ::System::Threading::CancellationTokenSource* _timeoutTokenSource_5__2,
                                                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW, ::Array<::StringW>*>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6377 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this;

  /// @brief Field <timeoutTokenSource>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* _timeoutTokenSource_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::StringW, ::Array<::StringW>*>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__22, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__22, _timeoutTokenSource_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__22, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__22, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: HealthWarningFlowCoordinator/<RunAsync>d__26
struct CORDL_TYPE HealthWarningFlowCoordinator__RunAsync_d__26 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x57fcacc, size 0x730, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x57fd1fc, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthWarningFlowCoordinator__RunAsync_d__26();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr HealthWarningFlowCoordinator__RunAsync_d__26(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                         ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6378 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__RunAsync_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__RunAsync_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__RunAsync_d__26, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__RunAsync_d__26, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningFlowCoordinator__RunAsync_d__26, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BGLib.Polyglot.LocalizationLanguage, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: HealthWarningFlowCoordinator/<SelectLanguageAsync>d__27
struct CORDL_TYPE HealthWarningFlowCoordinator__SelectLanguageAsync_d__27 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x57fd268, size 0x418, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x57fd680, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthWarningFlowCoordinator__SelectLanguageAsync_d__27();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
  // modifiers: "", def_value: None }, CppParam { name: "_selectedLanguage_5__2", ty: "::BGLib::Polyglot::LocalizationLanguage", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr HealthWarningFlowCoordinator__SelectLanguageAsync_d__27(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                    ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this, ::BGLib::Polyglot::LocalizationLanguage _selectedLanguage_5__2,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6379 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this;

  /// @brief Field <selectedLanguage>5__2, offset: 0x28, size: 0x4, def value: None
  ::BGLib::Polyglot::LocalizationLanguage _selectedLanguage_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__27, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__27, _selectedLanguage_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__27, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__27, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies SelectRegionViewController::Region, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: HealthWarningFlowCoordinator/<SelectRegionAsync>d__29
struct CORDL_TYPE HealthWarningFlowCoordinator__SelectRegionAsync_d__29 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x57fd6ec, size 0x27c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x57fd968, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthWarningFlowCoordinator__SelectRegionAsync_d__29();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::SelectRegionViewController_Region>", modifiers: "",
  // def_value: None }]
  constexpr HealthWarningFlowCoordinator__SelectRegionAsync_d__29(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                  ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this,
                                                                  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::SelectRegionViewController_Region> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6380 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::SelectRegionViewController_Region> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__SelectRegionAsync_d__29, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__SelectRegionAsync_d__29, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__SelectRegionAsync_d__29, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__SelectRegionAsync_d__29, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningFlowCoordinator__SelectRegionAsync_d__29, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PlayerSensitivityFlag, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: HealthWarningFlowCoordinator/<ShowExplicitContentWarningAsync>d__33
struct CORDL_TYPE HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__33 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x57fd9d4, size 0x5b0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x57fdf84, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__33();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
  // modifiers: "", def_value: None }, CppParam { name: "_playerData_5__2", ty: "::GlobalNamespace::PlayerData*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlayerSensitivityFlag>", modifiers: "", def_value: None }]
  constexpr HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__33(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this, ::GlobalNamespace::PlayerData* _playerData_5__2,
                                                                                ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlayerSensitivityFlag> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6381 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this;

  /// @brief Field <playerData>5__2, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::PlayerData* _playerData_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlayerSensitivityFlag> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__33, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__33, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__33, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__33, _playerData_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__33, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__33, __u__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__33, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: HealthWarningFlowCoordinator/<ShowHealthWarningAsync>d__32
struct CORDL_TYPE HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__32 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x57fdff0, size 0x25c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x57fe24c, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__32();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__32(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                       ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6382 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__32, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__32, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__32, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: HealthWarningFlowCoordinator/<ShowSelectLanguageViewControllerAsync>d__28
struct CORDL_TYPE HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__28 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x57fe2b8, size 0x3b0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x57fe668, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__28();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__28(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                      ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this,
                                                                                      ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6383 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__28, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__28, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__28, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__28, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__28, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OculusStudios.Platform.Core.UserAgeCategory, PlayerSensitivityFlag, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: HealthWarningFlowCoordinator/<UpdateUacAsync>d__34
struct CORDL_TYPE HealthWarningFlowCoordinator__UpdateUacAsync_d__34 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x57fe6d4, size 0x670, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x57fed44, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthWarningFlowCoordinator__UpdateUacAsync_d__34();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
  // modifiers: "", def_value: None }, CppParam { name: "_oldAgeCategory_5__2", ty: "::OculusStudios::Platform::Core::UserAgeCategory", modifiers: "", def_value: None }, CppParam { name:
  // "_oldSensitivityFlag_5__3", ty: "::GlobalNamespace::PlayerSensitivityFlag", modifiers: "", def_value: None }, CppParam { name: "__7__wrap3", ty: "::GlobalNamespace::PlayerData*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::UserAgeCategory>", modifiers: "", def_value: None },
  // CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr HealthWarningFlowCoordinator__UpdateUacAsync_d__34(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                               ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this,
                                                               ::OculusStudios::Platform::Core::UserAgeCategory _oldAgeCategory_5__2, ::GlobalNamespace::PlayerSensitivityFlag _oldSensitivityFlag_5__3,
                                                               ::GlobalNamespace::PlayerData* __7__wrap3,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::UserAgeCategory> __u__1,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6384 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this;

  /// @brief Field <oldAgeCategory>5__2, offset: 0x28, size: 0x4, def value: None
  ::OculusStudios::Platform::Core::UserAgeCategory _oldAgeCategory_5__2;

  /// @brief Field <oldSensitivityFlag>5__3, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag _oldSensitivityFlag_5__3;

  /// @brief Field <>7__wrap3, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::PlayerData* __7__wrap3;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::OculusStudios::Platform::Core::UserAgeCategory> __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__34, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__34, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__34, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__34, _oldAgeCategory_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__34, _oldSensitivityFlag_5__3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__34, __7__wrap3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__34, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__34, __u__2) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__34, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BGLib.Polyglot.LocalizationLanguage, HMUI.FlowCoordinator, SelectRegionViewController::Region
namespace GlobalNamespace {
// Is value type: false
// CS Name: HealthWarningFlowCoordinator
class CORDL_TYPE HealthWarningFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using _AgreeToEulaAsync_d__31 = ::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__31;

  using _AgreeToPrivacyPolicyAsync_d__30 = ::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__30;

  using _FilterExcludedSongsAsync_d__22 = ::GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__22;

  using _RunAsync_d__26 = ::GlobalNamespace::HealthWarningFlowCoordinator__RunAsync_d__26;

  using _SelectLanguageAsync_d__27 = ::GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__27;

  using _SelectRegionAsync_d__29 = ::GlobalNamespace::HealthWarningFlowCoordinator__SelectRegionAsync_d__29;

  using _ShowExplicitContentWarningAsync_d__33 = ::GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__33;

  using _ShowHealthWarningAsync_d__32 = ::GlobalNamespace::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__32;

  using _ShowSelectLanguageViewControllerAsync_d__28 = ::GlobalNamespace::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__28;

  using _UpdateUacAsync_d__34 = ::GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__34;

  /// @brief Field _beatmapEntitlementModel, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapEntitlementModel,
                      put = __cordl_internal_set__beatmapEntitlementModel)) ::GlobalNamespace::BeatmapLevelsEntitlementModel* _beatmapEntitlementModel;

  /// @brief Field _beatmapLevelsModel, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _endOfLifeNoticeViewController, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__endOfLifeNoticeViewController, put = __cordl_internal_set__endOfLifeNoticeViewController)) ::UnityW<::GlobalNamespace::EndOfLifeNoticeViewController>
      _endOfLifeNoticeViewController;

  /// @brief Field _eulaViewController, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__eulaViewController, put = __cordl_internal_set__eulaViewController)) ::UnityW<::GlobalNamespace::EulaViewController> _eulaViewController;

  /// @brief Field _explicitContentWarningViewController, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__explicitContentWarningViewController,
                      put = __cordl_internal_set__explicitContentWarningViewController)) ::UnityW<::GlobalNamespace::ExplicitContentWarningViewController>
      _explicitContentWarningViewController;

  /// @brief Field _fileStorage, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__fileStorage, put = __cordl_internal_set__fileStorage)) ::GlobalNamespace::IFileStorage* _fileStorage;

  /// @brief Field _filterExcludedSongsTask, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__filterExcludedSongsTask, put = __cordl_internal_set__filterExcludedSongsTask)) ::System::Threading::Tasks::Task* _filterExcludedSongsTask;

  /// @brief Field _healthWarningSceneSetupData, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__healthWarningSceneSetupData,
                      put = __cordl_internal_set__healthWarningSceneSetupData)) ::GlobalNamespace::HealthWarningSceneSetupData* _healthWarningSceneSetupData;

  /// @brief Field _healthWarningViewController, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__healthWarningViewController, put = __cordl_internal_set__healthWarningViewController)) ::UnityW<::GlobalNamespace::HealthWarningViewController>
      _healthWarningViewController;

  /// @brief Field _noUserAgeWarningViewController, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__noUserAgeWarningViewController,
                      put = __cordl_internal_set__noUserAgeWarningViewController)) ::UnityW<::GlobalNamespace::NoUserAgeWarningViewController>
      _noUserAgeWarningViewController;

  /// @brief Field _openedWithLanguage, offset 0x134, size 0x4
  __declspec(property(get = __cordl_internal_get__openedWithLanguage, put = __cordl_internal_set__openedWithLanguage)) ::BGLib::Polyglot::LocalizationLanguage _openedWithLanguage;

  /// @brief Field _platform, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__platform, put = __cordl_internal_set__platform)) ::OculusStudios::Platform::Core::IPlatform* _platform;

  /// @brief Field _playerDataModel, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _privacyPolicyViewController, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__privacyPolicyViewController, put = __cordl_internal_set__privacyPolicyViewController)) ::UnityW<::GlobalNamespace::PrivacyPolicyViewController>
      _privacyPolicyViewController;

  /// @brief Field _selectLanguageViewController, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__selectLanguageViewController, put = __cordl_internal_set__selectLanguageViewController)) ::UnityW<::GlobalNamespace::SelectLanguageViewController>
      _selectLanguageViewController;

  /// @brief Field _selectRegionViewController, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__selectRegionViewController, put = __cordl_internal_set__selectRegionViewController)) ::UnityW<::GlobalNamespace::SelectRegionViewController>
      _selectRegionViewController;

  /// @brief Field _selectedRegion, offset 0x130, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedRegion, put = __cordl_internal_set__selectedRegion)) ::GlobalNamespace::SelectRegionViewController_Region _selectedRegion;

  /// @brief Field _settingsManager, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _updateUacTask, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__updateUacTask, put = __cordl_internal_set__updateUacTask)) ::System::Threading::Tasks::Task* _updateUacTask;

  /// @brief Field _viewControllerTitles, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__viewControllerTitles,
                      put = __cordl_internal_set__viewControllerTitles)) ::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>* _viewControllerTitles;

  /// @brief Method AgreeToEulaAsync, addr 0x57fbad4, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* AgreeToEulaAsync();

  /// @brief Method AgreeToPrivacyPolicyAsync, addr 0x57fba24, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* AgreeToPrivacyPolicyAsync();

  /// @brief Method DidActivate, addr 0x57fb164, size 0x370, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method FilterExcludedSongsAsync, addr 0x57fb5dc, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* FilterExcludedSongsAsync();

  static inline ::GlobalNamespace::HealthWarningFlowCoordinator* New_ctor();

  /// @brief Method RunAsync, addr 0x57fb760, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* RunAsync();

  /// @brief Method SelectLanguageAsync, addr 0x57fb810, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SelectLanguageAsync();

  /// @brief Method SelectRegionAsync, addr 0x57fb974, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SelectRegionAsync();

  /// @brief Method ShowExplicitContentWarningAsync, addr 0x57fbc34, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ShowExplicitContentWarningAsync();

  /// @brief Method ShowHealthWarningAsync, addr 0x57fbb84, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ShowHealthWarningAsync();

  /// @brief Method ShowSelectLanguageViewControllerAsync, addr 0x57fb8c4, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ShowSelectLanguageViewControllerAsync();

  /// @brief Method ShowTopViewController, addr 0x57fb4d4, size 0x108, virtual false, abstract: false, final false
  inline void ShowTopViewController(::HMUI::ViewController* viewController);

  /// @brief Method ShowTopViewControllerAsync, addr 0x57fb690, size 0x44, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ShowTopViewControllerAsync(::GlobalNamespace::CompletableViewController* viewController);

  /// @brief Method ShowTopViewControllerAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* ShowTopViewControllerAsync(::GlobalNamespace::CompletableViewController_1<T>* viewController);

  /// @brief Method TopViewControllerWillChange, addr 0x57fb6d4, size 0x8c, virtual true, abstract: false, final false
  inline void TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController, ::HMUI::ViewController_AnimationType animationType);

  /// @brief Method UpdateUacAsync, addr 0x57fbce4, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* UpdateUacAsync();

  /// @brief Method <ShowSelectLanguageViewControllerAsync>g__HandleDidChangeLanguage|28_0, addr 0x57fbda0, size 0x88, virtual false, abstract: false, final false
  inline void _ShowSelectLanguageViewControllerAsync_g__HandleDidChangeLanguage_28_0(::BGLib::Polyglot::LocalizationLanguage language);

  constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel* const& __cordl_internal_get__beatmapEntitlementModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel*& __cordl_internal_get__beatmapEntitlementModel();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::UnityW<::GlobalNamespace::EndOfLifeNoticeViewController> const& __cordl_internal_get__endOfLifeNoticeViewController() const;

  constexpr ::UnityW<::GlobalNamespace::EndOfLifeNoticeViewController>& __cordl_internal_get__endOfLifeNoticeViewController();

  constexpr ::UnityW<::GlobalNamespace::EulaViewController> const& __cordl_internal_get__eulaViewController() const;

  constexpr ::UnityW<::GlobalNamespace::EulaViewController>& __cordl_internal_get__eulaViewController();

  constexpr ::UnityW<::GlobalNamespace::ExplicitContentWarningViewController> const& __cordl_internal_get__explicitContentWarningViewController() const;

  constexpr ::UnityW<::GlobalNamespace::ExplicitContentWarningViewController>& __cordl_internal_get__explicitContentWarningViewController();

  constexpr ::GlobalNamespace::IFileStorage* const& __cordl_internal_get__fileStorage() const;

  constexpr ::GlobalNamespace::IFileStorage*& __cordl_internal_get__fileStorage();

  constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__filterExcludedSongsTask() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__filterExcludedSongsTask();

  constexpr ::GlobalNamespace::HealthWarningSceneSetupData* const& __cordl_internal_get__healthWarningSceneSetupData() const;

  constexpr ::GlobalNamespace::HealthWarningSceneSetupData*& __cordl_internal_get__healthWarningSceneSetupData();

  constexpr ::UnityW<::GlobalNamespace::HealthWarningViewController> const& __cordl_internal_get__healthWarningViewController() const;

  constexpr ::UnityW<::GlobalNamespace::HealthWarningViewController>& __cordl_internal_get__healthWarningViewController();

  constexpr ::UnityW<::GlobalNamespace::NoUserAgeWarningViewController> const& __cordl_internal_get__noUserAgeWarningViewController() const;

  constexpr ::UnityW<::GlobalNamespace::NoUserAgeWarningViewController>& __cordl_internal_get__noUserAgeWarningViewController();

  constexpr ::BGLib::Polyglot::LocalizationLanguage const& __cordl_internal_get__openedWithLanguage() const;

  constexpr ::BGLib::Polyglot::LocalizationLanguage& __cordl_internal_get__openedWithLanguage();

  constexpr ::OculusStudios::Platform::Core::IPlatform* const& __cordl_internal_get__platform() const;

  constexpr ::OculusStudios::Platform::Core::IPlatform*& __cordl_internal_get__platform();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyViewController> const& __cordl_internal_get__privacyPolicyViewController() const;

  constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyViewController>& __cordl_internal_get__privacyPolicyViewController();

  constexpr ::UnityW<::GlobalNamespace::SelectLanguageViewController> const& __cordl_internal_get__selectLanguageViewController() const;

  constexpr ::UnityW<::GlobalNamespace::SelectLanguageViewController>& __cordl_internal_get__selectLanguageViewController();

  constexpr ::UnityW<::GlobalNamespace::SelectRegionViewController> const& __cordl_internal_get__selectRegionViewController() const;

  constexpr ::UnityW<::GlobalNamespace::SelectRegionViewController>& __cordl_internal_get__selectRegionViewController();

  constexpr ::GlobalNamespace::SelectRegionViewController_Region const& __cordl_internal_get__selectedRegion() const;

  constexpr ::GlobalNamespace::SelectRegionViewController_Region& __cordl_internal_get__selectedRegion();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__updateUacTask() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__updateUacTask();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>* const& __cordl_internal_get__viewControllerTitles() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>*& __cordl_internal_get__viewControllerTitles();

  constexpr void __cordl_internal_set__beatmapEntitlementModel(::GlobalNamespace::BeatmapLevelsEntitlementModel* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__endOfLifeNoticeViewController(::UnityW<::GlobalNamespace::EndOfLifeNoticeViewController> value);

  constexpr void __cordl_internal_set__eulaViewController(::UnityW<::GlobalNamespace::EulaViewController> value);

  constexpr void __cordl_internal_set__explicitContentWarningViewController(::UnityW<::GlobalNamespace::ExplicitContentWarningViewController> value);

  constexpr void __cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value);

  constexpr void __cordl_internal_set__filterExcludedSongsTask(::System::Threading::Tasks::Task* value);

  constexpr void __cordl_internal_set__healthWarningSceneSetupData(::GlobalNamespace::HealthWarningSceneSetupData* value);

  constexpr void __cordl_internal_set__healthWarningViewController(::UnityW<::GlobalNamespace::HealthWarningViewController> value);

  constexpr void __cordl_internal_set__noUserAgeWarningViewController(::UnityW<::GlobalNamespace::NoUserAgeWarningViewController> value);

  constexpr void __cordl_internal_set__openedWithLanguage(::BGLib::Polyglot::LocalizationLanguage value);

  constexpr void __cordl_internal_set__platform(::OculusStudios::Platform::Core::IPlatform* value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__privacyPolicyViewController(::UnityW<::GlobalNamespace::PrivacyPolicyViewController> value);

  constexpr void __cordl_internal_set__selectLanguageViewController(::UnityW<::GlobalNamespace::SelectLanguageViewController> value);

  constexpr void __cordl_internal_set__selectRegionViewController(::UnityW<::GlobalNamespace::SelectRegionViewController> value);

  constexpr void __cordl_internal_set__selectedRegion(::GlobalNamespace::SelectRegionViewController_Region value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__updateUacTask(::System::Threading::Tasks::Task* value);

  constexpr void __cordl_internal_set__viewControllerTitles(::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>* value);

  /// @brief Method .ctor, addr 0x57fbd98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthWarningFlowCoordinator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HealthWarningFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HealthWarningFlowCoordinator(HealthWarningFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HealthWarningFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HealthWarningFlowCoordinator(HealthWarningFlowCoordinator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6385 };

  /// @brief Field _selectLanguageViewController, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SelectLanguageViewController> ____selectLanguageViewController;

  /// @brief Field _selectRegionViewController, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SelectRegionViewController> ____selectRegionViewController;

  /// @brief Field _eulaViewController, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EulaViewController> ____eulaViewController;

  /// @brief Field _privacyPolicyViewController, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PrivacyPolicyViewController> ____privacyPolicyViewController;

  /// @brief Field _healthWarningViewController, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HealthWarningViewController> ____healthWarningViewController;

  /// @brief Field _explicitContentWarningViewController, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ExplicitContentWarningViewController> ____explicitContentWarningViewController;

  /// @brief Field _noUserAgeWarningViewController, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoUserAgeWarningViewController> ____noUserAgeWarningViewController;

  /// @brief Field _endOfLifeNoticeViewController, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EndOfLifeNoticeViewController> ____endOfLifeNoticeViewController;

  /// @brief Field _playerDataModel, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _healthWarningSceneSetupData, offset: 0xf8, size: 0x8, def value: None
  ::GlobalNamespace::HealthWarningSceneSetupData* ____healthWarningSceneSetupData;

  /// @brief Field _fileStorage, offset: 0x100, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* ____fileStorage;

  /// @brief Field _settingsManager, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _beatmapLevelsModel, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _platform, offset: 0x118, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::IPlatform* ____platform;

  /// @brief Field _beatmapEntitlementModel, offset: 0x120, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsEntitlementModel* ____beatmapEntitlementModel;

  /// @brief Field _viewControllerTitles, offset: 0x128, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>* ____viewControllerTitles;

  /// @brief Field _selectedRegion, offset: 0x130, size: 0x4, def value: None
  ::GlobalNamespace::SelectRegionViewController_Region ____selectedRegion;

  /// @brief Field _openedWithLanguage, offset: 0x134, size: 0x4, def value: None
  ::BGLib::Polyglot::LocalizationLanguage ____openedWithLanguage;

  /// @brief Field _updateUacTask, offset: 0x138, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____updateUacTask;

  /// @brief Field _filterExcludedSongsTask, offset: 0x140, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____filterExcludedSongsTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____selectLanguageViewController) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____selectRegionViewController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____eulaViewController) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____privacyPolicyViewController) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____healthWarningViewController) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____explicitContentWarningViewController) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____noUserAgeWarningViewController) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____endOfLifeNoticeViewController) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____playerDataModel) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____healthWarningSceneSetupData) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____fileStorage) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____settingsManager) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____beatmapLevelsModel) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____platform) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____beatmapEntitlementModel) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____viewControllerTitles) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____selectedRegion) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____openedWithLanguage) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____updateUacTask) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____filterExcludedSongsTask) == 0x140, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningFlowCoordinator, 0x148>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HealthWarningFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningFlowCoordinator*, "", "HealthWarningFlowCoordinator");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToEulaAsync_d__31, "", "HealthWarningFlowCoordinator/<AgreeToEulaAsync>d__31");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningFlowCoordinator__AgreeToPrivacyPolicyAsync_d__30, "", "HealthWarningFlowCoordinator/<AgreeToPrivacyPolicyAsync>d__30");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningFlowCoordinator__FilterExcludedSongsAsync_d__22, "", "HealthWarningFlowCoordinator/<FilterExcludedSongsAsync>d__22");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningFlowCoordinator__RunAsync_d__26, "", "HealthWarningFlowCoordinator/<RunAsync>d__26");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningFlowCoordinator__SelectLanguageAsync_d__27, "", "HealthWarningFlowCoordinator/<SelectLanguageAsync>d__27");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningFlowCoordinator__SelectRegionAsync_d__29, "", "HealthWarningFlowCoordinator/<SelectRegionAsync>d__29");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningFlowCoordinator__ShowExplicitContentWarningAsync_d__33, "", "HealthWarningFlowCoordinator/<ShowExplicitContentWarningAsync>d__33");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningFlowCoordinator__ShowHealthWarningAsync_d__32, "", "HealthWarningFlowCoordinator/<ShowHealthWarningAsync>d__32");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningFlowCoordinator__ShowSelectLanguageViewControllerAsync_d__28, "", "HealthWarningFlowCoordinator/<ShowSelectLanguageViewControllerAsync>d__28");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningFlowCoordinator__UpdateUacAsync_d__34, "", "HealthWarningFlowCoordinator/<UpdateUacAsync>d__34");
