#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SelectRegionViewController_def.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HealthWarningFlowCoordinator)
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataContainerSO;
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
class HealthWarningViewController;
}
namespace GlobalNamespace {
class IFileStorage;
}
namespace GlobalNamespace {
class IPlatformInit;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
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
class SelectRegionViewController;
}
namespace GlobalNamespace {
struct __EulaViewController__ButtonType;
}
namespace GlobalNamespace {
class __HealthWarningFlowCoordinator__InitData;
}
namespace GlobalNamespace {
struct __HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22;
}
namespace GlobalNamespace {
struct __HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__28;
}
namespace GlobalNamespace {
struct __PrivacyPolicyViewController__ButtonType;
}
namespace GlobalNamespace {
struct __SelectRegionViewController__Region;
}
namespace HMUI {
class ViewController;
}
namespace HMUI {
struct __ViewController__AnimationType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
// Forward declare root types
namespace GlobalNamespace {
class HealthWarningFlowCoordinator;
}
namespace GlobalNamespace {
class __HealthWarningFlowCoordinator__InitData;
}
namespace GlobalNamespace {
struct __HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22;
}
namespace GlobalNamespace {
struct __HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__28;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HealthWarningFlowCoordinator);
MARK_REF_PTR_T(::GlobalNamespace::__HealthWarningFlowCoordinator__InitData);
MARK_VAL_T(::GlobalNamespace::__HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22);
MARK_VAL_T(::GlobalNamespace::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__28);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HealthWarningFlowCoordinator::InitData*
class CORDL_TYPE __HealthWarningFlowCoordinator__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field nextScenesTransitionSetupData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_nextScenesTransitionSetupData,
                      put = __cordl_internal_set_nextScenesTransitionSetupData))::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> nextScenesTransitionSetupData;

  static inline ::GlobalNamespace::__HealthWarningFlowCoordinator__InitData* New_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& __cordl_internal_get_nextScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& __cordl_internal_get_nextScenesTransitionSetupData();

  constexpr void __cordl_internal_set_nextScenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x251dbe0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HealthWarningFlowCoordinator__InitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HealthWarningFlowCoordinator__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HealthWarningFlowCoordinator__InitData(__HealthWarningFlowCoordinator__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HealthWarningFlowCoordinator__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HealthWarningFlowCoordinator__InitData(__HealthWarningFlowCoordinator__InitData const&) = delete;

  /// @brief Field nextScenesTransitionSetupData, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> ___nextScenesTransitionSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HealthWarningFlowCoordinator__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__HealthWarningFlowCoordinator__InitData, ___nextScenesTransitionSetupData) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<HandleSelectLanguageViewControllerDidChangeLanguageAsync>d__22
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::HealthWarningFlowCoordinator::<HandleSelectLanguageViewControllerDidChangeLanguageAsync>d__22
struct CORDL_TYPE __HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x251dc08, size 0x36c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x251df74, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22(int32_t __1__state,
                                                                                                            ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                            ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this,
                                                                                                            ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<WaitForUserAgeCategory>d__28
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::HealthWarningFlowCoordinator::<WaitForUserAgeCategory>d__28
struct CORDL_TYPE __HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__28 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x251df80, size 0x2f8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x251e278, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__28();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__28(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                          ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this,
                                                                          ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__28, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__28, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__28, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__28, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__28, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::HealthWarningFlowCoordinator
// SizeInfo { instance_size: 304, native_size: -1, calculated_instance_size: 304, calculated_native_size: 300, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HealthWarningFlowCoordinator*
class CORDL_TYPE HealthWarningFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__HealthWarningFlowCoordinator__InitData;

  using _HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22 = ::GlobalNamespace::__HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22;

  using _WaitForUserAgeCategory_d__28 = ::GlobalNamespace::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__28;

  /// @brief Field _appInitScenesTransitionSetupDataContainer, offset 0xb0, size 0x8
  __declspec(property(
      get = __cordl_internal_get__appInitScenesTransitionSetupDataContainer,
      put = __cordl_internal_set__appInitScenesTransitionSetupDataContainer))::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> _appInitScenesTransitionSetupDataContainer;

  /// @brief Field _eulaViewController, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__eulaViewController, put = __cordl_internal_set__eulaViewController))::UnityW<::GlobalNamespace::EulaViewController> _eulaViewController;

  /// @brief Field _explicitContentWarningViewController, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__explicitContentWarningViewController,
                      put = __cordl_internal_set__explicitContentWarningViewController))::UnityW<::GlobalNamespace::ExplicitContentWarningViewController> _explicitContentWarningViewController;

  /// @brief Field _fadeInOut, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeInOut, put = __cordl_internal_set__fadeInOut))::UnityW<::GlobalNamespace::FadeInOutController> _fadeInOut;

  /// @brief Field _fileStorage, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__fileStorage, put = __cordl_internal_set__fileStorage))::GlobalNamespace::IFileStorage* _fileStorage;

  /// @brief Field _gameScenesManager, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager))::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _healthWarningViewController, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__healthWarningViewController,
                      put = __cordl_internal_set__healthWarningViewController))::UnityW<::GlobalNamespace::HealthWarningViewController> _healthWarningViewController;

  /// @brief Field _initData, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData))::GlobalNamespace::__HealthWarningFlowCoordinator__InitData* _initData;

  /// @brief Field _mainSettingsModel, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsModel, put = __cordl_internal_set__mainSettingsModel))::UnityW<::GlobalNamespace::MainSettingsModelSO> _mainSettingsModel;

  /// @brief Field _noUserAgeWarningViewController, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__noUserAgeWarningViewController,
                      put = __cordl_internal_set__noUserAgeWarningViewController))::UnityW<::GlobalNamespace::NoUserAgeWarningViewController> _noUserAgeWarningViewController;

  /// @brief Field _platformInit, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__platformInit, put = __cordl_internal_set__platformInit))::GlobalNamespace::IPlatformInit* _platformInit;

  /// @brief Field _playerDataModel, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _privacyPolicyViewController, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__privacyPolicyViewController,
                      put = __cordl_internal_set__privacyPolicyViewController))::UnityW<::GlobalNamespace::PrivacyPolicyViewController> _privacyPolicyViewController;

  /// @brief Field _selectLanguageViewController, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__selectLanguageViewController,
                      put = __cordl_internal_set__selectLanguageViewController))::UnityW<::GlobalNamespace::SelectLanguageViewController> _selectLanguageViewController;

  /// @brief Field _selectRegionViewController, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__selectRegionViewController,
                      put = __cordl_internal_set__selectRegionViewController))::UnityW<::GlobalNamespace::SelectRegionViewController> _selectRegionViewController;

  /// @brief Field _selectedRegion, offset 0x128, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedRegion, put = __cordl_internal_set__selectedRegion))::GlobalNamespace::__SelectRegionViewController__Region _selectedRegion;

  /// @brief Field _viewControllerTitles, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__viewControllerTitles,
                      put = __cordl_internal_set__viewControllerTitles))::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>* _viewControllerTitles;

  /// @brief Method CheckPlayerSensitivityFlagAndContinueFlow, addr 0x251dab0, size 0xa0, virtual false, abstract: false, final false
  inline void CheckPlayerSensitivityFlagAndContinueFlow();

  /// @brief Method DidActivate, addr 0x251cd24, size 0x564, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x251d2d8, size 0x2fc, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method GoToNextScene, addr 0x251db94, size 0x3c, virtual false, abstract: false, final false
  inline void GoToNextScene();

  /// @brief Method HandleEulaViewControllerDidFinish, addr 0x251d948, size 0x7c, virtual false, abstract: false, final false
  inline void HandleEulaViewControllerDidFinish(::GlobalNamespace::__EulaViewController__ButtonType buttonType);

  /// @brief Method HandleExplicitContentWarningViewControllerDidFinish, addr 0x251dbd4, size 0x4, virtual false, abstract: false, final false
  inline void HandleExplicitContentWarningViewControllerDidFinish();

  /// @brief Method HandleHealthWarningViewControllerDidFinish, addr 0x251d684, size 0xc0, virtual false, abstract: false, final false
  inline void HandleHealthWarningViewControllerDidFinish();

  /// @brief Method HandleNoUserAgeWarningViewControllerDidFinish, addr 0x251dbd0, size 0x4, virtual false, abstract: false, final false
  inline void HandleNoUserAgeWarningViewControllerDidFinish();

  /// @brief Method HandlePrivacyPolicyViewControllerDidFinish, addr 0x251d9c4, size 0x58, virtual false, abstract: false, final false
  inline void HandlePrivacyPolicyViewControllerDidFinish(::GlobalNamespace::__PrivacyPolicyViewController__ButtonType buttonType);

  /// @brief Method HandleSelectLanguageViewControllerDidChangeLanguageAsync, addr 0x251d744, size 0x94, virtual false, abstract: false, final false
  inline void HandleSelectLanguageViewControllerDidChangeLanguageAsync();

  /// @brief Method HandleSelectLanguageViewControllerDidPressContinueButton, addr 0x251d7d8, size 0x4c, virtual false, abstract: false, final false
  inline void HandleSelectLanguageViewControllerDidPressContinueButton();

  /// @brief Method HandleSelectRegionViewControllerDidPressContinueButton, addr 0x251d824, size 0x30, virtual false, abstract: false, final false
  inline void HandleSelectRegionViewControllerDidPressContinueButton(::GlobalNamespace::__SelectRegionViewController__Region region);

  /// @brief Method HandleUserAgeCategoryArrived, addr 0x251db50, size 0x44, virtual false, abstract: false, final false
  inline void HandleUserAgeCategoryArrived();

  static inline ::GlobalNamespace::HealthWarningFlowCoordinator* New_ctor();

  /// @brief Method ResolveMainViewController, addr 0x251d288, size 0x50, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::ViewController> ResolveMainViewController();

  /// @brief Method ResolvePlayerAgreementsViewController, addr 0x251d854, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::ViewController> ResolvePlayerAgreementsViewController();

  /// @brief Method TopViewControllerWillChange, addr 0x251d5d4, size 0x84, virtual true, abstract: false, final false
  inline void TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController, ::HMUI::__ViewController__AnimationType animationType);

  /// @brief Method Update, addr 0x251d658, size 0x2c, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method WaitForUserAgeCategory, addr 0x251da1c, size 0x94, virtual false, abstract: false, final false
  inline void WaitForUserAgeCategory();

  constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> const& __cordl_internal_get__appInitScenesTransitionSetupDataContainer() const;

  constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO>& __cordl_internal_get__appInitScenesTransitionSetupDataContainer();

  constexpr ::UnityW<::GlobalNamespace::EulaViewController> const& __cordl_internal_get__eulaViewController() const;

  constexpr ::UnityW<::GlobalNamespace::EulaViewController>& __cordl_internal_get__eulaViewController();

  constexpr ::UnityW<::GlobalNamespace::ExplicitContentWarningViewController> const& __cordl_internal_get__explicitContentWarningViewController() const;

  constexpr ::UnityW<::GlobalNamespace::ExplicitContentWarningViewController>& __cordl_internal_get__explicitContentWarningViewController();

  constexpr ::UnityW<::GlobalNamespace::FadeInOutController> const& __cordl_internal_get__fadeInOut() const;

  constexpr ::UnityW<::GlobalNamespace::FadeInOutController>& __cordl_internal_get__fadeInOut();

  constexpr ::GlobalNamespace::IFileStorage*& __cordl_internal_get__fileStorage();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IFileStorage*> const& __cordl_internal_get__fileStorage() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::UnityW<::GlobalNamespace::HealthWarningViewController> const& __cordl_internal_get__healthWarningViewController() const;

  constexpr ::UnityW<::GlobalNamespace::HealthWarningViewController>& __cordl_internal_get__healthWarningViewController();

  constexpr ::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*> const& __cordl_internal_get__initData() const;

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO> const& __cordl_internal_get__mainSettingsModel() const;

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO>& __cordl_internal_get__mainSettingsModel();

  constexpr ::UnityW<::GlobalNamespace::NoUserAgeWarningViewController> const& __cordl_internal_get__noUserAgeWarningViewController() const;

  constexpr ::UnityW<::GlobalNamespace::NoUserAgeWarningViewController>& __cordl_internal_get__noUserAgeWarningViewController();

  constexpr ::GlobalNamespace::IPlatformInit*& __cordl_internal_get__platformInit();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPlatformInit*> const& __cordl_internal_get__platformInit() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyViewController> const& __cordl_internal_get__privacyPolicyViewController() const;

  constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyViewController>& __cordl_internal_get__privacyPolicyViewController();

  constexpr ::UnityW<::GlobalNamespace::SelectLanguageViewController> const& __cordl_internal_get__selectLanguageViewController() const;

  constexpr ::UnityW<::GlobalNamespace::SelectLanguageViewController>& __cordl_internal_get__selectLanguageViewController();

  constexpr ::UnityW<::GlobalNamespace::SelectRegionViewController> const& __cordl_internal_get__selectRegionViewController() const;

  constexpr ::UnityW<::GlobalNamespace::SelectRegionViewController>& __cordl_internal_get__selectRegionViewController();

  constexpr ::GlobalNamespace::__SelectRegionViewController__Region const& __cordl_internal_get__selectedRegion() const;

  constexpr ::GlobalNamespace::__SelectRegionViewController__Region& __cordl_internal_get__selectedRegion();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>*& __cordl_internal_get__viewControllerTitles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>*> const& __cordl_internal_get__viewControllerTitles() const;

  constexpr void __cordl_internal_set__appInitScenesTransitionSetupDataContainer(::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> value);

  constexpr void __cordl_internal_set__eulaViewController(::UnityW<::GlobalNamespace::EulaViewController> value);

  constexpr void __cordl_internal_set__explicitContentWarningViewController(::UnityW<::GlobalNamespace::ExplicitContentWarningViewController> value);

  constexpr void __cordl_internal_set__fadeInOut(::UnityW<::GlobalNamespace::FadeInOutController> value);

  constexpr void __cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__healthWarningViewController(::UnityW<::GlobalNamespace::HealthWarningViewController> value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__HealthWarningFlowCoordinator__InitData* value);

  constexpr void __cordl_internal_set__mainSettingsModel(::UnityW<::GlobalNamespace::MainSettingsModelSO> value);

  constexpr void __cordl_internal_set__noUserAgeWarningViewController(::UnityW<::GlobalNamespace::NoUserAgeWarningViewController> value);

  constexpr void __cordl_internal_set__platformInit(::GlobalNamespace::IPlatformInit* value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__privacyPolicyViewController(::UnityW<::GlobalNamespace::PrivacyPolicyViewController> value);

  constexpr void __cordl_internal_set__selectLanguageViewController(::UnityW<::GlobalNamespace::SelectLanguageViewController> value);

  constexpr void __cordl_internal_set__selectRegionViewController(::UnityW<::GlobalNamespace::SelectRegionViewController> value);

  constexpr void __cordl_internal_set__selectedRegion(::GlobalNamespace::__SelectRegionViewController__Region value);

  constexpr void __cordl_internal_set__viewControllerTitles(::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>* value);

  /// @brief Method .ctor, addr 0x251dbd8, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _mainSettingsModel, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsModelSO> ____mainSettingsModel;

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

  /// @brief Field _playerDataModel, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _fadeInOut, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FadeInOutController> ____fadeInOut;

  /// @brief Field _gameScenesManager, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _initData, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::__HealthWarningFlowCoordinator__InitData* ____initData;

  /// @brief Field _fileStorage, offset: 0x110, size: 0x8, def value: None
  ::GlobalNamespace::IFileStorage* ____fileStorage;

  /// @brief Field _platformInit, offset: 0x118, size: 0x8, def value: None
  ::GlobalNamespace::IPlatformInit* ____platformInit;

  /// @brief Field _viewControllerTitles, offset: 0x120, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>* ____viewControllerTitles;

  /// @brief Field _selectedRegion, offset: 0x128, size: 0x4, def value: None
  ::GlobalNamespace::__SelectRegionViewController__Region ____selectedRegion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningFlowCoordinator, 0x130>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____mainSettingsModel) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____appInitScenesTransitionSetupDataContainer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____selectLanguageViewController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____selectRegionViewController) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____eulaViewController) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____privacyPolicyViewController) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____healthWarningViewController) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____explicitContentWarningViewController) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____noUserAgeWarningViewController) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____playerDataModel) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____fadeInOut) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____gameScenesManager) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____initData) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____fileStorage) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____platformInit) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____viewControllerTitles) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____selectedRegion) == 0x128, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HealthWarningFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningFlowCoordinator*, "", "HealthWarningFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::__HealthWarningFlowCoordinator__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*, "", "HealthWarningFlowCoordinator/InitData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22, "",
                       "HealthWarningFlowCoordinator/<HandleSelectLanguageViewControllerDidChangeLanguageAsync>d__22");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__28, "", "HealthWarningFlowCoordinator/<WaitForUserAgeCategory>d__28");
