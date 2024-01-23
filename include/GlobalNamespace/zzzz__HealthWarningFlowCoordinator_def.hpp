#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SelectRegionViewController_def.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
class ISaveData;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
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
// Forward declare root types
namespace GlobalNamespace {
class HealthWarningFlowCoordinator;
}
namespace GlobalNamespace {
class __HealthWarningFlowCoordinator__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HealthWarningFlowCoordinator);
MARK_REF_PTR_T(::GlobalNamespace::__HealthWarningFlowCoordinator__InitData);
// Type: ::InitData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5497))
// CS Name: ::HealthWarningFlowCoordinator::InitData*
class CORDL_TYPE __HealthWarningFlowCoordinator__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field nextScenesTransitionSetupData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_nextScenesTransitionSetupData,
                      put = __cordl_internal_set_nextScenesTransitionSetupData))::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> nextScenesTransitionSetupData;

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& __cordl_internal_get_nextScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& __cordl_internal_get_nextScenesTransitionSetupData() const;

  constexpr void __cordl_internal_set_nextScenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value);

  static inline ::GlobalNamespace::__HealthWarningFlowCoordinator__InitData* New_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);

  /// @brief Method .ctor, addr 0x2289c80, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);

  // Ctor Parameters [CppParam { name: "", ty: "__HealthWarningFlowCoordinator__InitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HealthWarningFlowCoordinator__InitData(__HealthWarningFlowCoordinator__InitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HealthWarningFlowCoordinator__InitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HealthWarningFlowCoordinator__InitData(__HealthWarningFlowCoordinator__InitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HealthWarningFlowCoordinator__InitData();

