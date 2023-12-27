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
class PrivacyPolicyViewController;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class __HealthWarningFlowCoordinator__InitData;
}
namespace GlobalNamespace {
class EulaViewController;
}
namespace GlobalNamespace {
class SelectLanguageViewController;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
struct __PrivacyPolicyViewController__ButtonType;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class SelectRegionViewController;
}
namespace GlobalNamespace {
class HealthWarningViewController;
}
namespace HMUI {
struct __ViewController__AnimationType;
}
namespace GlobalNamespace {
struct __SelectRegionViewController__Region;
}
namespace GlobalNamespace {
struct __EulaViewController__ButtonType;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace HMUI {
class ViewController;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace GlobalNamespace {
class FadeInOutController;
}
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataContainerSO;
}
namespace GlobalNamespace {
class ExplicitContentWarningViewController;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5497))
// CS Name: ::HealthWarningFlowCoordinator::InitData*
class CORDL_TYPE __HealthWarningFlowCoordinator__InitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field nextScenesTransitionSetupData, offset 0x10, size 0x8
  __declspec(property(get = __get_nextScenesTransitionSetupData, put = __set_nextScenesTransitionSetupData))::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData;

  constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO*& __get_nextScenesTransitionSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> const& __get_nextScenesTransitionSetupData() const;

  constexpr void __set_nextScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO* value);

  static inline ::GlobalNamespace::__HealthWarningFlowCoordinator__InitData* New_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData);

  /// @brief Method .ctor addr 0x2289c80 size 0x28 virtual false final false
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
  ::GlobalNamespace::ScenesTransitionSetupDataSO* ___nextScenesTransitionSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HealthWarningFlowCoordinator__InitData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::HealthWarningFlowCoordinator
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 284, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13582)), TypeDefinitionIndex(TypeDefinitionIndex(5749))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5498))
// CS Name: ::HealthWarningFlowCoordinator*
class CORDL_TYPE HealthWarningFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using InitData = ::GlobalNamespace::__HealthWarningFlowCoordinator__InitData;

  /// @brief Field _mainSettingsModel, offset 0xa8, size 0x8
  __declspec(property(get = __get__mainSettingsModel, put = __set__mainSettingsModel))::GlobalNamespace::MainSettingsModelSO* _mainSettingsModel;

  /// @brief Field _appInitScenesTransitionSetupDataContainer, offset 0xb0, size 0x8
  __declspec(property(get = __get__appInitScenesTransitionSetupDataContainer,
                      put = __set__appInitScenesTransitionSetupDataContainer))::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* _appInitScenesTransitionSetupDataContainer;

  /// @brief Field _selectLanguageViewController, offset 0xb8, size 0x8
  __declspec(property(get = __get__selectLanguageViewController, put = __set__selectLanguageViewController))::GlobalNamespace::SelectLanguageViewController* _selectLanguageViewController;

  /// @brief Field _selectRegionViewController, offset 0xc0, size 0x8
  __declspec(property(get = __get__selectRegionViewController, put = __set__selectRegionViewController))::GlobalNamespace::SelectRegionViewController* _selectRegionViewController;

  /// @brief Field _eulaViewController, offset 0xc8, size 0x8
  __declspec(property(get = __get__eulaViewController, put = __set__eulaViewController))::GlobalNamespace::EulaViewController* _eulaViewController;

  /// @brief Field _privacyPolicyViewController, offset 0xd0, size 0x8
  __declspec(property(get = __get__privacyPolicyViewController, put = __set__privacyPolicyViewController))::GlobalNamespace::PrivacyPolicyViewController* _privacyPolicyViewController;

  /// @brief Field _healthWarningViewController, offset 0xd8, size 0x8
  __declspec(property(get = __get__healthWarningViewController, put = __set__healthWarningViewController))::GlobalNamespace::HealthWarningViewController* _healthWarningViewController;

  /// @brief Field _explicitContentWarningViewController, offset 0xe0, size 0x8
  __declspec(property(get = __get__explicitContentWarningViewController,
                      put = __set__explicitContentWarningViewController))::GlobalNamespace::ExplicitContentWarningViewController* _explicitContentWarningViewController;

  /// @brief Field _playerDataModel, offset 0xe8, size 0x8
  __declspec(property(get = __get__playerDataModel, put = __set__playerDataModel))::GlobalNamespace::PlayerDataModel* _playerDataModel;

  /// @brief Field _fadeInOut, offset 0xf0, size 0x8
  __declspec(property(get = __get__fadeInOut, put = __set__fadeInOut))::GlobalNamespace::FadeInOutController* _fadeInOut;

  /// @brief Field _gameScenesManager, offset 0xf8, size 0x8
  __declspec(property(get = __get__gameScenesManager, put = __set__gameScenesManager))::GlobalNamespace::GameScenesManager* _gameScenesManager;

  /// @brief Field _initData, offset 0x100, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__HealthWarningFlowCoordinator__InitData* _initData;

  /// @brief Field _saveData, offset 0x108, size 0x8
  __declspec(property(get = __get__saveData, put = __set__saveData))::GlobalNamespace::ISaveData* _saveData;

  /// @brief Field _viewControllerTitles, offset 0x110, size 0x8
  __declspec(property(get = __get__viewControllerTitles, put = __set__viewControllerTitles))::System::Collections::Generic::Dictionary_2<::HMUI::ViewController*, ::StringW>* _viewControllerTitles;

  /// @brief Field _selectedRegion, offset 0x118, size 0x4
  __declspec(property(get = __get__selectedRegion, put = __set__selectedRegion))::GlobalNamespace::__SelectRegionViewController__Region _selectedRegion;

  constexpr ::GlobalNamespace::MainSettingsModelSO*& __get__mainSettingsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> const& __get__mainSettingsModel() const;

  constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO* value);

  constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*& __get__appInitScenesTransitionSetupDataContainer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*> const& __get__appInitScenesTransitionSetupDataContainer() const;

  constexpr void __set__appInitScenesTransitionSetupDataContainer(::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* value);

  constexpr ::GlobalNamespace::SelectLanguageViewController*& __get__selectLanguageViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SelectLanguageViewController*> const& __get__selectLanguageViewController() const;

  constexpr void __set__selectLanguageViewController(::GlobalNamespace::SelectLanguageViewController* value);

  constexpr ::GlobalNamespace::SelectRegionViewController*& __get__selectRegionViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SelectRegionViewController*> const& __get__selectRegionViewController() const;

  constexpr void __set__selectRegionViewController(::GlobalNamespace::SelectRegionViewController* value);

  constexpr ::GlobalNamespace::EulaViewController*& __get__eulaViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EulaViewController*> const& __get__eulaViewController() const;

  constexpr void __set__eulaViewController(::GlobalNamespace::EulaViewController* value);

  constexpr ::GlobalNamespace::PrivacyPolicyViewController*& __get__privacyPolicyViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PrivacyPolicyViewController*> const& __get__privacyPolicyViewController() const;

  constexpr void __set__privacyPolicyViewController(::GlobalNamespace::PrivacyPolicyViewController* value);

  constexpr ::GlobalNamespace::HealthWarningViewController*& __get__healthWarningViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HealthWarningViewController*> const& __get__healthWarningViewController() const;

  constexpr void __set__healthWarningViewController(::GlobalNamespace::HealthWarningViewController* value);

  constexpr ::GlobalNamespace::ExplicitContentWarningViewController*& __get__explicitContentWarningViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ExplicitContentWarningViewController*> const& __get__explicitContentWarningViewController() const;

  constexpr void __set__explicitContentWarningViewController(::GlobalNamespace::ExplicitContentWarningViewController* value);

  constexpr ::GlobalNamespace::PlayerDataModel*& __get__playerDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& __get__playerDataModel() const;

  constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel* value);

  constexpr ::GlobalNamespace::FadeInOutController*& __get__fadeInOut();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FadeInOutController*> const& __get__fadeInOut() const;

  constexpr void __set__fadeInOut(::GlobalNamespace::FadeInOutController* value);

  constexpr ::GlobalNamespace::GameScenesManager*& __get__gameScenesManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& __get__gameScenesManager() const;

  constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager* value);

  constexpr ::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__HealthWarningFlowCoordinator__InitData* value);

  constexpr ::GlobalNamespace::ISaveData*& __get__saveData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> const& __get__saveData() const;

  constexpr void __set__saveData(::GlobalNamespace::ISaveData* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::HMUI::ViewController*, ::StringW>*& __get__viewControllerTitles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::HMUI::ViewController*, ::StringW>*> const& __get__viewControllerTitles() const;

  constexpr void __set__viewControllerTitles(::System::Collections::Generic::Dictionary_2<::HMUI::ViewController*, ::StringW>* value);

  constexpr ::GlobalNamespace::__SelectRegionViewController__Region& __get__selectedRegion();

  constexpr ::GlobalNamespace::__SelectRegionViewController__Region const& __get__selectedRegion() const;

  constexpr void __set__selectedRegion(::GlobalNamespace::__SelectRegionViewController__Region value);

  /// @brief Method DidActivate addr 0x2289010 size 0x4c0 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate addr 0x2289520 size 0x2b0 virtual true final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method TopViewControllerWillChange addr 0x22897d0 size 0x84 virtual true final false
  inline void TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController, ::HMUI::__ViewController__AnimationType animationType);

  /// @brief Method Update addr 0x2289854 size 0x2c virtual false final false
  inline void Update();

  /// @brief Method HandleSelectLanguageViewControllerDidChangeLanguage addr 0x2289970 size 0x84 virtual false final false
  inline void HandleSelectLanguageViewControllerDidChangeLanguage();

  /// @brief Method HandleSelectLanguageViewControllerDidPressContinueButton addr 0x22899f4 size 0x4c virtual false final false
  inline void HandleSelectLanguageViewControllerDidPressContinueButton();

  /// @brief Method HandleSelectRegionViewControllerDidPressContinueButton addr 0x2289a40 size 0x30 virtual false final false
  inline void HandleSelectRegionViewControllerDidPressContinueButton(::GlobalNamespace::__SelectRegionViewController__Region region);

  /// @brief Method HandleEulaViewControllerDidFinish addr 0x2289b64 size 0x7c virtual false final false
  inline void HandleEulaViewControllerDidFinish(::GlobalNamespace::__EulaViewController__ButtonType buttonType);

  /// @brief Method HandlePrivacyPolicyViewControllerDidFinish addr 0x2289be0 size 0x58 virtual false final false
  inline void HandlePrivacyPolicyViewControllerDidFinish(::GlobalNamespace::__PrivacyPolicyViewController__ButtonType buttonType);

  /// @brief Method HandleHealthWarningViewControllerDidFinish addr 0x2289880 size 0xf0 virtual false final false
  inline void HandleHealthWarningViewControllerDidFinish();

  /// @brief Method HandleExplicitContentWarningViewControllerDidFinish addr 0x2289c74 size 0x4 virtual false final false
  inline void HandleExplicitContentWarningViewControllerDidFinish();

  /// @brief Method ResolveMainViewController addr 0x22894d0 size 0x50 virtual false final false
  inline ::HMUI::ViewController* ResolveMainViewController();

  /// @brief Method ResolvePlayerAgreementsViewController addr 0x2289a70 size 0xf4 virtual false final false
  inline ::HMUI::ViewController* ResolvePlayerAgreementsViewController();

  /// @brief Method GoToNextScene addr 0x2289c38 size 0x3c virtual false final false
  inline void GoToNextScene();

  static inline ::GlobalNamespace::HealthWarningFlowCoordinator* New_ctor();

  /// @brief Method .ctor addr 0x2289c78 size 0x8 virtual false final false
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
  ::GlobalNamespace::MainSettingsModelSO* ____mainSettingsModel;

  /// @brief Field _appInitScenesTransitionSetupDataContainer, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* ____appInitScenesTransitionSetupDataContainer;

  /// @brief Field _selectLanguageViewController, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::SelectLanguageViewController* ____selectLanguageViewController;

  /// @brief Field _selectRegionViewController, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::SelectRegionViewController* ____selectRegionViewController;

  /// @brief Field _eulaViewController, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::EulaViewController* ____eulaViewController;

  /// @brief Field _privacyPolicyViewController, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::PrivacyPolicyViewController* ____privacyPolicyViewController;

  /// @brief Field _healthWarningViewController, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::HealthWarningViewController* ____healthWarningViewController;

  /// @brief Field _explicitContentWarningViewController, offset: 0xe0, size: 0x8, def value: None
  ::GlobalNamespace::ExplicitContentWarningViewController* ____explicitContentWarningViewController;

  /// @brief Field _playerDataModel, offset: 0xe8, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataModel* ____playerDataModel;

  /// @brief Field _fadeInOut, offset: 0xf0, size: 0x8, def value: None
  ::GlobalNamespace::FadeInOutController* ____fadeInOut;

  /// @brief Field _gameScenesManager, offset: 0xf8, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager* ____gameScenesManager;

  /// @brief Field _initData, offset: 0x100, size: 0x8, def value: None
  ::GlobalNamespace::__HealthWarningFlowCoordinator__InitData* ____initData;

  /// @brief Field _saveData, offset: 0x108, size: 0x8, def value: None
  ::GlobalNamespace::ISaveData* ____saveData;

  /// @brief Field _viewControllerTitles, offset: 0x110, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::HMUI::ViewController*, ::StringW>* ____viewControllerTitles;

  /// @brief Field _selectedRegion, offset: 0x118, size: 0x4, def value: None
  ::GlobalNamespace::__SelectRegionViewController__Region ____selectedRegion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HealthWarningFlowCoordinator, 0x120>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HealthWarningFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HealthWarningFlowCoordinator*, "", "HealthWarningFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::__HealthWarningFlowCoordinator__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*, "", "HealthWarningFlowCoordinator/InitData");
