#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7025))
// CS Name: ::PanelSettings::RuntimePanelAccess*
class CORDL_TYPE __PanelSettings__RuntimePanelAccess : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Settings, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Settings, put = __set_m_Settings))::UnityEngine::UIElements::PanelSettings* m_Settings;

  /// @brief Field m_RuntimePanel, offset 0x18, size 0x8
  __declspec(property(get = __get_m_RuntimePanel, put = __set_m_RuntimePanel))::UnityEngine::UIElements::BaseRuntimePanel* m_RuntimePanel;

  __declspec(property(get = get_isInitialized)) bool isInitialized;

  __declspec(property(get = get_panel))::UnityEngine::UIElements::BaseRuntimePanel* panel;

  constexpr ::UnityEngine::UIElements::PanelSettings*& __get_m_Settings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::PanelSettings*> const& __get_m_Settings() const;

  constexpr void __set_m_Settings(::UnityEngine::UIElements::PanelSettings* value);

  constexpr ::UnityEngine::UIElements::BaseRuntimePanel*& __get_m_RuntimePanel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseRuntimePanel*> const& __get_m_RuntimePanel() const;

  constexpr void __set_m_RuntimePanel(::UnityEngine::UIElements::BaseRuntimePanel* value);

  static inline ::UnityEngine::UIElements::__PanelSettings__RuntimePanelAccess* New_ctor(::UnityEngine::UIElements::PanelSettings* settings);

  /// @brief Method .ctor, addr 0x2e192a4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::PanelSettings* settings);

  /// @brief Method get_isInitialized, addr 0x2e195ec, size 0x10, virtual false, abstract: false, final false
  inline bool get_isInitialized();

  /// @brief Method get_panel, addr 0x2e1907c, size 0x138, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseRuntimePanel* get_panel();

  /// @brief Method DisposePanel, addr 0x2e19590, size 0x20, virtual false, abstract: false, final false
  inline void DisposePanel();

  /// @brief Method SetTargetTexture, addr 0x2e18e60, size 0x28, virtual false, abstract: false, final false
  inline void SetTargetTexture();

  /// @brief Method SetSortingPriority, addr 0x2e18f80, size 0x34, virtual false, abstract: false, final false
  inline void SetSortingPriority();

  /// @brief Method SetTargetDisplay, addr 0x2e18ff0, size 0x28, virtual false, abstract: false, final false
  inline void SetTargetDisplay();

  /// @brief Method CreateRelatedRuntimePanel, addr 0x2e1995c, size 0xf8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseRuntimePanel* CreateRelatedRuntimePanel();

  /// @brief Method DisposeRelatedPanel, addr 0x2e19a54, size 0x5c, virtual false, abstract: false, final false
  inline void DisposeRelatedPanel();

  /// @brief Method MarkPotentiallyEmpty, addr 0x2e19900, size 0x5c, virtual false, abstract: false, final false
  inline void MarkPotentiallyEmpty();

  // Ctor Parameters [CppParam { name: "", ty: "__PanelSettings__RuntimePanelAccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PanelSettings__RuntimePanelAccess(__PanelSettings__RuntimePanelAccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PanelSettings__RuntimePanelAccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PanelSettings__RuntimePanelAccess(__PanelSettings__RuntimePanelAccess const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PanelSettings__RuntimePanelAccess();

public:
  /// @brief Field m_Settings, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::PanelSettings* ___m_Settings;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10244)), TypeDefinitionIndex(TypeDefinitionIndex(7023)), TypeDefinitionIndex(TypeDefinitionIndex(7024)),
