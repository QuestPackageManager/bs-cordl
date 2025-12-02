#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugDisplaySettingsMaterial.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugMaterialMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugMaterialValidationMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugVertexAttributeMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsPanel_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugDisplaySettingsMaterial)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::Rendering::Universal {
struct DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData;
}
namespace UnityEngine::Rendering::Universal {
struct DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsMaterial_SettingsPanel;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsMaterial_Strings;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsMaterial_WidgetFactory;
}
namespace UnityEngine::Rendering::Universal {
struct DebugMaterialMode;
}
namespace UnityEngine::Rendering::Universal {
struct DebugMaterialValidationMode;
}
namespace UnityEngine::Rendering::Universal {
struct DebugVertexAttributeMode;
}
namespace UnityEngine::Rendering::Universal {
class SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0;
}
namespace UnityEngine::Rendering::Universal {
class SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_1;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0;
}
namespace UnityEngine::Rendering {
template <typename T> class DebugUI_Field_1;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsData;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsPanelDisposable;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsQuery;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsMaterial;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsMaterial_SettingsPanel;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsMaterial_Strings;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsMaterial_WidgetFactory;
}
namespace UnityEngine::Rendering::Universal {
class SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0;
}
namespace UnityEngine::Rendering::Universal {
class SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_1;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0;
}
namespace UnityEngine::Rendering::Universal {
struct DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_1);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0);
MARK_VAL_T(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/AlbedoDebugValidationPreset
struct CORDL_TYPE DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset_Unwrapped
  enum struct __DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset_Unwrapped : int32_t {
    __E_DefaultLuminance = static_cast<int32_t>(0x0),
    __E_BlackAcrylicPaint = static_cast<int32_t>(0x1),
    __E_DarkSoil = static_cast<int32_t>(0x2),
    __E_WornAsphalt = static_cast<int32_t>(0x3),
    __E_DryClaySoil = static_cast<int32_t>(0x4),
    __E_GreenGrass = static_cast<int32_t>(0x5),
    __E_OldConcrete = static_cast<int32_t>(0x6),
    __E_RedClayTile = static_cast<int32_t>(0x7),
    __E_DrySand = static_cast<int32_t>(0x8),
    __E_NewConcrete = static_cast<int32_t>(0x9),
    __E_WhiteAcrylicPaint = static_cast<int32_t>(0xa),
    __E_FreshSnow = static_cast<int32_t>(0xb),
    __E_BlueSky = static_cast<int32_t>(0xc),
    __E_Foliage = static_cast<int32_t>(0xd),
    __E_Custom = static_cast<int32_t>(0xe),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset_Unwrapped() const noexcept {
    return static_cast<__DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset(int32_t value__) noexcept;

  /// @brief Field BlackAcrylicPaint value: I32(1)
  static ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const BlackAcrylicPaint;

  /// @brief Field BlueSky value: I32(12)
  static ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const BlueSky;

  /// @brief Field Custom value: I32(14)
  static ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const Custom;

  /// @brief Field DarkSoil value: I32(2)
  static ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const DarkSoil;

  /// @brief Field DefaultLuminance value: I32(0)
  static ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const DefaultLuminance;

  /// @brief Field DryClaySoil value: I32(4)
  static ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const DryClaySoil;

  /// @brief Field DrySand value: I32(8)
  static ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const DrySand;

  /// @brief Field Foliage value: I32(13)
  static ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const Foliage;

  /// @brief Field FreshSnow value: I32(11)
  static ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const FreshSnow;

  /// @brief Field GreenGrass value: I32(5)
  static ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const GreenGrass;

  /// @brief Field NewConcrete value: I32(9)
  static ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const NewConcrete;

  /// @brief Field OldConcrete value: I32(6)
  static ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const OldConcrete;

  /// @brief Field RedClayTile value: I32(7)
  static ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const RedClayTile;

  /// @brief Field WhiteAcrylicPaint value: I32(10)
  static ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const WhiteAcrylicPaint;

  /// @brief Field WornAsphalt value: I32(3)
  static ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const WornAsphalt;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12581 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Color
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/AlbedoDebugValidationPresetData
struct CORDL_TYPE DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam {
  // name: "minLuminance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxLuminance", ty: "float_t", modifiers: "", def_value: None }]
  constexpr DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData(::StringW name, ::UnityEngine::Color color, float_t minLuminance, float_t maxLuminance) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12582 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field color, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::Color color;

  /// @brief Field minLuminance, offset: 0x18, size: 0x4, def value: None
  float_t minLuminance;

  /// @brief Field maxLuminance, offset: 0x1c, size: 0x4, def value: None
  float_t maxLuminance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData, color) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData, minLuminance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData, maxLuminance) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.DebugUI::Widget::NameAndTooltip
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/Strings
class CORDL_TYPE DebugDisplaySettingsMaterial_Strings : public ::System::Object {
public:
  // Declarations
  /// @brief Field AlbedoCustomColor, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_AlbedoCustomColor, put = setStaticF_AlbedoCustomColor)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip AlbedoCustomColor;

  /// @brief Field AlbedoHueTolerance, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_AlbedoHueTolerance, put = setStaticF_AlbedoHueTolerance)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip AlbedoHueTolerance;

  /// @brief Field AlbedoMaxLuminance, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_AlbedoMaxLuminance, put = setStaticF_AlbedoMaxLuminance)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip AlbedoMaxLuminance;

  /// @brief Field AlbedoMinLuminance, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_AlbedoMinLuminance, put = setStaticF_AlbedoMinLuminance)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip AlbedoMinLuminance;

  /// @brief Field AlbedoSaturationTolerance, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_AlbedoSaturationTolerance, put = setStaticF_AlbedoSaturationTolerance)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip AlbedoSaturationTolerance;

  /// @brief Field FilterRenderingLayerMask, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_FilterRenderingLayerMask, put = setStaticF_FilterRenderingLayerMask)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip FilterRenderingLayerMask;

  /// @brief Field MaterialOverride, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MaterialOverride, put = setStaticF_MaterialOverride)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip MaterialOverride;

  /// @brief Field MaterialValidationMode, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MaterialValidationMode, put = setStaticF_MaterialValidationMode)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip MaterialValidationMode;

  /// @brief Field MetallicMaxValue, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MetallicMaxValue, put = setStaticF_MetallicMaxValue)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip MetallicMaxValue;

  /// @brief Field MetallicMinValue, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MetallicMinValue, put = setStaticF_MetallicMinValue)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip MetallicMinValue;

  /// @brief Field RenderingLayerColors, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_RenderingLayerColors, put = setStaticF_RenderingLayerColors)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip RenderingLayerColors;

  /// @brief Field RenderingLayersSelectedLight, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_RenderingLayersSelectedLight,
                      put = setStaticF_RenderingLayersSelectedLight)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip RenderingLayersSelectedLight;

  /// @brief Field SelectedLightShadowLayerMask, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_SelectedLightShadowLayerMask,
                      put = setStaticF_SelectedLightShadowLayerMask)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip SelectedLightShadowLayerMask;

  /// @brief Field ValidationPreset, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_ValidationPreset, put = setStaticF_ValidationPreset)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip ValidationPreset;

  /// @brief Field VertexAttribute, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_VertexAttribute, put = setStaticF_VertexAttribute)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip VertexAttribute;

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_AlbedoCustomColor();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_AlbedoHueTolerance();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_AlbedoMaxLuminance();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_AlbedoMinLuminance();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_AlbedoSaturationTolerance();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_FilterRenderingLayerMask();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_MaterialOverride();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_MaterialValidationMode();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_MetallicMaxValue();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_MetallicMinValue();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_RenderingLayerColors();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_RenderingLayersSelectedLight();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_SelectedLightShadowLayerMask();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_ValidationPreset();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_VertexAttribute();

  static inline void setStaticF_AlbedoCustomColor(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_AlbedoHueTolerance(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_AlbedoMaxLuminance(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_AlbedoMinLuminance(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_AlbedoSaturationTolerance(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_FilterRenderingLayerMask(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_MaterialOverride(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_MaterialValidationMode(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_MetallicMaxValue(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_MetallicMinValue(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_RenderingLayerColors(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_RenderingLayersSelectedLight(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_SelectedLightShadowLayerMask(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_ValidationPreset(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_VertexAttribute(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsMaterial_Strings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsMaterial_Strings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsMaterial_Strings(DebugDisplaySettingsMaterial_Strings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsMaterial_Strings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsMaterial_Strings(DebugDisplaySettingsMaterial_Strings const&) = delete;

  /// @brief Field AlbedoSettingsContainerName offset 0xffffffff size 0x8
  static constexpr ::ConstString AlbedoSettingsContainerName{ u"Albedo Settings" };

  /// @brief Field MetallicSettingsContainerName offset 0xffffffff size 0x8
  static constexpr ::ConstString MetallicSettingsContainerName{ u"Metallic Settings" };

  /// @brief Field RenderingLayerMasksSettingsContainerName offset 0xffffffff size 0x8
  static constexpr ::ConstString RenderingLayerMasksSettingsContainerName{ u"Rendering Layer Masks Settings" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12583 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/WidgetFactory/<>c
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsMaterial___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c* __9;

  /// @brief Field <>9__2_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_4, put = setStaticF___9__2_4)) ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* __9__2_4;

  /// @brief Field <>9__6_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_4, put = setStaticF___9__6_4)) ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* __9__6_4;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c* New_ctor();

  /// @brief Method <CreateAlbedoPreset>b__6_4, addr 0x6624e34, size 0x7c, virtual false, abstract: false, final false
  inline void _CreateAlbedoPreset_b__6_4(::UnityEngine::Rendering::DebugUI_Field_1<int32_t>* _, int32_t __param_1);

  /// @brief Method <CreateMaterialValidationMode>b__2_4, addr 0x6624db8, size 0x7c, virtual false, abstract: false, final false
  inline void _CreateMaterialValidationMode_b__2_4(::UnityEngine::Rendering::DebugUI_Field_1<int32_t>* _, int32_t __param_1);

  /// @brief Method .ctor, addr 0x6624db4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c* getStaticF___9();

  static inline ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* getStaticF___9__2_4();

  static inline ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* getStaticF___9__6_4();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c* value);

  static inline void setStaticF___9__2_4(::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* value);

  static inline void setStaticF___9__6_4(::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsMaterial___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsMaterial___c(WidgetFactory_DebugDisplaySettingsMaterial___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsMaterial___c(WidgetFactory_DebugDisplaySettingsMaterial___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12584 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass0_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0* New_ctor();

  /// @brief Method <CreateMaterialOverride>b__0, addr 0x6624eb0, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateMaterialOverride_b__0();

  /// @brief Method <CreateMaterialOverride>b__1, addr 0x6624f08, size 0x64, virtual false, abstract: false, final false
  inline void _CreateMaterialOverride_b__1(int32_t value);

  /// @brief Method <CreateMaterialOverride>b__2, addr 0x6624f6c, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateMaterialOverride_b__2();

  /// @brief Method <CreateMaterialOverride>b__3, addr 0x6624fc4, size 0x64, virtual false, abstract: false, final false
  inline void _CreateMaterialOverride_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x6622964, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12585 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass10_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0* New_ctor();

  /// @brief Method <CreateAlbedoHueTolerance>b__0, addr 0x6625028, size 0x68, virtual false, abstract: false, final false
  inline float_t _CreateAlbedoHueTolerance_b__0();

  /// @brief Method <CreateAlbedoHueTolerance>b__1, addr 0x6625090, size 0x64, virtual false, abstract: false, final false
  inline void _CreateAlbedoHueTolerance_b__1(float_t value);

  /// @brief Method <CreateAlbedoHueTolerance>b__2, addr 0x66250f4, size 0x60, virtual false, abstract: false, final false
  inline bool _CreateAlbedoHueTolerance_b__2();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x66245fc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12586 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass11_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0* New_ctor();

  /// @brief Method <CreateAlbedoSaturationTolerance>b__0, addr 0x6625154, size 0x68, virtual false, abstract: false, final false
  inline float_t _CreateAlbedoSaturationTolerance_b__0();

  /// @brief Method <CreateAlbedoSaturationTolerance>b__1, addr 0x66251bc, size 0x64, virtual false, abstract: false, final false
  inline void _CreateAlbedoSaturationTolerance_b__1(float_t value);

  /// @brief Method <CreateAlbedoSaturationTolerance>b__2, addr 0x6625220, size 0x60, virtual false, abstract: false, final false
  inline bool _CreateAlbedoSaturationTolerance_b__2();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x66248cc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12587 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass12_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0* New_ctor();

  /// @brief Method <CreateMetallicMinValue>b__0, addr 0x6625280, size 0x58, virtual false, abstract: false, final false
  inline float_t _CreateMetallicMinValue_b__0();

  /// @brief Method <CreateMetallicMinValue>b__1, addr 0x66252d8, size 0x64, virtual false, abstract: false, final false
  inline void _CreateMetallicMinValue_b__1(float_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x6624b14, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12588 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass13_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0* New_ctor();

  /// @brief Method <CreateMetallicMaxValue>b__0, addr 0x662533c, size 0x58, virtual false, abstract: false, final false
  inline float_t _CreateMetallicMaxValue_b__0();

  /// @brief Method <CreateMetallicMaxValue>b__1, addr 0x6625394, size 0x64, virtual false, abstract: false, final false
  inline void _CreateMetallicMaxValue_b__1(float_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x6624d5c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12589 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass1_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0* New_ctor();

  /// @brief Method <CreateVertexAttribute>b__0, addr 0x66253f8, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateVertexAttribute_b__0();

  /// @brief Method <CreateVertexAttribute>b__1, addr 0x6625450, size 0x64, virtual false, abstract: false, final false
  inline void _CreateVertexAttribute_b__1(int32_t value);

  /// @brief Method <CreateVertexAttribute>b__2, addr 0x66254b4, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateVertexAttribute_b__2();

  /// @brief Method <CreateVertexAttribute>b__3, addr 0x662550c, size 0x64, virtual false, abstract: false, final false
  inline void _CreateVertexAttribute_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x6622c9c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12590 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass2_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0* New_ctor();

  /// @brief Method <CreateMaterialValidationMode>b__0, addr 0x6625570, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateMaterialValidationMode_b__0();

  /// @brief Method <CreateMaterialValidationMode>b__1, addr 0x66255c8, size 0x64, virtual false, abstract: false, final false
  inline void _CreateMaterialValidationMode_b__1(int32_t value);

  /// @brief Method <CreateMaterialValidationMode>b__2, addr 0x662562c, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateMaterialValidationMode_b__2();

  /// @brief Method <CreateMaterialValidationMode>b__3, addr 0x6625684, size 0x64, virtual false, abstract: false, final false
  inline void _CreateMaterialValidationMode_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x6623084, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12591 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass3_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0* New_ctor();

  /// @brief Method <CreateRenderingLayersSelectedLight>b__0, addr 0x66256e8, size 0x58, virtual false, abstract: false, final false
  inline bool _CreateRenderingLayersSelectedLight_b__0();

  /// @brief Method <CreateRenderingLayersSelectedLight>b__1, addr 0x6625740, size 0x68, virtual false, abstract: false, final false
  inline void _CreateRenderingLayersSelectedLight_b__1(bool value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x66232b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12592 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass4_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0* New_ctor();

  /// @brief Method <CreateSelectedLightShadowLayerMask>b__0, addr 0x66257a8, size 0x58, virtual false, abstract: false, final false
  inline bool _CreateSelectedLightShadowLayerMask_b__0();

  /// @brief Method <CreateSelectedLightShadowLayerMask>b__1, addr 0x6625800, size 0x68, virtual false, abstract: false, final false
  inline void _CreateSelectedLightShadowLayerMask_b__1(bool value);

  /// @brief Method <CreateSelectedLightShadowLayerMask>b__2, addr 0x6625868, size 0x60, virtual false, abstract: false, final false
  inline bool _CreateSelectedLightShadowLayerMask_b__2();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x6623554, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12593 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass5_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0* New_ctor();

  /// @brief Method <CreateFilterRenderingLayerMasks>b__0, addr 0x66258c8, size 0x58, virtual false, abstract: false, final false
  inline uint32_t _CreateFilterRenderingLayerMasks_b__0();

  /// @brief Method <CreateFilterRenderingLayerMasks>b__1, addr 0x6625920, size 0x64, virtual false, abstract: false, final false
  inline void _CreateFilterRenderingLayerMasks_b__1(uint32_t value);

  /// @brief Method <CreateFilterRenderingLayerMasks>b__2, addr 0x6625984, size 0x58, virtual false, abstract: false, final false
  inline bool _CreateFilterRenderingLayerMasks_b__2();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x66237e4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12594 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass6_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0* New_ctor();

  /// @brief Method <CreateAlbedoPreset>b__0, addr 0x66259dc, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateAlbedoPreset_b__0();

  /// @brief Method <CreateAlbedoPreset>b__1, addr 0x6625a34, size 0x64, virtual false, abstract: false, final false
  inline void _CreateAlbedoPreset_b__1(int32_t value);

  /// @brief Method <CreateAlbedoPreset>b__2, addr 0x6625a98, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateAlbedoPreset_b__2();

  /// @brief Method <CreateAlbedoPreset>b__3, addr 0x6625af0, size 0x64, virtual false, abstract: false, final false
  inline void _CreateAlbedoPreset_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x6623bcc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12595 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass7_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0* New_ctor();

  /// @brief Method <CreateAlbedoCustomColor>b__0, addr 0x6625b54, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _CreateAlbedoCustomColor_b__0();

  /// @brief Method <CreateAlbedoCustomColor>b__1, addr 0x6625bb0, size 0x7c, virtual false, abstract: false, final false
  inline void _CreateAlbedoCustomColor_b__1(::UnityEngine::Color value);

  /// @brief Method <CreateAlbedoCustomColor>b__2, addr 0x6625c2c, size 0x60, virtual false, abstract: false, final false
  inline bool _CreateAlbedoCustomColor_b__2();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x6623e9c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12596 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass8_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0* New_ctor();

  /// @brief Method <CreateAlbedoMinLuminance>b__0, addr 0x6625c8c, size 0x58, virtual false, abstract: false, final false
  inline float_t _CreateAlbedoMinLuminance_b__0();

  /// @brief Method <CreateAlbedoMinLuminance>b__1, addr 0x6625ce4, size 0x64, virtual false, abstract: false, final false
  inline void _CreateAlbedoMinLuminance_b__1(float_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x66240e4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12597 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass9_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0* New_ctor();

  /// @brief Method <CreateAlbedoMaxLuminance>b__0, addr 0x6625d48, size 0x58, virtual false, abstract: false, final false
  inline float_t _CreateAlbedoMaxLuminance_b__0();

  /// @brief Method <CreateAlbedoMaxLuminance>b__1, addr 0x6625da0, size 0x64, virtual false, abstract: false, final false
  inline void _CreateAlbedoMaxLuminance_b__1(float_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x662432c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0(WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12598 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/WidgetFactory
class CORDL_TYPE DebugDisplaySettingsMaterial_WidgetFactory : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c;

  using __c__DisplayClass0_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0;

  using __c__DisplayClass10_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0;

  using __c__DisplayClass11_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0;

  using __c__DisplayClass12_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0;

  using __c__DisplayClass13_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0;

  using __c__DisplayClass1_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0;

  using __c__DisplayClass2_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0;

  using __c__DisplayClass3_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0;

  using __c__DisplayClass4_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0;

  using __c__DisplayClass5_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0;

  using __c__DisplayClass6_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0;

  using __c__DisplayClass7_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0;

  using __c__DisplayClass8_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0;

  using __c__DisplayClass9_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0;

  /// @brief Method CreateAlbedoCustomColor, addr 0x6623bd0, size 0x2cc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateAlbedoCustomColor(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel);

  /// @brief Method CreateAlbedoHueTolerance, addr 0x6624330, size 0x2cc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateAlbedoHueTolerance(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel);

  /// @brief Method CreateAlbedoMaxLuminance, addr 0x66240e8, size 0x244, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateAlbedoMaxLuminance(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel);

  /// @brief Method CreateAlbedoMinLuminance, addr 0x6623ea0, size 0x244, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateAlbedoMinLuminance(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel);

  /// @brief Method CreateAlbedoPreset, addr 0x66237e8, size 0x3e4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateAlbedoPreset(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel);

  /// @brief Method CreateAlbedoSaturationTolerance, addr 0x6624600, size 0x2cc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateAlbedoSaturationTolerance(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel);

  /// @brief Method CreateFilterRenderingLayerMasks, addr 0x6623558, size 0x28c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateFilterRenderingLayerMasks(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel);

  /// @brief Method CreateMaterialOverride, addr 0x6622630, size 0x334, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateMaterialOverride(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel);

  /// @brief Method CreateMaterialValidationMode, addr 0x6622ca0, size 0x3e4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateMaterialValidationMode(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel);

  /// @brief Method CreateMetallicMaxValue, addr 0x6624b18, size 0x244, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateMetallicMaxValue(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel);

  /// @brief Method CreateMetallicMinValue, addr 0x66248d0, size 0x244, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateMetallicMinValue(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel);

  /// @brief Method CreateRenderingLayersSelectedLight, addr 0x6623088, size 0x230, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateRenderingLayersSelectedLight(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel);

  /// @brief Method CreateSelectedLightShadowLayerMask, addr 0x66232bc, size 0x298, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateSelectedLightShadowLayerMask(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel);

  /// @brief Method CreateVertexAttribute, addr 0x6622968, size 0x334, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateVertexAttribute(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* panel);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsMaterial_WidgetFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsMaterial_WidgetFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsMaterial_WidgetFactory(DebugDisplaySettingsMaterial_WidgetFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsMaterial_WidgetFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsMaterial_WidgetFactory(DebugDisplaySettingsMaterial_WidgetFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12599 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/SettingsPanel/<>c__DisplayClass0_0
class CORDL_TYPE SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* __4__this;

  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data;

  static inline ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* const& __cordl_internal_get_data() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*& __cordl_internal_get_data();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* value);

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* value);

  /// @brief Method <.ctor>b__2, addr 0x6625e0c, size 0x20, virtual false, abstract: false, final false
  inline bool __ctor_b__2();

  /// @brief Method <.ctor>b__3, addr 0x6625e2c, size 0x20, virtual false, abstract: false, final false
  inline bool __ctor_b__3();

  /// @brief Method <.ctor>b__4, addr 0x6625e4c, size 0x20, virtual false, abstract: false, final false
  inline bool __ctor_b__4();

  /// @brief Method .ctor, addr 0x6625e04, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0(SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0(SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12600 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* _____4__this;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0, ___data) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/SettingsPanel/<>c__DisplayClass0_1
class CORDL_TYPE SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1,
                      put = __cordl_internal_set_CS$__8__locals1)) ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0* CS$__8__locals1;

  /// @brief Field index, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  static inline ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_1* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr void __cordl_internal_set_CS$__8__locals1(::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0* value);

  constexpr void __cordl_internal_set_index(int32_t value);

  /// @brief Method <.ctor>b__0, addr 0x6625e6c, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::Color __ctor_b__0();

  /// @brief Method <.ctor>b__1, addr 0x6625ef0, size 0xa4, virtual false, abstract: false, final false
  inline void __ctor_b__1(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x6625e08, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_1(SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_1(SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12601 };

  /// @brief Field index, offset: 0x10, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_1, ___index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_1, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.DebugDisplaySettingsPanel`1<T>
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/SettingsPanel
class CORDL_TYPE DebugDisplaySettingsMaterial_SettingsPanel : public ::UnityEngine::Rendering::DebugDisplaySettingsPanel_1<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*> {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0;

  using __c__DisplayClass0_1 = ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_1;

  static inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel* New_ctor(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data);

  /// @brief Method .ctor, addr 0x6620e28, size 0xb54, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* data);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsMaterial_SettingsPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsMaterial_SettingsPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsMaterial_SettingsPanel(DebugDisplaySettingsMaterial_SettingsPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsMaterial_SettingsPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsMaterial_SettingsPanel(DebugDisplaySettingsMaterial_SettingsPanel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12602 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Color, UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial::AlbedoDebugValidationPreset, UnityEngine.Rendering.Universal.DebugMaterialMode,
// UnityEngine.Rendering.Universal.DebugMaterialValidationMode, UnityEngine.Rendering.Universal.DebugVertexAttributeMode
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial
class CORDL_TYPE DebugDisplaySettingsMaterial : public ::System::Object {
public:
  // Declarations
  using AlbedoDebugValidationPreset = ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset;

  using AlbedoDebugValidationPresetData = ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData;

  using SettingsPanel = ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel;

  using Strings = ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings;

  using WidgetFactory = ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory;

  __declspec(property(get = get_AreAnySettingsActive)) bool AreAnySettingsActive;

  __declspec(property(get = get_IsLightingActive)) bool IsLightingActive;

  __declspec(property(get = get_IsPostProcessingAllowed)) bool IsPostProcessingAllowed;

  /// @brief Field <albedoCompareColor>k__BackingField, offset 0x2c, size 0x10
  __declspec(property(get = __cordl_internal_get__albedoCompareColor_k__BackingField,
                      put = __cordl_internal_set__albedoCompareColor_k__BackingField)) ::UnityEngine::Color _albedoCompareColor_k__BackingField;

  /// @brief Field <albedoMaxLuminance>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__albedoMaxLuminance_k__BackingField, put = __cordl_internal_set__albedoMaxLuminance_k__BackingField)) float_t _albedoMaxLuminance_k__BackingField;

  /// @brief Field <albedoMinLuminance>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__albedoMinLuminance_k__BackingField, put = __cordl_internal_set__albedoMinLuminance_k__BackingField)) float_t _albedoMinLuminance_k__BackingField;

  /// @brief Field <materialDebugMode>k__BackingField, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__materialDebugMode_k__BackingField,
                      put = __cordl_internal_set__materialDebugMode_k__BackingField)) ::UnityEngine::Rendering::Universal::DebugMaterialMode _materialDebugMode_k__BackingField;

  /// @brief Field <materialValidationMode>k__BackingField, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__materialValidationMode_k__BackingField,
                      put = __cordl_internal_set__materialValidationMode_k__BackingField)) ::UnityEngine::Rendering::Universal::DebugMaterialValidationMode _materialValidationMode_k__BackingField;

  /// @brief Field <metallicMaxValue>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__metallicMaxValue_k__BackingField, put = __cordl_internal_set__metallicMaxValue_k__BackingField)) float_t _metallicMaxValue_k__BackingField;

  /// @brief Field <metallicMinValue>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__metallicMinValue_k__BackingField, put = __cordl_internal_set__metallicMinValue_k__BackingField)) float_t _metallicMinValue_k__BackingField;

  /// @brief Field <renderingLayerMask>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__renderingLayerMask_k__BackingField, put = __cordl_internal_set__renderingLayerMask_k__BackingField)) uint32_t _renderingLayerMask_k__BackingField;

  /// @brief Field <renderingLayersSelectedLight>k__BackingField, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__renderingLayersSelectedLight_k__BackingField,
                      put = __cordl_internal_set__renderingLayersSelectedLight_k__BackingField)) bool _renderingLayersSelectedLight_k__BackingField;

  /// @brief Field <selectedLightShadowLayerMask>k__BackingField, offset 0x45, size 0x1
  __declspec(property(get = __cordl_internal_get__selectedLightShadowLayerMask_k__BackingField,
                      put = __cordl_internal_set__selectedLightShadowLayerMask_k__BackingField)) bool _selectedLightShadowLayerMask_k__BackingField;

  /// @brief Field <vertexAttributeDebugMode>k__BackingField, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__vertexAttributeDebugMode_k__BackingField,
                      put = __cordl_internal_set__vertexAttributeDebugMode_k__BackingField)) ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode _vertexAttributeDebugMode_k__BackingField;

  __declspec(property(get = get_albedoCompareColor, put = set_albedoCompareColor)) ::UnityEngine::Color albedoCompareColor;

  __declspec(property(get = get_albedoHueTolerance, put = set_albedoHueTolerance)) float_t albedoHueTolerance;

  __declspec(property(get = get_albedoMaxLuminance, put = set_albedoMaxLuminance)) float_t albedoMaxLuminance;

  __declspec(property(get = get_albedoMinLuminance, put = set_albedoMinLuminance)) float_t albedoMinLuminance;

  __declspec(property(get = get_albedoSaturationTolerance, put = set_albedoSaturationTolerance)) float_t albedoSaturationTolerance;

  __declspec(property(get = get_albedoValidationPreset,
                      put = set_albedoValidationPreset)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset albedoValidationPreset;

  /// @brief Field debugRenderingLayersColors, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_debugRenderingLayersColors, put = __cordl_internal_set_debugRenderingLayersColors)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>
      debugRenderingLayersColors;

  /// @brief Field m_AlbedoDebugValidationPresetData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AlbedoDebugValidationPresetData,
                      put =
                          __cordl_internal_set_m_AlbedoDebugValidationPresetData)) ::ArrayW<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData,
                                                                                            ::Array<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData>*>
      m_AlbedoDebugValidationPresetData;

  /// @brief Field m_AlbedoHueTolerance, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AlbedoHueTolerance, put = __cordl_internal_set_m_AlbedoHueTolerance)) float_t m_AlbedoHueTolerance;

  /// @brief Field m_AlbedoSaturationTolerance, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AlbedoSaturationTolerance, put = __cordl_internal_set_m_AlbedoSaturationTolerance)) float_t m_AlbedoSaturationTolerance;

  /// @brief Field m_AlbedoValidationPreset, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AlbedoValidationPreset,
                      put = __cordl_internal_set_m_AlbedoValidationPreset)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset m_AlbedoValidationPreset;

  __declspec(property(get = get_materialDebugMode, put = set_materialDebugMode)) ::UnityEngine::Rendering::Universal::DebugMaterialMode materialDebugMode;

  __declspec(property(get = get_materialValidationMode, put = set_materialValidationMode)) ::UnityEngine::Rendering::Universal::DebugMaterialValidationMode materialValidationMode;

  __declspec(property(get = get_metallicMaxValue, put = set_metallicMaxValue)) float_t metallicMaxValue;

  __declspec(property(get = get_metallicMinValue, put = set_metallicMinValue)) float_t metallicMinValue;

  __declspec(property(get = get_renderingLayerMask, put = set_renderingLayerMask)) uint32_t renderingLayerMask;

  __declspec(property(get = get_renderingLayersSelectedLight, put = set_renderingLayersSelectedLight)) bool renderingLayersSelectedLight;

  __declspec(property(get = get_selectedLightShadowLayerMask, put = set_selectedLightShadowLayerMask)) bool selectedLightShadowLayerMask;

  __declspec(property(get = get_vertexAttributeDebugMode, put = set_vertexAttributeDebugMode)) ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode vertexAttributeDebugMode;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsData*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsQuery*() noexcept;

  /// @brief Method GetDebugLightLayersMask, addr 0x6620d1c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t GetDebugLightLayersMask();

  static inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* New_ctor();

  /// @brief Method UnityEngine.Rendering.IDebugDisplaySettingsData.CreatePanel, addr 0x6620dcc, size 0x5c, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__albedoCompareColor_k__BackingField() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__albedoCompareColor_k__BackingField();

  constexpr float_t const& __cordl_internal_get__albedoMaxLuminance_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__albedoMaxLuminance_k__BackingField();

  constexpr float_t const& __cordl_internal_get__albedoMinLuminance_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__albedoMinLuminance_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::DebugMaterialMode const& __cordl_internal_get__materialDebugMode_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugMaterialMode& __cordl_internal_get__materialDebugMode_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::DebugMaterialValidationMode const& __cordl_internal_get__materialValidationMode_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugMaterialValidationMode& __cordl_internal_get__materialValidationMode_k__BackingField();

  constexpr float_t const& __cordl_internal_get__metallicMaxValue_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__metallicMaxValue_k__BackingField();

  constexpr float_t const& __cordl_internal_get__metallicMinValue_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__metallicMinValue_k__BackingField();

  constexpr uint32_t const& __cordl_internal_get__renderingLayerMask_k__BackingField() const;

  constexpr uint32_t& __cordl_internal_get__renderingLayerMask_k__BackingField();

  constexpr bool const& __cordl_internal_get__renderingLayersSelectedLight_k__BackingField() const;

  constexpr bool& __cordl_internal_get__renderingLayersSelectedLight_k__BackingField();

  constexpr bool const& __cordl_internal_get__selectedLightShadowLayerMask_k__BackingField() const;

  constexpr bool& __cordl_internal_get__selectedLightShadowLayerMask_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode const& __cordl_internal_get__vertexAttributeDebugMode_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode& __cordl_internal_get__vertexAttributeDebugMode_k__BackingField();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_debugRenderingLayersColors() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_debugRenderingLayersColors();

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData,
                     ::Array<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData>*> const&
  __cordl_internal_get_m_AlbedoDebugValidationPresetData() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData,
                     ::Array<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData>*>&
  __cordl_internal_get_m_AlbedoDebugValidationPresetData();

  constexpr float_t const& __cordl_internal_get_m_AlbedoHueTolerance() const;

  constexpr float_t& __cordl_internal_get_m_AlbedoHueTolerance();

  constexpr float_t const& __cordl_internal_get_m_AlbedoSaturationTolerance() const;

  constexpr float_t& __cordl_internal_get_m_AlbedoSaturationTolerance();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const& __cordl_internal_get_m_AlbedoValidationPreset() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset& __cordl_internal_get_m_AlbedoValidationPreset();

  constexpr void __cordl_internal_set__albedoCompareColor_k__BackingField(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__albedoMaxLuminance_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__albedoMinLuminance_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__materialDebugMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugMaterialMode value);

  constexpr void __cordl_internal_set__materialValidationMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugMaterialValidationMode value);

  constexpr void __cordl_internal_set__metallicMaxValue_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__metallicMinValue_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__renderingLayerMask_k__BackingField(uint32_t value);

  constexpr void __cordl_internal_set__renderingLayersSelectedLight_k__BackingField(bool value);

  constexpr void __cordl_internal_set__selectedLightShadowLayerMask_k__BackingField(bool value);

  constexpr void __cordl_internal_set__vertexAttributeDebugMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugVertexAttributeMode value);

  constexpr void __cordl_internal_set_debugRenderingLayersColors(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_AlbedoDebugValidationPresetData(::ArrayW<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData,
                                                                                 ::Array<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData>*>
                                                                            value);

  constexpr void __cordl_internal_set_m_AlbedoHueTolerance(float_t value);

  constexpr void __cordl_internal_set_m_AlbedoSaturationTolerance(float_t value);

  constexpr void __cordl_internal_set_m_AlbedoValidationPreset(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset value);

  /// @brief Method .ctor, addr 0x662197c, size 0x8e4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AreAnySettingsActive, addr 0x6620d54, size 0x28, virtual true, abstract: false, final true
  inline bool get_AreAnySettingsActive();

  /// @brief Method get_IsLightingActive, addr 0x6620da4, size 0x28, virtual true, abstract: false, final true
  inline bool get_IsLightingActive();

  /// @brief Method get_IsPostProcessingAllowed, addr 0x6620d7c, size 0x28, virtual true, abstract: false, final true
  inline bool get_IsPostProcessingAllowed();

  /// @brief Method get_albedoCompareColor, addr 0x6620cb4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_albedoCompareColor();

  /// @brief Method get_albedoHueTolerance, addr 0x6620c74, size 0x18, virtual false, abstract: false, final false
  inline float_t get_albedoHueTolerance();

  /// @brief Method get_albedoMaxLuminance, addr 0x6620c64, size 0x8, virtual false, abstract: false, final false
  inline float_t get_albedoMaxLuminance();

  /// @brief Method get_albedoMinLuminance, addr 0x6620c54, size 0x8, virtual false, abstract: false, final false
  inline float_t get_albedoMinLuminance();

  /// @brief Method get_albedoSaturationTolerance, addr 0x6620c94, size 0x18, virtual false, abstract: false, final false
  inline float_t get_albedoSaturationTolerance();

  /// @brief Method get_albedoValidationPreset, addr 0x6620c08, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset get_albedoValidationPreset();

  /// @brief Method get_materialDebugMode, addr 0x6620d34, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugMaterialMode get_materialDebugMode();

  /// @brief Method get_materialValidationMode, addr 0x6620d24, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugMaterialValidationMode get_materialValidationMode();

  /// @brief Method get_metallicMaxValue, addr 0x6620cdc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_metallicMaxValue();

  /// @brief Method get_metallicMinValue, addr 0x6620ccc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_metallicMinValue();

  /// @brief Method get_renderingLayerMask, addr 0x6620d0c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_renderingLayerMask();

  /// @brief Method get_renderingLayersSelectedLight, addr 0x6620cec, size 0x8, virtual false, abstract: false, final false
  inline bool get_renderingLayersSelectedLight();

  /// @brief Method get_selectedLightShadowLayerMask, addr 0x6620cfc, size 0x8, virtual false, abstract: false, final false
  inline bool get_selectedLightShadowLayerMask();

  /// @brief Method get_vertexAttributeDebugMode, addr 0x6620d44, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode get_vertexAttributeDebugMode();

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsData* i___UnityEngine__Rendering__IDebugDisplaySettingsData() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsQuery* i___UnityEngine__Rendering__IDebugDisplaySettingsQuery() noexcept;

  /// @brief Method set_albedoCompareColor, addr 0x6620cc0, size 0xc, virtual false, abstract: false, final false
  inline void set_albedoCompareColor(::UnityEngine::Color value);

  /// @brief Method set_albedoHueTolerance, addr 0x6620c8c, size 0x8, virtual false, abstract: false, final false
  inline void set_albedoHueTolerance(float_t value);

  /// @brief Method set_albedoMaxLuminance, addr 0x6620c6c, size 0x8, virtual false, abstract: false, final false
  inline void set_albedoMaxLuminance(float_t value);

  /// @brief Method set_albedoMinLuminance, addr 0x6620c5c, size 0x8, virtual false, abstract: false, final false
  inline void set_albedoMinLuminance(float_t value);

  /// @brief Method set_albedoSaturationTolerance, addr 0x6620cac, size 0x8, virtual false, abstract: false, final false
  inline void set_albedoSaturationTolerance(float_t value);

  /// @brief Method set_albedoValidationPreset, addr 0x6620c10, size 0x44, virtual false, abstract: false, final false
  inline void set_albedoValidationPreset(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset value);

  /// @brief Method set_materialDebugMode, addr 0x6620d3c, size 0x8, virtual false, abstract: false, final false
  inline void set_materialDebugMode(::UnityEngine::Rendering::Universal::DebugMaterialMode value);

  /// @brief Method set_materialValidationMode, addr 0x6620d2c, size 0x8, virtual false, abstract: false, final false
  inline void set_materialValidationMode(::UnityEngine::Rendering::Universal::DebugMaterialValidationMode value);

  /// @brief Method set_metallicMaxValue, addr 0x6620ce4, size 0x8, virtual false, abstract: false, final false
  inline void set_metallicMaxValue(float_t value);

  /// @brief Method set_metallicMinValue, addr 0x6620cd4, size 0x8, virtual false, abstract: false, final false
  inline void set_metallicMinValue(float_t value);

  /// @brief Method set_renderingLayerMask, addr 0x6620d14, size 0x8, virtual false, abstract: false, final false
  inline void set_renderingLayerMask(uint32_t value);

  /// @brief Method set_renderingLayersSelectedLight, addr 0x6620cf4, size 0x8, virtual false, abstract: false, final false
  inline void set_renderingLayersSelectedLight(bool value);

  /// @brief Method set_selectedLightShadowLayerMask, addr 0x6620d04, size 0x8, virtual false, abstract: false, final false
  inline void set_selectedLightShadowLayerMask(bool value);

  /// @brief Method set_vertexAttributeDebugMode, addr 0x6620d4c, size 0x8, virtual false, abstract: false, final false
  inline void set_vertexAttributeDebugMode(::UnityEngine::Rendering::Universal::DebugVertexAttributeMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsMaterial();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsMaterial", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsMaterial(DebugDisplaySettingsMaterial&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsMaterial", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsMaterial(DebugDisplaySettingsMaterial const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12603 };

  /// @brief Field m_AlbedoDebugValidationPresetData, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData,
           ::Array<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData>*>
      ___m_AlbedoDebugValidationPresetData;

  /// @brief Field m_AlbedoValidationPreset, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset ___m_AlbedoValidationPreset;

  /// @brief Field <albedoMinLuminance>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  float_t ____albedoMinLuminance_k__BackingField;

  /// @brief Field <albedoMaxLuminance>k__BackingField, offset: 0x20, size: 0x4, def value: None
  float_t ____albedoMaxLuminance_k__BackingField;

  /// @brief Field m_AlbedoHueTolerance, offset: 0x24, size: 0x4, def value: None
  float_t ___m_AlbedoHueTolerance;

  /// @brief Field m_AlbedoSaturationTolerance, offset: 0x28, size: 0x4, def value: None
  float_t ___m_AlbedoSaturationTolerance;

  /// @brief Field <albedoCompareColor>k__BackingField, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Color ____albedoCompareColor_k__BackingField;

  /// @brief Field <metallicMinValue>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  float_t ____metallicMinValue_k__BackingField;

  /// @brief Field <metallicMaxValue>k__BackingField, offset: 0x40, size: 0x4, def value: None
  float_t ____metallicMaxValue_k__BackingField;

  /// @brief Field <renderingLayersSelectedLight>k__BackingField, offset: 0x44, size: 0x1, def value: None
  bool ____renderingLayersSelectedLight_k__BackingField;

  /// @brief Field <selectedLightShadowLayerMask>k__BackingField, offset: 0x45, size: 0x1, def value: None
  bool ____selectedLightShadowLayerMask_k__BackingField;

  /// @brief Field <renderingLayerMask>k__BackingField, offset: 0x48, size: 0x4, def value: None
  uint32_t ____renderingLayerMask_k__BackingField;

  /// @brief Field debugRenderingLayersColors, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___debugRenderingLayersColors;

  /// @brief Field <materialValidationMode>k__BackingField, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugMaterialValidationMode ____materialValidationMode_k__BackingField;

  /// @brief Field <materialDebugMode>k__BackingField, offset: 0x5c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugMaterialMode ____materialDebugMode_k__BackingField;

  /// @brief Field <vertexAttributeDebugMode>k__BackingField, offset: 0x60, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugVertexAttributeMode ____vertexAttributeDebugMode_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ___m_AlbedoDebugValidationPresetData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ___m_AlbedoValidationPreset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ____albedoMinLuminance_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ____albedoMaxLuminance_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ___m_AlbedoHueTolerance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ___m_AlbedoSaturationTolerance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ____albedoCompareColor_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ____metallicMinValue_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ____metallicMaxValue_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ____renderingLayersSelectedLight_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ____selectedLightShadowLayerMask_k__BackingField) == 0x45, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ____renderingLayerMask_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ___debugRenderingLayersColors) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ____materialValidationMode_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ____materialDebugMode_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, ____vertexAttributeDebugMode_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial, 0x68>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/AlbedoDebugValidationPreset");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsMaterial");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_SettingsPanel*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsMaterial/SettingsPanel");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_Strings*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsMaterial/Strings");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_WidgetFactory*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsMaterial/WidgetFactory");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/SettingsPanel/<>c__DisplayClass0_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_1);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsMaterial___c__DisplayClass0_1*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/SettingsPanel/<>c__DisplayClass0_1");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsMaterial/WidgetFactory/<>c");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass0_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass0_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass10_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass10_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass11_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass11_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass12_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass12_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass13_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass13_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass1_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass1_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass2_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass2_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass3_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass3_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass4_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass4_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass5_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass5_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass6_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass6_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass7_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass7_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass8_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass8_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsMaterial___c__DisplayClass9_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/WidgetFactory/<>c__DisplayClass9_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsMaterial/AlbedoDebugValidationPresetData");
