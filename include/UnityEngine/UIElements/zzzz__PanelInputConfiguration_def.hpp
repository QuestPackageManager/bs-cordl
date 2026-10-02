#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PanelInputConfiguration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PanelInputConfiguration)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UIElements {
struct PanelInputConfiguration_PanelInputRedirection;
}
namespace UnityEngine::UIElements {
struct PanelInputConfiguration_Settings;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct PanelInputConfiguration_PanelInputRedirection;
}
namespace UnityEngine::UIElements {
class PanelInputConfiguration;
}
namespace UnityEngine::UIElements {
struct PanelInputConfiguration_Settings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection);
MARK_REF_T(::UnityEngine::UIElements::PanelInputConfiguration*);
MARK_VAL_T(::UnityEngine::UIElements::PanelInputConfiguration_Settings);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection, "UnityEngine.UIElements", "PanelInputConfiguration/PanelInputRedirection");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PanelInputConfiguration*, "UnityEngine.UIElements", "PanelInputConfiguration");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PanelInputConfiguration_Settings, "UnityEngine.UIElements", "PanelInputConfiguration/Settings");
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.PanelInputConfiguration/PanelInputRedirection
struct CORDL_TYPE PanelInputConfiguration_PanelInputRedirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PanelInputConfiguration_PanelInputRedirection_Unwrapped
  enum struct __PanelInputConfiguration_PanelInputRedirection_Unwrapped : int32_t {
    __E_AutoSwitch = static_cast<int32_t>(0x0),
    __E_Never = static_cast<int32_t>(0x1),
    __E_Always = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PanelInputConfiguration_PanelInputRedirection_Unwrapped() const noexcept {
    return static_cast<__PanelInputConfiguration_PanelInputRedirection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelInputConfiguration_PanelInputRedirection();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr PanelInputConfiguration_PanelInputRedirection(int32_t value__) noexcept;

  /// @brief Field Always value: I32(2)
  static ::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection const Always;

  /// @brief Field AutoSwitch value: I32(0)
  static ::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection const AutoSwitch;

  /// @brief Field Never value: I32(1)
  static ::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection const Never;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4614 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection) == 0x4, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.Camera, UnityEngine.LayerMask, UnityEngine.UIElements.PanelInputConfiguration::PanelInputRedirection
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.PanelInputConfiguration/Settings
struct CORDL_TYPE PanelInputConfiguration_Settings {
public:
  // Declarations
  __declspec(property(get = get_autoCreatePanelComponents)) bool autoCreatePanelComponents;

  __declspec(property(get = get_defaultEventCameraIsMainCamera)) bool defaultEventCameraIsMainCamera;

  __declspec(property(get = get_eventCameras)) ::ArrayW<::UnityW<::UnityEngine::Camera>> eventCameras;

  __declspec(property(get = get_interactionLayers)) ::UnityEngine::LayerMask interactionLayers;

  __declspec(property(get = get_maxInteractionDistance)) float_t maxInteractionDistance;

  __declspec(property(get = get_panelInputRedirection)) ::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection panelInputRedirection;

  __declspec(property(get = get_processWorldSpaceInput)) bool processWorldSpaceInput;

  /// @brief Field s_Default, offset 0xffffffff, size 0x20
  __declspec(property(get = getStaticF_s_Default, put = setStaticF_s_Default)) ::UnityEngine::UIElements::PanelInputConfiguration_Settings s_Default;

  static inline ::UnityEngine::UIElements::PanelInputConfiguration_Settings getStaticF_s_Default();

  /// @brief Method get_Default, addr 0x7245b70, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::PanelInputConfiguration_Settings get_Default();

  /// @brief Method get_autoCreatePanelComponents, addr 0x7245c04, size 0x8, virtual false, abstract: false, final false
  inline bool get_autoCreatePanelComponents();

  /// @brief Method get_defaultEventCameraIsMainCamera, addr 0x7245bec, size 0x8, virtual false, abstract: false, final false
  inline bool get_defaultEventCameraIsMainCamera();

  /// @brief Method get_eventCameras, addr 0x7245bf4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Camera>> get_eventCameras();

  /// @brief Method get_interactionLayers, addr 0x7245bdc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_interactionLayers();

  /// @brief Method get_maxInteractionDistance, addr 0x7245be4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxInteractionDistance();

  /// @brief Method get_panelInputRedirection, addr 0x7245bfc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection get_panelInputRedirection();

  /// @brief Method get_processWorldSpaceInput, addr 0x7245bd4, size 0x8, virtual false, abstract: false, final false
  inline bool get_processWorldSpaceInput();

  static inline void setStaticF_s_Default(::UnityEngine::UIElements::PanelInputConfiguration_Settings value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelInputConfiguration_Settings();

  // Ctor Parameters [CppParam { name: "m_ProcessWorldSpaceInput", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InteractionLayers", ty: "::UnityEngine::LayerMask",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MaxInteractionDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "m_DefaultEventCameraIsMainCamera", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_EventCameras", ty: "::ArrayW<::UnityW<::UnityEngine::Camera>>", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "m_PanelInputRedirection", ty: "::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "m_AutoCreatePanelComponents", ty: "bool", modifiers: "", def_value: None, comment: None }]
  constexpr PanelInputConfiguration_Settings(bool m_ProcessWorldSpaceInput, ::UnityEngine::LayerMask m_InteractionLayers, float_t m_MaxInteractionDistance, bool m_DefaultEventCameraIsMainCamera,
                                             ::ArrayW<::UnityW<::UnityEngine::Camera>> m_EventCameras, ::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection m_PanelInputRedirection,
                                             bool m_AutoCreatePanelComponents) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4615 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// [SerializeField]
  /// [Tooltip("Determines whether world space panels process input events. Disable this if you need UGUI support but do not require world space input to improve performance.")]
  /// @brief Field m_ProcessWorldSpaceInput, offset: 0x0, size: 0x1, def value: None
  bool m_ProcessWorldSpaceInput;

  /// [SerializeField]
  /// [Tooltip("Determines which layers can block input events on world space panels.")]
  /// @brief Field m_InteractionLayers, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::LayerMask m_InteractionLayers;

  /// [SerializeField]
  /// [Tooltip("Sets how far away interactions with world-space UI are possible. Defaults to unlimited (infinity), but you can customize it for XR or performance needs. The distance uses GameObject
  /// units, consistent with transform positions and Camera clipping planes.")]
  /// @brief Field m_MaxInteractionDistance, offset: 0x8, size: 0x4, def value: None
  float_t m_MaxInteractionDistance;

  /// [Tooltip("Defines whether the Main Camera is used as the Event Camera for world space panels. Disable to specify alternative Event Camera(s) for raycasting input.")]
  /// [SerializeField]
  /// @brief Field m_DefaultEventCameraIsMainCamera, offset: 0xc, size: 0x1, def value: None
  bool m_DefaultEventCameraIsMainCamera;

  /// [Tooltip("Defines the Event Camera(s) used for world space raycasting input.")]
  /// [SerializeField]
  /// @brief Field m_EventCameras, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Camera>> m_EventCameras;

  /// [Tooltip("Determines which input event system is used for UI interactions when combining UI Toolkit and UGUI.")]
  /// [SerializeField]
  /// @brief Field m_PanelInputRedirection, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection m_PanelInputRedirection;

  /// [Tooltip("Automatically adds UI Toolkit components under the EventSystem to handle input redirection between UI Toolkit and UGUI panels. Disable to manually assign these components through
  /// code.")] [SerializeField]
  /// @brief Field m_AutoCreatePanelComponents, offset: 0x1c, size: 0x1, def value: None
  bool m_AutoCreatePanelComponents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PanelInputConfiguration_Settings, m_ProcessWorldSpaceInput) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelInputConfiguration_Settings, m_InteractionLayers) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelInputConfiguration_Settings, m_MaxInteractionDistance) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelInputConfiguration_Settings, m_DefaultEventCameraIsMainCamera) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelInputConfiguration_Settings, m_EventCameras) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelInputConfiguration_Settings, m_PanelInputRedirection) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelInputConfiguration_Settings, m_AutoCreatePanelComponents) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PanelInputConfiguration_Settings) == 0x20, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [AddComponentMenu("UI Toolkit/Panel Input Configuration", 1)]