// TypeDefinitionIndex(TypeDefinitionIndex(10210)), TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(10165))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(7026)) CS Name: ::UnityEngine.UIElements::PanelSettings*
class CORDL_TYPE PanelSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using RuntimePanelAccess = ::UnityEngine::UIElements::__PanelSettings__RuntimePanelAccess;

  /// @brief Field themeUss, offset 0x18, size 0x8
  __declspec(property(get = __get_themeUss, put = __set_themeUss))::UnityEngine::UIElements::ThemeStyleSheet* themeUss;

  /// @brief Field m_TargetTexture, offset 0x20, size 0x8
  __declspec(property(get = __get_m_TargetTexture, put = __set_m_TargetTexture))::UnityEngine::RenderTexture* m_TargetTexture;

  /// @brief Field m_ScaleMode, offset 0x28, size 0x4
  __declspec(property(get = __get_m_ScaleMode, put = __set_m_ScaleMode))::UnityEngine::UIElements::PanelScaleMode m_ScaleMode;

  /// @brief Field m_Scale, offset 0x2c, size 0x4
  __declspec(property(get = __get_m_Scale, put = __set_m_Scale)) float_t m_Scale;

  /// @brief Field m_ReferenceDpi, offset 0x30, size 0x4
  __declspec(property(get = __get_m_ReferenceDpi, put = __set_m_ReferenceDpi)) float_t m_ReferenceDpi;

  /// @brief Field m_FallbackDpi, offset 0x34, size 0x4
  __declspec(property(get = __get_m_FallbackDpi, put = __set_m_FallbackDpi)) float_t m_FallbackDpi;

  /// @brief Field m_ReferenceResolution, offset 0x38, size 0x8
  __declspec(property(get = __get_m_ReferenceResolution, put = __set_m_ReferenceResolution))::UnityEngine::Vector2Int m_ReferenceResolution;

  /// @brief Field m_ScreenMatchMode, offset 0x40, size 0x4
  __declspec(property(get = __get_m_ScreenMatchMode, put = __set_m_ScreenMatchMode))::UnityEngine::UIElements::PanelScreenMatchMode m_ScreenMatchMode;

  /// @brief Field m_Match, offset 0x44, size 0x4
  __declspec(property(get = __get_m_Match, put = __set_m_Match)) float_t m_Match;

  /// @brief Field m_SortingOrder, offset 0x48, size 0x4
  __declspec(property(get = __get_m_SortingOrder, put = __set_m_SortingOrder)) float_t m_SortingOrder;

  /// @brief Field m_TargetDisplay, offset 0x4c, size 0x4
  __declspec(property(get = __get_m_TargetDisplay, put = __set_m_TargetDisplay)) int32_t m_TargetDisplay;

  /// @brief Field m_ClearDepthStencil, offset 0x50, size 0x1
  __declspec(property(get = __get_m_ClearDepthStencil, put = __set_m_ClearDepthStencil)) bool m_ClearDepthStencil;

  /// @brief Field m_ClearColor, offset 0x51, size 0x1
  __declspec(property(get = __get_m_ClearColor, put = __set_m_ClearColor)) bool m_ClearColor;

  /// @brief Field m_ColorClearValue, offset 0x54, size 0x10
  __declspec(property(get = __get_m_ColorClearValue, put = __set_m_ColorClearValue))::UnityEngine::Color m_ColorClearValue;

  /// @brief Field m_PanelAccess, offset 0x68, size 0x8
  __declspec(property(get = __get_m_PanelAccess, put = __set_m_PanelAccess))::UnityEngine::UIElements::__PanelSettings__RuntimePanelAccess* m_PanelAccess;

  /// @brief Field m_AttachedUIDocumentsList, offset 0x70, size 0x8
  __declspec(property(get = __get_m_AttachedUIDocumentsList, put = __set_m_AttachedUIDocumentsList))::UnityEngine::UIElements::UIDocumentList* m_AttachedUIDocumentsList;

  /// @brief Field m_DynamicAtlasSettings, offset 0x78, size 0x8
  __declspec(property(get = __get_m_DynamicAtlasSettings, put = __set_m_DynamicAtlasSettings))::UnityEngine::UIElements::DynamicAtlasSettings* m_DynamicAtlasSettings;

  /// @brief Field m_AtlasBlitShader, offset 0x80, size 0x8
  __declspec(property(get = __get_m_AtlasBlitShader, put = __set_m_AtlasBlitShader))::UnityEngine::Shader* m_AtlasBlitShader;

  /// @brief Field m_RuntimeShader, offset 0x88, size 0x8
  __declspec(property(get = __get_m_RuntimeShader, put = __set_m_RuntimeShader))::UnityEngine::Shader* m_RuntimeShader;

  /// @brief Field m_RuntimeWorldShader, offset 0x90, size 0x8
  __declspec(property(get = __get_m_RuntimeWorldShader, put = __set_m_RuntimeWorldShader))::UnityEngine::Shader* m_RuntimeWorldShader;

  /// @brief Field textSettings, offset 0x98, size 0x8
  __declspec(property(get = __get_textSettings, put = __set_textSettings))::UnityEngine::UIElements::PanelTextSettings* textSettings;

  /// @brief Field m_TargetRect, offset 0xa0, size 0x10
  __declspec(property(get = __get_m_TargetRect, put = __set_m_TargetRect))::UnityEngine::Rect m_TargetRect;

  /// @brief Field m_ResolvedScale, offset 0xb0, size 0x4
  __declspec(property(get = __get_m_ResolvedScale, put = __set_m_ResolvedScale)) float_t m_ResolvedScale;

  /// @brief Field m_OldThemeUss, offset 0xb8, size 0x8
  __declspec(property(get = __get_m_OldThemeUss, put = __set_m_OldThemeUss))::UnityEngine::UIElements::StyleSheet* m_OldThemeUss;

  /// @brief Field m_EmptyPanelCounter, offset 0xc0, size 0x4
  __declspec(property(get = __get_m_EmptyPanelCounter, put = __set_m_EmptyPanelCounter)) int32_t m_EmptyPanelCounter;

  /// @brief Field <ScreenDPI>k__BackingField, offset 0xc4, size 0x4
  __declspec(property(get = __get__ScreenDPI_k__BackingField, put = __set__ScreenDPI_k__BackingField)) float_t _ScreenDPI_k__BackingField;

  /// @brief Field m_AssignedScreenToPanel, offset 0xc8, size 0x8
  __declspec(property(get = __get_m_AssignedScreenToPanel, put = __set_m_AssignedScreenToPanel))::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* m_AssignedScreenToPanel;

  __declspec(property(get = get_themeStyleSheet, put = set_themeStyleSheet))::UnityEngine::UIElements::ThemeStyleSheet* themeStyleSheet;

  __declspec(property(get = get_targetTexture, put = set_targetTexture))::UnityEngine::RenderTexture* targetTexture;

  __declspec(property(get = get_scaleMode, put = set_scaleMode))::UnityEngine::UIElements::PanelScaleMode scaleMode;

  __declspec(property(get = get_scale, put = set_scale)) float_t scale;

  __declspec(property(get = get_referenceDpi, put = set_referenceDpi)) float_t referenceDpi;

  __declspec(property(get = get_fallbackDpi, put = set_fallbackDpi)) float_t fallbackDpi;

  __declspec(property(get = get_referenceResolution, put = set_referenceResolution))::UnityEngine::Vector2Int referenceResolution;

  __declspec(property(get = get_screenMatchMode, put = set_screenMatchMode))::UnityEngine::UIElements::PanelScreenMatchMode screenMatchMode;

  __declspec(property(get = get_match, put = set_match)) float_t match;

  __declspec(property(get = get_sortingOrder, put = set_sortingOrder)) float_t sortingOrder;

  __declspec(property(get = get_targetDisplay, put = set_targetDisplay)) int32_t targetDisplay;

  __declspec(property(get = get_clearDepthStencil, put = set_clearDepthStencil)) bool clearDepthStencil;

  __declspec(property(get = get_depthClearValue)) float_t depthClearValue;

  __declspec(property(get = get_clearColor, put = set_clearColor)) bool clearColor;

  __declspec(property(get = get_colorClearValue, put = set_colorClearValue))::UnityEngine::Color colorClearValue;

  __declspec(property(get = get_panel))::UnityEngine::UIElements::BaseRuntimePanel* panel;

  __declspec(property(get = get_visualTree))::UnityEngine::UIElements::VisualElement* visualTree;

  __declspec(property(get = get_dynamicAtlasSettings, put = set_dynamicAtlasSettings))::UnityEngine::UIElements::DynamicAtlasSettings* dynamicAtlasSettings;

  __declspec(property(get = get_ScreenDPI, put = set_ScreenDPI)) float_t ScreenDPI;

  constexpr ::UnityEngine::UIElements::ThemeStyleSheet*& __get_themeUss();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ThemeStyleSheet*> const& __get_themeUss() const;

  constexpr void __set_themeUss(::UnityEngine::UIElements::ThemeStyleSheet* value);

  constexpr ::UnityEngine::RenderTexture*& __get_m_TargetTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> const& __get_m_TargetTexture() const;

  constexpr void __set_m_TargetTexture(::UnityEngine::RenderTexture* value);

  constexpr ::UnityEngine::UIElements::PanelScaleMode& __get_m_ScaleMode();

  constexpr ::UnityEngine::UIElements::PanelScaleMode const& __get_m_ScaleMode() const;

  constexpr void __set_m_ScaleMode(::UnityEngine::UIElements::PanelScaleMode value);

  constexpr float_t& __get_m_Scale();

  constexpr float_t const& __get_m_Scale() const;

  constexpr void __set_m_Scale(float_t value);

  constexpr float_t& __get_m_ReferenceDpi();

  constexpr float_t const& __get_m_ReferenceDpi() const;

  constexpr void __set_m_ReferenceDpi(float_t value);

  constexpr float_t& __get_m_FallbackDpi();

  constexpr float_t const& __get_m_FallbackDpi() const;

  constexpr void __set_m_FallbackDpi(float_t value);

  constexpr ::UnityEngine::Vector2Int& __get_m_ReferenceResolution();

  constexpr ::UnityEngine::Vector2Int const& __get_m_ReferenceResolution() const;

  constexpr void __set_m_ReferenceResolution(::UnityEngine::Vector2Int value);

  constexpr ::UnityEngine::UIElements::PanelScreenMatchMode& __get_m_ScreenMatchMode();

  constexpr ::UnityEngine::UIElements::PanelScreenMatchMode const& __get_m_ScreenMatchMode() const;

  constexpr void __set_m_ScreenMatchMode(::UnityEngine::UIElements::PanelScreenMatchMode value);

  constexpr float_t& __get_m_Match();

  constexpr float_t const& __get_m_Match() const;

  constexpr void __set_m_Match(float_t value);

  constexpr float_t& __get_m_SortingOrder();

  constexpr float_t const& __get_m_SortingOrder() const;

  constexpr void __set_m_SortingOrder(float_t value);

  constexpr int32_t& __get_m_TargetDisplay();

  constexpr int32_t const& __get_m_TargetDisplay() const;

  constexpr void __set_m_TargetDisplay(int32_t value);

  constexpr bool& __get_m_ClearDepthStencil();

  constexpr bool const& __get_m_ClearDepthStencil() const;

  constexpr void __set_m_ClearDepthStencil(bool value);

  constexpr bool& __get_m_ClearColor();

  constexpr bool const& __get_m_ClearColor() const;

  constexpr void __set_m_ClearColor(bool value);

  constexpr ::UnityEngine::Color& __get_m_ColorClearValue();

  constexpr ::UnityEngine::Color const& __get_m_ColorClearValue() const;

  constexpr void __set_m_ColorClearValue(::UnityEngine::Color value);

  constexpr ::UnityEngine::UIElements::__PanelSettings__RuntimePanelAccess*& __get_m_PanelAccess();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__PanelSettings__RuntimePanelAccess*> const& __get_m_PanelAccess() const;

  constexpr void __set_m_PanelAccess(::UnityEngine::UIElements::__PanelSettings__RuntimePanelAccess* value);

  constexpr ::UnityEngine::UIElements::UIDocumentList*& __get_m_AttachedUIDocumentsList();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIDocumentList*> const& __get_m_AttachedUIDocumentsList() const;

  constexpr void __set_m_AttachedUIDocumentsList(::UnityEngine::UIElements::UIDocumentList* value);

  constexpr ::UnityEngine::UIElements::DynamicAtlasSettings*& __get_m_DynamicAtlasSettings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::DynamicAtlasSettings*> const& __get_m_DynamicAtlasSettings() const;

  constexpr void __set_m_DynamicAtlasSettings(::UnityEngine::UIElements::DynamicAtlasSettings* value);

  constexpr ::UnityEngine::Shader*& __get_m_AtlasBlitShader();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& __get_m_AtlasBlitShader() const;

  constexpr void __set_m_AtlasBlitShader(::UnityEngine::Shader* value);

  constexpr ::UnityEngine::Shader*& __get_m_RuntimeShader();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& __get_m_RuntimeShader() const;

  constexpr void __set_m_RuntimeShader(::UnityEngine::Shader* value);

  constexpr ::UnityEngine::Shader*& __get_m_RuntimeWorldShader();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> const& __get_m_RuntimeWorldShader() const;

  constexpr void __set_m_RuntimeWorldShader(::UnityEngine::Shader* value);

  constexpr ::UnityEngine::UIElements::PanelTextSettings*& __get_textSettings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::PanelTextSettings*> const& __get_textSettings() const;

  constexpr void __set_textSettings(::UnityEngine::UIElements::PanelTextSettings* value);

  constexpr ::UnityEngine::Rect& __get_m_TargetRect();

  constexpr ::UnityEngine::Rect const& __get_m_TargetRect() const;

  constexpr void __set_m_TargetRect(::UnityEngine::Rect value);

  constexpr float_t& __get_m_ResolvedScale();

  constexpr float_t const& __get_m_ResolvedScale() const;

  constexpr void __set_m_ResolvedScale(float_t value);

  constexpr ::UnityEngine::UIElements::StyleSheet*& __get_m_OldThemeUss();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::StyleSheet*> const& __get_m_OldThemeUss() const;

  constexpr void __set_m_OldThemeUss(::UnityEngine::UIElements::StyleSheet* value);

  constexpr int32_t& __get_m_EmptyPanelCounter();

  constexpr int32_t const& __get_m_EmptyPanelCounter() const;

  constexpr void __set_m_EmptyPanelCounter(int32_t value);

  constexpr float_t& __get__ScreenDPI_k__BackingField();

  constexpr float_t const& __get__ScreenDPI_k__BackingField() const;

  constexpr void __set__ScreenDPI_k__BackingField(float_t value);

  constexpr ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*& __get_m_AssignedScreenToPanel();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*> const& __get_m_AssignedScreenToPanel() const;

  constexpr void __set_m_AssignedScreenToPanel(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* value);

  /// @brief Method get_themeStyleSheet, addr 0x2e18cb4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ThemeStyleSheet* get_themeStyleSheet();

  /// @brief Method set_themeStyleSheet, addr 0x2e18cbc, size 0xc, virtual false, abstract: false, final false
  inline void set_themeStyleSheet(::UnityEngine::UIElements::ThemeStyleSheet* value);

  /// @brief Method get_targetTexture, addr 0x2e18e24, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTexture* get_targetTexture();

  /// @brief Method set_targetTexture, addr 0x2e18e2c, size 0x34, virtual false, abstract: false, final false
  inline void set_targetTexture(::UnityEngine::RenderTexture* value);

  /// @brief Method get_scaleMode, addr 0x2e18e88, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PanelScaleMode get_scaleMode();

  /// @brief Method set_scaleMode, addr 0x2e18e90, size 0x8, virtual false, abstract: false, final false
  inline void set_scaleMode(::UnityEngine::UIElements::PanelScaleMode value);

  /// @brief Method get_scale, addr 0x2e18e98, size 0x8, virtual false, abstract: false, final false
  inline float_t get_scale();

  /// @brief Method set_scale, addr 0x2e18ea0, size 0x8, virtual false, abstract: false, final false
  inline void set_scale(float_t value);

  /// @brief Method get_referenceDpi, addr 0x2e18ea8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_referenceDpi();

  /// @brief Method set_referenceDpi, addr 0x2e18eb0, size 0x2c, virtual false, abstract: false, final false
  inline void set_referenceDpi(float_t value);

  /// @brief Method get_fallbackDpi, addr 0x2e18edc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_fallbackDpi();

  /// @brief Method set_fallbackDpi, addr 0x2e18ee4, size 0x2c, virtual false, abstract: false, final false
  inline void set_fallbackDpi(float_t value);

  /// @brief Method get_referenceResolution, addr 0x2e18f10, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int get_referenceResolution();

  /// @brief Method set_referenceResolution, addr 0x2e18f18, size 0x8, virtual false, abstract: false, final false
  inline void set_referenceResolution(::UnityEngine::Vector2Int value);

  /// @brief Method get_screenMatchMode, addr 0x2e18f20, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PanelScreenMatchMode get_screenMatchMode();

  /// @brief Method set_screenMatchMode, addr 0x2e18f28, size 0x8, virtual false, abstract: false, final false
  inline void set_screenMatchMode(::UnityEngine::UIElements::PanelScreenMatchMode value);

  /// @brief Method get_match, addr 0x2e18f30, size 0x8, virtual false, abstract: false, final false
  inline float_t get_match();

  /// @brief Method set_match, addr 0x2e18f38, size 0x8, virtual false, abstract: false, final false
  inline void set_match(float_t value);

  /// @brief Method get_sortingOrder, addr 0x2e18f40, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sortingOrder();

  /// @brief Method set_sortingOrder, addr 0x2e18f48, size 0x20, virtual false, abstract: false, final false
  inline void set_sortingOrder(float_t value);

  /// @brief Method ApplySortingOrder, addr 0x2e18f68, size 0x18, virtual false, abstract: false, final false
  inline void ApplySortingOrder();

  /// @brief Method get_targetDisplay, addr 0x2e18fb4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_targetDisplay();

  /// @brief Method set_targetDisplay, addr 0x2e18fbc, size 0x34, virtual false, abstract: false, final false
  inline void set_targetDisplay(int32_t value);

  /// @brief Method get_clearDepthStencil, addr 0x2e19018, size 0x8, virtual false, abstract: false, final false
  inline bool get_clearDepthStencil();

  /// @brief Method set_clearDepthStencil, addr 0x2e19020, size 0xc, virtual false, abstract: false, final false
  inline void set_clearDepthStencil(bool value);

  /// @brief Method get_depthClearValue, addr 0x2e1902c, size 0xc, virtual false, abstract: false, final false
  inline float_t get_depthClearValue();

  /// @brief Method get_clearColor, addr 0x2e19038, size 0x8, virtual false, abstract: false, final false
  inline bool get_clearColor();

  /// @brief Method set_clearColor, addr 0x2e19040, size 0xc, virtual false, abstract: false, final false
  inline void set_clearColor(bool value);

  /// @brief Method get_colorClearValue, addr 0x2e1904c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_colorClearValue();

  /// @brief Method set_colorClearValue, addr 0x2e19058, size 0xc, virtual false, abstract: false, final false
  inline void set_colorClearValue(::UnityEngine::Color value);

  /// @brief Method get_panel, addr 0x2e19064, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseRuntimePanel* get_panel();

  /// @brief Method get_visualTree, addr 0x2e191b4, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_visualTree();

  /// @brief Method get_dynamicAtlasSettings, addr 0x2e191e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DynamicAtlasSettings* get_dynamicAtlasSettings();

  /// @brief Method set_dynamicAtlasSettings, addr 0x2e191e8, size 0x8, virtual false, abstract: false, final false
  inline void set_dynamicAtlasSettings(::UnityEngine::UIElements::DynamicAtlasSettings* value);

  static inline ::UnityEngine::UIElements::PanelSettings* New_ctor();

  /// @brief Method .ctor, addr 0x2e191f0, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Reset, addr 0x2e192cc, size 0x4, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method OnEnable, addr 0x2e192d0, size 0x108, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x2e19564, size 0x2c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method DisposePanel, addr 0x2e195b0, size 0x2c, virtual false, abstract: false, final false
  inline void DisposePanel();

  /// @brief Method get_ScreenDPI, addr 0x2e195dc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_ScreenDPI();

  /// @brief Method set_ScreenDPI, addr 0x2e195e4, size 0x8, virtual false, abstract: false, final false
  inline void set_ScreenDPI(float_t value);

  /// @brief Method UpdateScreenDPI, addr 0x2e193d8, size 0x1c, virtual false, abstract: false, final false
  inline void UpdateScreenDPI();

  /// @brief Method ApplyThemeStyleSheet, addr 0x2e18cc8, size 0x15c, virtual false, abstract: false, final false
  inline void ApplyThemeStyleSheet(::UnityEngine::UIElements::VisualElement* root);

  /// @brief Method InitializeShaders, addr 0x2e193f4, size 0x170, virtual false, abstract: false, final false
  inline void InitializeShaders();

  /// @brief Method ApplyPanelSettings, addr 0x2e16928, size 0x5fc, virtual false, abstract: false, final false
  inline void ApplyPanelSettings();

  /// @brief Method SetScreenToPanelSpaceFunction, addr 0x2e198d0, size 0x30, virtual false, abstract: false, final false
  inline void SetScreenToPanelSpaceFunction(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* screentoPanelSpaceFunction);

  /// @brief Method ResolveScale, addr 0x2e197b8, size 0x118, virtual false, abstract: false, final false
  inline float_t ResolveScale(::UnityEngine::Rect targetRect, float_t screenDpi);

  /// @brief Method GetDisplayRect, addr 0x2e195fc, size 0x1bc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect GetDisplayRect();

  /// @brief Method AttachAndInsertUIDocumentToVisualTree, addr 0x2e156b4, size 0x94, virtual false, abstract: false, final false
  inline void AttachAndInsertUIDocumentToVisualTree(::UnityEngine::UIElements::UIDocument* uiDocument);

  /// @brief Method DetachUIDocument, addr 0x2e15638, size 0x7c, virtual false, abstract: false, final false
  inline void DetachUIDocument(::UnityEngine::UIElements::UIDocument* uiDocument);

  // Ctor Parameters [CppParam { name: "", ty: "PanelSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanelSettings(PanelSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanelSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanelSettings(PanelSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelSettings();

