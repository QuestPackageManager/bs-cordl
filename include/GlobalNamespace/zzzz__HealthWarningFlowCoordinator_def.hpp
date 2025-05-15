#pragma once
// IWYU pragma private; include "GlobalNamespace/HealthWarningFlowCoordinator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/Polyglot/zzzz__Language_def.hpp"
#include "GlobalNamespace/zzzz__SelectRegionViewController_def.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HealthWarningFlowCoordinator)
namespace BGLib::Polyglot {
struct Language;
}
namespace BeatSaber::Init {
class IPlatformInit;
}
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataContainerSO;
}
namespace GlobalNamespace {
class EndOfLifeNoticeViewController;
}
namespace GlobalNamespace {
struct EulaViewController_ButtonType;
}
namespace GlobalNamespace {
class EulaViewController;
}
namespace GlobalNamespace {
class ExplicitContentWarningViewController;
}
namespace GlobalNamespace {
class FadeInOutController;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class HealthWarningFlowCoordinator_InitData;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__GoToNextScene_d__39;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__SaveLanguageAsync_d__25;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__WaitForUserAgeCategory_d__32;
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
class PrivacyPolicyViewController;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class SelectLanguageViewController;
}
namespace GlobalNamespace {
struct SelectRegionViewController_Region;
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
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class HealthWarningFlowCoordinator;
}
namespace GlobalNamespace {
class HealthWarningFlowCoordinator_InitData;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__GoToNextScene_d__39;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__SaveLanguageAsync_d__25;
}
namespace GlobalNamespace {
struct HealthWarningFlowCoordinator__WaitForUserAgeCategory_d__32;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HealthWarningFlowCoordinator);
MARK_REF_PTR_T(::GlobalNamespace::HealthWarningFlowCoordinator_InitData);
MARK_VAL_T(::GlobalNamespace::HealthWarningFlowCoordinator__GoToNextScene_d__39);
MARK_VAL_T(::GlobalNamespace::HealthWarningFlowCoordinator__SaveLanguageAsync_d__25);
MARK_VAL_T(::GlobalNamespace::HealthWarningFlowCoordinator__WaitForUserAgeCategory_d__32);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HealthWarningFlowCoordinator/InitData
class CORDL_TYPE HealthWarningFlowCoordinator_InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field nextScenesTransitionSetupData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_nextScenesTransitionSetupData, put = __cordl_internal_set_nextScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>
      nextScenesTransitionSetupData;

  static inline ::GlobalNamespace::HealthWarningFlowCoordinator_InitData* New_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& __cordl_internal_get_nextScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& __cordl_internal_get_nextScenesTransitionSetupData();

  constexpr void __cordl_internal_set_nextScenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x3c0780c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthWarningFlowCoordinator_InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HealthWarningFlowCoordinator_InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HealthWarningFlowCoordinator_InitData(HealthWarningFlowCoordinator_InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HealthWarningFlowCoordinator_InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HealthWarningFlowCoordinator_InitData(HealthWarningFlowCoordinator_InitData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4795 };

  /// @brief Field nextScenesTransitionSetupData, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> ___nextScenesTransitionSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator_InitData, ___nextScenesTransitionSetupData) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningFlowCoordinator_InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine
namespace GlobalNamespace {
// Is value type: true
// CS Name: HealthWarningFlowCoordinator/<GoToNextScene>d__39
struct CORDL_TYPE HealthWarningFlowCoordinator__GoToNextScene_d__39 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3c07834, size 0x154, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3c07988, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthWarningFlowCoordinator__GoToNextScene_d__39();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
  // modifiers: "", def_value: None }]
  constexpr HealthWarningFlowCoordinator__GoToNextScene_d__39(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                              ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4796 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__GoToNextScene_d__39, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__GoToNextScene_d__39, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__GoToNextScene_d__39, __4__this) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningFlowCoordinator__GoToNextScene_d__39, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BGLib.Polyglot.Language, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: HealthWarningFlowCoordinator/<SaveLanguageAsync>d__25
struct CORDL_TYPE HealthWarningFlowCoordinator__SaveLanguageAsync_d__25 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3c079f0, size 0x360, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3c07d50, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthWarningFlowCoordinator__SaveLanguageAsync_d__25();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
  // modifiers: "", def_value: None }, CppParam { name: "_selectedLanguage_5__2", ty: "::BGLib::Polyglot::Language", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr HealthWarningFlowCoordinator__SaveLanguageAsync_d__25(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                  ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this, ::BGLib::Polyglot::Language _selectedLanguage_5__2,
                                                                  ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4797 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this;

  /// @brief Field <selectedLanguage>5__2, offset: 0x28, size: 0x4, def value: None
  ::BGLib::Polyglot::Language _selectedLanguage_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__SaveLanguageAsync_d__25, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__SaveLanguageAsync_d__25, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__SaveLanguageAsync_d__25, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__SaveLanguageAsync_d__25, _selectedLanguage_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__SaveLanguageAsync_d__25, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningFlowCoordinator__SaveLanguageAsync_d__25, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: HealthWarningFlowCoordinator/<WaitForUserAgeCategory>d__32
struct CORDL_TYPE HealthWarningFlowCoordinator__WaitForUserAgeCategory_d__32 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3c07db8, size 0x2f8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3c080b0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthWarningFlowCoordinator__WaitForUserAgeCategory_d__32();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr HealthWarningFlowCoordinator__WaitForUserAgeCategory_d__32(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                       ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4798 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__WaitForUserAgeCategory_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__WaitForUserAgeCategory_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__WaitForUserAgeCategory_d__32, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator__WaitForUserAgeCategory_d__32, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningFlowCoordinator__WaitForUserAgeCategory_d__32, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BGLib.Polyglot.Language, HMUI.FlowCoordinator, SelectRegionViewController::Region
namespace GlobalNamespace {
// Is value type: false
// CS Name: HealthWarningFlowCoordinator
class CORDL_TYPE HealthWarningFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using InitData = ::GlobalNamespace::HealthWarningFlowCoordinator_InitData;

  using _GoToNextScene_d__39 = ::GlobalNamespace::HealthWarningFlowCoordinator__GoToNextScene_d__39;

  using _SaveLanguageAsync_d__25 = ::GlobalNamespace::HealthWarningFlowCoordinator__SaveLanguageAsync_d__25;

  using _WaitForUserAgeCategory_d__32 = ::GlobalNamespace::HealthWarningFlowCoordinator__WaitForUserAgeCategory_d__32;

  /// @brief Field _appInitScenesTransitionSetupDataContainer, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__appInitScenesTransitionSetupDataContainer,
                      put = __cordl_internal_set__appInitScenesTransitionSetupDataContainer)) ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO>
      _appInitScenesTransitionSetupDataContainer;

  /// @brief Field _endOfLifeNoticeViewController, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__endOfLifeNoticeViewController, put = __cordl_internal_set__endOfLifeNoticeViewController)) ::UnityW<::GlobalNamespace::EndOfLifeNoticeViewController>
      _endOfLifeNoticeViewController;

  /// @brief Field _eulaViewController, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__eulaViewController, put = __cordl_internal_set__eulaViewController)) ::UnityW<::GlobalNamespace::EulaViewController> _eulaViewController;

  /// @brief Field _explicitContentWarningViewController, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__explicitContentWarningViewController,
                      put = __cordl_internal_set__explicitContentWarningViewController)) ::UnityW<::GlobalNamespace::ExplicitContentWarningViewController>
      _explicitContentWarningViewController;

  /// @brief Field _fadeInOut, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeInOut, put = __cordl_internal_set__fadeInOut)) ::UnityW<::GlobalNamespace::FadeInOutController> _fadeInOut;

  /// @brief Field _fileStorage, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__fileStorage, put = __cordl_internal_set__fileStorage)) ::GlobalNamespace::IFileStorage* _fileStorage;

  /// @brief Field _gameScenesManager, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _healthWarningViewController, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__healthWarningViewController, put = __cordl_internal_set__healthWarningViewController)) ::UnityW<::GlobalNamespace::HealthWarningViewController>
      _healthWarningViewController;

  /// @brief Field _initData, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData)) ::GlobalNamespace::HealthWarningFlowCoordinator_InitData* _initData;

  /// @brief Field _noUserAgeWarningViewController, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__noUserAgeWarningViewController,
                      put = __cordl_internal_set__noUserAgeWarningViewController)) ::UnityW<::GlobalNamespace::NoUserAgeWarningViewController>
      _noUserAgeWarningViewController;

  /// @brief Field _openedWithLanguage, offset 0x13c, size 0x4
  __declspec(property(get = __cordl_internal_get__openedWithLanguage, put = __cordl_internal_set__openedWithLanguage)) ::BGLib::Polyglot::Language _openedWithLanguage;

  /// @brief Field _platformInit, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__platformInit, put = __cordl_internal_set__platformInit)) ::BeatSaber::Init::IPlatformInit* _platformInit;

  /// @brief Field _playerDataModel, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _privacyPolicyViewController, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__privacyPolicyViewController, put = __cordl_internal_set__privacyPolicyViewController)) ::UnityW<::GlobalNamespace::PrivacyPolicyViewController>
      _privacyPolicyViewController;

  /// @brief Field _selectLanguageViewController, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__selectLanguageViewController, put = __cordl_internal_set__selectLanguageViewController)) ::UnityW<::GlobalNamespace::SelectLanguageViewController>
      _selectLanguageViewController;

  /// @brief Field _selectRegionViewController, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__selectRegionViewController, put = __cordl_internal_set__selectRegionViewController)) ::UnityW<::GlobalNamespace::SelectRegionViewController>
      _selectRegionViewController;

  /// @brief Field _selectedRegion, offset 0x138, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedRegion, put = __cordl_internal_set__selectedRegion)) ::GlobalNamespace::SelectRegionViewController_Region _selectedRegion;

  /// @brief Field _settingsManager, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _viewControllerTitles, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__viewControllerTitles,
                      put = __cordl_internal_set__viewControllerTitles)) ::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>* _viewControllerTitles;

  /// @brief Method CheckPlayerSensitivityFlagAndContinueFlow, addr 0x3c0762c, size 0xa0, virtual false, abstract: false, final false
  inline void CheckPlayerSensitivityFlagAndContinueFlow();

  /// @brief Method DidActivate, addr 0x3c066bc, size 0x5c4, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3c06cd0, size 0x324, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method EndOfLifeNoticeContinueFlow, addr 0x3c07508, size 0x38, virtual false, abstract: false, final false
  inline void EndOfLifeNoticeContinueFlow();

  /// @brief Method GoToNextScene, addr 0x3c07710, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* GoToNextScene();

  /// @brief Method HandleEndOfLifeNoticeViewControllerDidFinish, addr 0x3c07540, size 0x5c, virtual false, abstract: false, final false
  inline void HandleEndOfLifeNoticeViewControllerDidFinish();

  /// @brief Method HandleEulaViewControllerDidFinish, addr 0x3c0735c, size 0xc4, virtual false, abstract: false, final false
  inline void HandleEulaViewControllerDidFinish(::GlobalNamespace::EulaViewController_ButtonType buttonType);

  /// @brief Method HandleExplicitContentWarningViewControllerDidFinish, addr 0x3c077d4, size 0x30, virtual false, abstract: false, final false
  inline void HandleExplicitContentWarningViewControllerDidFinish();

  /// @brief Method HandleHealthWarningViewControllerDidFinish, addr 0x3c07474, size 0x94, virtual false, abstract: false, final false
  inline void HandleHealthWarningViewControllerDidFinish();

  /// @brief Method HandleNoUserAgeWarningViewControllerDidFinish, addr 0x3c077d0, size 0x4, virtual false, abstract: false, final false
  inline void HandleNoUserAgeWarningViewControllerDidFinish();

  /// @brief Method HandlePrivacyPolicyViewControllerDidFinish, addr 0x3c07420, size 0x54, virtual false, abstract: false, final false
  inline void HandlePrivacyPolicyViewControllerDidFinish();

  /// @brief Method HandleSelectLanguageViewControllerDidChangeLanguage, addr 0x3c07078, size 0x7c, virtual false, abstract: false, final false
  inline void HandleSelectLanguageViewControllerDidChangeLanguage(::BGLib::Polyglot::Language language);

  /// @brief Method HandleSelectLanguageViewControllerDidPressContinueButton, addr 0x3c070f4, size 0x80, virtual false, abstract: false, final false
  inline void HandleSelectLanguageViewControllerDidPressContinueButton();

  /// @brief Method HandleSelectRegionViewControllerDidPressContinueButton, addr 0x3c07238, size 0x30, virtual false, abstract: false, final false
  inline void HandleSelectRegionViewControllerDidPressContinueButton(::GlobalNamespace::SelectRegionViewController_Region region);

  /// @brief Method HandleUserAgeCategoryArrived, addr 0x3c076cc, size 0x44, virtual false, abstract: false, final false
  inline void HandleUserAgeCategoryArrived();

  static inline ::GlobalNamespace::HealthWarningFlowCoordinator* New_ctor();

  /// @brief Method ResolveMainViewController, addr 0x3c06c80, size 0x50, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::ViewController> ResolveMainViewController();

  /// @brief Method ResolvePlayerAgreementsViewController, addr 0x3c07268, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::ViewController> ResolvePlayerAgreementsViewController();

  /// @brief Method SaveLanguageAsync, addr 0x3c07174, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* SaveLanguageAsync();

  /// @brief Method TopViewControllerWillChange, addr 0x3c06ff4, size 0x84, virtual true, abstract: false, final false
  inline void TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController, ::HMUI::ViewController_AnimationType animationType);

  /// @brief Method WaitForUserAgeCategory, addr 0x3c0759c, size 0x90, virtual false, abstract: false, final false
  inline void WaitForUserAgeCategory();

  constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> const& __cordl_internal_get__appInitScenesTransitionSetupDataContainer() const;

  constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO>& __cordl_internal_get__appInitScenesTransitionSetupDataContainer();

  constexpr ::UnityW<::GlobalNamespace::EndOfLifeNoticeViewController> const& __cordl_internal_get__endOfLifeNoticeViewController() const;

  constexpr ::UnityW<::GlobalNamespace::EndOfLifeNoticeViewController>& __cordl_internal_get__endOfLifeNoticeViewController();

  constexpr ::UnityW<::GlobalNamespace::EulaViewController> const& __cordl_internal_get__eulaViewController() const;

  constexpr ::UnityW<::GlobalNamespace::EulaViewController>& __cordl_internal_get__eulaViewController();

  constexpr ::UnityW<::GlobalNamespace::ExplicitContentWarningViewController> const& __cordl_internal_get__explicitContentWarningViewController() const;

  constexpr ::UnityW<::GlobalNamespace::ExplicitContentWarningViewController>& __cordl_internal_get__explicitContentWarningViewController();

  constexpr ::UnityW<::GlobalNamespace::FadeInOutController> const& __cordl_internal_get__fadeInOut() const;

  constexpr ::UnityW<::GlobalNamespace::FadeInOutController>& __cordl_internal_get__fadeInOut();

  constexpr ::GlobalNamespace::IFileStorage* const& __cordl_internal_get__fileStorage() const;

  constexpr ::GlobalNamespace::IFileStorage*& __cordl_internal_get__fileStorage();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::UnityW<::GlobalNamespace::HealthWarningViewController> const& __cordl_internal_get__healthWarningViewController() const;

  constexpr ::UnityW<::GlobalNamespace::HealthWarningViewController>& __cordl_internal_get__healthWarningViewController();

  constexpr ::GlobalNamespace::HealthWarningFlowCoordinator_InitData* const& __cordl_internal_get__initData() const;

  constexpr ::GlobalNamespace::HealthWarningFlowCoordinator_InitData*& __cordl_internal_get__initData();

  constexpr ::UnityW<::GlobalNamespace::NoUserAgeWarningViewController> const& __cordl_internal_get__noUserAgeWarningViewController() const;

  constexpr ::UnityW<::GlobalNamespace::NoUserAgeWarningViewController>& __cordl_internal_get__noUserAgeWarningViewController();

  constexpr ::BGLib::Polyglot::Language const& __cordl_internal_get__openedWithLanguage() const;

  constexpr ::BGLib::Polyglot::Language& __cordl_internal_get__openedWithLanguage();

  constexpr ::BeatSaber::Init::IPlatformInit* const& __cordl_internal_get__platformInit() const;

  constexpr ::BeatSaber::Init::IPlatformInit*& __cordl_internal_get__platformInit();

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

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>* const& __cordl_internal_get__viewControllerTitles() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>*& __cordl_internal_get__viewControllerTitles();

  constexpr void __cordl_internal_set__appInitScenesTransitionSetupDataContainer(::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> value);

  constexpr void __cordl_internal_set__endOfLifeNoticeViewController(::UnityW<::GlobalNamespace::EndOfLifeNoticeViewController> value);

  constexpr void __cordl_internal_set__eulaViewController(::UnityW<::GlobalNamespace::EulaViewController> value);

  constexpr void __cordl_internal_set__explicitContentWarningViewController(::UnityW<::GlobalNamespace::ExplicitContentWarningViewController> value);

  constexpr void __cordl_internal_set__fadeInOut(::UnityW<::GlobalNamespace::FadeInOutController> value);

  constexpr void __cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__healthWarningViewController(::UnityW<::GlobalNamespace::HealthWarningViewController> value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::HealthWarningFlowCoordinator_InitData* value);

  constexpr void __cordl_internal_set__noUserAgeWarningViewController(::UnityW<::GlobalNamespace::NoUserAgeWarningViewController> value);

  constexpr void __cordl_internal_set__openedWithLanguage(::BGLib::Polyglot::Language value);

  constexpr void __cordl_internal_set__platformInit(::BeatSaber::Init::IPlatformInit* value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__privacyPolicyViewController(::UnityW<::GlobalNamespace::PrivacyPolicyViewController> value);

  constexpr void __cordl_internal_set__selectLanguageViewController(::UnityW<::GlobalNamespace::SelectLanguageViewController> value);

  constexpr void __cordl_internal_set__selectRegionViewController(::UnityW<::GlobalNamespace::SelectRegionViewController> value);

  constexpr void __cordl_internal_set__selectedRegion(::GlobalNamespace::SelectRegionViewController_Region value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__viewControllerTitles(::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>* value);

  /// @brief Method .ctor, addr 0x3c07804, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4799 };

  /// @brief Field _appInitScenesTransitionSetupDataContainer, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> ____appInitScenesTransitionSetupDataContainer;

  /// @brief Field _selectLanguageViewController, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SelectLanguageViewController> ____selectLanguageViewController;

  /// @brief Field _selectRegionViewController, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SelectRegionViewController> ____selectRegionViewController;

  /// @brief Field _eulaViewController, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EulaViewController> ____eulaViewController;

  /// @brief Field _privacyPolicyViewController, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PrivacyPolicyViewController> ____privacyPolicyViewController;

  /// @brief Field _healthWarningViewController, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HealthWarningViewController> ____healthWarningViewController;

  /// @brief Field _explicitContentWarningViewController, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ExplicitContentWarningViewController> ____explicitContentWarningViewController;

  /// @brief Field _noUserAgeWarningViewController, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NoUserAgeWarningViewController> ____noUserAgeWarningViewController;

  /// @brief Field _endOfLifeNoticeViewController, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EndOfLifeNoticeViewController> ____endOfLifeNoticeViewController;

  /// @brief Field _playerDataModel, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _fadeInOut, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FadeInOutController> ____fadeInOut;

  /// @brief Field _gameScenesManager, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _initData, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::HealthWarningFlowCoordinator_InitData* ____initData;

  /// @brief Field _fileStorage, offset: 0x118, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* ____fileStorage;

  /// @brief Field _settingsManager, offset: 0x120, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _platformInit, offset: 0x128, size: 0x8, def value: None
  ::BeatSaber::Init::IPlatformInit* ____platformInit;

  /// @brief Field _viewControllerTitles, offset: 0x130, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>* ____viewControllerTitles;

  /// @brief Field _selectedRegion, offset: 0x138, size: 0x4, def value: None
  ::GlobalNamespace::SelectRegionViewController_Region ____selectedRegion;

  /// @brief Field _openedWithLanguage, offset: 0x13c, size: 0x4, def value: None
  ::BGLib::Polyglot::Language ____openedWithLanguage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____appInitScenesTransitionSetupDataContainer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____selectLanguageViewController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____selectRegionViewController) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____eulaViewController) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____privacyPolicyViewController) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____healthWarningViewController) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____explicitContentWarningViewController) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____noUserAgeWarningViewController) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____endOfLifeNoticeViewController) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____playerDataModel) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____fadeInOut) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____gameScenesManager) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____initData) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____fileStorage) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____settingsManager) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____platformInit) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____viewControllerTitles) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____selectedRegion) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____openedWithLanguage) == 0x13c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningFlowCoordinator, 0x140>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HealthWarningFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningFlowCoordinator*, "", "HealthWarningFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::HealthWarningFlowCoordinator_InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningFlowCoordinator_InitData*, "", "HealthWarningFlowCoordinator/InitData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningFlowCoordinator__GoToNextScene_d__39, "", "HealthWarningFlowCoordinator/<GoToNextScene>d__39");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningFlowCoordinator__SaveLanguageAsync_d__25, "", "HealthWarningFlowCoordinator/<SaveLanguageAsync>d__25");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningFlowCoordinator__WaitForUserAgeCategory_d__32, "", "HealthWarningFlowCoordinator/<WaitForUserAgeCategory>d__32");
