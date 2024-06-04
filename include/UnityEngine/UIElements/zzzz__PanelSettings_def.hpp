#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PanelSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelScaleMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelScreenMatchMode_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
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
class DynamicAtlasSettings;
}
namespace UnityEngine::UIElements {
struct PanelScaleMode;
}
namespace UnityEngine::UIElements {
struct PanelScreenMatchMode;
}
namespace UnityEngine::UIElements {
class PanelTextSettings;
}
namespace UnityEngine::UIElements {
class StyleSheet;
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
namespace UnityEngine::UIElements {
class __PanelSettings__RuntimePanelAccess;
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
struct Vector2Int;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PanelSettings;
}
namespace UnityEngine::UIElements {
class __PanelSettings__RuntimePanelAccess;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PanelSettings);
MARK_REF_PTR_T(::UnityEngine::UIElements::__PanelSettings__RuntimePanelAccess);
// Type: ::RuntimePanelAccess
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::PanelSettings::RuntimePanelAccess*
class CORDL_TYPE __PanelSettings__RuntimePanelAccess : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_isInitialized)) bool isInitialized;

  /// @brief Field m_RuntimePanel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RuntimePanel, put = __cordl_internal_set_m_RuntimePanel))::UnityEngine::UIElements::BaseRuntimePanel* m_RuntimePanel;

  /// @brief Field m_Settings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Settings, put = __cordl_internal_set_m_Settings))::UnityW<::UnityEngine::UIElements::PanelSettings> m_Settings;

  __declspec(property(get = get_panel))::UnityEngine::UIElements::BaseRuntimePanel* panel;

  /// @brief Method CreateRelatedRuntimePanel, addr 0x3599cf4, size 0xf8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseRuntimePanel* CreateRelatedRuntimePanel();

  /// @brief Method DisposePanel, addr 0x3599928, size 0x20, virtual false, abstract: false, final false
  inline void DisposePanel();

  /// @brief Method DisposeRelatedPanel, addr 0x3599dec, size 0x5c, virtual false, abstract: false, final false
  inline void DisposeRelatedPanel();

  /// @brief Method MarkPotentiallyEmpty, addr 0x3599c98, size 0x5c, virtual false, abstract: false, final false
  inline void MarkPotentiallyEmpty();

  static inline ::UnityEngine::UIElements::__PanelSettings__RuntimePanelAccess* New_ctor(::UnityEngine::UIElements::PanelSettings* settings);

  /// @brief Method SetSortingPriority, addr 0x3599318, size 0x34, virtual false, abstract: false, final false
  inline void SetSortingPriority();

  /// @brief Method SetTargetDisplay, addr 0x3599388, size 0x28, virtual false, abstract: false, final false
  inline void SetTargetDisplay();

  /// @brief Method SetTargetTexture, addr 0x35991f8, size 0x28, virtual false, abstract: false, final false
  inline void SetTargetTexture();

  constexpr ::UnityEngine::UIElements::BaseRuntimePanel*& __cordl_internal_get_m_RuntimePanel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseRuntimePanel*> const& __cordl_internal_get_m_RuntimePanel() const;

  constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings> const& __cordl_internal_get_m_Settings() const;

  constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings>& __cordl_internal_get_m_Settings();

  constexpr void __cordl_internal_set_m_RuntimePanel(::UnityEngine::UIElements::BaseRuntimePanel* value);

  constexpr void __cordl_internal_set_m_Settings(::UnityW<::UnityEngine::UIElements::PanelSettings> value);

  /// @brief Method .ctor, addr 0x359963c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::PanelSettings* settings);

  /// @brief Method get_isInitialized, addr 0x3599984, size 0x10, virtual false, abstract: false, final false
  inline bool get_isInitialized();

  /// @brief Method get_panel, addr 0x3599414, size 0x138, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseRuntimePanel* get_panel();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PanelSettings__RuntimePanelAccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PanelSettings__RuntimePanelAccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PanelSettings__RuntimePanelAccess(__PanelSettings__RuntimePanelAccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PanelSettings__RuntimePanelAccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PanelSettings__RuntimePanelAccess(__PanelSettings__RuntimePanelAccess const&) = delete;

  /// @brief Field m_Settings, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::PanelSettings> ___m_Settings;

  /// @brief Field m_RuntimePanel, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseRuntimePanel* ___m_RuntimePanel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__PanelSettings__RuntimePanelAccess, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PanelSettings__RuntimePanelAccess, ___m_Settings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PanelSettings__RuntimePanelAccess, ___m_RuntimePanel) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::PanelSettings
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::PanelSettings*
class CORDL_TYPE PanelSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using RuntimePanelAccess = ::UnityEngine::UIElements::__PanelSettings__RuntimePanelAccess;

  __declspec(property(get = get_ScreenDPI, put = set_ScreenDPI)) float_t ScreenDPI;

  /// @brief Field <ScreenDPI>k__BackingField, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get__ScreenDPI_k__BackingField, put = __cordl_internal_set__ScreenDPI_k__BackingField)) float_t _ScreenDPI_k__BackingField;

  __declspec(property(get = get_clearColor, put = set_clearColor)) bool clearColor;

  __declspec(property(get = get_clearDepthStencil, put = set_clearDepthStencil)) bool clearDepthStencil;

  __declspec(property(get = get_colorClearValue, put = set_colorClearValue))::UnityEngine::Color colorClearValue;

  __declspec(property(get = get_depthClearValue)) float_t depthClearValue;

  __declspec(property(get = get_dynamicAtlasSettings, put = set_dynamicAtlasSettings))::UnityEngine::UIElements::DynamicAtlasSettings* dynamicAtlasSettings;

  __declspec(property(get = get_fallbackDpi, put = set_fallbackDpi)) float_t fallbackDpi;

  /// @brief Field m_AssignedScreenToPanel, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AssignedScreenToPanel,
                      put = __cordl_internal_set_m_AssignedScreenToPanel))::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* m_AssignedScreenToPanel;

  /// @brief Field m_AtlasBlitShader, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AtlasBlitShader, put = __cordl_internal_set_m_AtlasBlitShader))::UnityW<::UnityEngine::Shader> m_AtlasBlitShader;

  /// @brief Field m_AttachedUIDocumentsList, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AttachedUIDocumentsList, put = __cordl_internal_set_m_AttachedUIDocumentsList))::UnityEngine::UIElements::UIDocumentList* m_AttachedUIDocumentsList;

  /// @brief Field m_ClearColor, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ClearColor, put = __cordl_internal_set_m_ClearColor)) bool m_ClearColor;

  /// @brief Field m_ClearDepthStencil, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ClearDepthStencil, put = __cordl_internal_set_m_ClearDepthStencil)) bool m_ClearDepthStencil;

  /// @brief Field m_ColorClearValue, offset 0x54, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ColorClearValue, put = __cordl_internal_set_m_ColorClearValue))::UnityEngine::Color m_ColorClearValue;

  /// @brief Field m_DynamicAtlasSettings, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DynamicAtlasSettings, put = __cordl_internal_set_m_DynamicAtlasSettings))::UnityEngine::UIElements::DynamicAtlasSettings* m_DynamicAtlasSettings;

  /// @brief Field m_EmptyPanelCounter, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_EmptyPanelCounter, put = __cordl_internal_set_m_EmptyPanelCounter)) int32_t m_EmptyPanelCounter;

  /// @brief Field m_FallbackDpi, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FallbackDpi, put = __cordl_internal_set_m_FallbackDpi)) float_t m_FallbackDpi;

  /// @brief Field m_Match, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Match, put = __cordl_internal_set_m_Match)) float_t m_Match;

  /// @brief Field m_OldThemeUss, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OldThemeUss, put = __cordl_internal_set_m_OldThemeUss))::UnityW<::UnityEngine::UIElements::StyleSheet> m_OldThemeUss;

  /// @brief Field m_PanelAccess, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PanelAccess, put = __cordl_internal_set_m_PanelAccess))::UnityEngine::UIElements::__PanelSettings__RuntimePanelAccess* m_PanelAccess;

  /// @brief Field m_ReferenceDpi, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ReferenceDpi, put = __cordl_internal_set_m_ReferenceDpi)) float_t m_ReferenceDpi;

  /// @brief Field m_ReferenceResolution, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ReferenceResolution, put = __cordl_internal_set_m_ReferenceResolution))::UnityEngine::Vector2Int m_ReferenceResolution;

  /// @brief Field m_ResolvedScale, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ResolvedScale, put = __cordl_internal_set_m_ResolvedScale)) float_t m_ResolvedScale;

  /// @brief Field m_RuntimeShader, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RuntimeShader, put = __cordl_internal_set_m_RuntimeShader))::UnityW<::UnityEngine::Shader> m_RuntimeShader;

  /// @brief Field m_RuntimeWorldShader, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RuntimeWorldShader, put = __cordl_internal_set_m_RuntimeWorldShader))::UnityW<::UnityEngine::Shader> m_RuntimeWorldShader;

  /// @brief Field m_Scale, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Scale, put = __cordl_internal_set_m_Scale)) float_t m_Scale;

  /// @brief Field m_ScaleMode, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ScaleMode, put = __cordl_internal_set_m_ScaleMode))::UnityEngine::UIElements::PanelScaleMode m_ScaleMode;

  /// @brief Field m_ScreenMatchMode, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ScreenMatchMode, put = __cordl_internal_set_m_ScreenMatchMode))::UnityEngine::UIElements::PanelScreenMatchMode m_ScreenMatchMode;

  /// @brief Field m_SortingOrder, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SortingOrder, put = __cordl_internal_set_m_SortingOrder)) float_t m_SortingOrder;

  /// @brief Field m_TargetDisplay, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TargetDisplay, put = __cordl_internal_set_m_TargetDisplay)) int32_t m_TargetDisplay;

  /// @brief Field m_TargetRect, offset 0xa0, size 0x10
  __declspec(property(get = __cordl_internal_get_m_TargetRect, put = __cordl_internal_set_m_TargetRect))::UnityEngine::Rect m_TargetRect;

  /// @brief Field m_TargetTexture, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TargetTexture, put = __cordl_internal_set_m_TargetTexture))::UnityW<::UnityEngine::RenderTexture> m_TargetTexture;

  __declspec(property(get = get_match, put = set_match)) float_t match;

  __declspec(property(get = get_panel))::UnityEngine::UIElements::BaseRuntimePanel* panel;

  __declspec(property(get = get_referenceDpi, put = set_referenceDpi)) float_t referenceDpi;

  __declspec(property(get = get_referenceResolution, put = set_referenceResolution))::UnityEngine::Vector2Int referenceResolution;

  __declspec(property(get = get_scale, put = set_scale)) float_t scale;

  __declspec(property(get = get_scaleMode, put = set_scaleMode))::UnityEngine::UIElements::PanelScaleMode scaleMode;

  __declspec(property(get = get_screenMatchMode, put = set_screenMatchMode))::UnityEngine::UIElements::PanelScreenMatchMode screenMatchMode;

  __declspec(property(get = get_sortingOrder, put = set_sortingOrder)) float_t sortingOrder;

  __declspec(property(get = get_targetDisplay, put = set_targetDisplay)) int32_t targetDisplay;

  __declspec(property(get = get_targetTexture, put = set_targetTexture))::UnityW<::UnityEngine::RenderTexture> targetTexture;

  /// @brief Field textSettings, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_textSettings, put = __cordl_internal_set_textSettings))::UnityW<::UnityEngine::UIElements::PanelTextSettings> textSettings;

  __declspec(property(get = get_themeStyleSheet, put = set_themeStyleSheet))::UnityW<::UnityEngine::UIElements::ThemeStyleSheet> themeStyleSheet;

  /// @brief Field themeUss, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_themeUss, put = __cordl_internal_set_themeUss))::UnityW<::UnityEngine::UIElements::ThemeStyleSheet> themeUss;

  __declspec(property(get = get_visualTree))::UnityEngine::UIElements::VisualElement* visualTree;

  /// @brief Method ApplyPanelSettings, addr 0x3596cc0, size 0x5fc, virtual false, abstract: false, final false
  inline void ApplyPanelSettings();

  /// @brief Method ApplySortingOrder, addr 0x3599300, size 0x18, virtual false, abstract: false, final false
  inline void ApplySortingOrder();

  /// @brief Method ApplyThemeStyleSheet, addr 0x3599060, size 0x15c, virtual false, abstract: false, final false
  inline void ApplyThemeStyleSheet(::UnityEngine::UIElements::VisualElement* root);

  /// @brief Method AttachAndInsertUIDocumentToVisualTree, addr 0x3595a4c, size 0x94, virtual false, abstract: false, final false
  inline void AttachAndInsertUIDocumentToVisualTree(::UnityEngine::UIElements::UIDocument* uiDocument);

  /// @brief Method DetachUIDocument, addr 0x35959d0, size 0x7c, virtual false, abstract: false, final false
  inline void DetachUIDocument(::UnityEngine::UIElements::UIDocument* uiDocument);

  /// @brief Method DisposePanel, addr 0x3599948, size 0x2c, virtual false, abstract: false, final false
  inline void DisposePanel();

  /// @brief Method GetDisplayRect, addr 0x3599994, size 0x1bc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect GetDisplayRect();

  /// @brief Method InitializeShaders, addr 0x359978c, size 0x170, virtual false, abstract: false, final false
  inline void InitializeShaders();

  static inline ::UnityEngine::UIElements::PanelSettings* New_ctor();

  /// @brief Method OnDisable, addr 0x35998fc, size 0x2c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x3599668, size 0x108, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Reset, addr 0x3599664, size 0x4, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ResolveScale, addr 0x3599b50, size 0x118, virtual false, abstract: false, final false
  inline float_t ResolveScale(::UnityEngine::Rect targetRect, float_t screenDpi);

  /// @brief Method SetScreenToPanelSpaceFunction, addr 0x3599c68, size 0x30, virtual false, abstract: false, final false
  inline void SetScreenToPanelSpaceFunction(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* screentoPanelSpaceFunction);

  /// @brief Method UpdateScreenDPI, addr 0x3599770, size 0x1c, virtual false, abstract: false, final false
  inline void UpdateScreenDPI();

  constexpr float_t const& __cordl_internal_get__ScreenDPI_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__ScreenDPI_k__BackingField();

  constexpr ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*& __cordl_internal_get_m_AssignedScreenToPanel();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*> const& __cordl_internal_get_m_AssignedScreenToPanel() const;

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_AtlasBlitShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_AtlasBlitShader();

  constexpr ::UnityEngine::UIElements::UIDocumentList*& __cordl_internal_get_m_AttachedUIDocumentsList();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIDocumentList*> const& __cordl_internal_get_m_AttachedUIDocumentsList() const;

  constexpr bool const& __cordl_internal_get_m_ClearColor() const;

  constexpr bool& __cordl_internal_get_m_ClearColor();

  constexpr bool const& __cordl_internal_get_m_ClearDepthStencil() const;

  constexpr bool& __cordl_internal_get_m_ClearDepthStencil();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_ColorClearValue() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_ColorClearValue();

  constexpr ::UnityEngine::UIElements::DynamicAtlasSettings*& __cordl_internal_get_m_DynamicAtlasSettings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::DynamicAtlasSettings*> const& __cordl_internal_get_m_DynamicAtlasSettings() const;

  constexpr int32_t const& __cordl_internal_get_m_EmptyPanelCounter() const;

  constexpr int32_t& __cordl_internal_get_m_EmptyPanelCounter();

  constexpr float_t const& __cordl_internal_get_m_FallbackDpi() const;

  constexpr float_t& __cordl_internal_get_m_FallbackDpi();

  constexpr float_t const& __cordl_internal_get_m_Match() const;

  constexpr float_t& __cordl_internal_get_m_Match();

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet> const& __cordl_internal_get_m_OldThemeUss() const;

  constexpr ::UnityW<::UnityEngine::UIElements::StyleSheet>& __cordl_internal_get_m_OldThemeUss();

  constexpr ::UnityEngine::UIElements::__PanelSettings__RuntimePanelAccess*& __cordl_internal_get_m_PanelAccess();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__PanelSettings__RuntimePanelAccess*> const& __cordl_internal_get_m_PanelAccess() const;

  constexpr float_t const& __cordl_internal_get_m_ReferenceDpi() const;

  constexpr float_t& __cordl_internal_get_m_ReferenceDpi();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_m_ReferenceResolution() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_m_ReferenceResolution();

  constexpr float_t const& __cordl_internal_get_m_ResolvedScale() const;

  constexpr float_t& __cordl_internal_get_m_ResolvedScale();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_RuntimeShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_RuntimeShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_RuntimeWorldShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_RuntimeWorldShader();

  constexpr float_t const& __cordl_internal_get_m_Scale() const;

  constexpr float_t& __cordl_internal_get_m_Scale();

  constexpr ::UnityEngine::UIElements::PanelScaleMode const& __cordl_internal_get_m_ScaleMode() const;

  constexpr ::UnityEngine::UIElements::PanelScaleMode& __cordl_internal_get_m_ScaleMode();

  constexpr ::UnityEngine::UIElements::PanelScreenMatchMode const& __cordl_internal_get_m_ScreenMatchMode() const;

  constexpr ::UnityEngine::UIElements::PanelScreenMatchMode& __cordl_internal_get_m_ScreenMatchMode();

  constexpr float_t const& __cordl_internal_get_m_SortingOrder() const;

  constexpr float_t& __cordl_internal_get_m_SortingOrder();

  constexpr int32_t const& __cordl_internal_get_m_TargetDisplay() const;

  constexpr int32_t& __cordl_internal_get_m_TargetDisplay();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_TargetRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_TargetRect();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_m_TargetTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_m_TargetTexture();

  constexpr ::UnityW<::UnityEngine::UIElements::PanelTextSettings> const& __cordl_internal_get_textSettings() const;

  constexpr ::UnityW<::UnityEngine::UIElements::PanelTextSettings>& __cordl_internal_get_textSettings();

  constexpr ::UnityW<::UnityEngine::UIElements::ThemeStyleSheet> const& __cordl_internal_get_themeUss() const;

  constexpr ::UnityW<::UnityEngine::UIElements::ThemeStyleSheet>& __cordl_internal_get_themeUss();

  constexpr void __cordl_internal_set__ScreenDPI_k__BackingField(float_t value);

  constexpr void __cordl_internal_set_m_AssignedScreenToPanel(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* value);

  constexpr void __cordl_internal_set_m_AtlasBlitShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_AttachedUIDocumentsList(::UnityEngine::UIElements::UIDocumentList* value);

  constexpr void __cordl_internal_set_m_ClearColor(bool value);

  constexpr void __cordl_internal_set_m_ClearDepthStencil(bool value);

  constexpr void __cordl_internal_set_m_ColorClearValue(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_DynamicAtlasSettings(::UnityEngine::UIElements::DynamicAtlasSettings* value);

  constexpr void __cordl_internal_set_m_EmptyPanelCounter(int32_t value);

  constexpr void __cordl_internal_set_m_FallbackDpi(float_t value);

  constexpr void __cordl_internal_set_m_Match(float_t value);

  constexpr void __cordl_internal_set_m_OldThemeUss(::UnityW<::UnityEngine::UIElements::StyleSheet> value);

  constexpr void __cordl_internal_set_m_PanelAccess(::UnityEngine::UIElements::__PanelSettings__RuntimePanelAccess* value);

  constexpr void __cordl_internal_set_m_ReferenceDpi(float_t value);

  constexpr void __cordl_internal_set_m_ReferenceResolution(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set_m_ResolvedScale(float_t value);

  constexpr void __cordl_internal_set_m_RuntimeShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_RuntimeWorldShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_Scale(float_t value);

  constexpr void __cordl_internal_set_m_ScaleMode(::UnityEngine::UIElements::PanelScaleMode value);

  constexpr void __cordl_internal_set_m_ScreenMatchMode(::UnityEngine::UIElements::PanelScreenMatchMode value);

  constexpr void __cordl_internal_set_m_SortingOrder(float_t value);

  constexpr void __cordl_internal_set_m_TargetDisplay(int32_t value);

  constexpr void __cordl_internal_set_m_TargetRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_TargetTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set_textSettings(::UnityW<::UnityEngine::UIElements::PanelTextSettings> value);

  constexpr void __cordl_internal_set_themeUss(::UnityW<::UnityEngine::UIElements::ThemeStyleSheet> value);

  /// @brief Method .ctor, addr 0x3599588, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ScreenDPI, addr 0x3599974, size 0x8, virtual false, abstract: false, final false
  inline float_t get_ScreenDPI();

  /// @brief Method get_clearColor, addr 0x35993d0, size 0x8, virtual false, abstract: false, final false
  inline bool get_clearColor();

  /// @brief Method get_clearDepthStencil, addr 0x35993b0, size 0x8, virtual false, abstract: false, final false
  inline bool get_clearDepthStencil();

  /// @brief Method get_colorClearValue, addr 0x35993e4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_colorClearValue();

  /// @brief Method get_depthClearValue, addr 0x35993c4, size 0xc, virtual false, abstract: false, final false
  inline float_t get_depthClearValue();

  /// @brief Method get_dynamicAtlasSettings, addr 0x3599578, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DynamicAtlasSettings* get_dynamicAtlasSettings();

  /// @brief Method get_fallbackDpi, addr 0x3599274, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fallbackDpi();

  /// @brief Method get_match, addr 0x35992c8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_match();

  /// @brief Method get_panel, addr 0x35993fc, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseRuntimePanel* get_panel();

  /// @brief Method get_referenceDpi, addr 0x3599240, size 0x8, virtual false, abstract: false, final false
  inline float_t get_referenceDpi();

  /// @brief Method get_referenceResolution, addr 0x35992a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int get_referenceResolution();

  /// @brief Method get_scale, addr 0x3599230, size 0x8, virtual false, abstract: false, final false
  inline float_t get_scale();

  /// @brief Method get_scaleMode, addr 0x3599220, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PanelScaleMode get_scaleMode();

  /// @brief Method get_screenMatchMode, addr 0x35992b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PanelScreenMatchMode get_screenMatchMode();

  /// @brief Method get_sortingOrder, addr 0x35992d8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sortingOrder();

  /// @brief Method get_targetDisplay, addr 0x359934c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_targetDisplay();

  /// @brief Method get_targetTexture, addr 0x35991bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_targetTexture();

  /// @brief Method get_themeStyleSheet, addr 0x359904c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::ThemeStyleSheet> get_themeStyleSheet();

  /// @brief Method get_visualTree, addr 0x359954c, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_visualTree();

  /// @brief Method set_ScreenDPI, addr 0x359997c, size 0x8, virtual false, abstract: false, final false
  inline void set_ScreenDPI(float_t value);

  /// @brief Method set_clearColor, addr 0x35993d8, size 0xc, virtual false, abstract: false, final false
  inline void set_clearColor(bool value);

  /// @brief Method set_clearDepthStencil, addr 0x35993b8, size 0xc, virtual false, abstract: false, final false
  inline void set_clearDepthStencil(bool value);

  /// @brief Method set_colorClearValue, addr 0x35993f0, size 0xc, virtual false, abstract: false, final false
  inline void set_colorClearValue(::UnityEngine::Color value);

  /// @brief Method set_dynamicAtlasSettings, addr 0x3599580, size 0x8, virtual false, abstract: false, final false
  inline void set_dynamicAtlasSettings(::UnityEngine::UIElements::DynamicAtlasSettings* value);

  /// @brief Method set_fallbackDpi, addr 0x359927c, size 0x2c, virtual false, abstract: false, final false
  inline void set_fallbackDpi(float_t value);

  /// @brief Method set_match, addr 0x35992d0, size 0x8, virtual false, abstract: false, final false
  inline void set_match(float_t value);

  /// @brief Method set_referenceDpi, addr 0x3599248, size 0x2c, virtual false, abstract: false, final false
  inline void set_referenceDpi(float_t value);

  /// @brief Method set_referenceResolution, addr 0x35992b0, size 0x8, virtual false, abstract: false, final false
  inline void set_referenceResolution(::UnityEngine::Vector2Int value);

  /// @brief Method set_scale, addr 0x3599238, size 0x8, virtual false, abstract: false, final false
  inline void set_scale(float_t value);

  /// @brief Method set_scaleMode, addr 0x3599228, size 0x8, virtual false, abstract: false, final false
  inline void set_scaleMode(::UnityEngine::UIElements::PanelScaleMode value);

  /// @brief Method set_screenMatchMode, addr 0x35992c0, size 0x8, virtual false, abstract: false, final false
  inline void set_screenMatchMode(::UnityEngine::UIElements::PanelScreenMatchMode value);

  /// @brief Method set_sortingOrder, addr 0x35992e0, size 0x20, virtual false, abstract: false, final false
  inline void set_sortingOrder(float_t value);

  /// @brief Method set_targetDisplay, addr 0x3599354, size 0x34, virtual false, abstract: false, final false
  inline void set_targetDisplay(int32_t value);

  /// @brief Method set_targetTexture, addr 0x35991c4, size 0x34, virtual false, abstract: false, final false
  inline void set_targetTexture(::UnityEngine::RenderTexture* value);

  /// @brief Method set_themeStyleSheet, addr 0x3599054, size 0xc, virtual false, abstract: false, final false
  inline void set_themeStyleSheet(::UnityEngine::UIElements::ThemeStyleSheet* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PanelSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanelSettings(PanelSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanelSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanelSettings(PanelSettings const&) = delete;

  /// @brief Field themeUss, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::ThemeStyleSheet> ___themeUss;

  /// @brief Field m_TargetTexture, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ___m_TargetTexture;

  /// @brief Field m_ScaleMode, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::UIElements::PanelScaleMode ___m_ScaleMode;

  /// @brief Field m_Scale, offset: 0x2c, size: 0x4, def value: None
  float_t ___m_Scale;

  /// @brief Field m_ReferenceDpi, offset: 0x30, size: 0x4, def value: None
  float_t ___m_ReferenceDpi;

  /// @brief Field m_FallbackDpi, offset: 0x34, size: 0x4, def value: None
  float_t ___m_FallbackDpi;

  /// @brief Field m_ReferenceResolution, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___m_ReferenceResolution;

  /// @brief Field m_ScreenMatchMode, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::UIElements::PanelScreenMatchMode ___m_ScreenMatchMode;

  /// @brief Field m_Match, offset: 0x44, size: 0x4, def value: None
  float_t ___m_Match;

  /// @brief Field m_SortingOrder, offset: 0x48, size: 0x4, def value: None
  float_t ___m_SortingOrder;

  /// @brief Field m_TargetDisplay, offset: 0x4c, size: 0x4, def value: None
  int32_t ___m_TargetDisplay;

  /// @brief Field m_ClearDepthStencil, offset: 0x50, size: 0x1, def value: None
  bool ___m_ClearDepthStencil;

  /// @brief Field m_ClearColor, offset: 0x51, size: 0x1, def value: None
  bool ___m_ClearColor;

  /// @brief Field m_ColorClearValue, offset: 0x54, size: 0x10, def value: None
  ::UnityEngine::Color ___m_ColorClearValue;

  /// @brief Field m_PanelAccess, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::UIElements::__PanelSettings__RuntimePanelAccess* ___m_PanelAccess;

  /// @brief Field m_AttachedUIDocumentsList, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIDocumentList* ___m_AttachedUIDocumentsList;

  /// @brief Field m_DynamicAtlasSettings, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::DynamicAtlasSettings* ___m_DynamicAtlasSettings;

  /// @brief Field m_AtlasBlitShader, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_AtlasBlitShader;

  /// @brief Field m_RuntimeShader, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_RuntimeShader;

  /// @brief Field m_RuntimeWorldShader, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_RuntimeWorldShader;

  /// @brief Field textSettings, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::PanelTextSettings> ___textSettings;

  /// @brief Field m_TargetRect, offset: 0xa0, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_TargetRect;

  /// @brief Field m_ResolvedScale, offset: 0xb0, size: 0x4, def value: None
  float_t ___m_ResolvedScale;

  /// @brief Field m_OldThemeUss, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::StyleSheet> ___m_OldThemeUss;

  /// @brief Field m_EmptyPanelCounter, offset: 0xc0, size: 0x4, def value: None
  int32_t ___m_EmptyPanelCounter;

  /// @brief Field <ScreenDPI>k__BackingField, offset: 0xc4, size: 0x4, def value: None
  float_t ____ScreenDPI_k__BackingField;

  /// @brief Field m_AssignedScreenToPanel, offset: 0xc8, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* ___m_AssignedScreenToPanel;

  /// @brief Field DefaultDpi offset 0xffffffff size 0x4
  static constexpr float_t DefaultDpi{ 96.0 };

  /// @brief Field k_DefaultScaleValue offset 0xffffffff size 0x4
  static constexpr float_t k_DefaultScaleValue{ 1.0 };

  /// @brief Field k_DefaultSortingOrder offset 0xffffffff size 0x4
  static constexpr int32_t k_DefaultSortingOrder{ static_cast<int32_t>(0x0) };

  /// @brief Field k_DefaultStyleSheetPath offset 0xffffffff size 0x8
  static constexpr ::ConstString k_DefaultStyleSheetPath{ u"Packages/com.unity.ui/PackageResources/StyleSheets/Generated/Default.tss.asset" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PanelSettings, 0xd0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___themeUss) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_TargetTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_ScaleMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_Scale) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_ReferenceDpi) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_FallbackDpi) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_ReferenceResolution) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_ScreenMatchMode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_Match) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_SortingOrder) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_TargetDisplay) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_ClearDepthStencil) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_ClearColor) == 0x51, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_ColorClearValue) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_PanelAccess) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_AttachedUIDocumentsList) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_DynamicAtlasSettings) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_AtlasBlitShader) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_RuntimeShader) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_RuntimeWorldShader) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___textSettings) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_TargetRect) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_ResolvedScale) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_OldThemeUss) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_EmptyPanelCounter) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ____ScreenDPI_k__BackingField) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelSettings, ___m_AssignedScreenToPanel) == 0xc8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PanelSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PanelSettings*, "UnityEngine.UIElements", "PanelSettings");
NEED_NO_BOX(::UnityEngine::UIElements::__PanelSettings__RuntimePanelAccess);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__PanelSettings__RuntimePanelAccess*, "UnityEngine.UIElements", "PanelSettings/RuntimePanelAccess");
