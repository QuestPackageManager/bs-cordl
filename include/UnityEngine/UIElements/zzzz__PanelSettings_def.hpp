#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PanelSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingLogLevel_def.hpp"
#include "UnityEngine/UIElements/zzzz__ColliderUpdateMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelRenderMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelScaleMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelScreenMatchMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureSlotCount_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PanelSettings)
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace UnityEngine::UIElements {
struct BindingLogLevel;
}
namespace UnityEngine::UIElements {
struct ColliderUpdateMode;
}
namespace UnityEngine::UIElements {
class DynamicAtlasSettings;
}
namespace UnityEngine::UIElements {
class IDebugPanelChangeReceiver;
}
namespace UnityEngine::UIElements {
struct PanelRenderMode;
}
namespace UnityEngine::UIElements {
struct PanelScaleMode;
}
namespace UnityEngine::UIElements {
struct PanelScreenMatchMode;
}
namespace UnityEngine::UIElements {
class PanelSettings_RuntimePanelAccess;
}
namespace UnityEngine::UIElements {
class PanelSettings___c__DisplayClass146_0;
}
namespace UnityEngine::UIElements {
class PanelTextSettings;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct TextureSlotCount;
}
namespace UnityEngine::UIElements {
class ThemeStyleSheet;
}
namespace UnityEngine::UIElements {
class UIDocumentList;
}
namespace UnityEngine::UIElements {
class UIDocument;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class TextAsset;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PanelSettings;
}
namespace UnityEngine::UIElements {
class PanelSettings_RuntimePanelAccess;
}
namespace UnityEngine::UIElements {
class PanelSettings___c__DisplayClass146_0;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::PanelSettings*);
MARK_REF_T(::UnityEngine::UIElements::PanelSettings_RuntimePanelAccess*);
MARK_REF_T(::UnityEngine::UIElements::PanelSettings___c__DisplayClass146_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PanelSettings*, "UnityEngine.UIElements", "PanelSettings");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PanelSettings_RuntimePanelAccess*, "UnityEngine.UIElements", "PanelSettings/RuntimePanelAccess");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PanelSettings___c__DisplayClass146_0*, "UnityEngine.UIElements", "PanelSettings/<>c__DisplayClass146_0");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PanelSettings/RuntimePanelAccess
class CORDL_TYPE PanelSettings_RuntimePanelAccess : public ::System::Object {
public:
  // Declarations
  /// @brief Field <isTransient>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isTransient_k__BackingField, put = __cordl_internal_set__isTransient_k__BackingField)) bool _isTransient_k__BackingField;

  __declspec(property(get = get_isInitialized)) bool isInitialized;

  __declspec(property(get = get_isTransient, put = set_isTransient)) bool isTransient;

  /// @brief Field m_RuntimePanel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RuntimePanel, put = __cordl_internal_set_m_RuntimePanel)) ::UnityEngine::UIElements::BaseRuntimePanel* m_RuntimePanel;

  /// @brief Field m_Settings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Settings, put = __cordl_internal_set_m_Settings)) ::UnityW<::UnityEngine::UIElements::PanelSettings> m_Settings;

  __declspec(property(get = get_panel)) ::UnityEngine::UIElements::BaseRuntimePanel* panel;

  /// @brief Method CreateRelatedRuntimePanel, addr 0x7247aec, size 0x100, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseRuntimePanel* CreateRelatedRuntimePanel();

  /// @brief Method DisposePanel, addr 0x7246884, size 0x20, virtual false, abstract: false, final false
  inline void DisposePanel();

  /// @brief Method DisposeRelatedPanel, addr 0x7247c48, size 0x60, virtual false, abstract: false, final false
  inline void DisposeRelatedPanel();

  /// @brief Method MarkPotentiallyEmpty, addr 0x7247a7c, size 0x60, virtual false, abstract: false, final false
  inline void MarkPotentiallyEmpty();

  static inline ::UnityEngine::UIElements::PanelSettings_RuntimePanelAccess* New_ctor(::UnityEngine::UIElements::PanelSettings* settings);

  /// @brief Method SetPanelChangeReceiver, addr 0x72468fc, size 0x2c, virtual false, abstract: false, final false
  inline void SetPanelChangeReceiver();

  /// @brief Method SetSortingPriority, addr 0x72460ac, size 0x2c, virtual false, abstract: false, final false
  inline void SetSortingPriority();

  /// @brief Method SetTargetDisplay, addr 0x7246114, size 0x24, virtual false, abstract: false, final false
  inline void SetTargetDisplay();

  /// @brief Method SetTargetTexture, addr 0x7245f50, size 0x24, virtual false, abstract: false, final false
  inline void SetTargetTexture();

  constexpr bool const& __cordl_internal_get__isTransient_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isTransient_k__BackingField();

  constexpr ::UnityEngine::UIElements::BaseRuntimePanel* const& __cordl_internal_get_m_RuntimePanel() const;

  constexpr ::UnityEngine::UIElements::BaseRuntimePanel*& __cordl_internal_get_m_RuntimePanel();

  constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings> const& __cordl_internal_get_m_Settings() const;

  constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings>& __cordl_internal_get_m_Settings();

  constexpr void __cordl_internal_set__isTransient_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_RuntimePanel(::UnityEngine::UIElements::BaseRuntimePanel* value);

  constexpr void __cordl_internal_set_m_Settings(::UnityW<::UnityEngine::UIElements::PanelSettings> value);

  /// @brief Method .ctor, addr 0x72464f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::PanelSettings* settings);

  /// @brief Method get_isInitialized, addr 0x72463b4, size 0x10, virtual false, abstract: false, final false
  inline bool get_isInitialized();

  /// [CompilerGenerated]
  /// @brief Method get_isTransient, addr 0x7247adc, size 0x8, virtual false, abstract: false, final false
  inline bool get_isTransient();

  /// @brief Method get_panel, addr 0x72461fc, size 0x198, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseRuntimePanel* get_panel();

