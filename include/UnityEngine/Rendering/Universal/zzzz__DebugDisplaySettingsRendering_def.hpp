#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugDisplaySettingsRendering.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugFullScreenMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugMipInfoMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugMipMapModeTerrainTexture_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugMipMapStatusMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugOverdrawMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugPostProcessingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugSceneOverrideMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugValidationMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugWireframeMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PixelValidationChannels_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsPanel_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugDisplaySettingsRendering)
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsRendering_SettingsPanel;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsRendering_Strings;
}
namespace UnityEngine::Rendering::Universal {
struct DebugDisplaySettingsRendering_TaaDebugMode;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsRendering_WidgetFactory;
}
namespace UnityEngine::Rendering::Universal {
struct DebugFullScreenMode;
}
namespace UnityEngine::Rendering::Universal {
struct DebugMipInfoMode;
}
namespace UnityEngine::Rendering::Universal {
struct DebugMipMapModeTerrainTexture;
}
namespace UnityEngine::Rendering::Universal {
struct DebugMipMapStatusMode;
}
namespace UnityEngine::Rendering::Universal {
struct DebugOverdrawMode;
}
namespace UnityEngine::Rendering::Universal {
struct DebugPostProcessingMode;
}
namespace UnityEngine::Rendering::Universal {
struct DebugSceneOverrideMode;
}
namespace UnityEngine::Rendering::Universal {
struct DebugValidationMode;
}
namespace UnityEngine::Rendering::Universal {
struct DebugWireframeMode;
}
namespace UnityEngine::Rendering::Universal {
struct PixelValidationChannels;
}
namespace UnityEngine::Rendering::Universal {
class SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0;
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
class GUIContent;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct DebugDisplaySettingsRendering_TaaDebugMode;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsRendering;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsRendering_SettingsPanel;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsRendering_Strings;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsRendering_WidgetFactory;
}
namespace UnityEngine::Rendering::Universal {
class SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0;
}
namespace UnityEngine::Rendering::Universal {
class WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/TaaDebugMode
struct CORDL_TYPE DebugDisplaySettingsRendering_TaaDebugMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugDisplaySettingsRendering_TaaDebugMode_Unwrapped
  enum struct __DebugDisplaySettingsRendering_TaaDebugMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ShowRawFrame = static_cast<int32_t>(0x1),
    __E_ShowRawFrameNoJitter = static_cast<int32_t>(0x2),
    __E_ShowClampedHistory = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugDisplaySettingsRendering_TaaDebugMode_Unwrapped() const noexcept {
    return static_cast<__DebugDisplaySettingsRendering_TaaDebugMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsRendering_TaaDebugMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugDisplaySettingsRendering_TaaDebugMode(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode const None;

  /// @brief Field ShowClampedHistory value: I32(3)
  static ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode const ShowClampedHistory;

  /// @brief Field ShowRawFrame value: I32(1)
  static ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode const ShowRawFrame;

  /// @brief Field ShowRawFrameNoJitter value: I32(2)
  static ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode const ShowRawFrameNoJitter;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12605 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.DebugUI::Widget::NameAndTooltip
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/Strings
class CORDL_TYPE DebugDisplaySettingsRendering_Strings : public ::System::Object {
public:
  // Declarations
  /// @brief Field AdditionalWireframeModes, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_AdditionalWireframeModes, put = setStaticF_AdditionalWireframeModes)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip AdditionalWireframeModes;

  /// @brief Field Channels, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_Channels, put = setStaticF_Channels)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip Channels;

  /// @brief Field HDR, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_HDR, put = setStaticF_HDR)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip HDR;

  /// @brief Field MSAA, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MSAA, put = setStaticF_MSAA)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip MSAA;

  /// @brief Field MapOverlays, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MapOverlays, put = setStaticF_MapOverlays)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip MapOverlays;

  /// @brief Field MapSize, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MapSize, put = setStaticF_MapSize)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip MapSize;

  /// @brief Field MaxOverdrawCount, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MaxOverdrawCount, put = setStaticF_MaxOverdrawCount)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip MaxOverdrawCount;

  /// @brief Field MipMapActivityTimespan, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MipMapActivityTimespan, put = setStaticF_MipMapActivityTimespan)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip MipMapActivityTimespan;

  /// @brief Field MipMapCombinePerMaterial, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MipMapCombinePerMaterial, put = setStaticF_MipMapCombinePerMaterial)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip MipMapCombinePerMaterial;

  /// @brief Field MipMapDebugOpacity, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MipMapDebugOpacity, put = setStaticF_MipMapDebugOpacity)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip MipMapDebugOpacity;

  /// @brief Field MipMapDebugView, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MipMapDebugView, put = setStaticF_MipMapDebugView)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip MipMapDebugView;

  /// @brief Field MipMapDisableMipCaching, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MipMapDisableMipCaching, put = setStaticF_MipMapDisableMipCaching)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip MipMapDisableMipCaching;

  /// @brief Field MipMapDisplayStatusCodes, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MipMapDisplayStatusCodes, put = setStaticF_MipMapDisplayStatusCodes)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip MipMapDisplayStatusCodes;

  /// @brief Field MipMapMaterialTextureSlot, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MipMapMaterialTextureSlot, put = setStaticF_MipMapMaterialTextureSlot)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip MipMapMaterialTextureSlot;

  /// @brief Field MipMapTerrainTexture, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MipMapTerrainTexture, put = setStaticF_MipMapTerrainTexture)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip MipMapTerrainTexture;

  /// @brief Field OverdrawMode, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_OverdrawMode, put = setStaticF_OverdrawMode)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip OverdrawMode;

  /// @brief Field PixelValidationMode, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_PixelValidationMode, put = setStaticF_PixelValidationMode)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip PixelValidationMode;

  /// @brief Field PostProcessing, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_PostProcessing, put = setStaticF_PostProcessing)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip PostProcessing;

  /// @brief Field StpDebugViews, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_StpDebugViews, put = setStaticF_StpDebugViews)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip StpDebugViews;

  /// @brief Field TaaDebugMode, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_TaaDebugMode, put = setStaticF_TaaDebugMode)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip TaaDebugMode;

  /// @brief Field ValueRangeMax, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_ValueRangeMax, put = setStaticF_ValueRangeMax)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip ValueRangeMax;

  /// @brief Field ValueRangeMin, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_ValueRangeMin, put = setStaticF_ValueRangeMin)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip ValueRangeMin;

  /// @brief Field WireframeNotSupportedWarning, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_WireframeNotSupportedWarning,
                      put = setStaticF_WireframeNotSupportedWarning)) ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip WireframeNotSupportedWarning;

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_AdditionalWireframeModes();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_Channels();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_HDR();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_MSAA();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_MapOverlays();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_MapSize();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_MaxOverdrawCount();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_MipMapActivityTimespan();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_MipMapCombinePerMaterial();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_MipMapDebugOpacity();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_MipMapDebugView();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_MipMapDisableMipCaching();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_MipMapDisplayStatusCodes();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_MipMapMaterialTextureSlot();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_MipMapTerrainTexture();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_OverdrawMode();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_PixelValidationMode();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_PostProcessing();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_StpDebugViews();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_TaaDebugMode();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_ValueRangeMax();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_ValueRangeMin();

  static inline ::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip getStaticF_WireframeNotSupportedWarning();

  static inline void setStaticF_AdditionalWireframeModes(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_Channels(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_HDR(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_MSAA(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_MapOverlays(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_MapSize(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_MaxOverdrawCount(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_MipMapActivityTimespan(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_MipMapCombinePerMaterial(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_MipMapDebugOpacity(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_MipMapDebugView(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_MipMapDisableMipCaching(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_MipMapDisplayStatusCodes(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_MipMapMaterialTextureSlot(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_MipMapTerrainTexture(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_OverdrawMode(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_PixelValidationMode(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_PostProcessing(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_StpDebugViews(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_TaaDebugMode(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_ValueRangeMax(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_ValueRangeMin(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

  static inline void setStaticF_WireframeNotSupportedWarning(::UnityEngine::Rendering::Widget_DebugUI_NameAndTooltip value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsRendering_Strings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsRendering_Strings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsRendering_Strings(DebugDisplaySettingsRendering_Strings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsRendering_Strings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsRendering_Strings(DebugDisplaySettingsRendering_Strings const&) = delete;

  /// @brief Field RangeValidationSettingsContainerName offset 0xffffffff size 0x8
  static constexpr ::ConstString RangeValidationSettingsContainerName{ u"Pixel Range Settings" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12606 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory/<>c
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsRendering___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c* __9;

  /// @brief Field <>9__11_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_3, put = setStaticF___9__11_3)) ::System::Func_1<float_t>* __9__11_3;

  /// @brief Field <>9__11_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_4, put = setStaticF___9__11_4)) ::System::Func_1<float_t>* __9__11_4;

  /// @brief Field <>9__16_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__16_4, put = setStaticF___9__16_4)) ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* __9__16_4;

  /// @brief Field <>9__17_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_4, put = setStaticF___9__17_4)) ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* __9__17_4;

  /// @brief Field <>9__2_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_2, put = setStaticF___9__2_2)) ::System::Func_1<int32_t>* __9__2_2;

  /// @brief Field <>9__2_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_3, put = setStaticF___9__2_3)) ::System::Func_1<int32_t>* __9__2_3;

  /// @brief Field <>9__3_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_4, put = setStaticF___9__3_4)) ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* __9__3_4;

  /// @brief Field <>9__6_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_3, put = setStaticF___9__6_3)) ::System::Func_1<int32_t>* __9__6_3;

  /// @brief Field <>9__6_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_4, put = setStaticF___9__6_4)) ::System::Func_1<int32_t>* __9__6_4;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0)) ::System::Func_1<bool>* __9__7_0;

  /// @brief Field <>9__7_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_1, put = setStaticF___9__7_1)) ::System::Action_1<bool>* __9__7_1;

  /// @brief Field <>9__9_10, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_10, put = setStaticF___9__9_10)) ::System::Func_1<bool>* __9__9_10;

  /// @brief Field <>9__9_4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_4, put = setStaticF___9__9_4)) ::System::Func_1<float_t>* __9__9_4;

  /// @brief Field <>9__9_5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_5, put = setStaticF___9__9_5)) ::System::Func_1<float_t>* __9__9_5;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c* New_ctor();

  /// @brief Method <CreateAdditionalWireframeShaderViews>b__3_4, addr 0x662bb28, size 0x7c, virtual false, abstract: false, final false
  inline void _CreateAdditionalWireframeShaderViews_b__3_4(::UnityEngine::Rendering::DebugUI_Field_1<int32_t>* _, int32_t __param_1);

  /// @brief Method <CreateMapOverlaySize>b__2_2, addr 0x662bb18, size 0x8, virtual false, abstract: false, final false
  inline int32_t _CreateMapOverlaySize_b__2_2();

  /// @brief Method <CreateMapOverlaySize>b__2_3, addr 0x662bb20, size 0x8, virtual false, abstract: false, final false
  inline int32_t _CreateMapOverlaySize_b__2_3();

  /// @brief Method <CreateMaxOverdrawCount>b__6_3, addr 0x662bba4, size 0x8, virtual false, abstract: false, final false
  inline int32_t _CreateMaxOverdrawCount_b__6_3();

  /// @brief Method <CreateMaxOverdrawCount>b__6_4, addr 0x662bbac, size 0x8, virtual false, abstract: false, final false
  inline int32_t _CreateMaxOverdrawCount_b__6_4();

  /// @brief Method <CreateMipMapDebugCooldownSlider>b__11_3, addr 0x662bcb0, size 0x8, virtual false, abstract: false, final false
  inline float_t _CreateMipMapDebugCooldownSlider_b__11_3();

  /// @brief Method <CreateMipMapDebugCooldownSlider>b__11_4, addr 0x662bcb8, size 0xc, virtual false, abstract: false, final false
  inline float_t _CreateMipMapDebugCooldownSlider_b__11_4();

  /// @brief Method <CreateMipMapDebugSettings>b__9_10, addr 0x662bca8, size 0x8, virtual false, abstract: false, final false
  inline bool _CreateMipMapDebugSettings_b__9_10();

  /// @brief Method <CreateMipMapDebugSettings>b__9_4, addr 0x662bc98, size 0x8, virtual false, abstract: false, final false
  inline float_t _CreateMipMapDebugSettings_b__9_4();

  /// @brief Method <CreateMipMapDebugSettings>b__9_5, addr 0x662bca0, size 0x8, virtual false, abstract: false, final false
  inline float_t _CreateMipMapDebugSettings_b__9_5();

  /// @brief Method <CreateMipMapDebugWidget>b__7_0, addr 0x662bbb4, size 0x6c, virtual false, abstract: false, final false
  inline bool _CreateMipMapDebugWidget_b__7_0();

  /// @brief Method <CreateMipMapDebugWidget>b__7_1, addr 0x662bc20, size 0x78, virtual false, abstract: false, final false
  inline void _CreateMipMapDebugWidget_b__7_1(bool value);

  /// @brief Method <CreatePixelValidationMode>b__17_4, addr 0x662bd40, size 0x7c, virtual false, abstract: false, final false
  inline void _CreatePixelValidationMode_b__17_4(::UnityEngine::Rendering::DebugUI_Field_1<int32_t>* _, int32_t __param_1);

  /// @brief Method <CreateTaaDebugMode>b__16_4, addr 0x662bcc4, size 0x7c, virtual false, abstract: false, final false
  inline void _CreateTaaDebugMode_b__16_4(::UnityEngine::Rendering::DebugUI_Field_1<int32_t>* _, int32_t __param_1);

  /// @brief Method .ctor, addr 0x662bb14, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c* getStaticF___9();

  static inline ::System::Func_1<float_t>* getStaticF___9__11_3();

  static inline ::System::Func_1<float_t>* getStaticF___9__11_4();

  static inline ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* getStaticF___9__16_4();

  static inline ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* getStaticF___9__17_4();

  static inline ::System::Func_1<int32_t>* getStaticF___9__2_2();

  static inline ::System::Func_1<int32_t>* getStaticF___9__2_3();

  static inline ::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* getStaticF___9__3_4();

  static inline ::System::Func_1<int32_t>* getStaticF___9__6_3();

  static inline ::System::Func_1<int32_t>* getStaticF___9__6_4();

  static inline ::System::Func_1<bool>* getStaticF___9__7_0();

  static inline ::System::Action_1<bool>* getStaticF___9__7_1();

  static inline ::System::Func_1<bool>* getStaticF___9__9_10();

  static inline ::System::Func_1<float_t>* getStaticF___9__9_4();

  static inline ::System::Func_1<float_t>* getStaticF___9__9_5();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c* value);

  static inline void setStaticF___9__11_3(::System::Func_1<float_t>* value);

  static inline void setStaticF___9__11_4(::System::Func_1<float_t>* value);

  static inline void setStaticF___9__16_4(::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* value);

  static inline void setStaticF___9__17_4(::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* value);

  static inline void setStaticF___9__2_2(::System::Func_1<int32_t>* value);

  static inline void setStaticF___9__2_3(::System::Func_1<int32_t>* value);

  static inline void setStaticF___9__3_4(::System::Action_2<::UnityEngine::Rendering::DebugUI_Field_1<int32_t>*, int32_t>* value);

  static inline void setStaticF___9__6_3(::System::Func_1<int32_t>* value);

  static inline void setStaticF___9__6_4(::System::Func_1<int32_t>* value);

  static inline void setStaticF___9__7_0(::System::Func_1<bool>* value);

  static inline void setStaticF___9__7_1(::System::Action_1<bool>* value);

  static inline void setStaticF___9__9_10(::System::Func_1<bool>* value);

  static inline void setStaticF___9__9_4(::System::Func_1<float_t>* value);

  static inline void setStaticF___9__9_5(::System::Func_1<float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsRendering___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsRendering___c(WidgetFactory_DebugDisplaySettingsRendering___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsRendering___c(WidgetFactory_DebugDisplaySettingsRendering___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12607 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass0_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0* New_ctor();

  /// @brief Method <CreateMapOverlays>b__0, addr 0x662bdbc, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateMapOverlays_b__0();

  /// @brief Method <CreateMapOverlays>b__1, addr 0x662be14, size 0x64, virtual false, abstract: false, final false
  inline void _CreateMapOverlays_b__1(int32_t value);

  /// @brief Method <CreateMapOverlays>b__2, addr 0x662be78, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateMapOverlays_b__2();

  /// @brief Method <CreateMapOverlays>b__3, addr 0x662bed0, size 0x64, virtual false, abstract: false, final false
  inline void _CreateMapOverlays_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x6627244, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12608 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass10_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0* New_ctor();

  /// @brief Method <CreateMipMapDebugSlotSelector>b__0, addr 0x662bf34, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateMipMapDebugSlotSelector_b__0();

  /// @brief Method <CreateMipMapDebugSlotSelector>b__1, addr 0x662bf8c, size 0x64, virtual false, abstract: false, final false
  inline void _CreateMipMapDebugSlotSelector_b__1(int32_t value);

  /// @brief Method <CreateMipMapDebugSlotSelector>b__2, addr 0x662bff0, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateMipMapDebugSlotSelector_b__2();

  /// @brief Method <CreateMipMapDebugSlotSelector>b__3, addr 0x662c048, size 0x64, virtual false, abstract: false, final false
  inline void _CreateMipMapDebugSlotSelector_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x662a384, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12609 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass11_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0* New_ctor();

  /// @brief Method <CreateMipMapDebugCooldownSlider>b__0, addr 0x662c0ac, size 0x60, virtual false, abstract: false, final false
  inline bool _CreateMipMapDebugCooldownSlider_b__0();

  /// @brief Method <CreateMipMapDebugCooldownSlider>b__1, addr 0x662c10c, size 0x58, virtual false, abstract: false, final false
  inline float_t _CreateMipMapDebugCooldownSlider_b__1();

  /// @brief Method <CreateMipMapDebugCooldownSlider>b__2, addr 0x662c164, size 0x64, virtual false, abstract: false, final false
  inline void _CreateMipMapDebugCooldownSlider_b__2(float_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x662a388, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12610 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass12_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0* New_ctor();

  /// @brief Method <CreateMipMapShowStatusCodeToggle>b__0, addr 0x662c1c8, size 0x60, virtual false, abstract: false, final false
  inline bool _CreateMipMapShowStatusCodeToggle_b__0();

  /// @brief Method <CreateMipMapShowStatusCodeToggle>b__1, addr 0x662c228, size 0x58, virtual false, abstract: false, final false
  inline bool _CreateMipMapShowStatusCodeToggle_b__1();

  /// @brief Method <CreateMipMapShowStatusCodeToggle>b__2, addr 0x662c280, size 0x68, virtual false, abstract: false, final false
  inline void _CreateMipMapShowStatusCodeToggle_b__2(bool value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x662a38c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12611 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass13_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0* New_ctor();

  /// @brief Method <CreatePostProcessing>b__0, addr 0x662c2e8, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreatePostProcessing_b__0();

  /// @brief Method <CreatePostProcessing>b__1, addr 0x662c340, size 0x64, virtual false, abstract: false, final false
  inline void _CreatePostProcessing_b__1(int32_t value);

  /// @brief Method <CreatePostProcessing>b__2, addr 0x662c3a4, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreatePostProcessing_b__2();

  /// @brief Method <CreatePostProcessing>b__3, addr 0x662c3fc, size 0x64, virtual false, abstract: false, final false
  inline void _CreatePostProcessing_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x662a6c4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12612 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass14_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0* New_ctor();

  /// @brief Method <CreateMSAA>b__0, addr 0x662c460, size 0x58, virtual false, abstract: false, final false
  inline bool _CreateMSAA_b__0();

  /// @brief Method <CreateMSAA>b__1, addr 0x662c4b8, size 0x68, virtual false, abstract: false, final false
  inline void _CreateMSAA_b__1(bool value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x662a8f4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12613 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass15_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0* New_ctor();

  /// @brief Method <CreateHDR>b__0, addr 0x662c520, size 0x58, virtual false, abstract: false, final false
  inline bool _CreateHDR_b__0();

  /// @brief Method <CreateHDR>b__1, addr 0x662c578, size 0x68, virtual false, abstract: false, final false
  inline void _CreateHDR_b__1(bool value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x662ab24, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12614 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass16_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0* New_ctor();

  /// @brief Method <CreateTaaDebugMode>b__0, addr 0x662c5e0, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateTaaDebugMode_b__0();

  /// @brief Method <CreateTaaDebugMode>b__1, addr 0x662c638, size 0x64, virtual false, abstract: false, final false
  inline void _CreateTaaDebugMode_b__1(int32_t value);

  /// @brief Method <CreateTaaDebugMode>b__2, addr 0x662c69c, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateTaaDebugMode_b__2();

  /// @brief Method <CreateTaaDebugMode>b__3, addr 0x662c6f4, size 0x64, virtual false, abstract: false, final false
  inline void _CreateTaaDebugMode_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x662af0c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12615 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass17_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0* New_ctor();

  /// @brief Method <CreatePixelValidationMode>b__0, addr 0x662c758, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreatePixelValidationMode_b__0();

  /// @brief Method <CreatePixelValidationMode>b__1, addr 0x662c7b0, size 0x64, virtual false, abstract: false, final false
  inline void _CreatePixelValidationMode_b__1(int32_t value);

  /// @brief Method <CreatePixelValidationMode>b__2, addr 0x662c814, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreatePixelValidationMode_b__2();

  /// @brief Method <CreatePixelValidationMode>b__3, addr 0x662c86c, size 0x64, virtual false, abstract: false, final false
  inline void _CreatePixelValidationMode_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x662b2f4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12616 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass18_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0* New_ctor();

  /// @brief Method <CreatePixelValidationChannels>b__0, addr 0x662c8d0, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreatePixelValidationChannels_b__0();

  /// @brief Method <CreatePixelValidationChannels>b__1, addr 0x662c928, size 0x64, virtual false, abstract: false, final false
  inline void _CreatePixelValidationChannels_b__1(int32_t value);

  /// @brief Method <CreatePixelValidationChannels>b__2, addr 0x662c98c, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreatePixelValidationChannels_b__2();

  /// @brief Method <CreatePixelValidationChannels>b__3, addr 0x662c9e4, size 0x64, virtual false, abstract: false, final false
  inline void _CreatePixelValidationChannels_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x662b62c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12617 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass19_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0* New_ctor();

  /// @brief Method <CreatePixelValueRangeMin>b__0, addr 0x662ca48, size 0x58, virtual false, abstract: false, final false
  inline float_t _CreatePixelValueRangeMin_b__0();

  /// @brief Method <CreatePixelValueRangeMin>b__1, addr 0x662caa0, size 0x64, virtual false, abstract: false, final false
  inline void _CreatePixelValueRangeMin_b__1(float_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x662b874, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12618 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass1_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0* New_ctor();

  /// @brief Method <CreateStpDebugViews>b__0, addr 0x662cb04, size 0x60, virtual false, abstract: false, final false
  inline bool _CreateStpDebugViews_b__0();

  /// @brief Method <CreateStpDebugViews>b__1, addr 0x662cb64, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateStpDebugViews_b__1();

  /// @brief Method <CreateStpDebugViews>b__2, addr 0x662cbbc, size 0x64, virtual false, abstract: false, final false
  inline void _CreateStpDebugViews_b__2(int32_t value);

  /// @brief Method <CreateStpDebugViews>b__3, addr 0x662cc20, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateStpDebugViews_b__3();

  /// @brief Method <CreateStpDebugViews>b__4, addr 0x662cc78, size 0x64, virtual false, abstract: false, final false
  inline void _CreateStpDebugViews_b__4(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x6627694, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12619 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass20_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0* New_ctor();

  /// @brief Method <CreatePixelValueRangeMax>b__0, addr 0x662ccdc, size 0x58, virtual false, abstract: false, final false
  inline float_t _CreatePixelValueRangeMax_b__0();

  /// @brief Method <CreatePixelValueRangeMax>b__1, addr 0x662cd34, size 0x64, virtual false, abstract: false, final false
  inline void _CreatePixelValueRangeMax_b__1(float_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x662babc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12620 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass2_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0* New_ctor();

  /// @brief Method <CreateMapOverlaySize>b__0, addr 0x662cd98, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateMapOverlaySize_b__0();

  /// @brief Method <CreateMapOverlaySize>b__1, addr 0x662cdf0, size 0x64, virtual false, abstract: false, final false
  inline void _CreateMapOverlaySize_b__1(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x6627a48, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12621 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass3_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0* New_ctor();

  /// @brief Method <CreateAdditionalWireframeShaderViews>b__0, addr 0x662ce54, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateAdditionalWireframeShaderViews_b__0();

  /// @brief Method <CreateAdditionalWireframeShaderViews>b__1, addr 0x662ceac, size 0x88, virtual false, abstract: false, final false
  inline void _CreateAdditionalWireframeShaderViews_b__1(int32_t value);

  /// @brief Method <CreateAdditionalWireframeShaderViews>b__2, addr 0x662cf34, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateAdditionalWireframeShaderViews_b__2();

  /// @brief Method <CreateAdditionalWireframeShaderViews>b__3, addr 0x662cf8c, size 0x88, virtual false, abstract: false, final false
  inline void _CreateAdditionalWireframeShaderViews_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x6627e30, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12622 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass4_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0* New_ctor();

  /// @brief Method <CreateWireframeNotSupportedWarning>b__0, addr 0x662d014, size 0x98, virtual false, abstract: false, final false
  inline bool _CreateWireframeNotSupportedWarning_b__0();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x6627f88, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12623 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass5_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0* New_ctor();

  /// @brief Method <CreateOverdrawMode>b__0, addr 0x662d0ac, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateOverdrawMode_b__0();

  /// @brief Method <CreateOverdrawMode>b__1, addr 0x662d104, size 0x80, virtual false, abstract: false, final false
  inline void _CreateOverdrawMode_b__1(int32_t value);

  /// @brief Method <CreateOverdrawMode>b__2, addr 0x662d184, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateOverdrawMode_b__2();

  /// @brief Method <CreateOverdrawMode>b__3, addr 0x662d1dc, size 0x80, virtual false, abstract: false, final false
  inline void _CreateOverdrawMode_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x66282c0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12624 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass6_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0* New_ctor();

  /// @brief Method <CreateMaxOverdrawCount>b__0, addr 0x662d25c, size 0x60, virtual false, abstract: false, final false
  inline bool _CreateMaxOverdrawCount_b__0();

  /// @brief Method <CreateMaxOverdrawCount>b__1, addr 0x662d2bc, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateMaxOverdrawCount_b__1();

  /// @brief Method <CreateMaxOverdrawCount>b__2, addr 0x662d314, size 0x64, virtual false, abstract: false, final false
  inline void _CreateMaxOverdrawCount_b__2(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x66286fc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12625 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass8_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0* New_ctor();

  /// @brief Method <CreateMipMapMode>b__0, addr 0x662d378, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateMipMapMode_b__0();

  /// @brief Method <CreateMipMapMode>b__1, addr 0x662d3d0, size 0x64, virtual false, abstract: false, final false
  inline void _CreateMipMapMode_b__1(int32_t value);

  /// @brief Method <CreateMipMapMode>b__2, addr 0x662d434, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateMipMapMode_b__2();

  /// @brief Method <CreateMipMapMode>b__3, addr 0x662d48c, size 0x64, virtual false, abstract: false, final false
  inline void _CreateMipMapMode_b__3(int32_t value);

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x66299f0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12626 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass9_0
class CORDL_TYPE WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field panel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_panel, put = __cordl_internal_set_panel)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel;

  static inline ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0* New_ctor();

  /// @brief Method <CreateMipMapDebugSettings>b__0, addr 0x662d4f0, size 0x60, virtual false, abstract: false, final false
  inline bool _CreateMipMapDebugSettings_b__0();

  /// @brief Method <CreateMipMapDebugSettings>b__1, addr 0x662d60c, size 0x64, virtual false, abstract: false, final false
  inline bool _CreateMipMapDebugSettings_b__1();

  /// @brief Method <CreateMipMapDebugSettings>b__11, addr 0x662d818, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateMipMapDebugSettings_b__11();

  /// @brief Method <CreateMipMapDebugSettings>b__12, addr 0x662d870, size 0x64, virtual false, abstract: false, final false
  inline void _CreateMipMapDebugSettings_b__12(int32_t value);

  /// @brief Method <CreateMipMapDebugSettings>b__13, addr 0x662d8d4, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CreateMipMapDebugSettings_b__13();

  /// @brief Method <CreateMipMapDebugSettings>b__14, addr 0x662d92c, size 0x64, virtual false, abstract: false, final false
  inline void _CreateMipMapDebugSettings_b__14(int32_t value);

  /// @brief Method <CreateMipMapDebugSettings>b__2, addr 0x662d550, size 0x58, virtual false, abstract: false, final false
  inline float_t _CreateMipMapDebugSettings_b__2();

  /// @brief Method <CreateMipMapDebugSettings>b__3, addr 0x662d5a8, size 0x64, virtual false, abstract: false, final false
  inline void _CreateMipMapDebugSettings_b__3(float_t value);

  /// @brief Method <CreateMipMapDebugSettings>b__6, addr 0x662d670, size 0x64, virtual false, abstract: false, final false
  inline bool _CreateMipMapDebugSettings_b__6();

  /// @brief Method <CreateMipMapDebugSettings>b__7, addr 0x662d6d4, size 0x58, virtual false, abstract: false, final false
  inline bool _CreateMipMapDebugSettings_b__7();

  /// @brief Method <CreateMipMapDebugSettings>b__8, addr 0x662d72c, size 0x74, virtual false, abstract: false, final false
  inline void _CreateMipMapDebugSettings_b__8(bool value);

  /// @brief Method <CreateMipMapDebugSettings>b__9, addr 0x662d7a0, size 0x78, virtual false, abstract: false, final false
  inline bool _CreateMipMapDebugSettings_b__9();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* const& __cordl_internal_get_panel() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*& __cordl_internal_get_panel();

  constexpr void __cordl_internal_set_panel(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* value);

  /// @brief Method .ctor, addr 0x66299f4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0(WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12627 };

  /// @brief Field panel, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* ___panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0, ___panel) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory
class CORDL_TYPE DebugDisplaySettingsRendering_WidgetFactory : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c;

  using __c__DisplayClass0_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0;

  using __c__DisplayClass10_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0;

  using __c__DisplayClass11_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0;

  using __c__DisplayClass12_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0;

  using __c__DisplayClass13_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0;

  using __c__DisplayClass14_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0;

  using __c__DisplayClass15_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0;

  using __c__DisplayClass16_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0;

  using __c__DisplayClass17_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0;

  using __c__DisplayClass18_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0;

  using __c__DisplayClass19_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0;

  using __c__DisplayClass1_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0;

  using __c__DisplayClass20_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0;

  using __c__DisplayClass2_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0;

  using __c__DisplayClass3_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0;

  using __c__DisplayClass4_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0;

  using __c__DisplayClass5_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0;

  using __c__DisplayClass6_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0;

  using __c__DisplayClass8_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0;

  using __c__DisplayClass9_0 = ::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0;

  /// @brief Method CreateAdditionalWireframeShaderViews, addr 0x6627a4c, size 0x3e4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateAdditionalWireframeShaderViews(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel);

  /// @brief Method CreateHDR, addr 0x662a8f8, size 0x22c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateHDR(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel);

  /// @brief Method CreateMSAA, addr 0x662a6c8, size 0x22c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateMSAA(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel);

  /// @brief Method CreateMapOverlaySize, addr 0x6627698, size 0x3b0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateMapOverlaySize(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel);

  /// @brief Method CreateMapOverlays, addr 0x6626f10, size 0x334, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateMapOverlays(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel);

  /// @brief Method CreateMaxOverdrawCount, addr 0x66282c4, size 0x438, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateMaxOverdrawCount(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel);

  /// @brief Method CreateMipMapDebugCooldownSlider, addr 0x6629fb4, size 0x3d0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateMipMapDebugCooldownSlider(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel);

  /// @brief Method CreateMipMapDebugSettings, addr 0x6628d24, size 0xccc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateMipMapDebugSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel);

  /// @brief Method CreateMipMapDebugSlotSelector, addr 0x66299f8, size 0x328, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateMipMapDebugSlotSelector(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel,
                                                                                        ::System::Func_1<bool>* hiddenCB,
                                                                                        ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> texSlotStrings,
                                                                                        ::ArrayW<int32_t, ::Array<int32_t>*> texSlotValues);

  /// @brief Method CreateMipMapDebugWidget, addr 0x6628700, size 0x2f0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateMipMapDebugWidget(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel);

  /// @brief Method CreateMipMapMode, addr 0x66289f0, size 0x334, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateMipMapMode(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel);

  /// @brief Method CreateMipMapShowStatusCodeToggle, addr 0x6629d20, size 0x294, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateMipMapShowStatusCodeToggle(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel);

  /// @brief Method CreateOverdrawMode, addr 0x6627f8c, size 0x334, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateOverdrawMode(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel);

  /// @brief Method CreatePixelValidationChannels, addr 0x662b2f8, size 0x334, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreatePixelValidationChannels(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel);

  /// @brief Method CreatePixelValidationMode, addr 0x662af10, size 0x3e4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreatePixelValidationMode(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel);

  /// @brief Method CreatePixelValueRangeMax, addr 0x662b878, size 0x244, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreatePixelValueRangeMax(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel);

  /// @brief Method CreatePixelValueRangeMin, addr 0x662b630, size 0x244, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreatePixelValueRangeMin(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel);

  /// @brief Method CreatePostProcessing, addr 0x662a390, size 0x334, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreatePostProcessing(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel);

  /// @brief Method CreateStpDebugViews, addr 0x6627248, size 0x44c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateStpDebugViews(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel);

  /// @brief Method CreateTaaDebugMode, addr 0x662ab28, size 0x3e4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateTaaDebugMode(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel);

  /// @brief Method CreateWireframeNotSupportedWarning, addr 0x6627e34, size 0x154, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DebugUI_Widget* CreateWireframeNotSupportedWarning(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* panel);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsRendering_WidgetFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsRendering_WidgetFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsRendering_WidgetFactory(DebugDisplaySettingsRendering_WidgetFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsRendering_WidgetFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsRendering_WidgetFactory(DebugDisplaySettingsRendering_WidgetFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12628 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/SettingsPanel/<>c__DisplayClass0_0
class CORDL_TYPE SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data;

  static inline ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* const& __cordl_internal_get_data() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& __cordl_internal_get_data();

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value);

  /// @brief Method <.ctor>b__0, addr 0x662d994, size 0x20, virtual false, abstract: false, final false
  inline bool __ctor_b__0();

  /// @brief Method .ctor, addr 0x662d990, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0(SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0(SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12629 };

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0, ___data) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.DebugDisplaySettingsPanel`1<T>
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/SettingsPanel
class CORDL_TYPE DebugDisplaySettingsRendering_SettingsPanel : public ::UnityEngine::Rendering::DebugDisplaySettingsPanel_1<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*> {
public:
  // Declarations
  using __c__DisplayClass0_0 = ::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0;

  static inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel* New_ctor(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data);

  /// @brief Method .ctor, addr 0x6626368, size 0x564, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* data);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsRendering_SettingsPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsRendering_SettingsPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsRendering_SettingsPanel(DebugDisplaySettingsRendering_SettingsPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsRendering_SettingsPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsRendering_SettingsPanel(DebugDisplaySettingsRendering_SettingsPanel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12630 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering::TaaDebugMode, UnityEngine.Rendering.Universal.DebugFullScreenMode,
// UnityEngine.Rendering.Universal.DebugMipInfoMode, UnityEngine.Rendering.Universal.DebugMipMapModeTerrainTexture, UnityEngine.Rendering.Universal.DebugMipMapStatusMode,
// UnityEngine.Rendering.Universal.DebugOverdrawMode, UnityEngine.Rendering.Universal.DebugPostProcessingMode, UnityEngine.Rendering.Universal.DebugSceneOverrideMode,
// UnityEngine.Rendering.Universal.DebugValidationMode, UnityEngine.Rendering.Universal.DebugWireframeMode, UnityEngine.Rendering.Universal.PixelValidationChannels
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering
class CORDL_TYPE DebugDisplaySettingsRendering : public ::System::Object {
public:
  // Declarations
  using SettingsPanel = ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel;

  using Strings = ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings;

  using TaaDebugMode = ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode;

  using WidgetFactory = ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory;

  __declspec(property(get = get_AreAnySettingsActive)) bool AreAnySettingsActive;

  __declspec(property(get = get_IsLightingActive)) bool IsLightingActive;

  __declspec(property(get = get_IsPostProcessingAllowed)) bool IsPostProcessingAllowed;

  /// @brief Field <enableHDR>k__BackingField, offset 0x55, size 0x1
  __declspec(property(get = __cordl_internal_get__enableHDR_k__BackingField, put = __cordl_internal_set__enableHDR_k__BackingField)) bool _enableHDR_k__BackingField;

  /// @brief Field <enableMsaa>k__BackingField, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get__enableMsaa_k__BackingField, put = __cordl_internal_set__enableMsaa_k__BackingField)) bool _enableMsaa_k__BackingField;

  /// @brief Field <fullScreenDebugModeOutputSizeScreenPercent>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__fullScreenDebugModeOutputSizeScreenPercent_k__BackingField,
                      put = __cordl_internal_set__fullScreenDebugModeOutputSizeScreenPercent_k__BackingField)) int32_t _fullScreenDebugModeOutputSizeScreenPercent_k__BackingField;

  /// @brief Field <fullScreenDebugMode>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__fullScreenDebugMode_k__BackingField,
                      put = __cordl_internal_set__fullScreenDebugMode_k__BackingField)) ::UnityEngine::Rendering::Universal::DebugFullScreenMode _fullScreenDebugMode_k__BackingField;

  /// @brief Field <maxOverdrawCount>k__BackingField, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__maxOverdrawCount_k__BackingField, put = __cordl_internal_set__maxOverdrawCount_k__BackingField)) int32_t _maxOverdrawCount_k__BackingField;

  /// @brief Field <mipDebugMaterialTextureSlot>k__BackingField, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__mipDebugMaterialTextureSlot_k__BackingField,
                      put = __cordl_internal_set__mipDebugMaterialTextureSlot_k__BackingField)) int32_t _mipDebugMaterialTextureSlot_k__BackingField;

  /// @brief Field <mipDebugOpacity>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__mipDebugOpacity_k__BackingField, put = __cordl_internal_set__mipDebugOpacity_k__BackingField)) float_t _mipDebugOpacity_k__BackingField;

  /// @brief Field <mipDebugRecentUpdateCooldown>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__mipDebugRecentUpdateCooldown_k__BackingField,
                      put = __cordl_internal_set__mipDebugRecentUpdateCooldown_k__BackingField)) float_t _mipDebugRecentUpdateCooldown_k__BackingField;

  /// @brief Field <mipDebugStatusMode>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__mipDebugStatusMode_k__BackingField,
                      put = __cordl_internal_set__mipDebugStatusMode_k__BackingField)) ::UnityEngine::Rendering::Universal::DebugMipMapStatusMode _mipDebugStatusMode_k__BackingField;

  /// @brief Field <mipDebugStatusShowCode>k__BackingField, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__mipDebugStatusShowCode_k__BackingField,
                      put = __cordl_internal_set__mipDebugStatusShowCode_k__BackingField)) bool _mipDebugStatusShowCode_k__BackingField;

  /// @brief Field <mipDebugTerrainTexture>k__BackingField, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__mipDebugTerrainTexture_k__BackingField,
                      put = __cordl_internal_set__mipDebugTerrainTexture_k__BackingField)) ::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture _mipDebugTerrainTexture_k__BackingField;

  /// @brief Field <mipInfoMode>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__mipInfoMode_k__BackingField,
                      put = __cordl_internal_set__mipInfoMode_k__BackingField)) ::UnityEngine::Rendering::Universal::DebugMipInfoMode _mipInfoMode_k__BackingField;

  /// @brief Field <postProcessingDebugMode>k__BackingField, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__postProcessingDebugMode_k__BackingField,
                      put = __cordl_internal_set__postProcessingDebugMode_k__BackingField)) ::UnityEngine::Rendering::Universal::DebugPostProcessingMode _postProcessingDebugMode_k__BackingField;

  /// @brief Field <sceneOverrideMode>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__sceneOverrideMode_k__BackingField,
                      put = __cordl_internal_set__sceneOverrideMode_k__BackingField)) ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode _sceneOverrideMode_k__BackingField;

  /// @brief Field <showInfoForAllSlots>k__BackingField, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__showInfoForAllSlots_k__BackingField, put = __cordl_internal_set__showInfoForAllSlots_k__BackingField)) bool _showInfoForAllSlots_k__BackingField;

  /// @brief Field <stpDebugViewIndex>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__stpDebugViewIndex_k__BackingField, put = __cordl_internal_set__stpDebugViewIndex_k__BackingField)) int32_t _stpDebugViewIndex_k__BackingField;

  /// @brief Field <taaDebugMode>k__BackingField, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__taaDebugMode_k__BackingField,
                      put = __cordl_internal_set__taaDebugMode_k__BackingField)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode _taaDebugMode_k__BackingField;

  /// @brief Field <validationChannels>k__BackingField, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__validationChannels_k__BackingField,
                      put = __cordl_internal_set__validationChannels_k__BackingField)) ::UnityEngine::Rendering::Universal::PixelValidationChannels _validationChannels_k__BackingField;

  /// @brief Field <validationMode>k__BackingField, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__validationMode_k__BackingField,
                      put = __cordl_internal_set__validationMode_k__BackingField)) ::UnityEngine::Rendering::Universal::DebugValidationMode _validationMode_k__BackingField;

  /// @brief Field <validationRangeMax>k__BackingField, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__validationRangeMax_k__BackingField, put = __cordl_internal_set__validationRangeMax_k__BackingField)) float_t _validationRangeMax_k__BackingField;

  /// @brief Field <validationRangeMin>k__BackingField, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__validationRangeMin_k__BackingField, put = __cordl_internal_set__validationRangeMin_k__BackingField)) float_t _validationRangeMin_k__BackingField;

  __declspec(property(get = get_canAggregateData)) bool canAggregateData;

  __declspec(property(get = get_enableHDR, put = set_enableHDR)) bool enableHDR;

  __declspec(property(get = get_enableMsaa, put = set_enableMsaa)) bool enableMsaa;

  __declspec(property(get = get_fullScreenDebugMode, put = set_fullScreenDebugMode)) ::UnityEngine::Rendering::Universal::DebugFullScreenMode fullScreenDebugMode;

  __declspec(property(get = get_fullScreenDebugModeOutputSizeScreenPercent, put = set_fullScreenDebugModeOutputSizeScreenPercent)) int32_t fullScreenDebugModeOutputSizeScreenPercent;

  /// @brief Field m_Overdraw, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Overdraw, put = __cordl_internal_set_m_Overdraw)) bool m_Overdraw;

  /// @brief Field m_OverdrawMode, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_OverdrawMode, put = __cordl_internal_set_m_OverdrawMode)) ::UnityEngine::Rendering::Universal::DebugOverdrawMode m_OverdrawMode;

  /// @brief Field m_WireframeMode, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_WireframeMode, put = __cordl_internal_set_m_WireframeMode)) ::UnityEngine::Rendering::Universal::DebugWireframeMode m_WireframeMode;

  __declspec(property(get = get_maxOverdrawCount, put = set_maxOverdrawCount)) int32_t maxOverdrawCount;

  __declspec(property(get = get_mipDebugMaterialTextureSlot, put = set_mipDebugMaterialTextureSlot)) int32_t mipDebugMaterialTextureSlot;

  __declspec(property(get = get_mipDebugOpacity, put = set_mipDebugOpacity)) float_t mipDebugOpacity;

  __declspec(property(get = get_mipDebugRecentUpdateCooldown, put = set_mipDebugRecentUpdateCooldown)) float_t mipDebugRecentUpdateCooldown;

  __declspec(property(get = get_mipDebugStatusMode, put = set_mipDebugStatusMode)) ::UnityEngine::Rendering::Universal::DebugMipMapStatusMode mipDebugStatusMode;

  __declspec(property(get = get_mipDebugStatusShowCode, put = set_mipDebugStatusShowCode)) bool mipDebugStatusShowCode;

  __declspec(property(get = get_mipDebugTerrainTexture, put = set_mipDebugTerrainTexture)) ::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture mipDebugTerrainTexture;

  __declspec(property(get = get_mipInfoMode, put = set_mipInfoMode)) ::UnityEngine::Rendering::Universal::DebugMipInfoMode mipInfoMode;

  __declspec(property(get = get_overdraw, put = set_overdraw)) bool overdraw;

  __declspec(property(get = get_overdrawMode, put = set_overdrawMode)) ::UnityEngine::Rendering::Universal::DebugOverdrawMode overdrawMode;

  __declspec(property(get = get_postProcessingDebugMode, put = set_postProcessingDebugMode)) ::UnityEngine::Rendering::Universal::DebugPostProcessingMode postProcessingDebugMode;

  __declspec(property(get = get_sceneOverrideMode, put = set_sceneOverrideMode)) ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode sceneOverrideMode;

  __declspec(property(get = get_showInfoForAllSlots, put = set_showInfoForAllSlots)) bool showInfoForAllSlots;

  __declspec(property(get = get_stpDebugViewIndex, put = set_stpDebugViewIndex)) int32_t stpDebugViewIndex;

  __declspec(property(get = get_taaDebugMode, put = set_taaDebugMode)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode taaDebugMode;

  __declspec(property(get = get_validationChannels, put = set_validationChannels)) ::UnityEngine::Rendering::Universal::PixelValidationChannels validationChannels;

  __declspec(property(get = get_validationMode, put = set_validationMode)) ::UnityEngine::Rendering::Universal::DebugValidationMode validationMode;

  __declspec(property(get = get_validationRangeMax, put = set_validationRangeMax)) float_t validationRangeMax;

  __declspec(property(get = get_validationRangeMin, put = set_validationRangeMin)) float_t validationRangeMin;

  __declspec(property(get = get_wireframeMode, put = set_wireframeMode)) ::UnityEngine::Rendering::Universal::DebugWireframeMode wireframeMode;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsData*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsQuery*() noexcept;

  static inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* New_ctor();

  /// @brief Method TryGetScreenClearColor, addr 0x6626258, size 0xb4, virtual true, abstract: false, final true
  inline bool TryGetScreenClearColor(::ByRef<::UnityEngine::Color> color);

  /// @brief Method UnityEngine.Rendering.IDebugDisplaySettingsData.CreatePanel, addr 0x662630c, size 0x5c, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel();

  /// @brief Method UpdateDebugSceneOverrideMode, addr 0x6625fc8, size 0x2c, virtual false, abstract: false, final false
  inline void UpdateDebugSceneOverrideMode();

  constexpr bool const& __cordl_internal_get__enableHDR_k__BackingField() const;

  constexpr bool& __cordl_internal_get__enableHDR_k__BackingField();

  constexpr bool const& __cordl_internal_get__enableMsaa_k__BackingField() const;

  constexpr bool& __cordl_internal_get__enableMsaa_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__fullScreenDebugModeOutputSizeScreenPercent_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__fullScreenDebugModeOutputSizeScreenPercent_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::DebugFullScreenMode const& __cordl_internal_get__fullScreenDebugMode_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugFullScreenMode& __cordl_internal_get__fullScreenDebugMode_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__maxOverdrawCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__maxOverdrawCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__mipDebugMaterialTextureSlot_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__mipDebugMaterialTextureSlot_k__BackingField();

  constexpr float_t const& __cordl_internal_get__mipDebugOpacity_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__mipDebugOpacity_k__BackingField();

  constexpr float_t const& __cordl_internal_get__mipDebugRecentUpdateCooldown_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__mipDebugRecentUpdateCooldown_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::DebugMipMapStatusMode const& __cordl_internal_get__mipDebugStatusMode_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugMipMapStatusMode& __cordl_internal_get__mipDebugStatusMode_k__BackingField();

  constexpr bool const& __cordl_internal_get__mipDebugStatusShowCode_k__BackingField() const;

  constexpr bool& __cordl_internal_get__mipDebugStatusShowCode_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture const& __cordl_internal_get__mipDebugTerrainTexture_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture& __cordl_internal_get__mipDebugTerrainTexture_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::DebugMipInfoMode const& __cordl_internal_get__mipInfoMode_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugMipInfoMode& __cordl_internal_get__mipInfoMode_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::DebugPostProcessingMode const& __cordl_internal_get__postProcessingDebugMode_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugPostProcessingMode& __cordl_internal_get__postProcessingDebugMode_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode const& __cordl_internal_get__sceneOverrideMode_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode& __cordl_internal_get__sceneOverrideMode_k__BackingField();

  constexpr bool const& __cordl_internal_get__showInfoForAllSlots_k__BackingField() const;

  constexpr bool& __cordl_internal_get__showInfoForAllSlots_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__stpDebugViewIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__stpDebugViewIndex_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode const& __cordl_internal_get__taaDebugMode_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode& __cordl_internal_get__taaDebugMode_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::PixelValidationChannels const& __cordl_internal_get__validationChannels_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::PixelValidationChannels& __cordl_internal_get__validationChannels_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::DebugValidationMode const& __cordl_internal_get__validationMode_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugValidationMode& __cordl_internal_get__validationMode_k__BackingField();

  constexpr float_t const& __cordl_internal_get__validationRangeMax_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__validationRangeMax_k__BackingField();

  constexpr float_t const& __cordl_internal_get__validationRangeMin_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__validationRangeMin_k__BackingField();

  constexpr bool const& __cordl_internal_get_m_Overdraw() const;

  constexpr bool& __cordl_internal_get_m_Overdraw();

  constexpr ::UnityEngine::Rendering::Universal::DebugOverdrawMode const& __cordl_internal_get_m_OverdrawMode() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugOverdrawMode& __cordl_internal_get_m_OverdrawMode();

  constexpr ::UnityEngine::Rendering::Universal::DebugWireframeMode const& __cordl_internal_get_m_WireframeMode() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugWireframeMode& __cordl_internal_get_m_WireframeMode();

  constexpr void __cordl_internal_set__enableHDR_k__BackingField(bool value);

  constexpr void __cordl_internal_set__enableMsaa_k__BackingField(bool value);

  constexpr void __cordl_internal_set__fullScreenDebugModeOutputSizeScreenPercent_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__fullScreenDebugMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugFullScreenMode value);

  constexpr void __cordl_internal_set__maxOverdrawCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__mipDebugMaterialTextureSlot_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__mipDebugOpacity_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__mipDebugRecentUpdateCooldown_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__mipDebugStatusMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugMipMapStatusMode value);

  constexpr void __cordl_internal_set__mipDebugStatusShowCode_k__BackingField(bool value);

  constexpr void __cordl_internal_set__mipDebugTerrainTexture_k__BackingField(::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture value);

  constexpr void __cordl_internal_set__mipInfoMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugMipInfoMode value);

  constexpr void __cordl_internal_set__postProcessingDebugMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugPostProcessingMode value);

  constexpr void __cordl_internal_set__sceneOverrideMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugSceneOverrideMode value);

  constexpr void __cordl_internal_set__showInfoForAllSlots_k__BackingField(bool value);

  constexpr void __cordl_internal_set__stpDebugViewIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__taaDebugMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode value);

  constexpr void __cordl_internal_set__validationChannels_k__BackingField(::UnityEngine::Rendering::Universal::PixelValidationChannels value);

  constexpr void __cordl_internal_set__validationMode_k__BackingField(::UnityEngine::Rendering::Universal::DebugValidationMode value);

  constexpr void __cordl_internal_set__validationRangeMax_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__validationRangeMin_k__BackingField(float_t value);

  constexpr void __cordl_internal_set_m_Overdraw(bool value);

  constexpr void __cordl_internal_set_m_OverdrawMode(::UnityEngine::Rendering::Universal::DebugOverdrawMode value);

  constexpr void __cordl_internal_set_m_WireframeMode(::UnityEngine::Rendering::Universal::DebugWireframeMode value);

  /// @brief Method .ctor, addr 0x66268cc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AreAnySettingsActive, addr 0x66261bc, size 0x54, virtual true, abstract: false, final true
  inline bool get_AreAnySettingsActive();

  /// @brief Method get_IsLightingActive, addr 0x6626238, size 0x20, virtual true, abstract: false, final true
  inline bool get_IsLightingActive();

  /// @brief Method get_IsPostProcessingAllowed, addr 0x6626210, size 0x28, virtual true, abstract: false, final true
  inline bool get_IsPostProcessingAllowed();

  /// @brief Method get_canAggregateData, addr 0x6626118, size 0x14, virtual false, abstract: false, final false
  inline bool get_canAggregateData();

  /// @brief Method get_enableHDR, addr 0x662615c, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableHDR();

  /// @brief Method get_enableMsaa, addr 0x662614c, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableMsaa();

  /// @brief Method get_fullScreenDebugMode, addr 0x6626068, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugFullScreenMode get_fullScreenDebugMode();

  /// @brief Method get_fullScreenDebugModeOutputSizeScreenPercent, addr 0x6626088, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_fullScreenDebugModeOutputSizeScreenPercent();

  /// @brief Method get_maxOverdrawCount, addr 0x6626058, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxOverdrawCount();

  /// @brief Method get_mipDebugMaterialTextureSlot, addr 0x66260f8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_mipDebugMaterialTextureSlot();

  /// @brief Method get_mipDebugOpacity, addr 0x66260d8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_mipDebugOpacity();

  /// @brief Method get_mipDebugRecentUpdateCooldown, addr 0x66260e8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_mipDebugRecentUpdateCooldown();

  /// @brief Method get_mipDebugStatusMode, addr 0x66260c8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugMipMapStatusMode get_mipDebugStatusMode();

  /// @brief Method get_mipDebugStatusShowCode, addr 0x66260b8, size 0x8, virtual false, abstract: false, final false
  inline bool get_mipDebugStatusShowCode();

  /// @brief Method get_mipDebugTerrainTexture, addr 0x662612c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture get_mipDebugTerrainTexture();

  /// @brief Method get_mipInfoMode, addr 0x66260a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugMipInfoMode get_mipInfoMode();

  /// @brief Method get_overdraw, addr 0x6625ff4, size 0x8, virtual false, abstract: false, final false
  inline bool get_overdraw();

  /// @brief Method get_overdrawMode, addr 0x662602c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugOverdrawMode get_overdrawMode();

  /// @brief Method get_postProcessingDebugMode, addr 0x662613c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugPostProcessingMode get_postProcessingDebugMode();

  /// @brief Method get_sceneOverrideMode, addr 0x6626098, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode get_sceneOverrideMode();

  /// @brief Method get_showInfoForAllSlots, addr 0x6626108, size 0x8, virtual false, abstract: false, final false
  inline bool get_showInfoForAllSlots();

  /// @brief Method get_stpDebugViewIndex, addr 0x6626078, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_stpDebugViewIndex();

  /// @brief Method get_taaDebugMode, addr 0x662616c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode get_taaDebugMode();

  /// @brief Method get_validationChannels, addr 0x662618c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::PixelValidationChannels get_validationChannels();

  /// @brief Method get_validationMode, addr 0x662617c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugValidationMode get_validationMode();

  /// @brief Method get_validationRangeMax, addr 0x66261ac, size 0x8, virtual false, abstract: false, final false
  inline float_t get_validationRangeMax();

  /// @brief Method get_validationRangeMin, addr 0x662619c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_validationRangeMin();

  /// @brief Method get_wireframeMode, addr 0x6625f94, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugWireframeMode get_wireframeMode();

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsData* i___UnityEngine__Rendering__IDebugDisplaySettingsData() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsQuery* i___UnityEngine__Rendering__IDebugDisplaySettingsQuery() noexcept;

  /// @brief Method set_enableHDR, addr 0x6626164, size 0x8, virtual false, abstract: false, final false
  inline void set_enableHDR(bool value);

  /// @brief Method set_enableMsaa, addr 0x6626154, size 0x8, virtual false, abstract: false, final false
  inline void set_enableMsaa(bool value);

  /// @brief Method set_fullScreenDebugMode, addr 0x6626070, size 0x8, virtual false, abstract: false, final false
  inline void set_fullScreenDebugMode(::UnityEngine::Rendering::Universal::DebugFullScreenMode value);

  /// @brief Method set_fullScreenDebugModeOutputSizeScreenPercent, addr 0x6626090, size 0x8, virtual false, abstract: false, final false
  inline void set_fullScreenDebugModeOutputSizeScreenPercent(int32_t value);

  /// @brief Method set_maxOverdrawCount, addr 0x6626060, size 0x8, virtual false, abstract: false, final false
  inline void set_maxOverdrawCount(int32_t value);

  /// @brief Method set_mipDebugMaterialTextureSlot, addr 0x6626100, size 0x8, virtual false, abstract: false, final false
  inline void set_mipDebugMaterialTextureSlot(int32_t value);

  /// @brief Method set_mipDebugOpacity, addr 0x66260e0, size 0x8, virtual false, abstract: false, final false
  inline void set_mipDebugOpacity(float_t value);

  /// @brief Method set_mipDebugRecentUpdateCooldown, addr 0x66260f0, size 0x8, virtual false, abstract: false, final false
  inline void set_mipDebugRecentUpdateCooldown(float_t value);

  /// @brief Method set_mipDebugStatusMode, addr 0x66260d0, size 0x8, virtual false, abstract: false, final false
  inline void set_mipDebugStatusMode(::UnityEngine::Rendering::Universal::DebugMipMapStatusMode value);

  /// @brief Method set_mipDebugStatusShowCode, addr 0x66260c0, size 0x8, virtual false, abstract: false, final false
  inline void set_mipDebugStatusShowCode(bool value);

  /// @brief Method set_mipDebugTerrainTexture, addr 0x6626134, size 0x8, virtual false, abstract: false, final false
  inline void set_mipDebugTerrainTexture(::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture value);

  /// @brief Method set_mipInfoMode, addr 0x66260b0, size 0x8, virtual false, abstract: false, final false
  inline void set_mipInfoMode(::UnityEngine::Rendering::Universal::DebugMipInfoMode value);

  /// @brief Method set_overdraw, addr 0x6625ffc, size 0x30, virtual false, abstract: false, final false
  inline void set_overdraw(bool value);

  /// @brief Method set_overdrawMode, addr 0x6626034, size 0x24, virtual false, abstract: false, final false
  inline void set_overdrawMode(::UnityEngine::Rendering::Universal::DebugOverdrawMode value);

  /// @brief Method set_postProcessingDebugMode, addr 0x6626144, size 0x8, virtual false, abstract: false, final false
  inline void set_postProcessingDebugMode(::UnityEngine::Rendering::Universal::DebugPostProcessingMode value);

  /// @brief Method set_sceneOverrideMode, addr 0x66260a0, size 0x8, virtual false, abstract: false, final false
  inline void set_sceneOverrideMode(::UnityEngine::Rendering::Universal::DebugSceneOverrideMode value);

  /// @brief Method set_showInfoForAllSlots, addr 0x6626110, size 0x8, virtual false, abstract: false, final false
  inline void set_showInfoForAllSlots(bool value);

  /// @brief Method set_stpDebugViewIndex, addr 0x6626080, size 0x8, virtual false, abstract: false, final false
  inline void set_stpDebugViewIndex(int32_t value);

  /// @brief Method set_taaDebugMode, addr 0x6626174, size 0x8, virtual false, abstract: false, final false
  inline void set_taaDebugMode(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode value);

  /// @brief Method set_validationChannels, addr 0x6626194, size 0x8, virtual false, abstract: false, final false
  inline void set_validationChannels(::UnityEngine::Rendering::Universal::PixelValidationChannels value);

  /// @brief Method set_validationMode, addr 0x6626184, size 0x8, virtual false, abstract: false, final false
  inline void set_validationMode(::UnityEngine::Rendering::Universal::DebugValidationMode value);

  /// @brief Method set_validationRangeMax, addr 0x66261b4, size 0x8, virtual false, abstract: false, final false
  inline void set_validationRangeMax(float_t value);

  /// @brief Method set_validationRangeMin, addr 0x66261a4, size 0x8, virtual false, abstract: false, final false
  inline void set_validationRangeMin(float_t value);

  /// @brief Method set_wireframeMode, addr 0x6625f9c, size 0x2c, virtual false, abstract: false, final false
  inline void set_wireframeMode(::UnityEngine::Rendering::Universal::DebugWireframeMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsRendering();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsRendering", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsRendering(DebugDisplaySettingsRendering&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsRendering", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsRendering(DebugDisplaySettingsRendering const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12631 };

  /// @brief Field m_WireframeMode, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugWireframeMode ___m_WireframeMode;

  /// @brief Field m_Overdraw, offset: 0x14, size: 0x1, def value: None
  bool ___m_Overdraw;

  /// @brief Field m_OverdrawMode, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugOverdrawMode ___m_OverdrawMode;

  /// @brief Field <maxOverdrawCount>k__BackingField, offset: 0x1c, size: 0x4, def value: None
  int32_t ____maxOverdrawCount_k__BackingField;

  /// @brief Field <fullScreenDebugMode>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugFullScreenMode ____fullScreenDebugMode_k__BackingField;

  /// @brief Field <stpDebugViewIndex>k__BackingField, offset: 0x24, size: 0x4, def value: None
  int32_t ____stpDebugViewIndex_k__BackingField;

  /// @brief Field <fullScreenDebugModeOutputSizeScreenPercent>k__BackingField, offset: 0x28, size: 0x4, def value: None
  int32_t ____fullScreenDebugModeOutputSizeScreenPercent_k__BackingField;

  /// @brief Field <sceneOverrideMode>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugSceneOverrideMode ____sceneOverrideMode_k__BackingField;

  /// @brief Field <mipInfoMode>k__BackingField, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugMipInfoMode ____mipInfoMode_k__BackingField;

  /// @brief Field <mipDebugStatusShowCode>k__BackingField, offset: 0x34, size: 0x1, def value: None
  bool ____mipDebugStatusShowCode_k__BackingField;

  /// @brief Field <mipDebugStatusMode>k__BackingField, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugMipMapStatusMode ____mipDebugStatusMode_k__BackingField;

  /// @brief Field <mipDebugOpacity>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  float_t ____mipDebugOpacity_k__BackingField;

  /// @brief Field <mipDebugRecentUpdateCooldown>k__BackingField, offset: 0x40, size: 0x4, def value: None
  float_t ____mipDebugRecentUpdateCooldown_k__BackingField;

  /// @brief Field <mipDebugMaterialTextureSlot>k__BackingField, offset: 0x44, size: 0x4, def value: None
  int32_t ____mipDebugMaterialTextureSlot_k__BackingField;

  /// @brief Field <showInfoForAllSlots>k__BackingField, offset: 0x48, size: 0x1, def value: None
  bool ____showInfoForAllSlots_k__BackingField;

  /// @brief Field <mipDebugTerrainTexture>k__BackingField, offset: 0x4c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugMipMapModeTerrainTexture ____mipDebugTerrainTexture_k__BackingField;

  /// @brief Field <postProcessingDebugMode>k__BackingField, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugPostProcessingMode ____postProcessingDebugMode_k__BackingField;

  /// @brief Field <enableMsaa>k__BackingField, offset: 0x54, size: 0x1, def value: None
  bool ____enableMsaa_k__BackingField;

  /// @brief Field <enableHDR>k__BackingField, offset: 0x55, size: 0x1, def value: None
  bool ____enableHDR_k__BackingField;

  /// @brief Field <taaDebugMode>k__BackingField, offset: 0x58, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode ____taaDebugMode_k__BackingField;

  /// @brief Field <validationMode>k__BackingField, offset: 0x5c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DebugValidationMode ____validationMode_k__BackingField;

  /// @brief Field <validationChannels>k__BackingField, offset: 0x60, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::PixelValidationChannels ____validationChannels_k__BackingField;

  /// @brief Field <validationRangeMin>k__BackingField, offset: 0x64, size: 0x4, def value: None
  float_t ____validationRangeMin_k__BackingField;

  /// @brief Field <validationRangeMax>k__BackingField, offset: 0x68, size: 0x4, def value: None
  float_t ____validationRangeMax_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ___m_WireframeMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ___m_Overdraw) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ___m_OverdrawMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____maxOverdrawCount_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____fullScreenDebugMode_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____stpDebugViewIndex_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____fullScreenDebugModeOutputSizeScreenPercent_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____sceneOverrideMode_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____mipInfoMode_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____mipDebugStatusShowCode_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____mipDebugStatusMode_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____mipDebugOpacity_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____mipDebugRecentUpdateCooldown_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____mipDebugMaterialTextureSlot_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____showInfoForAllSlots_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____mipDebugTerrainTexture_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____postProcessingDebugMode_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____enableMsaa_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____enableHDR_k__BackingField) == 0x55, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____taaDebugMode_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____validationMode_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____validationChannels_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____validationRangeMin_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, ____validationRangeMax_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering, 0x70>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_TaaDebugMode, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsRendering/TaaDebugMode");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsRendering");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_SettingsPanel*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsRendering/SettingsPanel");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_Strings*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsRendering/Strings");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering_WidgetFactory*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsRendering/WidgetFactory");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::SettingsPanel_DebugDisplaySettingsRendering___c__DisplayClass0_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/SettingsPanel/<>c__DisplayClass0_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsRendering/WidgetFactory/<>c");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass0_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass0_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass10_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass10_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass11_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass11_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass12_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass12_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass13_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass13_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass14_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass14_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass15_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass15_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass16_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass16_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass17_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass17_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass18_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass18_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass19_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass19_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass1_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass1_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass20_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass20_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass2_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass2_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass3_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass3_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass4_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass4_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass5_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass5_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass6_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass6_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass8_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass8_0");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::WidgetFactory_DebugDisplaySettingsRendering___c__DisplayClass9_0*, "UnityEngine.Rendering.Universal",
                       "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass9_0");