public:
  /// @brief Field nextScenesTransitionSetupData, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> ___nextScenesTransitionSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HealthWarningFlowCoordinator__InitData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__HealthWarningFlowCoordinator__InitData, ___nextScenesTransitionSetupData) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::HealthWarningFlowCoordinator
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 284, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(5749)), TypeDefinitionIndex(TypeDefinitionIndex(13582))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5498))
// CS Name: ::HealthWarningFlowCoordinator*
class CORDL_TYPE HealthWarningFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__HealthWarningFlowCoordinator__InitData;

  /// @brief Field _mainSettingsModel, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsModel, put = __cordl_internal_set__mainSettingsModel))::UnityW<::GlobalNamespace::MainSettingsModelSO> _mainSettingsModel;

  /// @brief Field _appInitScenesTransitionSetupDataContainer, offset 0xb0, size 0x8
  __declspec(property(
      get = __cordl_internal_get__appInitScenesTransitionSetupDataContainer,
      put = __cordl_internal_set__appInitScenesTransitionSetupDataContainer))::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> _appInitScenesTransitionSetupDataContainer;

  /// @brief Field _selectLanguageViewController, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__selectLanguageViewController,
                      put = __cordl_internal_set__selectLanguageViewController))::UnityW<::GlobalNamespace::SelectLanguageViewController> _selectLanguageViewController;

  /// @brief Field _selectRegionViewController, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__selectRegionViewController,
                      put = __cordl_internal_set__selectRegionViewController))::UnityW<::GlobalNamespace::SelectRegionViewController> _selectRegionViewController;

  /// @brief Field _eulaViewController, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__eulaViewController, put = __cordl_internal_set__eulaViewController))::UnityW<::GlobalNamespace::EulaViewController> _eulaViewController;

  /// @brief Field _privacyPolicyViewController, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__privacyPolicyViewController,
                      put = __cordl_internal_set__privacyPolicyViewController))::UnityW<::GlobalNamespace::PrivacyPolicyViewController> _privacyPolicyViewController;

  /// @brief Field _healthWarningViewController, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__healthWarningViewController,
                      put = __cordl_internal_set__healthWarningViewController))::UnityW<::GlobalNamespace::HealthWarningViewController> _healthWarningViewController;

  /// @brief Field _explicitContentWarningViewController, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__explicitContentWarningViewController,
                      put = __cordl_internal_set__explicitContentWarningViewController))::UnityW<::GlobalNamespace::ExplicitContentWarningViewController> _explicitContentWarningViewController;

  /// @brief Field _playerDataModel, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _fadeInOut, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__fadeInOut, put = __cordl_internal_set__fadeInOut))::UnityW<::GlobalNamespace::FadeInOutController> _fadeInOut;

  /// @brief Field _gameScenesManager, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager))::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _initData, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData))::GlobalNamespace::__HealthWarningFlowCoordinator__InitData* _initData;

  /// @brief Field _saveData, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__saveData, put = __cordl_internal_set__saveData))::GlobalNamespace::ISaveData* _saveData;

  /// @brief Field _viewControllerTitles, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__viewControllerTitles,
                      put = __cordl_internal_set__viewControllerTitles))::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>* _viewControllerTitles;

  /// @brief Field _selectedRegion, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedRegion, put = __cordl_internal_set__selectedRegion))::GlobalNamespace::__SelectRegionViewController__Region _selectedRegion;

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO>& __cordl_internal_get__mainSettingsModel();

  constexpr ::UnityW<::GlobalNamespace::MainSettingsModelSO> const& __cordl_internal_get__mainSettingsModel() const;

  constexpr void __cordl_internal_set__mainSettingsModel(::UnityW<::GlobalNamespace::MainSettingsModelSO> value);

  constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO>& __cordl_internal_get__appInitScenesTransitionSetupDataContainer();

  constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> const& __cordl_internal_get__appInitScenesTransitionSetupDataContainer() const;

  constexpr void __cordl_internal_set__appInitScenesTransitionSetupDataContainer(::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> value);

  constexpr ::UnityW<::GlobalNamespace::SelectLanguageViewController>& __cordl_internal_get__selectLanguageViewController();

  constexpr ::UnityW<::GlobalNamespace::SelectLanguageViewController> const& __cordl_internal_get__selectLanguageViewController() const;

  constexpr void __cordl_internal_set__selectLanguageViewController(::UnityW<::GlobalNamespace::SelectLanguageViewController> value);

  constexpr ::UnityW<::GlobalNamespace::SelectRegionViewController>& __cordl_internal_get__selectRegionViewController();

  constexpr ::UnityW<::GlobalNamespace::SelectRegionViewController> const& __cordl_internal_get__selectRegionViewController() const;

  constexpr void __cordl_internal_set__selectRegionViewController(::UnityW<::GlobalNamespace::SelectRegionViewController> value);

  constexpr ::UnityW<::GlobalNamespace::EulaViewController>& __cordl_internal_get__eulaViewController();

  constexpr ::UnityW<::GlobalNamespace::EulaViewController> const& __cordl_internal_get__eulaViewController() const;

  constexpr void __cordl_internal_set__eulaViewController(::UnityW<::GlobalNamespace::EulaViewController> value);

  constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyViewController>& __cordl_internal_get__privacyPolicyViewController();

  constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyViewController> const& __cordl_internal_get__privacyPolicyViewController() const;

  constexpr void __cordl_internal_set__privacyPolicyViewController(::UnityW<::GlobalNamespace::PrivacyPolicyViewController> value);

  constexpr ::UnityW<::GlobalNamespace::HealthWarningViewController>& __cordl_internal_get__healthWarningViewController();

  constexpr ::UnityW<::GlobalNamespace::HealthWarningViewController> const& __cordl_internal_get__healthWarningViewController() const;

  constexpr void __cordl_internal_set__healthWarningViewController(::UnityW<::GlobalNamespace::HealthWarningViewController> value);

  constexpr ::UnityW<::GlobalNamespace::ExplicitContentWarningViewController>& __cordl_internal_get__explicitContentWarningViewController();

  constexpr ::UnityW<::GlobalNamespace::ExplicitContentWarningViewController> const& __cordl_internal_get__explicitContentWarningViewController() const;

  constexpr void __cordl_internal_set__explicitContentWarningViewController(::UnityW<::GlobalNamespace::ExplicitContentWarningViewController> value);

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr ::UnityW<::GlobalNamespace::FadeInOutController>& __cordl_internal_get__fadeInOut();

  constexpr ::UnityW<::GlobalNamespace::FadeInOutController> const& __cordl_internal_get__fadeInOut() const;

  constexpr void __cordl_internal_set__fadeInOut(::UnityW<::GlobalNamespace::FadeInOutController> value);

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr ::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*> const& __cordl_internal_get__initData() const;

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__HealthWarningFlowCoordinator__InitData* value);

  constexpr ::GlobalNamespace::ISaveData*& __cordl_internal_get__saveData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> const& __cordl_internal_get__saveData() const;

  constexpr void __cordl_internal_set__saveData(::GlobalNamespace::ISaveData* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>*& __cordl_internal_get__viewControllerTitles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>*> const& __cordl_internal_get__viewControllerTitles() const;

  constexpr void __cordl_internal_set__viewControllerTitles(::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>* value);

  constexpr ::GlobalNamespace::__SelectRegionViewController__Region& __cordl_internal_get__selectedRegion();

  constexpr ::GlobalNamespace::__SelectRegionViewController__Region const& __cordl_internal_get__selectedRegion() const;

  constexpr void __cordl_internal_set__selectedRegion(::GlobalNamespace::__SelectRegionViewController__Region value);

  /// @brief Method DidActivate, addr 0x2289010, size 0x4c0, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x2289520, size 0x2b0, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method TopViewControllerWillChange, addr 0x22897d0, size 0x84, virtual true, abstract: false, final false
  inline void TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController, ::HMUI::__ViewController__AnimationType animationType);

  /// @brief Method Update, addr 0x2289854, size 0x2c, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method HandleSelectLanguageViewControllerDidChangeLanguage, addr 0x2289970, size 0x84, virtual false, abstract: false, final false
  inline void HandleSelectLanguageViewControllerDidChangeLanguage();

  /// @brief Method HandleSelectLanguageViewControllerDidPressContinueButton, addr 0x22899f4, size 0x4c, virtual false, abstract: false, final false
  inline void HandleSelectLanguageViewControllerDidPressContinueButton();

  /// @brief Method HandleSelectRegionViewControllerDidPressContinueButton, addr 0x2289a40, size 0x30, virtual false, abstract: false, final false
  inline void HandleSelectRegionViewControllerDidPressContinueButton(::GlobalNamespace::__SelectRegionViewController__Region region);

  /// @brief Method HandleEulaViewControllerDidFinish, addr 0x2289b64, size 0x7c, virtual false, abstract: false, final false
  inline void HandleEulaViewControllerDidFinish(::GlobalNamespace::__EulaViewController__ButtonType buttonType);

  /// @brief Method HandlePrivacyPolicyViewControllerDidFinish, addr 0x2289be0, size 0x58, virtual false, abstract: false, final false
  inline void HandlePrivacyPolicyViewControllerDidFinish(::GlobalNamespace::__PrivacyPolicyViewController__ButtonType buttonType);

  /// @brief Method HandleHealthWarningViewControllerDidFinish, addr 0x2289880, size 0xf0, virtual false, abstract: false, final false
  inline void HandleHealthWarningViewControllerDidFinish();

  /// @brief Method HandleExplicitContentWarningViewControllerDidFinish, addr 0x2289c74, size 0x4, virtual false, abstract: false, final false
  inline void HandleExplicitContentWarningViewControllerDidFinish();

  /// @brief Method ResolveMainViewController, addr 0x22894d0, size 0x50, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::ViewController> ResolveMainViewController();

  /// @brief Method ResolvePlayerAgreementsViewController, addr 0x2289a70, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::ViewController> ResolvePlayerAgreementsViewController();

  /// @brief Method GoToNextScene, addr 0x2289c38, size 0x3c, virtual false, abstract: false, final false
  inline void GoToNextScene();

  static inline ::GlobalNamespace::HealthWarningFlowCoordinator* New_ctor();

  /// @brief Method .ctor, addr 0x2289c78, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HealthWarningFlowCoordinator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HealthWarningFlowCoordinator(HealthWarningFlowCoordinator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HealthWarningFlowCoordinator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HealthWarningFlowCoordinator(HealthWarningFlowCoordinator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HealthWarningFlowCoordinator();

