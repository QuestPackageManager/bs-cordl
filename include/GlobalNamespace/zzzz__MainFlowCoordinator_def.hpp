#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MainFlowCoordinator)
namespace GlobalNamespace {
struct __MainMenuViewController__MenuButton;
}
namespace GlobalNamespace {
class FadeInOutController;
}
namespace HMUI {
class ViewController;
}
namespace GlobalNamespace {
class MainMenuViewController;
}
namespace HMUI {
struct __ViewController__AnimationType;
}
namespace GlobalNamespace {
class MenuDestination;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class CampaignFlowCoordinator;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class SoloFreePlayFlowCoordinator;
}
namespace GlobalNamespace {
struct __EditAvatarFlowCoordinator__EditAvatarType;
}
namespace GlobalNamespace {
class MenuLightsPresetSO;
}
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
namespace GlobalNamespace {
struct __SettingsFlowCoordinator__FinishAction;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class OptionsViewController;
}
namespace GlobalNamespace {
struct __OptionsViewController__OptionsButton;
}
namespace GlobalNamespace {
class SettingsFlowCoordinator;
}
namespace GlobalNamespace {
class PlayerOptionsViewController;
}
namespace GlobalNamespace {
class SimpleDialogPromptViewController;
}
namespace GlobalNamespace {
class PartyFreePlayFlowCoordinator;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class LevelSelectionFlowCoordinator;
}
namespace GlobalNamespace {
struct __HowToPlayViewController__HowToPlayOptions;
}
namespace GlobalNamespace {
class EditAvatarFlowCoordinator;
}
namespace GlobalNamespace {
class MultiplayerModeSelectionFlowCoordinator;
}
namespace HMUI {
class FlowCoordinator;
}
namespace GlobalNamespace {
class MenuLightsManager;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class __MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41;
}
namespace GlobalNamespace {
class HelpFlowCoordinator;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class MainFlowCoordinator;
}
namespace GlobalNamespace {
class __MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainFlowCoordinator);
MARK_REF_PTR_T(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41);
// Type: ::<ProcessMenuDestinationRequestAfterFrameCoroutine>d__41
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5600))
// CS Name: ::MainFlowCoordinator::<ProcessMenuDestinationRequestAfterFrameCoroutine>d__41*
class CORDL_TYPE __MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41 : public ::System::Object {
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

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

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

  static inline ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2149150 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2149740 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2149744 size 0x54 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2149798 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x21497a0 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x21497e0 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41(__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41(__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41();

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41, ___destination) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MainFlowCoordinator
// SizeInfo { instance_size: 336, native_size: -1, calculated_instance_size: 336, calculated_native_size: 336, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13699))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5601))
// CS Name: ::MainFlowCoordinator*
class CORDL_TYPE MainFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
  // Declarations
  using _ProcessMenuDestinationRequestAfterFrameCoroutine_d__41 = ::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41;

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

  /// @brief Field _editAvatarFlowCoordinator, offset 0xd8, size 0x8
  __declspec(property(get = __get__editAvatarFlowCoordinator, put = __set__editAvatarFlowCoordinator))::GlobalNamespace::EditAvatarFlowCoordinator* _editAvatarFlowCoordinator;

  /// @brief Field _helpFlowCoordinator, offset 0xe0, size 0x8
  __declspec(property(get = __get__helpFlowCoordinator, put = __set__helpFlowCoordinator))::GlobalNamespace::HelpFlowCoordinator* _helpFlowCoordinator;

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

  /// @brief Field _menuDestinationRequest, offset 0x140, size 0x8
  __declspec(property(get = __get__menuDestinationRequest, put = __set__menuDestinationRequest))::GlobalNamespace::MenuDestination* _menuDestinationRequest;

  /// @brief Field _afterDialogPromptFlowCoordinator, offset 0x148, size 0x8
  __declspec(property(get = __get__afterDialogPromptFlowCoordinator, put = __set__afterDialogPromptFlowCoordinator))::HMUI::FlowCoordinator* _afterDialogPromptFlowCoordinator;

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

  constexpr ::GlobalNamespace::EditAvatarFlowCoordinator*& __get__editAvatarFlowCoordinator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EditAvatarFlowCoordinator*> const& __get__editAvatarFlowCoordinator() const;

  constexpr void __set__editAvatarFlowCoordinator(::GlobalNamespace::EditAvatarFlowCoordinator* value);

  constexpr ::GlobalNamespace::HelpFlowCoordinator*& __get__helpFlowCoordinator();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HelpFlowCoordinator*> const& __get__helpFlowCoordinator() const;

  constexpr void __set__helpFlowCoordinator(::GlobalNamespace::HelpFlowCoordinator* value);

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

  constexpr ::GlobalNamespace::MenuDestination*& __get__menuDestinationRequest();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuDestination*> const& __get__menuDestinationRequest() const;

  constexpr void __set__menuDestinationRequest(::GlobalNamespace::MenuDestination* value);

  constexpr ::HMUI::FlowCoordinator*& __get__afterDialogPromptFlowCoordinator();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::FlowCoordinator*> const& __get__afterDialogPromptFlowCoordinator() const;

  constexpr void __set__afterDialogPromptFlowCoordinator(::HMUI::FlowCoordinator* value);

  static inline void setStaticF__startWithSettings(bool value);

  static inline bool getStaticF__startWithSettings();

  /// @brief Method DidActivate addr 0x21472fc size 0x4a8 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method TopViewControllerWillChange addr 0x21478cc size 0x194 virtual true final false
  inline void TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController, ::HMUI::__ViewController__AnimationType animationType);