// [HelpURL("UIE-get-started-with-runtime-ui")]
// [ExecuteAlways]
// [DisallowMultipleComponent]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.UIElements.PanelInputConfiguration::Settings
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PanelInputConfiguration
class CORDL_TYPE PanelInputConfiguration : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using PanelInputRedirection = ::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection;

  using Settings = ::UnityEngine::UIElements::PanelInputConfiguration_Settings;

  /// @brief Field <current>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__current_k__BackingField, put = setStaticF__current_k__BackingField)) ::UnityW<::UnityEngine::UIElements::PanelInputConfiguration> _current_k__BackingField;

  __declspec(property(get = get_autoCreatePanelComponents, put = set_autoCreatePanelComponents)) bool autoCreatePanelComponents;

  __declspec(property(get = get_defaultEventCameraIsMainCamera, put = set_defaultEventCameraIsMainCamera)) bool defaultEventCameraIsMainCamera;

  __declspec(property(get = get_eventCameras, put = set_eventCameras)) ::ArrayW<::UnityW<::UnityEngine::Camera>> eventCameras;

  __declspec(property(get = get_interactionLayers, put = set_interactionLayers)) ::UnityEngine::LayerMask interactionLayers;

  /// @brief Field m_Settings, offset 0x20, size 0x20
  __declspec(property(get = __cordl_internal_get_m_Settings, put = __cordl_internal_set_m_Settings)) ::UnityEngine::UIElements::PanelInputConfiguration_Settings m_Settings;

  __declspec(property(get = get_maxInteractionDistance, put = set_maxInteractionDistance)) float_t maxInteractionDistance;

  /// @brief Field onApply, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_onApply, put = setStaticF_onApply)) ::System::Action_1<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>>* onApply;

  __declspec(property(get = get_panelInputRedirection, put = set_panelInputRedirection)) ::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection panelInputRedirection;

  __declspec(property(get = get_processWorldSpaceInput, put = set_processWorldSpaceInput)) bool processWorldSpaceInput;

  /// @brief Field s_ActiveInstances, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_ActiveInstances, put = setStaticF_s_ActiveInstances)) int32_t s_ActiveInstances;

  __declspec(property(get = get_settings)) ::UnityEngine::UIElements::PanelInputConfiguration_Settings settings;

  /// @brief Method Apply, addr 0x72450a8, size 0x418, virtual false, abstract: false, final false
  static inline void Apply(::UnityEngine::UIElements::PanelInputConfiguration* input);

  static inline ::UnityEngine::UIElements::PanelInputConfiguration* New_ctor();

  /// @brief Method OnDisable, addr 0x724587c, size 0x11c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x7245588, size 0x2f4, virtual false, abstract: false, final false
  inline void OnEnable();

  constexpr ::UnityEngine::UIElements::PanelInputConfiguration_Settings const& __cordl_internal_get_m_Settings() const;

  constexpr ::UnityEngine::UIElements::PanelInputConfiguration_Settings& __cordl_internal_get_m_Settings();

  constexpr void __cordl_internal_set_m_Settings(::UnityEngine::UIElements::PanelInputConfiguration_Settings value);

  /// @brief Method .ctor, addr 0x7245ac8, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::UnityEngine::UIElements::PanelInputConfiguration> getStaticF__current_k__BackingField();

  static inline ::System::Action_1<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>>* getStaticF_onApply();

  static inline int32_t getStaticF_s_ActiveInstances();

  /// @brief Method get_autoCreatePanelComponents, addr 0x7245564, size 0x8, virtual false, abstract: false, final false
  inline bool get_autoCreatePanelComponents();

  /// [CompilerGenerated]
  /// @brief Method get_current, addr 0x7244fdc, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::UIElements::PanelInputConfiguration> get_current();

  /// @brief Method get_defaultEventCameraIsMainCamera, addr 0x7245500, size 0x8, virtual false, abstract: false, final false
  inline bool get_defaultEventCameraIsMainCamera();

  /// @brief Method get_eventCameras, addr 0x7245524, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Camera>> get_eventCameras();

  /// @brief Method get_interactionLayers, addr 0x72454c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_interactionLayers();

  /// @brief Method get_maxInteractionDistance, addr 0x72454e0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxInteractionDistance();

  /// @brief Method get_panelInputRedirection, addr 0x7245544, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection get_panelInputRedirection();

  /// @brief Method get_processWorldSpaceInput, addr 0x7245084, size 0x8, virtual false, abstract: false, final false
  inline bool get_processWorldSpaceInput();

  /// @brief Method get_settings, addr 0x7245078, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PanelInputConfiguration_Settings get_settings();

  static inline void setStaticF__current_k__BackingField(::UnityW<::UnityEngine::UIElements::PanelInputConfiguration> value);

  static inline void setStaticF_onApply(::System::Action_1<::UnityW<::UnityEngine::UIElements::PanelInputConfiguration>>* value);

  static inline void setStaticF_s_ActiveInstances(int32_t value);

  /// @brief Method set_autoCreatePanelComponents, addr 0x724556c, size 0x1c, virtual false, abstract: false, final false
  inline void set_autoCreatePanelComponents(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_current, addr 0x7245028, size 0x50, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::UIElements::PanelInputConfiguration* value);

  /// @brief Method set_defaultEventCameraIsMainCamera, addr 0x7245508, size 0x1c, virtual false, abstract: false, final false
  inline void set_defaultEventCameraIsMainCamera(bool value);

  /// @brief Method set_eventCameras, addr 0x724552c, size 0x18, virtual false, abstract: false, final false
  inline void set_eventCameras(::ArrayW<::UnityEngine::Camera*> value);

  /// @brief Method set_interactionLayers, addr 0x72454c8, size 0x18, virtual false, abstract: false, final false
  inline void set_interactionLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_maxInteractionDistance, addr 0x72454e8, size 0x18, virtual false, abstract: false, final false
  inline void set_maxInteractionDistance(float_t value);

  /// @brief Method set_panelInputRedirection, addr 0x724554c, size 0x18, virtual false, abstract: false, final false
  inline void set_panelInputRedirection(::UnityEngine::UIElements::PanelInputConfiguration_PanelInputRedirection value);

  /// @brief Method set_processWorldSpaceInput, addr 0x724508c, size 0x1c, virtual false, abstract: false, final false
  inline void set_processWorldSpaceInput(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelInputConfiguration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PanelInputConfiguration", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanelInputConfiguration(PanelInputConfiguration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanelInputConfiguration", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanelInputConfiguration(PanelInputConfiguration const&) = delete;

  /// @brief Field SettingsProperty offset 0xffffffff size 0x8
  static constexpr ::ConstString SettingsProperty{ u"m_Settings" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4616 };

  /// [SerializeField]
  /// @brief Field m_Settings, offset: 0x20, size: 0x20, def value: None
  ::UnityEngine::UIElements::PanelInputConfiguration_Settings ___m_Settings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PanelInputConfiguration, ___m_Settings) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PanelInputConfiguration) == 0x40, "Size mismatch!");

} // namespace UnityEngine::UIElements