  /// [CompilerGenerated]
  /// @brief Method set_isTransient, addr 0x7247ae4, size 0x8, virtual false, abstract: false, final false
  inline void set_isTransient(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelSettings_RuntimePanelAccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PanelSettings_RuntimePanelAccess", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanelSettings_RuntimePanelAccess(PanelSettings_RuntimePanelAccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanelSettings_RuntimePanelAccess", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanelSettings_RuntimePanelAccess(PanelSettings_RuntimePanelAccess const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4621 };

  /// @brief Field m_Settings, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::PanelSettings> ___m_Settings;

  /// @brief Field m_RuntimePanel, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseRuntimePanel* ___m_RuntimePanel;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <isTransient>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____isTransient_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PanelSettings_RuntimePanelAccess, ___m_Settings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings_RuntimePanelAccess, ___m_RuntimePanel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings_RuntimePanelAccess, ____isTransient_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PanelSettings_RuntimePanelAccess) == 0x28, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PanelSettings/<>c__DisplayClass146_0
class CORDL_TYPE PanelSettings___c__DisplayClass146_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field screenToPanelSpaceFunction, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_screenToPanelSpaceFunction,
                      put = __cordl_internal_set_screenToPanelSpaceFunction)) ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* screenToPanelSpaceFunction;

  static inline ::UnityEngine::UIElements::PanelSettings___c__DisplayClass146_0* New_ctor();

  /// @brief Method <SetScreenToPanelSpaceFunction>b__0, addr 0x7247ca8, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 _SetScreenToPanelSpaceFunction_b__0(::UnityEngine::Vector2 p);

  constexpr ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* const& __cordl_internal_get_screenToPanelSpaceFunction() const;

  constexpr ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*& __cordl_internal_get_screenToPanelSpaceFunction();

  constexpr void __cordl_internal_set_screenToPanelSpaceFunction(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* value);

  /// @brief Method .ctor, addr 0x724751c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelSettings___c__DisplayClass146_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PanelSettings___c__DisplayClass146_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanelSettings___c__DisplayClass146_0(PanelSettings___c__DisplayClass146_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanelSettings___c__DisplayClass146_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanelSettings___c__DisplayClass146_0(PanelSettings___c__DisplayClass146_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4622 };

  /// @brief Field screenToPanelSpaceFunction, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* ___screenToPanelSpaceFunction;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PanelSettings___c__DisplayClass146_0, ___screenToPanelSpaceFunction) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PanelSettings___c__DisplayClass146_0) == 0x18, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [HelpURL("UIE-Runtime-Panel-Settings")]
