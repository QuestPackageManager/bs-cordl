#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/RuntimeSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "GlobalNamespace/zzzz__OVRRuntimeAssetsBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeSettings)
namespace GlobalNamespace {
struct OVRInput_Button;
}
namespace Meta::XR::ImmersiveDebugger {
class DebugData;
}
namespace Meta::XR::ImmersiveDebugger {
class InspectedData;
}
namespace Meta::XR::ImmersiveDebugger {
struct RuntimeSettings_DistanceOption;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger {
struct RuntimeSettings_DistanceOption;
}
namespace Meta::XR::ImmersiveDebugger {
class RuntimeSettings;
}
// Write type traits
MARK_VAL_T(::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::RuntimeSettings);
// Dependencies
namespace Meta::XR::ImmersiveDebugger {
// Is value type: true
// CS Name: Meta.XR.ImmersiveDebugger.RuntimeSettings/DistanceOption
struct CORDL_TYPE RuntimeSettings_DistanceOption {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RuntimeSettings_DistanceOption_Unwrapped
  enum struct __RuntimeSettings_DistanceOption_Unwrapped : int32_t {
    __E_Close = static_cast<int32_t>(0x0),
    __E_Default = static_cast<int32_t>(0x1),
    __E_Far = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RuntimeSettings_DistanceOption_Unwrapped() const noexcept {
    return static_cast<__RuntimeSettings_DistanceOption_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeSettings_DistanceOption();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RuntimeSettings_DistanceOption(int32_t value__) noexcept;

  /// @brief Field Close value: I32(0)
  static ::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption const Close;

  /// @brief Field Default value: I32(1)
  static ::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption const Default;

  /// @brief Field Far value: I32(2)
  static ::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption const Far;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18300 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption, 0x4>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
// Dependencies Meta.XR.ImmersiveDebugger.RuntimeSettings::DistanceOption, OVRInput::Button, OVRRuntimeAssetsBase
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.RuntimeSettings
class CORDL_TYPE RuntimeSettings : public ::GlobalNamespace::OVRRuntimeAssetsBase {
public:
  // Declarations
  using DistanceOption = ::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption;

  __declspec(property(get = get_AutomaticLayerCullingUpdate, put = set_AutomaticLayerCullingUpdate)) bool AutomaticLayerCullingUpdate;

  __declspec(property(get = get_ClickButton, put = set_ClickButton)) ::GlobalNamespace::OVRInput_Button ClickButton;

  __declspec(property(get = get_CollapsedIdenticalLogEntries, put = set_CollapsedIdenticalLogEntries)) bool CollapsedIdenticalLogEntries;

  __declspec(property(get = get_CreateEventSystem, put = set_CreateEventSystem)) bool CreateEventSystem;

  __declspec(property(get = get_CustomIntegrationConfigClassName, put = set_CustomIntegrationConfigClassName)) ::StringW CustomIntegrationConfigClassName;

  __declspec(property(get = get_FollowOverride, put = set_FollowOverride)) bool FollowOverride;

  __declspec(property(get = get_HierarchyViewShowsPrivateMembers, put = set_HierarchyViewShowsPrivateMembers)) bool HierarchyViewShowsPrivateMembers;

  __declspec(property(get = get_ImmersiveDebuggerDisplayAtStartup, put = set_ImmersiveDebuggerDisplayAtStartup)) bool ImmersiveDebuggerDisplayAtStartup;

  __declspec(property(get = get_ImmersiveDebuggerEnabled, put = set_ImmersiveDebuggerEnabled)) bool ImmersiveDebuggerEnabled;

  __declspec(property(get = get_ImmersiveDebuggerToggleDisplayButton, put = set_ImmersiveDebuggerToggleDisplayButton)) ::GlobalNamespace::OVRInput_Button ImmersiveDebuggerToggleDisplayButton;

  __declspec(property(get = get_InspectedDataAssets,
                      put = set_InspectedDataAssets)) ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>* InspectedDataAssets;

  __declspec(property(get = get_InspectedDataEnabled, put = set_InspectedDataEnabled)) ::System::Collections::Generic::List_1<bool>* InspectedDataEnabled;

  /// @brief Field InstanceAssetName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InstanceAssetName, put = setStaticF_InstanceAssetName)) ::StringW InstanceAssetName;

  __declspec(property(get = get_MaximumNumberOfLogEntries, put = set_MaximumNumberOfLogEntries)) int32_t MaximumNumberOfLogEntries;

  __declspec(property(get = get_MeshRendererLayer, put = set_MeshRendererLayer)) int32_t MeshRendererLayer;

  /// @brief Field OnImmersiveDebuggerEnabledChanged, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OnImmersiveDebuggerEnabledChanged, put = setStaticF_OnImmersiveDebuggerEnabledChanged)) ::System::Action* OnImmersiveDebuggerEnabledChanged;

  __declspec(property(get = get_OverlayDepth, put = set_OverlayDepth)) int32_t OverlayDepth;

  __declspec(property(get = get_PanelDistance, put = set_PanelDistance)) ::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption PanelDistance;

  __declspec(property(get = get_PanelLayer, put = set_PanelLayer)) int32_t PanelLayer;

  __declspec(property(get = get_RotateOverride, put = set_RotateOverride)) bool RotateOverride;

  __declspec(property(get = get_ShowConsole, put = set_ShowConsole)) bool ShowConsole;

  __declspec(property(get = get_ShowErrorLog, put = set_ShowErrorLog)) bool ShowErrorLog;

  __declspec(property(get = get_ShowInfoLog, put = set_ShowInfoLog)) bool ShowInfoLog;

  __declspec(property(get = get_ShowInspectors, put = set_ShowInspectors)) bool ShowInspectors;

  __declspec(property(get = get_ShowWarningLog, put = set_ShowWarningLog)) bool ShowWarningLog;

  __declspec(property(get = get_ToggleFollowRotationButton, put = set_ToggleFollowRotationButton)) ::GlobalNamespace::OVRInput_Button ToggleFollowRotationButton;

  __declspec(property(get = get_ToggleFollowTranslationButton, put = set_ToggleFollowTranslationButton)) ::GlobalNamespace::OVRInput_Button ToggleFollowTranslationButton;

  __declspec(property(get = get_UseCustomIntegrationConfig, put = set_UseCustomIntegrationConfig)) bool UseCustomIntegrationConfig;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__instance, put = setStaticF__instance)) ::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings> _instance;