public:
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

  /// @brief Field _playerDataModel, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _fadeInOut, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FadeInOutController> ____fadeInOut;

  /// @brief Field _gameScenesManager, offset: 0xf8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _initData, offset: 0x100, size: 0x8, def value: None
  ::GlobalNamespace::__HealthWarningFlowCoordinator__InitData* ____initData;

  /// @brief Field _saveData, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::ISaveData* ____saveData;

  /// @brief Field _viewControllerTitles, offset: 0x110, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>* ____viewControllerTitles;

  /// @brief Field _selectedRegion, offset: 0x118, size: 0x4, def value: None
  ::GlobalNamespace::__SelectRegionViewController__Region ____selectedRegion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningFlowCoordinator, 0x120>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____mainSettingsModel) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____appInitScenesTransitionSetupDataContainer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____selectLanguageViewController) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____selectRegionViewController) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____eulaViewController) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____privacyPolicyViewController) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____healthWarningViewController) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____explicitContentWarningViewController) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____playerDataModel) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____fadeInOut) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____gameScenesManager) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____initData) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____saveData) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____viewControllerTitles) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HealthWarningFlowCoordinator, ____selectedRegion) == 0x118, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HealthWarningFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningFlowCoordinator*, "", "HealthWarningFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::__HealthWarningFlowCoordinator__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*, "", "HealthWarningFlowCoordinator/InitData");