// Dependencies UnityEngine.Color, UnityEngine.Rect, UnityEngine.ScriptableObject, UnityEngine.UIElements.BindingLogLevel, UnityEngine.UIElements.ColliderUpdateMode,
// UnityEngine.UIElements.PanelRenderMode, UnityEngine.UIElements.PanelScaleMode, UnityEngine.UIElements.PanelScreenMatchMode, UnityEngine.UIElements.TextureSlotCount, UnityEngine.Vector2Int
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PanelSettings
class CORDL_TYPE PanelSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using RuntimePanelAccess = ::UnityEngine::UIElements::PanelSettings_RuntimePanelAccess;

  using __c__DisplayClass146_0 = ::UnityEngine::UIElements::PanelSettings___c__DisplayClass146_0;

  __declspec(property(get = get_ScreenDPI, put = set_ScreenDPI)) float_t ScreenDPI;

  /// @brief Field <ScreenDPI>k__BackingField, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get__ScreenDPI_k__BackingField, put = __cordl_internal_set__ScreenDPI_k__BackingField)) float_t _ScreenDPI_k__BackingField;

  __declspec(property(get = get_bindingLogLevel, put = set_bindingLogLevel)) ::UnityEngine::UIElements::BindingLogLevel bindingLogLevel;

  __declspec(property(get = get_clearColor, put = set_clearColor)) bool clearColor;

  __declspec(property(get = get_clearDepthStencil, put = set_clearDepthStencil)) bool clearDepthStencil;

  __declspec(property(get = get_colliderIsTrigger, put = set_colliderIsTrigger)) bool colliderIsTrigger;

  __declspec(property(get = get_colliderUpdateMode, put = set_colliderUpdateMode)) ::UnityEngine::UIElements::ColliderUpdateMode colliderUpdateMode;

  __declspec(property(get = get_colorClearValue, put = set_colorClearValue)) ::UnityEngine::Color colorClearValue;

  __declspec(property(get = get_depthClearValue)) float_t depthClearValue;

  __declspec(property(get = get_disableNoThemeWarning, put = set_disableNoThemeWarning)) bool disableNoThemeWarning;

  __declspec(property(get = get_dynamicAtlasSettings, put = set_dynamicAtlasSettings)) ::UnityEngine::UIElements::DynamicAtlasSettings* dynamicAtlasSettings;

  __declspec(property(get = get_fallbackDpi, put = set_fallbackDpi)) float_t fallbackDpi;

  /// @brief Field forceGammaRendering, offset 0xe8, size 0x1
  __declspec(property(get = __cordl_internal_get_forceGammaRendering, put = __cordl_internal_set_forceGammaRendering)) bool forceGammaRendering;

  __declspec(property(get = get_isInitialized)) bool isInitialized;

  /// @brief [VisibleToOtherModules(new[] { "UnityEditor.VectorGraphicsModule" })]
  __declspec(property(get = get_isTransient, put = set_isTransient)) bool isTransient;

  /// @brief Field m_AssignedScreenToPanel, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AssignedScreenToPanel,
                      put = __cordl_internal_set_m_AssignedScreenToPanel)) ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector3>* m_AssignedScreenToPanel;

  /// @brief Field m_AtlasBlitShader, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AtlasBlitShader, put = __cordl_internal_set_m_AtlasBlitShader)) ::UnityW<::UnityEngine::Shader> m_AtlasBlitShader;

  /// @brief Field m_AttachedUIDocumentsList, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AttachedUIDocumentsList, put = __cordl_internal_set_m_AttachedUIDocumentsList)) ::UnityEngine::UIElements::UIDocumentList* m_AttachedUIDocumentsList;

  /// @brief Field m_BindingLogLevel, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BindingLogLevel, put = __cordl_internal_set_m_BindingLogLevel)) ::UnityEngine::UIElements::BindingLogLevel m_BindingLogLevel;

  /// @brief Field m_BitmapShader, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BitmapShader, put = __cordl_internal_set_m_BitmapShader)) ::UnityW<::UnityEngine::Shader> m_BitmapShader;

  /// @brief Field m_ClearColor, offset 0x71, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ClearColor, put = __cordl_internal_set_m_ClearColor)) bool m_ClearColor;

  /// @brief Field m_ClearDepthStencil, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ClearDepthStencil, put = __cordl_internal_set_m_ClearDepthStencil)) bool m_ClearDepthStencil;

  /// @brief Field m_ColliderIsTrigger, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ColliderIsTrigger, put = __cordl_internal_set_m_ColliderIsTrigger)) bool m_ColliderIsTrigger;

  /// @brief Field m_ColliderUpdateMode, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ColliderUpdateMode, put = __cordl_internal_set_m_ColliderUpdateMode)) ::UnityEngine::UIElements::ColliderUpdateMode m_ColliderUpdateMode;

  /// @brief Field m_ColorClearValue, offset 0x74, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ColorClearValue, put = __cordl_internal_set_m_ColorClearValue)) ::UnityEngine::Color m_ColorClearValue;

  /// @brief Field m_DefaultShader, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultShader, put = __cordl_internal_set_m_DefaultShader)) ::UnityW<::UnityEngine::Shader> m_DefaultShader;

  /// @brief Field m_DisableNoThemeWarning, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DisableNoThemeWarning, put = __cordl_internal_set_m_DisableNoThemeWarning)) bool m_DisableNoThemeWarning;

  /// @brief Field m_DynamicAtlasSettings, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DynamicAtlasSettings, put = __cordl_internal_set_m_DynamicAtlasSettings)) ::UnityEngine::UIElements::DynamicAtlasSettings* m_DynamicAtlasSettings;

  /// @brief Field m_FallbackDpi, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FallbackDpi, put = __cordl_internal_set_m_FallbackDpi)) float_t m_FallbackDpi;

  /// @brief Field m_ICUDataAsset, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ICUDataAsset, put = __cordl_internal_set_m_ICUDataAsset)) ::UnityW<::UnityEngine::TextAsset> m_ICUDataAsset;

  /// @brief Field m_Match, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Match, put = __cordl_internal_set_m_Match)) float_t m_Match;

  /// @brief Field m_OldThemeUss, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OldThemeUss, put = __cordl_internal_set_m_OldThemeUss)) ::UnityW<::UnityEngine::UIElements::StyleSheet> m_OldThemeUss;

  /// @brief Field m_PanelAccess, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PanelAccess, put = __cordl_internal_set_m_PanelAccess)) ::UnityEngine::UIElements::PanelSettings_RuntimePanelAccess* m_PanelAccess;

  /// @brief Field m_PanelChangeReceiver, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PanelChangeReceiver, put = __cordl_internal_set_m_PanelChangeReceiver)) ::UnityEngine::UIElements::IDebugPanelChangeReceiver* m_PanelChangeReceiver;

  /// @brief Field m_PixelsPerUnit, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PixelsPerUnit, put = __cordl_internal_set_m_PixelsPerUnit)) float_t m_PixelsPerUnit;

  /// @brief Field m_ReferenceDpi, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ReferenceDpi, put = __cordl_internal_set_m_ReferenceDpi)) float_t m_ReferenceDpi;

  /// @brief Field m_ReferenceResolution, offset 0x54, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ReferenceResolution, put = __cordl_internal_set_m_ReferenceResolution)) ::UnityEngine::Vector2Int m_ReferenceResolution;

  /// @brief Field m_ReferenceSpritePixelsPerUnit, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ReferenceSpritePixelsPerUnit, put = __cordl_internal_set_m_ReferenceSpritePixelsPerUnit)) float_t m_ReferenceSpritePixelsPerUnit;

  /// @brief Field m_RenderMode, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RenderMode, put = __cordl_internal_set_m_RenderMode)) ::UnityEngine::UIElements::PanelRenderMode m_RenderMode;

  /// @brief Field m_ResolvedScale, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ResolvedScale, put = __cordl_internal_set_m_ResolvedScale)) float_t m_ResolvedScale;

  /// @brief Field m_RuntimeColorEffectShader, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RuntimeColorEffectShader, put = __cordl_internal_set_m_RuntimeColorEffectShader)) ::UnityW<::UnityEngine::Shader> m_RuntimeColorEffectShader;

  /// @brief Field m_RuntimeGaussianBlurShader, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RuntimeGaussianBlurShader, put = __cordl_internal_set_m_RuntimeGaussianBlurShader)) ::UnityW<::UnityEngine::Shader> m_RuntimeGaussianBlurShader;

  /// @brief Field m_SDFShader, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SDFShader, put = __cordl_internal_set_m_SDFShader)) ::UnityW<::UnityEngine::Shader> m_SDFShader;

  /// @brief Field m_Scale, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Scale, put = __cordl_internal_set_m_Scale)) float_t m_Scale;

  /// @brief Field m_ScaleMode, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ScaleMode, put = __cordl_internal_set_m_ScaleMode)) ::UnityEngine::UIElements::PanelScaleMode m_ScaleMode;

  /// @brief Field m_ScreenMatchMode, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ScreenMatchMode, put = __cordl_internal_set_m_ScreenMatchMode)) ::UnityEngine::UIElements::PanelScreenMatchMode m_ScreenMatchMode;

  /// @brief Field m_SortingOrder, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SortingOrder, put = __cordl_internal_set_m_SortingOrder)) float_t m_SortingOrder;

  /// @brief Field m_SpriteShader, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SpriteShader, put = __cordl_internal_set_m_SpriteShader)) ::UnityW<::UnityEngine::Shader> m_SpriteShader;

  /// @brief Field m_TargetDisplay, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TargetDisplay, put = __cordl_internal_set_m_TargetDisplay)) int32_t m_TargetDisplay;

  /// @brief Field m_TargetRect, offset 0xf8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_TargetRect, put = __cordl_internal_set_m_TargetRect)) ::UnityEngine::Rect m_TargetRect;

  /// @brief Field m_TargetTexture, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TargetTexture, put = __cordl_internal_set_m_TargetTexture)) ::UnityW<::UnityEngine::RenderTexture> m_TargetTexture;

  /// @brief Field m_TextureSlotCount, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TextureSlotCount, put = __cordl_internal_set_m_TextureSlotCount)) ::UnityEngine::UIElements::TextureSlotCount m_TextureSlotCount;

  /// @brief Field m_VertexBudget, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_m_VertexBudget, put = __cordl_internal_set_m_VertexBudget)) uint32_t m_VertexBudget;

  __declspec(property(get = get_match, put = set_match)) float_t match;

  __declspec(property(get = get_panel)) ::UnityEngine::UIElements::BaseRuntimePanel* panel;

  __declspec(property(get = get_pixelsPerUnit, put = set_pixelsPerUnit)) float_t pixelsPerUnit;

  __declspec(property(get = get_referenceDpi, put = set_referenceDpi)) float_t referenceDpi;

  __declspec(property(get = get_referenceResolution, put = set_referenceResolution)) ::UnityEngine::Vector2Int referenceResolution;

  __declspec(property(get = get_referenceSpritePixelsPerUnit, put = set_referenceSpritePixelsPerUnit)) float_t referenceSpritePixelsPerUnit;

  __declspec(property(get = get_renderMode, put = set_renderMode)) ::UnityEngine::UIElements::PanelRenderMode renderMode;

  __declspec(property(get = get_scale, put = set_scale)) float_t scale;

  __declspec(property(get = get_scaleMode, put = set_scaleMode)) ::UnityEngine::UIElements::PanelScaleMode scaleMode;

  __declspec(property(get = get_screenMatchMode, put = set_screenMatchMode)) ::UnityEngine::UIElements::PanelScreenMatchMode screenMatchMode;

  __declspec(property(get = get_sortingOrder, put = set_sortingOrder)) float_t sortingOrder;

  __declspec(property(get = get_targetDisplay, put = set_targetDisplay)) int32_t targetDisplay;

  __declspec(property(get = get_targetTexture, put = set_targetTexture)) ::UnityW<::UnityEngine::RenderTexture> targetTexture;

  /// @brief Field textSettings, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_textSettings, put = __cordl_internal_set_textSettings)) ::UnityW<::UnityEngine::UIElements::PanelTextSettings> textSettings;

  __declspec(property(get = get_textureSlotCount, put = set_textureSlotCount)) ::UnityEngine::UIElements::TextureSlotCount textureSlotCount;

  __declspec(property(get = get_themeStyleSheet, put = set_themeStyleSheet)) ::UnityW<::UnityEngine::UIElements::ThemeStyleSheet> themeStyleSheet;

  /// @brief Field themeUss, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_themeUss, put = __cordl_internal_set_themeUss)) ::UnityW<::UnityEngine::UIElements::ThemeStyleSheet> themeUss;

  __declspec(property(get = get_vertexBudget, put = set_vertexBudget)) uint32_t vertexBudget;

  __declspec(property(get = get_visualTree)) ::UnityEngine::UIElements::VisualElement* visualTree;

  /// [VisibleToOtherModules(new[] { "UnityEditor.VectorGraphicsModule" })]
  /// @brief Method ApplyPanelSettings, addr 0x7246930, size 0x864, virtual false, abstract: false, final false
  inline void ApplyPanelSettings();

  /// @brief Method ApplySortingOrder, addr 0x7246098, size 0x14, virtual false, abstract: false, final false
  inline void ApplySortingOrder();

  /// @brief Method ApplyThemeStyleSheet, addr 0x7245d18, size 0x1ec, virtual false, abstract: false, final false
  inline void ApplyThemeStyleSheet(::UnityEngine::UIElements::VisualElement* root);

  /// @brief Method AssignICUData, addr 0x7246850, size 0x8, virtual false, abstract: false, final false
  inline bool AssignICUData();

  /// @brief Method AttachAndInsertUIDocumentToVisualTree, addr 0x7247520, size 0xa0, virtual false, abstract: false, final false
  inline void AttachAndInsertUIDocumentToVisualTree(::UnityEngine::UIElements::UIDocument* uiDocument);

  /// @brief Method DetachUIDocument, addr 0x72479ec, size 0x90, virtual false, abstract: false, final false
  inline void DetachUIDocument(::UnityEngine::UIElements::UIDocument* uiDocument);

  /// @brief Method DisposePanel, addr 0x72468a4, size 0x2c, virtual false, abstract: false, final false
  inline void DisposePanel();

  /// @brief Method GetDisplayRect, addr 0x7247194, size 0x100, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect GetDisplayRect();

  /// @brief Method GetPanelChangeReceiver, addr 0x7246928, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IDebugPanelChangeReceiver* GetPanelChangeReceiver();

  /// @brief Method InitializeShaders, addr 0x7246580, size 0x2d0, virtual false, abstract: false, final false
  inline void InitializeShaders();

  static inline ::UnityEngine::UIElements::PanelSettings* New_ctor();

  /// @brief Method OnDisable, addr 0x7246858, size 0x2c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x72464fc, size 0x44, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Reset, addr 0x72464f8, size 0x4, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ResolveScale, addr 0x7247294, size 0x14c, virtual false, abstract: false, final false
  inline float_t ResolveScale(::UnityEngine::Rect targetRect, float_t screenDpi);

  /// [Conditional("ENABLE_PROFILER")]
  /// @brief Method SetPanelChangeReceiver, addr 0x72468e0, size 0x1c, virtual false, abstract: false, final false
  inline void SetPanelChangeReceiver(::UnityEngine::UIElements::IDebugPanelChangeReceiver* value);

  /// @brief Method SetScreenToPanelSpaceFunction, addr 0x7247410, size 0x10c, virtual false, abstract: false, final false
  inline void SetScreenToPanelSpaceFunction(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* screenToPanelSpaceFunction);

  /// @brief Method SetScreenToPanelSpaceFunction3D, addr 0x72473e0, size 0x30, virtual false, abstract: false, final false
  inline void SetScreenToPanelSpaceFunction3D(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector3>* screenToPanelSpaceFunction);

  /// @brief Method UpdateScreenDPI, addr 0x7246540, size 0x40, virtual false, abstract: false, final false
  inline void UpdateScreenDPI();

  constexpr float_t const& __cordl_internal_get__ScreenDPI_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__ScreenDPI_k__BackingField();

  constexpr bool const& __cordl_internal_get_forceGammaRendering() const;

  constexpr bool& __cordl_internal_get_forceGammaRendering();

  constexpr ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector3>* const& __cordl_internal_get_m_AssignedScreenToPanel() const;

  constexpr ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector3>*& __cordl_internal_get_m_AssignedScreenToPanel();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_AtlasBlitShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_AtlasBlitShader();

  constexpr ::UnityEngine::UIElements::UIDocumentList* const& __cordl_internal_get_m_AttachedUIDocumentsList() const;

  constexpr ::UnityEngine::UIElements::UIDocumentList*& __cordl_internal_get_m_AttachedUIDocumentsList();

  constexpr ::UnityEngine::UIElements::BindingLogLevel const& __cordl_internal_get_m_BindingLogLevel() const;

  constexpr ::UnityEngine::UIElements::BindingLogLevel& __cordl_internal_get_m_BindingLogLevel();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_BitmapShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_BitmapShader();

  constexpr bool const& __cordl_internal_get_m_ClearColor() const;

  constexpr bool& __cordl_internal_get_m_ClearColor();

  constexpr bool const& __cordl_internal_get_m_ClearDepthStencil() const;

  constexpr bool& __cordl_internal_get_m_ClearDepthStencil();

  constexpr bool const& __cordl_internal_get_m_ColliderIsTrigger() const;

  constexpr bool& __cordl_internal_get_m_ColliderIsTrigger();

  constexpr ::UnityEngine::UIElements::ColliderUpdateMode const& __cordl_internal_get_m_ColliderUpdateMode() const;

  constexpr ::UnityEngine::UIElements::ColliderUpdateMode& __cordl_internal_get_m_ColliderUpdateMode();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_ColorClearValue() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_ColorClearValue();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_DefaultShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_DefaultShader();

  constexpr bool const& __cordl_internal_get_m_DisableNoThemeWarning() const;

  constexpr bool& __cordl_internal_get_m_DisableNoThemeWarning();

  constexpr ::UnityEngine::UIElements::DynamicAtlasSettings* const& __cordl_internal_get_m_DynamicAtlasSettings() const;

  constexpr ::UnityEngine::UIElements::DynamicAtlasSettings*& __cordl_internal_get_m_DynamicAtlasSettings();

  constexpr float_t const& __cordl_internal_get_m_FallbackDpi() const;

  constexpr float_t& __cordl_internal_get_m_FallbackDpi();

  constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_m_ICUDataAsset() const;

  constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_m_ICUDataAsset();

  constexpr float_t const& __cordl_internal_get_m_Match() const;

  constexpr float_t& __cordl_internal_get_m_Match();

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& __cordl_internal_get_m_OldThemeUss() const;

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& __cordl_internal_get_m_OldThemeUss();

  constexpr ::UnityEngine::UIElements::PanelSettings_RuntimePanelAccess* const& __cordl_internal_get_m_PanelAccess() const;

  constexpr ::UnityEngine::UIElements::PanelSettings_RuntimePanelAccess*& __cordl_internal_get_m_PanelAccess();

  constexpr ::UnityEngine::UIElements::IDebugPanelChangeReceiver* const& __cordl_internal_get_m_PanelChangeReceiver() const;

  constexpr ::UnityEngine::UIElements::IDebugPanelChangeReceiver*& __cordl_internal_get_m_PanelChangeReceiver();

  constexpr float_t const& __cordl_internal_get_m_PixelsPerUnit() const;

  constexpr float_t& __cordl_internal_get_m_PixelsPerUnit();

  constexpr float_t const& __cordl_internal_get_m_ReferenceDpi() const;

  constexpr float_t& __cordl_internal_get_m_ReferenceDpi();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_m_ReferenceResolution() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_m_ReferenceResolution();

  constexpr float_t const& __cordl_internal_get_m_ReferenceSpritePixelsPerUnit() const;

  constexpr float_t& __cordl_internal_get_m_ReferenceSpritePixelsPerUnit();

  constexpr ::UnityEngine::UIElements::PanelRenderMode const& __cordl_internal_get_m_RenderMode() const;

  constexpr ::UnityEngine::UIElements::PanelRenderMode& __cordl_internal_get_m_RenderMode();

  constexpr float_t const& __cordl_internal_get_m_ResolvedScale() const;

  constexpr float_t& __cordl_internal_get_m_ResolvedScale();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_RuntimeColorEffectShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_RuntimeColorEffectShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_RuntimeGaussianBlurShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_RuntimeGaussianBlurShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_SDFShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_SDFShader();

  constexpr float_t const& __cordl_internal_get_m_Scale() const;

  constexpr float_t& __cordl_internal_get_m_Scale();

  constexpr ::UnityEngine::UIElements::PanelScaleMode const& __cordl_internal_get_m_ScaleMode() const;

  constexpr ::UnityEngine::UIElements::PanelScaleMode& __cordl_internal_get_m_ScaleMode();

  constexpr ::UnityEngine::UIElements::PanelScreenMatchMode const& __cordl_internal_get_m_ScreenMatchMode() const;

  constexpr ::UnityEngine::UIElements::PanelScreenMatchMode& __cordl_internal_get_m_ScreenMatchMode();

  constexpr float_t const& __cordl_internal_get_m_SortingOrder() const;

  constexpr float_t& __cordl_internal_get_m_SortingOrder();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_SpriteShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_SpriteShader();

  constexpr int32_t const& __cordl_internal_get_m_TargetDisplay() const;

  constexpr int32_t& __cordl_internal_get_m_TargetDisplay();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_TargetRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_TargetRect();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_m_TargetTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_m_TargetTexture();

  constexpr ::UnityEngine::UIElements::TextureSlotCount const& __cordl_internal_get_m_TextureSlotCount() const;

  constexpr ::UnityEngine::UIElements::TextureSlotCount& __cordl_internal_get_m_TextureSlotCount();

  constexpr uint32_t const& __cordl_internal_get_m_VertexBudget() const;

  constexpr uint32_t& __cordl_internal_get_m_VertexBudget();

  constexpr ::UnityW<::UnityEngine::UIElements::PanelTextSettings> const& __cordl_internal_get_textSettings() const;

  constexpr ::UnityW<::UnityEngine::UIElements::PanelTextSettings>& __cordl_internal_get_textSettings();

  constexpr ::UnityW<::UnityEngine::UIElements::ThemeStyleSheet> const& __cordl_internal_get_themeUss() const;

  constexpr ::UnityW<::UnityEngine::UIElements::ThemeStyleSheet>& __cordl_internal_get_themeUss();

  constexpr void __cordl_internal_set__ScreenDPI_k__BackingField(float_t value);

  constexpr void __cordl_internal_set_forceGammaRendering(bool value);

  constexpr void __cordl_internal_set_m_AssignedScreenToPanel(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector3>* value);

  constexpr void __cordl_internal_set_m_AtlasBlitShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_AttachedUIDocumentsList(::UnityEngine::UIElements::UIDocumentList* value);

  constexpr void __cordl_internal_set_m_BindingLogLevel(::UnityEngine::UIElements::BindingLogLevel value);

  constexpr void __cordl_internal_set_m_BitmapShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_ClearColor(bool value);

  constexpr void __cordl_internal_set_m_ClearDepthStencil(bool value);

  constexpr void __cordl_internal_set_m_ColliderIsTrigger(bool value);

  constexpr void __cordl_internal_set_m_ColliderUpdateMode(::UnityEngine::UIElements::ColliderUpdateMode value);

  constexpr void __cordl_internal_set_m_ColorClearValue(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_DefaultShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_DisableNoThemeWarning(bool value);

  constexpr void __cordl_internal_set_m_DynamicAtlasSettings(::UnityEngine::UIElements::DynamicAtlasSettings* value);

  constexpr void __cordl_internal_set_m_FallbackDpi(float_t value);

  constexpr void __cordl_internal_set_m_ICUDataAsset(::UnityW<::UnityEngine::TextAsset> value);

  constexpr void __cordl_internal_set_m_Match(float_t value);

  constexpr void __cordl_internal_set_m_OldThemeUss(::UnityW<::UnityEngine::UIElements::StyleSheet> value);

  constexpr void __cordl_internal_set_m_PanelAccess(::UnityEngine::UIElements::PanelSettings_RuntimePanelAccess* value);

  constexpr void __cordl_internal_set_m_PanelChangeReceiver(::UnityEngine::UIElements::IDebugPanelChangeReceiver* value);

  constexpr void __cordl_internal_set_m_PixelsPerUnit(float_t value);

  constexpr void __cordl_internal_set_m_ReferenceDpi(float_t value);

  constexpr void __cordl_internal_set_m_ReferenceResolution(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set_m_ReferenceSpritePixelsPerUnit(float_t value);

  constexpr void __cordl_internal_set_m_RenderMode(::UnityEngine::UIElements::PanelRenderMode value);

  constexpr void __cordl_internal_set_m_ResolvedScale(float_t value);

  constexpr void __cordl_internal_set_m_RuntimeColorEffectShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_RuntimeGaussianBlurShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_SDFShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_Scale(float_t value);

  constexpr void __cordl_internal_set_m_ScaleMode(::UnityEngine::UIElements::PanelScaleMode value);

  constexpr void __cordl_internal_set_m_ScreenMatchMode(::UnityEngine::UIElements::PanelScreenMatchMode value);

  constexpr void __cordl_internal_set_m_SortingOrder(float_t value);

  constexpr void __cordl_internal_set_m_SpriteShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_TargetDisplay(int32_t value);

  constexpr void __cordl_internal_set_m_TargetRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_TargetTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set_m_TextureSlotCount(::UnityEngine::UIElements::TextureSlotCount value);

  constexpr void __cordl_internal_set_m_VertexBudget(uint32_t value);

  constexpr void __cordl_internal_set_textSettings(::UnityW<::UnityEngine::UIElements::PanelTextSettings> value);

  constexpr void __cordl_internal_set_themeUss(::UnityW<::UnityEngine::UIElements::ThemeStyleSheet> value);

  /// @brief Method .ctor, addr 0x7246434, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_ScreenDPI, addr 0x72468d0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_ScreenDPI();

  /// @brief Method get_bindingLogLevel, addr 0x7246138, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BindingLogLevel get_bindingLogLevel();

  /// @brief Method get_clearColor, addr 0x72461b4, size 0x8, virtual false, abstract: false, final false
  inline bool get_clearColor();

  /// @brief Method get_clearDepthStencil, addr 0x7246198, size 0x8, virtual false, abstract: false, final false
  inline bool get_clearDepthStencil();

  /// @brief Method get_colliderIsTrigger, addr 0x7245f94, size 0x8, virtual false, abstract: false, final false
  inline bool get_colliderIsTrigger();

  /// @brief Method get_colliderUpdateMode, addr 0x7245f84, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ColliderUpdateMode get_colliderUpdateMode();

  /// @brief Method get_colorClearValue, addr 0x72461c4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_colorClearValue();

  /// @brief Method get_depthClearValue, addr 0x72461a8, size 0xc, virtual false, abstract: false, final false
  inline float_t get_depthClearValue();

  /// @brief Method get_disableNoThemeWarning, addr 0x7245f04, size 0x8, virtual false, abstract: false, final false
  inline bool get_disableNoThemeWarning();

  /// @brief Method get_dynamicAtlasSettings, addr 0x7246424, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DynamicAtlasSettings* get_dynamicAtlasSettings();

  /// @brief Method get_fallbackDpi, addr 0x7246014, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fallbackDpi();

  /// @brief Method get_isInitialized, addr 0x7246394, size 0x20, virtual false, abstract: false, final false
  inline bool get_isInitialized();

  /// @brief Method get_isTransient, addr 0x72463c4, size 0x18, virtual false, abstract: false, final false
  inline bool get_isTransient();

  /// @brief Method get_match, addr 0x7246064, size 0x8, virtual false, abstract: false, final false
  inline float_t get_match();

  /// [VisibleToOtherModules(new[] { "UnityEditor.VectorGraphicsModule" })]
  /// @brief Method get_panel, addr 0x7246184, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseRuntimePanel* get_panel();

  /// @brief Method get_pixelsPerUnit, addr 0x7245fc4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pixelsPerUnit();

  /// @brief Method get_referenceDpi, addr 0x7245fe4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_referenceDpi();

  /// @brief Method get_referenceResolution, addr 0x7246044, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int get_referenceResolution();

  /// @brief Method get_referenceSpritePixelsPerUnit, addr 0x7245fb4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_referenceSpritePixelsPerUnit();

  /// @brief Method get_renderMode, addr 0x7245f74, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PanelRenderMode get_renderMode();

  /// @brief Method get_scale, addr 0x7245fd4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_scale();

  /// @brief Method get_scaleMode, addr 0x7245fa4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PanelScaleMode get_scaleMode();

  /// @brief Method get_screenMatchMode, addr 0x7246054, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PanelScreenMatchMode get_screenMatchMode();

  /// @brief Method get_sortingOrder, addr 0x7246074, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sortingOrder();

  /// @brief Method get_targetDisplay, addr 0x72460d8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_targetDisplay();

  /// @brief Method get_targetTexture, addr 0x7245f14, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_targetTexture();

  /// @brief Method get_textureSlotCount, addr 0x72461ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextureSlotCount get_textureSlotCount();

  /// @brief Method get_themeStyleSheet, addr 0x7245d00, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::ThemeStyleSheet> get_themeStyleSheet();

  /// @brief Method get_vertexBudget, addr 0x72461dc, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_vertexBudget();

  /// @brief Method get_visualTree, addr 0x72463f8, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_visualTree();

  /// [CompilerGenerated]
  /// @brief Method set_ScreenDPI, addr 0x72468d8, size 0x8, virtual false, abstract: false, final false
  inline void set_ScreenDPI(float_t value);

  /// @brief Method set_bindingLogLevel, addr 0x7246140, size 0x44, virtual false, abstract: false, final false
  inline void set_bindingLogLevel(::UnityEngine::UIElements::BindingLogLevel value);

  /// @brief Method set_clearColor, addr 0x72461bc, size 0x8, virtual false, abstract: false, final false
  inline void set_clearColor(bool value);

  /// @brief Method set_clearDepthStencil, addr 0x72461a0, size 0x8, virtual false, abstract: false, final false
  inline void set_clearDepthStencil(bool value);

  /// @brief Method set_colliderIsTrigger, addr 0x7245f9c, size 0x8, virtual false, abstract: false, final false
  inline void set_colliderIsTrigger(bool value);

  /// @brief Method set_colliderUpdateMode, addr 0x7245f8c, size 0x8, virtual false, abstract: false, final false
  inline void set_colliderUpdateMode(::UnityEngine::UIElements::ColliderUpdateMode value);

  /// @brief Method set_colorClearValue, addr 0x72461d0, size 0xc, virtual false, abstract: false, final false
  inline void set_colorClearValue(::UnityEngine::Color value);

  /// @brief Method set_disableNoThemeWarning, addr 0x7245f0c, size 0x8, virtual false, abstract: false, final false
  inline void set_disableNoThemeWarning(bool value);

  /// @brief Method set_dynamicAtlasSettings, addr 0x724642c, size 0x8, virtual false, abstract: false, final false
  inline void set_dynamicAtlasSettings(::UnityEngine::UIElements::DynamicAtlasSettings* value);

  /// @brief Method set_fallbackDpi, addr 0x724601c, size 0x28, virtual false, abstract: false, final false
  inline void set_fallbackDpi(float_t value);

  /// @brief Method set_isTransient, addr 0x72463dc, size 0x1c, virtual false, abstract: false, final false
  inline void set_isTransient(bool value);

  /// @brief Method set_match, addr 0x724606c, size 0x8, virtual false, abstract: false, final false
  inline void set_match(float_t value);

  /// @brief Method set_pixelsPerUnit, addr 0x7245fcc, size 0x8, virtual false, abstract: false, final false
  inline void set_pixelsPerUnit(float_t value);

  /// @brief Method set_referenceDpi, addr 0x7245fec, size 0x28, virtual false, abstract: false, final false
  inline void set_referenceDpi(float_t value);

  /// @brief Method set_referenceResolution, addr 0x724604c, size 0x8, virtual false, abstract: false, final false
  inline void set_referenceResolution(::UnityEngine::Vector2Int value);

  /// @brief Method set_referenceSpritePixelsPerUnit, addr 0x7245fbc, size 0x8, virtual false, abstract: false, final false
  inline void set_referenceSpritePixelsPerUnit(float_t value);

  /// @brief Method set_renderMode, addr 0x7245f7c, size 0x8, virtual false, abstract: false, final false
  inline void set_renderMode(::UnityEngine::UIElements::PanelRenderMode value);

  /// @brief Method set_scale, addr 0x7245fdc, size 0x8, virtual false, abstract: false, final false
  inline void set_scale(float_t value);

  /// @brief Method set_scaleMode, addr 0x7245fac, size 0x8, virtual false, abstract: false, final false
  inline void set_scaleMode(::UnityEngine::UIElements::PanelScaleMode value);

  /// @brief Method set_screenMatchMode, addr 0x724605c, size 0x8, virtual false, abstract: false, final false
  inline void set_screenMatchMode(::UnityEngine::UIElements::PanelScreenMatchMode value);

  /// @brief Method set_sortingOrder, addr 0x724607c, size 0x1c, virtual false, abstract: false, final false
  inline void set_sortingOrder(float_t value);

  /// @brief Method set_targetDisplay, addr 0x72460e0, size 0x34, virtual false, abstract: false, final false
  inline void set_targetDisplay(int32_t value);

  /// @brief Method set_targetTexture, addr 0x7245f1c, size 0x34, virtual false, abstract: false, final false
  inline void set_targetTexture(::UnityEngine::RenderTexture* value);

  /// @brief Method set_textureSlotCount, addr 0x72461f4, size 0x8, virtual false, abstract: false, final false
  inline void set_textureSlotCount(::UnityEngine::UIElements::TextureSlotCount value);

  /// @brief Method set_themeStyleSheet, addr 0x7245d08, size 0x10, virtual false, abstract: false, final false
  inline void set_themeStyleSheet(::UnityEngine::UIElements::ThemeStyleSheet* value);

  /// @brief Method set_vertexBudget, addr 0x72461e4, size 0x8, virtual false, abstract: false, final false
  inline void set_vertexBudget(uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PanelSettings", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanelSettings(PanelSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanelSettings", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanelSettings(PanelSettings const&) = delete;

  /// @brief Field DefaultDpi offset 0xffffffff size 0x4
  static constexpr float_t DefaultDpi{ static_cast<float_t>(96.0f) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4623 };

  /// @brief Field k_DefaultScaleValue offset 0xffffffff size 0x4
  static constexpr float_t k_DefaultScaleValue{ static_cast<float_t>(1.0f) };

  /// @brief Field k_DefaultSortingOrder offset 0xffffffff size 0x4
  static constexpr int32_t k_DefaultSortingOrder{ static_cast<int32_t>(0x0) };

  /// @brief Field k_DefaultStyleSheetPath offset 0xffffffff size 0x8
  static constexpr ::ConstString k_DefaultStyleSheetPath{ u"Packages/com.unity.ui/PackageResources/StyleSheets/Generated/Default.tss.asset" };

  /// [SerializeField]
  /// @brief Field themeUss, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::ThemeStyleSheet> ___themeUss;

  /// [SerializeField]
  /// @brief Field m_DisableNoThemeWarning, offset: 0x20, size: 0x1, def value: None
  bool ___m_DisableNoThemeWarning;

  /// [SerializeField]
  /// @brief Field m_TargetTexture, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ___m_TargetTexture;

  /// [SerializeField]
  /// @brief Field m_RenderMode, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::UIElements::PanelRenderMode ___m_RenderMode;

  /// [SerializeField]
  /// [FormerlySerializedAs("m_WorldInputMode")]
  /// @brief Field m_ColliderUpdateMode, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::UIElements::ColliderUpdateMode ___m_ColliderUpdateMode;

  /// [SerializeField]
  /// @brief Field m_ColliderIsTrigger, offset: 0x38, size: 0x1, def value: None
  bool ___m_ColliderIsTrigger;

  /// [SerializeField]
  /// @brief Field m_ScaleMode, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::UIElements::PanelScaleMode ___m_ScaleMode;

  /// [SerializeField]
  /// @brief Field m_ReferenceSpritePixelsPerUnit, offset: 0x40, size: 0x4, def value: None
  float_t ___m_ReferenceSpritePixelsPerUnit;

  /// [SerializeField]
  /// @brief Field m_PixelsPerUnit, offset: 0x44, size: 0x4, def value: None
  float_t ___m_PixelsPerUnit;

  /// [SerializeField]
  /// @brief Field m_Scale, offset: 0x48, size: 0x4, def value: None
  float_t ___m_Scale;

  /// [SerializeField]
  /// @brief Field m_ReferenceDpi, offset: 0x4c, size: 0x4, def value: None
  float_t ___m_ReferenceDpi;

  /// [SerializeField]
  /// @brief Field m_FallbackDpi, offset: 0x50, size: 0x4, def value: None
  float_t ___m_FallbackDpi;

  /// [SerializeField]
  /// @brief Field m_ReferenceResolution, offset: 0x54, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___m_ReferenceResolution;

  /// [SerializeField]
  /// @brief Field m_ScreenMatchMode, offset: 0x5c, size: 0x4, def value: None
  ::UnityEngine::UIElements::PanelScreenMatchMode ___m_ScreenMatchMode;

  /// [SerializeField]
  /// [Range(0, 1)]
  /// @brief Field m_Match, offset: 0x60, size: 0x4, def value: None
  float_t ___m_Match;

  /// [SerializeField]
  /// @brief Field m_SortingOrder, offset: 0x64, size: 0x4, def value: None
  float_t ___m_SortingOrder;

  /// [SerializeField]
  /// @brief Field m_TargetDisplay, offset: 0x68, size: 0x4, def value: None
  int32_t ___m_TargetDisplay;

  /// [SerializeField]
  /// @brief Field m_BindingLogLevel, offset: 0x6c, size: 0x4, def value: None
  ::UnityEngine::UIElements::BindingLogLevel ___m_BindingLogLevel;

  /// [SerializeField]
  /// @brief Field m_ClearDepthStencil, offset: 0x70, size: 0x1, def value: None
  bool ___m_ClearDepthStencil;

  /// [SerializeField]
  /// @brief Field m_ClearColor, offset: 0x71, size: 0x1, def value: None
  bool ___m_ClearColor;

  /// [SerializeField]
  /// @brief Field m_ColorClearValue, offset: 0x74, size: 0x10, def value: None
  ::UnityEngine::Color ___m_ColorClearValue;

  /// [SerializeField]
  /// @brief Field m_VertexBudget, offset: 0x84, size: 0x4, def value: None
  uint32_t ___m_VertexBudget;

  /// [SerializeField]
  /// @brief Field m_TextureSlotCount, offset: 0x88, size: 0x4, def value: None
  ::UnityEngine::UIElements::TextureSlotCount ___m_TextureSlotCount;

  /// @brief Field m_PanelAccess, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::PanelSettings_RuntimePanelAccess* ___m_PanelAccess;

  /// @brief Field m_AttachedUIDocumentsList, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIDocumentList* ___m_AttachedUIDocumentsList;

  /// [HideInInspector]
  /// [SerializeField]
  /// @brief Field m_DynamicAtlasSettings, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::DynamicAtlasSettings* ___m_DynamicAtlasSettings;

  /// [HideInInspector]
  /// [SerializeField]
  /// @brief Field m_AtlasBlitShader, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_AtlasBlitShader;

  /// [SerializeField]
  /// [HideInInspector]
  /// @brief Field m_DefaultShader, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_DefaultShader;

  /// [SerializeField]
  /// [HideInInspector]
  /// @brief Field m_RuntimeGaussianBlurShader, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_RuntimeGaussianBlurShader;

  /// [HideInInspector]
  /// [SerializeField]
  /// @brief Field m_RuntimeColorEffectShader, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_RuntimeColorEffectShader;

  /// [HideInInspector]
  /// [SerializeField]
  /// @brief Field m_SDFShader, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_SDFShader;

  /// [HideInInspector]
  /// [SerializeField]
  /// @brief Field m_BitmapShader, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_BitmapShader;

  /// [SerializeField]
  /// [HideInInspector]
  /// @brief Field m_SpriteShader, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_SpriteShader;

  /// [SerializeField]
  /// [HideInInspector]
  /// @brief Field m_ICUDataAsset, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextAsset> ___m_ICUDataAsset;

  /// [SerializeField]
  /// @brief Field forceGammaRendering, offset: 0xe8, size: 0x1, def value: None
  bool ___forceGammaRendering;

  /// [SerializeField]
  /// @brief Field textSettings, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::PanelTextSettings> ___textSettings;

  /// @brief Field m_TargetRect, offset: 0xf8, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_TargetRect;

  /// @brief Field m_ResolvedScale, offset: 0x108, size: 0x4, def value: None
  float_t ___m_ResolvedScale;

  /// @brief Field m_OldThemeUss, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::StyleSheet> ___m_OldThemeUss;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <ScreenDPI>k__BackingField, offset: 0x118, size: 0x4, def value: None
  float_t ____ScreenDPI_k__BackingField;

  /// @brief Field m_PanelChangeReceiver, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::UIElements::IDebugPanelChangeReceiver* ___m_PanelChangeReceiver;

  /// @brief Field m_AssignedScreenToPanel, offset: 0x128, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector3>* ___m_AssignedScreenToPanel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___themeUss) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_DisableNoThemeWarning) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_TargetTexture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_RenderMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_ColliderUpdateMode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_ColliderIsTrigger) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_ScaleMode) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_ReferenceSpritePixelsPerUnit) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_PixelsPerUnit) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_Scale) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_ReferenceDpi) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_FallbackDpi) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_ReferenceResolution) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_ScreenMatchMode) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_Match) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_SortingOrder) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_TargetDisplay) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_BindingLogLevel) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_ClearDepthStencil) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_ClearColor) == 0x71, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_ColorClearValue) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_VertexBudget) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_TextureSlotCount) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_PanelAccess) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_AttachedUIDocumentsList) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_DynamicAtlasSettings) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_AtlasBlitShader) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_DefaultShader) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_RuntimeGaussianBlurShader) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_RuntimeColorEffectShader) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_SDFShader) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_BitmapShader) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_SpriteShader) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_ICUDataAsset) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___forceGammaRendering) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___textSettings) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_TargetRect) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_ResolvedScale) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_OldThemeUss) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ____ScreenDPI_k__BackingField) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_PanelChangeReceiver) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_AssignedScreenToPanel) == 0x128, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PanelSettings) == 0x130, "Size mismatch!");

} // namespace UnityEngine::UIElements