  /// @brief Field automaticLayerCullingUpdate, offset 0x3d, size 0x1
  __declspec(property(get = __cordl_internal_get_automaticLayerCullingUpdate, put = __cordl_internal_set_automaticLayerCullingUpdate)) bool automaticLayerCullingUpdate;

  /// @brief Field clickButton, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_clickButton, put = __cordl_internal_set_clickButton)) ::GlobalNamespace::OVRInput_Button clickButton;

  /// @brief Field collapsedIdenticalLogEntries, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_collapsedIdenticalLogEntries, put = __cordl_internal_set_collapsedIdenticalLogEntries)) bool collapsedIdenticalLogEntries;

  /// @brief Field createEventSystem, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_createEventSystem, put = __cordl_internal_set_createEventSystem)) bool createEventSystem;

  /// @brief Field customIntegrationConfigClassName, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_customIntegrationConfigClassName, put = __cordl_internal_set_customIntegrationConfigClassName)) ::StringW customIntegrationConfigClassName;

  /// @brief Field debugTypes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_debugTypes, put = __cordl_internal_set_debugTypes)) ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugData*>* debugTypes;

  /// @brief Field debugTypesDict, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_debugTypesDict,
                      put = __cordl_internal_set_debugTypesDict)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* debugTypesDict;

  /// @brief Field followOverride, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_followOverride, put = __cordl_internal_set_followOverride)) bool followOverride;

  /// @brief Field hierarchyViewShowsPrivateMembers, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_hierarchyViewShowsPrivateMembers, put = __cordl_internal_set_hierarchyViewShowsPrivateMembers)) bool hierarchyViewShowsPrivateMembers;

  /// @brief Field immersiveDebuggerDisplayAtStartup, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_immersiveDebuggerDisplayAtStartup, put = __cordl_internal_set_immersiveDebuggerDisplayAtStartup)) bool immersiveDebuggerDisplayAtStartup;

  /// @brief Field immersiveDebuggerEnabled, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_immersiveDebuggerEnabled, put = __cordl_internal_set_immersiveDebuggerEnabled)) bool immersiveDebuggerEnabled;