  /// @brief Method InitialViewControllerWasPresented addr 0x2147a60 size 0x78 virtual true final false
  inline void InitialViewControllerWasPresented();

  /// @brief Method DidDeactivate addr 0x2147ad8 size 0x448 virtual true final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method PresentFlowCoordinatorOrAskForTutorial addr 0x2147fd4 size 0x1d0 virtual false final false
  inline void PresentFlowCoordinatorOrAskForTutorial(::HMUI::FlowCoordinator* flowCoordinator);

  /// @brief Method HandleMainMenuViewControllerDidFinish addr 0x21481a4 size 0x52c virtual false final false
  inline void HandleMainMenuViewControllerDidFinish(::GlobalNamespace::MainMenuViewController* viewController, ::GlobalNamespace::__MainMenuViewController__MenuButton subMenuType);

  /// @brief Method HandleOptionsViewControllerDidFinish addr 0x21486d0 size 0xd0 virtual false final false
  inline void HandleOptionsViewControllerDidFinish(::GlobalNamespace::__OptionsViewController__OptionsButton optionsType);

  /// @brief Method HandlePlayerOptionsViewControllerDidFinish addr 0x21487a0 size 0x14 virtual false final false
  inline void HandlePlayerOptionsViewControllerDidFinish(::HMUI::ViewController* viewController);

  /// @brief Method HandleHowToPlayViewControllerDidFinish addr 0x21487b4 size 0x78 virtual false final false
  inline void HandleHowToPlayViewControllerDidFinish(::GlobalNamespace::__HowToPlayViewController__HowToPlayOptions howToPlayOptions);

  /// @brief Method HandleCampaignFlowCoordinatorDidFinish addr 0x214882c size 0x14 virtual false final false
  inline void HandleCampaignFlowCoordinatorDidFinish(::GlobalNamespace::CampaignFlowCoordinator* flowCoordinator);

  /// @brief Method HandleEditAvatarFlowCoordinatorDidFinish addr 0x2148840 size 0x228 virtual false final false
  inline void HandleEditAvatarFlowCoordinatorDidFinish(::GlobalNamespace::EditAvatarFlowCoordinator* flowCoordinator, ::GlobalNamespace::__EditAvatarFlowCoordinator__EditAvatarType editAvatarType);

  /// @brief Method HandleSoloFreePlayFlowCoordinatorDidFinish addr 0x2148a68 size 0x14 virtual false final false
  inline void HandleSoloFreePlayFlowCoordinatorDidFinish(::GlobalNamespace::LevelSelectionFlowCoordinator* flowCoordinator);

  /// @brief Method HandlePartyFreePlayFlowCoordinatorDidFinish addr 0x2148a7c size 0x14 virtual false final false
  inline void HandlePartyFreePlayFlowCoordinatorDidFinish(::GlobalNamespace::LevelSelectionFlowCoordinator* flowCoordinator);

  /// @brief Method HandleSettingsFlowCoordinatorDidFinish addr 0x2148a90 size 0x94 virtual false final false
  inline void HandleSettingsFlowCoordinatorDidFinish(::GlobalNamespace::SettingsFlowCoordinator* settingsFlowCoordinator, ::GlobalNamespace::__SettingsFlowCoordinator__FinishAction finishAction);

