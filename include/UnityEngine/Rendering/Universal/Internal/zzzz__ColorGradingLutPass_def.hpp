#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/ColorGradingLutPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ColorGradingLutPass)
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::Universal::Internal {
class ColorGradingLutPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class ColorGradingLutPass_ShaderConstants;
}
namespace UnityEngine::Rendering::Universal::Internal {
class ColorGradingLutPass___c;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessData;
}
namespace UnityEngine::Rendering::Universal {
struct PostProcessingData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalPostProcessingData;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class ColorGradingLutPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class ColorGradingLutPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class ColorGradingLutPass_ShaderConstants;
}
namespace UnityEngine::Rendering::Universal::Internal {
class ColorGradingLutPass___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.ColorGradingLutPass/PassData
class CORDL_TYPE ColorGradingLutPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field allowColorGradingACESHDR, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_allowColorGradingACESHDR, put = __cordl_internal_set_allowColorGradingACESHDR)) bool allowColorGradingACESHDR;

  /// @brief Field cameraData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field internalLut, offset 0x34, size 0x10
  __declspec(property(get = __cordl_internal_get_internalLut, put = __cordl_internal_set_internalLut)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle internalLut;

  /// @brief Field lutBuilderHdr, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_lutBuilderHdr, put = __cordl_internal_set_lutBuilderHdr)) ::UnityW<::UnityEngine::Material> lutBuilderHdr;

  /// @brief Field lutBuilderLdr, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_lutBuilderLdr, put = __cordl_internal_set_lutBuilderLdr)) ::UnityW<::UnityEngine::Material> lutBuilderLdr;

  /// @brief Field postProcessingData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_postProcessingData,
                      put = __cordl_internal_set_postProcessingData)) ::UnityEngine::Rendering::Universal::UniversalPostProcessingData* postProcessingData;

  static inline ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData* New_ctor();

  constexpr bool const& __cordl_internal_get_allowColorGradingACESHDR() const;

  constexpr bool& __cordl_internal_get_allowColorGradingACESHDR();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_internalLut() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_internalLut();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_lutBuilderHdr() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_lutBuilderHdr();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_lutBuilderLdr() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_lutBuilderLdr();

  constexpr ::UnityEngine::Rendering::Universal::UniversalPostProcessingData* const& __cordl_internal_get_postProcessingData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalPostProcessingData*& __cordl_internal_get_postProcessingData();

  constexpr void __cordl_internal_set_allowColorGradingACESHDR(bool value);

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_internalLut(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_lutBuilderHdr(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_lutBuilderLdr(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_postProcessingData(::UnityEngine::Rendering::Universal::UniversalPostProcessingData* value);

  /// @brief Method .ctor, addr 0x6740758, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorGradingLutPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorGradingLutPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorGradingLutPass_PassData(ColorGradingLutPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorGradingLutPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorGradingLutPass_PassData(ColorGradingLutPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13043 };

  /// @brief Field cameraData, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  /// @brief Field postProcessingData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalPostProcessingData* ___postProcessingData;

  /// @brief Field lutBuilderLdr, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___lutBuilderLdr;

  /// @brief Field lutBuilderHdr, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___lutBuilderHdr;

  /// @brief Field allowColorGradingACESHDR, offset: 0x30, size: 0x1, def value: None
  bool ___allowColorGradingACESHDR;

  /// @brief Field internalLut, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___internalLut;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData, ___cameraData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData, ___postProcessingData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData, ___lutBuilderLdr) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData, ___lutBuilderHdr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData, ___allowColorGradingACESHDR) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData, ___internalLut) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.ColorGradingLutPass/ShaderConstants
class CORDL_TYPE ColorGradingLutPass_ShaderConstants : public ::System::Object {
public:
  // Declarations
  /// @brief Field _ChannelMixerBlue, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ChannelMixerBlue, put = setStaticF__ChannelMixerBlue)) int32_t _ChannelMixerBlue;

  /// @brief Field _ChannelMixerGreen, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ChannelMixerGreen, put = setStaticF__ChannelMixerGreen)) int32_t _ChannelMixerGreen;

  /// @brief Field _ChannelMixerRed, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ChannelMixerRed, put = setStaticF__ChannelMixerRed)) int32_t _ChannelMixerRed;

  /// @brief Field _ColorBalance, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ColorBalance, put = setStaticF__ColorBalance)) int32_t _ColorBalance;

  /// @brief Field _ColorFilter, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ColorFilter, put = setStaticF__ColorFilter)) int32_t _ColorFilter;

  /// @brief Field _CurveBlue, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__CurveBlue, put = setStaticF__CurveBlue)) int32_t _CurveBlue;

  /// @brief Field _CurveGreen, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__CurveGreen, put = setStaticF__CurveGreen)) int32_t _CurveGreen;

  /// @brief Field _CurveHueVsHue, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__CurveHueVsHue, put = setStaticF__CurveHueVsHue)) int32_t _CurveHueVsHue;

  /// @brief Field _CurveHueVsSat, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__CurveHueVsSat, put = setStaticF__CurveHueVsSat)) int32_t _CurveHueVsSat;

  /// @brief Field _CurveLumVsSat, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__CurveLumVsSat, put = setStaticF__CurveLumVsSat)) int32_t _CurveLumVsSat;

  /// @brief Field _CurveMaster, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__CurveMaster, put = setStaticF__CurveMaster)) int32_t _CurveMaster;

  /// @brief Field _CurveRed, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__CurveRed, put = setStaticF__CurveRed)) int32_t _CurveRed;

  /// @brief Field _CurveSatVsSat, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__CurveSatVsSat, put = setStaticF__CurveSatVsSat)) int32_t _CurveSatVsSat;

  /// @brief Field _Gain, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Gain, put = setStaticF__Gain)) int32_t _Gain;

  /// @brief Field _Gamma, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Gamma, put = setStaticF__Gamma)) int32_t _Gamma;

  /// @brief Field _Highlights, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Highlights, put = setStaticF__Highlights)) int32_t _Highlights;

  /// @brief Field _HueSatCon, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__HueSatCon, put = setStaticF__HueSatCon)) int32_t _HueSatCon;

  /// @brief Field _Lift, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Lift, put = setStaticF__Lift)) int32_t _Lift;

  /// @brief Field _Lut_Params, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Lut_Params, put = setStaticF__Lut_Params)) int32_t _Lut_Params;

  /// @brief Field _Midtones, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Midtones, put = setStaticF__Midtones)) int32_t _Midtones;

  /// @brief Field _ShaHiLimits, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ShaHiLimits, put = setStaticF__ShaHiLimits)) int32_t _ShaHiLimits;

  /// @brief Field _Shadows, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Shadows, put = setStaticF__Shadows)) int32_t _Shadows;

  /// @brief Field _SplitHighlights, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SplitHighlights, put = setStaticF__SplitHighlights)) int32_t _SplitHighlights;

  /// @brief Field _SplitShadows, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SplitShadows, put = setStaticF__SplitShadows)) int32_t _SplitShadows;

  static inline int32_t getStaticF__ChannelMixerBlue();

  static inline int32_t getStaticF__ChannelMixerGreen();

  static inline int32_t getStaticF__ChannelMixerRed();

  static inline int32_t getStaticF__ColorBalance();

  static inline int32_t getStaticF__ColorFilter();

  static inline int32_t getStaticF__CurveBlue();

  static inline int32_t getStaticF__CurveGreen();

  static inline int32_t getStaticF__CurveHueVsHue();

  static inline int32_t getStaticF__CurveHueVsSat();

  static inline int32_t getStaticF__CurveLumVsSat();

  static inline int32_t getStaticF__CurveMaster();

  static inline int32_t getStaticF__CurveRed();

  static inline int32_t getStaticF__CurveSatVsSat();

  static inline int32_t getStaticF__Gain();

  static inline int32_t getStaticF__Gamma();

  static inline int32_t getStaticF__Highlights();

  static inline int32_t getStaticF__HueSatCon();

  static inline int32_t getStaticF__Lift();

  static inline int32_t getStaticF__Lut_Params();

  static inline int32_t getStaticF__Midtones();

  static inline int32_t getStaticF__ShaHiLimits();

  static inline int32_t getStaticF__Shadows();

  static inline int32_t getStaticF__SplitHighlights();

  static inline int32_t getStaticF__SplitShadows();

  static inline void setStaticF__ChannelMixerBlue(int32_t value);

  static inline void setStaticF__ChannelMixerGreen(int32_t value);

  static inline void setStaticF__ChannelMixerRed(int32_t value);

  static inline void setStaticF__ColorBalance(int32_t value);

  static inline void setStaticF__ColorFilter(int32_t value);

  static inline void setStaticF__CurveBlue(int32_t value);

  static inline void setStaticF__CurveGreen(int32_t value);

  static inline void setStaticF__CurveHueVsHue(int32_t value);

  static inline void setStaticF__CurveHueVsSat(int32_t value);

  static inline void setStaticF__CurveLumVsSat(int32_t value);

  static inline void setStaticF__CurveMaster(int32_t value);

  static inline void setStaticF__CurveRed(int32_t value);

  static inline void setStaticF__CurveSatVsSat(int32_t value);

  static inline void setStaticF__Gain(int32_t value);

  static inline void setStaticF__Gamma(int32_t value);

  static inline void setStaticF__Highlights(int32_t value);

  static inline void setStaticF__HueSatCon(int32_t value);

  static inline void setStaticF__Lift(int32_t value);

  static inline void setStaticF__Lut_Params(int32_t value);

  static inline void setStaticF__Midtones(int32_t value);

  static inline void setStaticF__ShaHiLimits(int32_t value);

  static inline void setStaticF__Shadows(int32_t value);

  static inline void setStaticF__SplitHighlights(int32_t value);

  static inline void setStaticF__SplitShadows(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorGradingLutPass_ShaderConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorGradingLutPass_ShaderConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorGradingLutPass_ShaderConstants(ColorGradingLutPass_ShaderConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorGradingLutPass_ShaderConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorGradingLutPass_ShaderConstants(ColorGradingLutPass_ShaderConstants const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13044 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.ColorGradingLutPass/<>c
class CORDL_TYPE ColorGradingLutPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c* __9;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__14_0,
                      put = setStaticF___9__14_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__14_0;

  static inline ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c* New_ctor();

  /// @brief Method <Render>b__14_0, addr 0x67427bc, size 0x8c, virtual false, abstract: false, final false
  inline void _Render_b__14_0(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x67427b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__14_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c* value);

  static inline void setStaticF___9__14_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorGradingLutPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorGradingLutPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorGradingLutPass___c(ColorGradingLutPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorGradingLutPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorGradingLutPass___c(ColorGradingLutPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13045 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies UnityEngine.Experimental.Rendering.GraphicsFormat, UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.ColorGradingLutPass
class CORDL_TYPE ColorGradingLutPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData;

  using ShaderConstants = ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants;

  using __c = ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c;

  /// @brief Field m_AllowColorGradingACESHDR, offset 0xe0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowColorGradingACESHDR, put = __cordl_internal_set_m_AllowColorGradingACESHDR)) bool m_AllowColorGradingACESHDR;

  /// @brief Field m_HdrLutFormat, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HdrLutFormat, put = __cordl_internal_set_m_HdrLutFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat m_HdrLutFormat;

  /// @brief Field m_InternalLut, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InternalLut, put = __cordl_internal_set_m_InternalLut)) ::UnityEngine::Rendering::RTHandle* m_InternalLut;

  /// @brief Field m_LdrLutFormat, offset 0xcc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LdrLutFormat, put = __cordl_internal_set_m_LdrLutFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat m_LdrLutFormat;

  /// @brief Field m_LutBuilderHdr, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LutBuilderHdr, put = __cordl_internal_set_m_LutBuilderHdr)) ::UnityW<::UnityEngine::Material> m_LutBuilderHdr;

  /// @brief Field m_LutBuilderLdr, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LutBuilderLdr, put = __cordl_internal_set_m_LutBuilderLdr)) ::UnityW<::UnityEngine::Material> m_LutBuilderLdr;

  /// @brief Field m_PassData, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassData, put = __cordl_internal_set_m_PassData)) ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData* m_PassData;

  /// @brief Method Cleanup, addr 0x67421dc, size 0x6c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method ConfigureDescriptor, addr 0x6740768, size 0x54, virtual false, abstract: false, final false
  inline void ConfigureDescriptor(::ByRef<::UnityEngine::Rendering::Universal::PostProcessingData> postProcessingData, ::ByRef<::UnityEngine::RenderTextureDescriptor> descriptor,
                                  ::ByRef<::UnityEngine::FilterMode> filterMode);

  /// @brief Method ConfigureDescriptor, addr 0x67407bc, size 0x90, virtual false, abstract: false, final false
  inline void ConfigureDescriptor(::ByRef<::UnityEngine::Rendering::Universal::UniversalPostProcessingData*> postProcessingData, ::ByRef<::UnityEngine::RenderTextureDescriptor> descriptor,
                                  ::ByRef<::UnityEngine::FilterMode> filterMode);

  /// @brief Method Execute, addr 0x674084c, size 0x1b4, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecutePass, addr 0x6740a00, size 0x12a0, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData* passData,
                                 ::UnityEngine::Rendering::RTHandle* internalLutTarget);

  static inline ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                             ::UnityEngine::Rendering::Universal::PostProcessData* data);

  /// @brief Method Render, addr 0x6741ca0, size 0x53c, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                     ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> internalColorLut);

  /// @brief Method Setup, addr 0x674075c, size 0xc, virtual false, abstract: false, final false
  inline void Setup(::ByRef<::UnityEngine::Rendering::RTHandle*> internalLut);

  constexpr bool const& __cordl_internal_get_m_AllowColorGradingACESHDR() const;

  constexpr bool& __cordl_internal_get_m_AllowColorGradingACESHDR();

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get_m_HdrLutFormat() const;

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get_m_HdrLutFormat();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_InternalLut() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_InternalLut();

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get_m_LdrLutFormat() const;

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get_m_LdrLutFormat();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_LutBuilderHdr() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_LutBuilderHdr();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_LutBuilderLdr() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_LutBuilderLdr();

  constexpr ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData* const& __cordl_internal_get_m_PassData() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData*& __cordl_internal_get_m_PassData();

  constexpr void __cordl_internal_set_m_AllowColorGradingACESHDR(bool value);

  constexpr void __cordl_internal_set_m_HdrLutFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  constexpr void __cordl_internal_set_m_InternalLut(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_LdrLutFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  constexpr void __cordl_internal_set_m_LutBuilderHdr(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_LutBuilderLdr(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData* value);

  /// @brief Method <.ctor>g__Load|7_0, addr 0x6740664, size 0xf4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> __ctor_g__Load_7_0(::UnityEngine::Shader* shader);

  /// @brief Method .ctor, addr 0x6740404, size 0x260, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::Universal::PostProcessData* data);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorGradingLutPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorGradingLutPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorGradingLutPass(ColorGradingLutPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorGradingLutPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorGradingLutPass(ColorGradingLutPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13046 };

  /// @brief Field m_LutBuilderLdr, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_LutBuilderLdr;

  /// @brief Field m_LutBuilderHdr, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_LutBuilderHdr;

  /// @brief Field m_HdrLutFormat, offset: 0xc8, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat ___m_HdrLutFormat;

  /// @brief Field m_LdrLutFormat, offset: 0xcc, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat ___m_LdrLutFormat;

  /// @brief Field m_PassData, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData* ___m_PassData;

  /// @brief Field m_InternalLut, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_InternalLut;

  /// @brief Field m_AllowColorGradingACESHDR, offset: 0xe0, size: 0x1, def value: None
  bool ___m_AllowColorGradingACESHDR;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass, ___m_LutBuilderLdr) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass, ___m_LutBuilderHdr) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass, ___m_HdrLutFormat) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass, ___m_LdrLutFormat) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass, ___m_PassData) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass, ___m_InternalLut) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass, ___m_AllowColorGradingACESHDR) == 0xe0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass, 0xe8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*, "UnityEngine.Rendering.Universal.Internal", "ColorGradingLutPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_PassData*, "UnityEngine.Rendering.Universal.Internal", "ColorGradingLutPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass_ShaderConstants*, "UnityEngine.Rendering.Universal.Internal", "ColorGradingLutPass/ShaderConstants");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass___c*, "UnityEngine.Rendering.Universal.Internal", "ColorGradingLutPass/<>c");