  /// @brief Field immersiveDebuggerToggleDisplayButton, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_immersiveDebuggerToggleDisplayButton,
                      put = __cordl_internal_set_immersiveDebuggerToggleDisplayButton)) ::GlobalNamespace::OVRInput_Button immersiveDebuggerToggleDisplayButton;

  /// @brief Field inspectedDataAssets, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_inspectedDataAssets,
                      put = __cordl_internal_set_inspectedDataAssets)) ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>* inspectedDataAssets;

  /// @brief Field inspectedDataEnabled, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_inspectedDataEnabled, put = __cordl_internal_set_inspectedDataEnabled)) ::System::Collections::Generic::List_1<bool>* inspectedDataEnabled;

  /// @brief Field maximumNumberOfLogEntries, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_maximumNumberOfLogEntries, put = __cordl_internal_set_maximumNumberOfLogEntries)) int32_t maximumNumberOfLogEntries;

  /// @brief Field meshRendererLayer, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_meshRendererLayer, put = __cordl_internal_set_meshRendererLayer)) int32_t meshRendererLayer;

  /// @brief Field overlayDepth, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_overlayDepth, put = __cordl_internal_set_overlayDepth)) int32_t overlayDepth;

  /// @brief Field panelDistance, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_panelDistance, put = __cordl_internal_set_panelDistance)) ::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption panelDistance;

  /// @brief Field panelLayer, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_panelLayer, put = __cordl_internal_set_panelLayer)) int32_t panelLayer;

  /// @brief Field rotateOverride, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get_rotateOverride, put = __cordl_internal_set_rotateOverride)) bool rotateOverride;

  /// @brief Field showConsole, offset 0x2b, size 0x1
  __declspec(property(get = __cordl_internal_get_showConsole, put = __cordl_internal_set_showConsole)) bool showConsole;

  /// @brief Field showErrorLog, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_showErrorLog, put = __cordl_internal_set_showErrorLog)) bool showErrorLog;

  /// @brief Field showInfoLog, offset 0x2e, size 0x1
  __declspec(property(get = __cordl_internal_get_showInfoLog, put = __cordl_internal_set_showInfoLog)) bool showInfoLog;

  /// @brief Field showInspectors, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get_showInspectors, put = __cordl_internal_set_showInspectors)) bool showInspectors;

  /// @brief Field showWarningLog, offset 0x2f, size 0x1
  __declspec(property(get = __cordl_internal_get_showWarningLog, put = __cordl_internal_set_showWarningLog)) bool showWarningLog;

  /// @brief Field toggleFollowRotationButton, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_toggleFollowRotationButton, put = __cordl_internal_set_toggleFollowRotationButton)) ::GlobalNamespace::OVRInput_Button toggleFollowRotationButton;

  /// @brief Field toggleFollowTranslationButton, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_toggleFollowTranslationButton,
                      put = __cordl_internal_set_toggleFollowTranslationButton)) ::GlobalNamespace::OVRInput_Button toggleFollowTranslationButton;

  /// @brief Field useCustomIntegrationConfig, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_useCustomIntegrationConfig, put = __cordl_internal_set_useCustomIntegrationConfig)) bool useCustomIntegrationConfig;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method Init, addr 0x5892b20, size 0x5c, virtual false, abstract: false, final false
  static inline void Init();

  static inline ::Meta::XR::ImmersiveDebugger::RuntimeSettings* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x58934a0, size 0x144, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x5893260, size 0x240, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  constexpr bool const& __cordl_internal_get_automaticLayerCullingUpdate() const;

  constexpr bool& __cordl_internal_get_automaticLayerCullingUpdate();

  constexpr ::GlobalNamespace::OVRInput_Button const& __cordl_internal_get_clickButton() const;

  constexpr ::GlobalNamespace::OVRInput_Button& __cordl_internal_get_clickButton();

  constexpr bool const& __cordl_internal_get_collapsedIdenticalLogEntries() const;

  constexpr bool& __cordl_internal_get_collapsedIdenticalLogEntries();

  constexpr bool const& __cordl_internal_get_createEventSystem() const;

  constexpr bool& __cordl_internal_get_createEventSystem();

  constexpr ::StringW const& __cordl_internal_get_customIntegrationConfigClassName() const;

  constexpr ::StringW& __cordl_internal_get_customIntegrationConfigClassName();

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugData*>* const& __cordl_internal_get_debugTypes() const;

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugData*>*& __cordl_internal_get_debugTypes();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* const& __cordl_internal_get_debugTypesDict() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*& __cordl_internal_get_debugTypesDict();

  constexpr bool const& __cordl_internal_get_followOverride() const;

  constexpr bool& __cordl_internal_get_followOverride();

  constexpr bool const& __cordl_internal_get_hierarchyViewShowsPrivateMembers() const;

  constexpr bool& __cordl_internal_get_hierarchyViewShowsPrivateMembers();

  constexpr bool const& __cordl_internal_get_immersiveDebuggerDisplayAtStartup() const;

  constexpr bool& __cordl_internal_get_immersiveDebuggerDisplayAtStartup();

  constexpr bool const& __cordl_internal_get_immersiveDebuggerEnabled() const;

  constexpr bool& __cordl_internal_get_immersiveDebuggerEnabled();

  constexpr ::GlobalNamespace::OVRInput_Button const& __cordl_internal_get_immersiveDebuggerToggleDisplayButton() const;

  constexpr ::GlobalNamespace::OVRInput_Button& __cordl_internal_get_immersiveDebuggerToggleDisplayButton();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>* const& __cordl_internal_get_inspectedDataAssets() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>*& __cordl_internal_get_inspectedDataAssets();

  constexpr ::System::Collections::Generic::List_1<bool>* const& __cordl_internal_get_inspectedDataEnabled() const;

  constexpr ::System::Collections::Generic::List_1<bool>*& __cordl_internal_get_inspectedDataEnabled();

  constexpr int32_t const& __cordl_internal_get_maximumNumberOfLogEntries() const;

  constexpr int32_t& __cordl_internal_get_maximumNumberOfLogEntries();

  constexpr int32_t const& __cordl_internal_get_meshRendererLayer() const;

  constexpr int32_t& __cordl_internal_get_meshRendererLayer();

  constexpr int32_t const& __cordl_internal_get_overlayDepth() const;

  constexpr int32_t& __cordl_internal_get_overlayDepth();

  constexpr ::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption const& __cordl_internal_get_panelDistance() const;

  constexpr ::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption& __cordl_internal_get_panelDistance();

  constexpr int32_t const& __cordl_internal_get_panelLayer() const;

  constexpr int32_t& __cordl_internal_get_panelLayer();

  constexpr bool const& __cordl_internal_get_rotateOverride() const;

  constexpr bool& __cordl_internal_get_rotateOverride();

  constexpr bool const& __cordl_internal_get_showConsole() const;

  constexpr bool& __cordl_internal_get_showConsole();

  constexpr bool const& __cordl_internal_get_showErrorLog() const;

  constexpr bool& __cordl_internal_get_showErrorLog();

  constexpr bool const& __cordl_internal_get_showInfoLog() const;

  constexpr bool& __cordl_internal_get_showInfoLog();

  constexpr bool const& __cordl_internal_get_showInspectors() const;

  constexpr bool& __cordl_internal_get_showInspectors();

  constexpr bool const& __cordl_internal_get_showWarningLog() const;

  constexpr bool& __cordl_internal_get_showWarningLog();

  constexpr ::GlobalNamespace::OVRInput_Button const& __cordl_internal_get_toggleFollowRotationButton() const;

  constexpr ::GlobalNamespace::OVRInput_Button& __cordl_internal_get_toggleFollowRotationButton();

  constexpr ::GlobalNamespace::OVRInput_Button const& __cordl_internal_get_toggleFollowTranslationButton() const;

  constexpr ::GlobalNamespace::OVRInput_Button& __cordl_internal_get_toggleFollowTranslationButton();

  constexpr bool const& __cordl_internal_get_useCustomIntegrationConfig() const;

  constexpr bool& __cordl_internal_get_useCustomIntegrationConfig();

  constexpr void __cordl_internal_set_automaticLayerCullingUpdate(bool value);

  constexpr void __cordl_internal_set_clickButton(::GlobalNamespace::OVRInput_Button value);

  constexpr void __cordl_internal_set_collapsedIdenticalLogEntries(bool value);

  constexpr void __cordl_internal_set_createEventSystem(bool value);

  constexpr void __cordl_internal_set_customIntegrationConfigClassName(::StringW value);

  constexpr void __cordl_internal_set_debugTypes(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugData*>* value);

  constexpr void __cordl_internal_set_debugTypesDict(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* value);

  constexpr void __cordl_internal_set_followOverride(bool value);

  constexpr void __cordl_internal_set_hierarchyViewShowsPrivateMembers(bool value);

  constexpr void __cordl_internal_set_immersiveDebuggerDisplayAtStartup(bool value);

  constexpr void __cordl_internal_set_immersiveDebuggerEnabled(bool value);

  constexpr void __cordl_internal_set_immersiveDebuggerToggleDisplayButton(::GlobalNamespace::OVRInput_Button value);

  constexpr void __cordl_internal_set_inspectedDataAssets(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>* value);

  constexpr void __cordl_internal_set_inspectedDataEnabled(::System::Collections::Generic::List_1<bool>* value);

  constexpr void __cordl_internal_set_maximumNumberOfLogEntries(int32_t value);

  constexpr void __cordl_internal_set_meshRendererLayer(int32_t value);

  constexpr void __cordl_internal_set_overlayDepth(int32_t value);

  constexpr void __cordl_internal_set_panelDistance(::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption value);

  constexpr void __cordl_internal_set_panelLayer(int32_t value);

  constexpr void __cordl_internal_set_rotateOverride(bool value);

  constexpr void __cordl_internal_set_showConsole(bool value);

  constexpr void __cordl_internal_set_showErrorLog(bool value);

  constexpr void __cordl_internal_set_showInfoLog(bool value);

  constexpr void __cordl_internal_set_showInspectors(bool value);

  constexpr void __cordl_internal_set_showWarningLog(bool value);

  constexpr void __cordl_internal_set_toggleFollowRotationButton(::GlobalNamespace::OVRInput_Button value);

  constexpr void __cordl_internal_set_toggleFollowTranslationButton(::GlobalNamespace::OVRInput_Button value);

  constexpr void __cordl_internal_set_useCustomIntegrationConfig(bool value);

  /// @brief Method .ctor, addr 0x58930a0, size 0x1c0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_OnImmersiveDebuggerEnabledChanged, addr 0x5892c8c, size 0xf0, virtual false, abstract: false, final false
  static inline void add_OnImmersiveDebuggerEnabledChanged(::System::Action* value);

  static inline ::StringW getStaticF_InstanceAssetName();

  static inline ::System::Action* getStaticF_OnImmersiveDebuggerEnabledChanged();

  static inline ::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings> getStaticF__instance();

  /// @brief Method get_AutomaticLayerCullingUpdate, addr 0x5892fd0, size 0x8, virtual false, abstract: false, final false
  inline bool get_AutomaticLayerCullingUpdate();

  /// @brief Method get_ClickButton, addr 0x5893060, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRInput_Button get_ClickButton();

  /// @brief Method get_CollapsedIdenticalLogEntries, addr 0x5892f90, size 0x8, virtual false, abstract: false, final false
  inline bool get_CollapsedIdenticalLogEntries();

  /// @brief Method get_CreateEventSystem, addr 0x5892fc0, size 0x8, virtual false, abstract: false, final false
  inline bool get_CreateEventSystem();

  /// @brief Method get_CustomIntegrationConfigClassName, addr 0x5893040, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_CustomIntegrationConfigClassName();

  /// @brief Method get_FollowOverride, addr 0x5892f40, size 0x8, virtual false, abstract: false, final false
  inline bool get_FollowOverride();

  /// @brief Method get_HierarchyViewShowsPrivateMembers, addr 0x5893050, size 0x8, virtual false, abstract: false, final false
  inline bool get_HierarchyViewShowsPrivateMembers();

  /// @brief Method get_ImmersiveDebuggerDisplayAtStartup, addr 0x5892f10, size 0x8, virtual false, abstract: false, final false
  inline bool get_ImmersiveDebuggerDisplayAtStartup();

  /// @brief Method get_ImmersiveDebuggerEnabled, addr 0x5892e6c, size 0x8, virtual false, abstract: false, final false
  inline bool get_ImmersiveDebuggerEnabled();

  /// @brief Method get_ImmersiveDebuggerToggleDisplayButton, addr 0x5893090, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRInput_Button get_ImmersiveDebuggerToggleDisplayButton();

  /// @brief Method get_InspectedDataAssets, addr 0x5893020, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>* get_InspectedDataAssets();

  /// @brief Method get_InspectedDataEnabled, addr 0x5893010, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<bool>* get_InspectedDataEnabled();

  /// @brief Method get_Instance, addr 0x5892b7c, size 0x110, virtual false, abstract: false, final false
  static inline ::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings> get_Instance();

  /// @brief Method get_MaximumNumberOfLogEntries, addr 0x5892fa0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MaximumNumberOfLogEntries();

  /// @brief Method get_MeshRendererLayer, addr 0x5892ff0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MeshRendererLayer();

  /// @brief Method get_OverlayDepth, addr 0x5893000, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_OverlayDepth();

  /// @brief Method get_PanelDistance, addr 0x5892fb0, size 0x8, virtual false, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption get_PanelDistance();

  /// @brief Method get_PanelLayer, addr 0x5892fe0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PanelLayer();

  /// @brief Method get_RotateOverride, addr 0x5892f50, size 0x8, virtual false, abstract: false, final false
  inline bool get_RotateOverride();

  /// @brief Method get_ShowConsole, addr 0x5892f30, size 0x8, virtual false, abstract: false, final false
  inline bool get_ShowConsole();

  /// @brief Method get_ShowErrorLog, addr 0x5892f80, size 0x8, virtual false, abstract: false, final false
  inline bool get_ShowErrorLog();

  /// @brief Method get_ShowInfoLog, addr 0x5892f60, size 0x8, virtual false, abstract: false, final false
  inline bool get_ShowInfoLog();

  /// @brief Method get_ShowInspectors, addr 0x5892f20, size 0x8, virtual false, abstract: false, final false
  inline bool get_ShowInspectors();

  /// @brief Method get_ShowWarningLog, addr 0x5892f70, size 0x8, virtual false, abstract: false, final false
  inline bool get_ShowWarningLog();

  /// @brief Method get_ToggleFollowRotationButton, addr 0x5893080, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRInput_Button get_ToggleFollowRotationButton();

  /// @brief Method get_ToggleFollowTranslationButton, addr 0x5893070, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRInput_Button get_ToggleFollowTranslationButton();

  /// @brief Method get_UseCustomIntegrationConfig, addr 0x5893030, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseCustomIntegrationConfig();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  /// @brief Method remove_OnImmersiveDebuggerEnabledChanged, addr 0x5892d7c, size 0xf0, virtual false, abstract: false, final false
  static inline void remove_OnImmersiveDebuggerEnabledChanged(::System::Action* value);

  static inline void setStaticF_InstanceAssetName(::StringW value);

  static inline void setStaticF_OnImmersiveDebuggerEnabledChanged(::System::Action* value);

  static inline void setStaticF__instance(::UnityW<::Meta::XR::ImmersiveDebugger::RuntimeSettings> value);

  /// @brief Method set_AutomaticLayerCullingUpdate, addr 0x5892fd8, size 0x8, virtual false, abstract: false, final false
  inline void set_AutomaticLayerCullingUpdate(bool value);

  /// @brief Method set_ClickButton, addr 0x5893068, size 0x8, virtual false, abstract: false, final false
  inline void set_ClickButton(::GlobalNamespace::OVRInput_Button value);

  /// @brief Method set_CollapsedIdenticalLogEntries, addr 0x5892f98, size 0x8, virtual false, abstract: false, final false
  inline void set_CollapsedIdenticalLogEntries(bool value);

  /// @brief Method set_CreateEventSystem, addr 0x5892fc8, size 0x8, virtual false, abstract: false, final false
  inline void set_CreateEventSystem(bool value);

  /// @brief Method set_CustomIntegrationConfigClassName, addr 0x5893048, size 0x8, virtual false, abstract: false, final false
  inline void set_CustomIntegrationConfigClassName(::StringW value);

  /// @brief Method set_FollowOverride, addr 0x5892f48, size 0x8, virtual false, abstract: false, final false
  inline void set_FollowOverride(bool value);

  /// @brief Method set_HierarchyViewShowsPrivateMembers, addr 0x5893058, size 0x8, virtual false, abstract: false, final false
  inline void set_HierarchyViewShowsPrivateMembers(bool value);

  /// @brief Method set_ImmersiveDebuggerDisplayAtStartup, addr 0x5892f18, size 0x8, virtual false, abstract: false, final false
  inline void set_ImmersiveDebuggerDisplayAtStartup(bool value);

  /// @brief Method set_ImmersiveDebuggerEnabled, addr 0x5892e74, size 0x9c, virtual false, abstract: false, final false
  inline void set_ImmersiveDebuggerEnabled(bool value);

  /// @brief Method set_ImmersiveDebuggerToggleDisplayButton, addr 0x5893098, size 0x8, virtual false, abstract: false, final false
  inline void set_ImmersiveDebuggerToggleDisplayButton(::GlobalNamespace::OVRInput_Button value);

  /// @brief Method set_InspectedDataAssets, addr 0x5893028, size 0x8, virtual false, abstract: false, final false
  inline void set_InspectedDataAssets(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>* value);

  /// @brief Method set_InspectedDataEnabled, addr 0x5893018, size 0x8, virtual false, abstract: false, final false
  inline void set_InspectedDataEnabled(::System::Collections::Generic::List_1<bool>* value);

  /// @brief Method set_MaximumNumberOfLogEntries, addr 0x5892fa8, size 0x8, virtual false, abstract: false, final false
  inline void set_MaximumNumberOfLogEntries(int32_t value);

  /// @brief Method set_MeshRendererLayer, addr 0x5892ff8, size 0x8, virtual false, abstract: false, final false
  inline void set_MeshRendererLayer(int32_t value);

  /// @brief Method set_OverlayDepth, addr 0x5893008, size 0x8, virtual false, abstract: false, final false
  inline void set_OverlayDepth(int32_t value);

  /// @brief Method set_PanelDistance, addr 0x5892fb8, size 0x8, virtual false, abstract: false, final false
  inline void set_PanelDistance(::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption value);

  /// @brief Method set_PanelLayer, addr 0x5892fe8, size 0x8, virtual false, abstract: false, final false
  inline void set_PanelLayer(int32_t value);

  /// @brief Method set_RotateOverride, addr 0x5892f58, size 0x8, virtual false, abstract: false, final false
  inline void set_RotateOverride(bool value);

  /// @brief Method set_ShowConsole, addr 0x5892f38, size 0x8, virtual false, abstract: false, final false
  inline void set_ShowConsole(bool value);

  /// @brief Method set_ShowErrorLog, addr 0x5892f88, size 0x8, virtual false, abstract: false, final false
  inline void set_ShowErrorLog(bool value);

  /// @brief Method set_ShowInfoLog, addr 0x5892f68, size 0x8, virtual false, abstract: false, final false
  inline void set_ShowInfoLog(bool value);

  /// @brief Method set_ShowInspectors, addr 0x5892f28, size 0x8, virtual false, abstract: false, final false
  inline void set_ShowInspectors(bool value);

  /// @brief Method set_ShowWarningLog, addr 0x5892f78, size 0x8, virtual false, abstract: false, final false
  inline void set_ShowWarningLog(bool value);

  /// @brief Method set_ToggleFollowRotationButton, addr 0x5893088, size 0x8, virtual false, abstract: false, final false
  inline void set_ToggleFollowRotationButton(::GlobalNamespace::OVRInput_Button value);

  /// @brief Method set_ToggleFollowTranslationButton, addr 0x5893078, size 0x8, virtual false, abstract: false, final false
  inline void set_ToggleFollowTranslationButton(::GlobalNamespace::OVRInput_Button value);

  /// @brief Method set_UseCustomIntegrationConfig, addr 0x5893038, size 0x8, virtual false, abstract: false, final false
  inline void set_UseCustomIntegrationConfig(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeSettings(RuntimeSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeSettings(RuntimeSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18301 };

  /// @brief Field debugTypes, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::DebugData*>* ___debugTypes;

  /// @brief Field debugTypesDict, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* ___debugTypesDict;

  /// @brief Field immersiveDebuggerEnabled, offset: 0x28, size: 0x1, def value: None
  bool ___immersiveDebuggerEnabled;

  /// @brief Field immersiveDebuggerDisplayAtStartup, offset: 0x29, size: 0x1, def value: None
  bool ___immersiveDebuggerDisplayAtStartup;

  /// @brief Field showInspectors, offset: 0x2a, size: 0x1, def value: None
  bool ___showInspectors;

  /// @brief Field showConsole, offset: 0x2b, size: 0x1, def value: None
  bool ___showConsole;

  /// @brief Field followOverride, offset: 0x2c, size: 0x1, def value: None
  bool ___followOverride;

  /// @brief Field rotateOverride, offset: 0x2d, size: 0x1, def value: None
  bool ___rotateOverride;

  /// @brief Field showInfoLog, offset: 0x2e, size: 0x1, def value: None
  bool ___showInfoLog;

  /// @brief Field showWarningLog, offset: 0x2f, size: 0x1, def value: None
  bool ___showWarningLog;

  /// @brief Field showErrorLog, offset: 0x30, size: 0x1, def value: None
  bool ___showErrorLog;

  /// @brief Field collapsedIdenticalLogEntries, offset: 0x31, size: 0x1, def value: None
  bool ___collapsedIdenticalLogEntries;

  /// @brief Field maximumNumberOfLogEntries, offset: 0x34, size: 0x4, def value: None
  int32_t ___maximumNumberOfLogEntries;

  /// @brief Field panelDistance, offset: 0x38, size: 0x4, def value: None
  ::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption ___panelDistance;

  /// @brief Field createEventSystem, offset: 0x3c, size: 0x1, def value: None
  bool ___createEventSystem;

  /// @brief Field automaticLayerCullingUpdate, offset: 0x3d, size: 0x1, def value: None
  bool ___automaticLayerCullingUpdate;

  /// @brief Field panelLayer, offset: 0x40, size: 0x4, def value: None
  int32_t ___panelLayer;

  /// @brief Field meshRendererLayer, offset: 0x44, size: 0x4, def value: None
  int32_t ___meshRendererLayer;

  /// @brief Field overlayDepth, offset: 0x48, size: 0x4, def value: None
  int32_t ___overlayDepth;

  /// @brief Field inspectedDataEnabled, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<bool>* ___inspectedDataEnabled;

  /// @brief Field inspectedDataAssets, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::InspectedData>>* ___inspectedDataAssets;

  /// @brief Field useCustomIntegrationConfig, offset: 0x60, size: 0x1, def value: None
  bool ___useCustomIntegrationConfig;

  /// @brief Field customIntegrationConfigClassName, offset: 0x68, size: 0x8, def value: None
  ::StringW ___customIntegrationConfigClassName;

  /// @brief Field hierarchyViewShowsPrivateMembers, offset: 0x70, size: 0x1, def value: None
  bool ___hierarchyViewShowsPrivateMembers;

  /// @brief Field clickButton, offset: 0x74, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_Button ___clickButton;

  /// @brief Field toggleFollowTranslationButton, offset: 0x78, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_Button ___toggleFollowTranslationButton;

  /// @brief Field toggleFollowRotationButton, offset: 0x7c, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_Button ___toggleFollowRotationButton;

  /// @brief Field immersiveDebuggerToggleDisplayButton, offset: 0x80, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_Button ___immersiveDebuggerToggleDisplayButton;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___debugTypes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___debugTypesDict) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___immersiveDebuggerEnabled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___immersiveDebuggerDisplayAtStartup) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___showInspectors) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___showConsole) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___followOverride) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___rotateOverride) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___showInfoLog) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___showWarningLog) == 0x2f, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___showErrorLog) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___collapsedIdenticalLogEntries) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___maximumNumberOfLogEntries) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___panelDistance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___createEventSystem) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___automaticLayerCullingUpdate) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___panelLayer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___meshRendererLayer) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___overlayDepth) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___inspectedDataEnabled) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___inspectedDataAssets) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___useCustomIntegrationConfig) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___customIntegrationConfigClassName) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___hierarchyViewShowsPrivateMembers) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___clickButton) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___toggleFollowTranslationButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___toggleFollowRotationButton) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::RuntimeSettings, ___immersiveDebuggerToggleDisplayButton) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::RuntimeSettings, 0x88>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::RuntimeSettings_DistanceOption, "Meta.XR.ImmersiveDebugger", "RuntimeSettings/DistanceOption");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::RuntimeSettings);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::RuntimeSettings*, "Meta.XR.ImmersiveDebugger", "RuntimeSettings");