  /// @brief Method HandleHelpFlowCoordinatorDidFinish addr 0x2148b24 size 0x14 virtual false final false
  inline void HandleHelpFlowCoordinatorDidFinish(::GlobalNamespace::HelpFlowCoordinator* helpFlowCoordinator);

  /// @brief Method HandleMultiplayerModeSelectionFlowCoordinatorDidFinish addr 0x2148b38 size 0x14 virtual false final false
  inline void HandleMultiplayerModeSelectionFlowCoordinatorDidFinish(::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* multiplayerModeSelectionFlowCoordinator);

  /// @brief Method HandleMainMenuViewControllerMusicPackPromoButtonWasPressed addr 0x2148b4c size 0xac virtual false final false
  inline void HandleMainMenuViewControllerMusicPackPromoButtonWasPressed(::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel);

  /// @brief Method ProcessMenuDestinationRequest addr 0x2148bf8 size 0x388 virtual false final false
  inline void ProcessMenuDestinationRequest(::GlobalNamespace::MenuDestination* destination);

  /// @brief Method PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator addr 0x2148f80 size 0x1d0 virtual false final false
  inline void PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator();

  /// @brief Method ProcessMenuDestinationRequestAfterFrameCoroutine addr 0x2147858 size 0x74 virtual false final false
  inline ::System::Collections::IEnumerator* ProcessMenuDestinationRequestAfterFrameCoroutine(::GlobalNamespace::MenuDestination* destination);

  /// @brief Method BackButtonWasPressed addr 0x2149178 size 0x9c virtual true final false
  inline void BackButtonWasPressed(::HMUI::ViewController* topViewController);

  static inline ::GlobalNamespace::MainFlowCoordinator* New_ctor();

  /// @brief Method .ctor addr 0x2149214 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <PresentFlowCoordinatorOrAskForTutorial>b__26_0 addr 0x214921c size 0xe0 virtual false final false
  inline void _PresentFlowCoordinatorOrAskForTutorial_b__26_0(int32_t buttonNumber);

  /// @brief Method <PresentFlowCoordinatorOrAskForTutorial>b__26_1 addr 0x21492fc size 0x18 virtual false final false
  inline void _PresentFlowCoordinatorOrAskForTutorial_b__26_1();

  /// @brief Method <HandleMainMenuViewControllerDidFinish>b__27_0 addr 0x2149314 size 0x1c virtual false final false
  inline void _HandleMainMenuViewControllerDidFinish_b__27_0();

  /// @brief Method <HandleMainMenuViewControllerDidFinish>b__27_1 addr 0x2149330 size 0x364 virtual false final false
  inline void _HandleMainMenuViewControllerDidFinish_b__27_1(int32_t buttonNumber);

  /// @brief Method <PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator>b__40_0 addr 0x2149694 size 0xac virtual false final false
  inline void _PresentMultiplayerModeSelectionFlowCoordinatorWithDisclaimerAndAvatarCreator_b__40_0(int32_t buttonNumber);

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

  /// @brief Field _editAvatarFlowCoordinator, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::EditAvatarFlowCoordinator* ____editAvatarFlowCoordinator;

  /// @brief Field _helpFlowCoordinator, offset: 0xe0, size: 0x8, def value: None
  ::GlobalNamespace::HelpFlowCoordinator* ____helpFlowCoordinator;

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

  /// @brief Field _menuDestinationRequest, offset: 0x140, size: 0x8, def value: None
  ::GlobalNamespace::MenuDestination* ____menuDestinationRequest;

  /// @brief Field _afterDialogPromptFlowCoordinator, offset: 0x148, size: 0x8, def value: None
  ::HMUI::FlowCoordinator* ____afterDialogPromptFlowCoordinator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainFlowCoordinator, 0x150>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____defaultLightsPreset) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____soloFreePlayFlowCoordinator) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____partyFreePlayFlowCoordinator) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____campaignFlowCoordinator) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____settingsFlowCoordinator) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____multiplayerModeSelectionFlowCoordinator) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____editAvatarFlowCoordinator) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____helpFlowCoordinator) == 0xe0, "Offset mismatch!");

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

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____menuDestinationRequest) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainFlowCoordinator, ____afterDialogPromptFlowCoordinator) == 0x148, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainFlowCoordinator*, "", "MainFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MainFlowCoordinator___ProcessMenuDestinationRequestAfterFrameCoroutine_d__41*, "",
                       "MainFlowCoordinator/<ProcessMenuDestinationRequestAfterFrameCoroutine>d__41");