public:
  /// @brief Field themeUss, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::ThemeStyleSheet* ___themeUss;

  /// @brief Field m_TargetTexture, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::RenderTexture* ___m_TargetTexture;

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
  ::UnityEngine::Shader* ___m_AtlasBlitShader;

  /// @brief Field m_RuntimeShader, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Shader* ___m_RuntimeShader;

  /// @brief Field m_RuntimeWorldShader, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::Shader* ___m_RuntimeWorldShader;

  /// @brief Field textSettings, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::PanelTextSettings* ___textSettings;

  /// @brief Field m_TargetRect, offset: 0xa0, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_TargetRect;

  /// @brief Field m_ResolvedScale, offset: 0xb0, size: 0x4, def value: None
  float_t ___m_ResolvedScale;

  /// @brief Field m_OldThemeUss, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::UIElements::StyleSheet* ___m_OldThemeUss;

  /// @brief Field m_EmptyPanelCounter, offset: 0xc0, size: 0x4, def value: None
  int32_t ___m_EmptyPanelCounter;

  /// @brief Field <ScreenDPI>k__BackingField, offset: 0xc4, size: 0x4, def value: None
  float_t ____ScreenDPI_k__BackingField;

  /// @brief Field m_AssignedScreenToPanel, offset: 0xc8, size: 0x8, def value: None
  ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* ___m_AssignedScreenToPanel;

  /// @brief Field k_DefaultSortingOrder offset 0xffffffff size 0x4
  static constexpr int32_t k_DefaultSortingOrder{ static_cast<int32_t>(0x0) };

  /// @brief Field k_DefaultScaleValue offset 0xffffffff size 0x4
  static constexpr float_t k_DefaultScaleValue{ 1.0 };

  /// @brief Field k_DefaultStyleSheetPath offset 0xffffffff size 0x8
  static constexpr ::ConstString k_DefaultStyleSheetPath{ u"Packages/com.unity.ui/PackageResources/StyleSheets/Generated/Default.tss.asset" };

  /// @brief Field DefaultDpi offset 0xffffffff size 0x4
  static constexpr float_t DefaultDpi{ 96.0 };

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
