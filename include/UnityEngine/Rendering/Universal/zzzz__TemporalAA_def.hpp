#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/TemporalAA.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TemporalAAQuality_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TemporalAA)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
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
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
struct TemporalAAQuality;
}
namespace UnityEngine::Rendering::Universal {
class TemporalAA_JitterFunc;
}
namespace UnityEngine::Rendering::Universal {
struct TemporalAA_Settings;
}
namespace UnityEngine::Rendering::Universal {
class TemporalAA_ShaderConstants;
}
namespace UnityEngine::Rendering::Universal {
class TemporalAA_ShaderKeywords;
}
namespace UnityEngine::Rendering::Universal {
class TemporalAA_TaaPassData;
}
namespace UnityEngine::Rendering::Universal {
class TemporalAA___c;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class TemporalAA;
}
namespace UnityEngine::Rendering::Universal {
class TemporalAA_JitterFunc;
}
namespace UnityEngine::Rendering::Universal {
class TemporalAA_ShaderConstants;
}
namespace UnityEngine::Rendering::Universal {
class TemporalAA_ShaderKeywords;
}
namespace UnityEngine::Rendering::Universal {
class TemporalAA_TaaPassData;
}
namespace UnityEngine::Rendering::Universal {
class TemporalAA___c;
}
namespace UnityEngine::Rendering::Universal {
struct TemporalAA_Settings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::TemporalAA);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::TemporalAA_ShaderKeywords);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::TemporalAA___c);
MARK_VAL_T(::UnityEngine::Rendering::Universal::TemporalAA_Settings);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.TemporalAA/ShaderConstants
class CORDL_TYPE TemporalAA_ShaderConstants : public ::System::Object {
public:
  // Declarations
  /// @brief Field _CameraDepthTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__CameraDepthTexture, put = setStaticF__CameraDepthTexture)) int32_t _CameraDepthTexture;

  /// @brief Field _TaaAccumulationTex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__TaaAccumulationTex, put = setStaticF__TaaAccumulationTex)) int32_t _TaaAccumulationTex;

  /// @brief Field _TaaFilterWeights, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__TaaFilterWeights, put = setStaticF__TaaFilterWeights)) int32_t _TaaFilterWeights;

  /// @brief Field _TaaFrameInfluence, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__TaaFrameInfluence, put = setStaticF__TaaFrameInfluence)) int32_t _TaaFrameInfluence;

  /// @brief Field _TaaMotionVectorTex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__TaaMotionVectorTex, put = setStaticF__TaaMotionVectorTex)) int32_t _TaaMotionVectorTex;

  /// @brief Field _TaaVarianceClampScale, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__TaaVarianceClampScale, put = setStaticF__TaaVarianceClampScale)) int32_t _TaaVarianceClampScale;

  static inline int32_t getStaticF__CameraDepthTexture();

  static inline int32_t getStaticF__TaaAccumulationTex();

  static inline int32_t getStaticF__TaaFilterWeights();

  static inline int32_t getStaticF__TaaFrameInfluence();

  static inline int32_t getStaticF__TaaMotionVectorTex();

  static inline int32_t getStaticF__TaaVarianceClampScale();

  static inline void setStaticF__CameraDepthTexture(int32_t value);

  static inline void setStaticF__TaaAccumulationTex(int32_t value);

  static inline void setStaticF__TaaFilterWeights(int32_t value);

  static inline void setStaticF__TaaFrameInfluence(int32_t value);

  static inline void setStaticF__TaaMotionVectorTex(int32_t value);

  static inline void setStaticF__TaaVarianceClampScale(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TemporalAA_ShaderConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TemporalAA_ShaderConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TemporalAA_ShaderConstants(TemporalAA_ShaderConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TemporalAA_ShaderConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TemporalAA_ShaderConstants(TemporalAA_ShaderConstants const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12937 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.TemporalAA/ShaderKeywords
class CORDL_TYPE TemporalAA_ShaderKeywords : public ::System::Object {
public:
  // Declarations
  /// @brief Field TAA_LOW_PRECISION_SOURCE, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TAA_LOW_PRECISION_SOURCE, put = setStaticF_TAA_LOW_PRECISION_SOURCE)) ::StringW TAA_LOW_PRECISION_SOURCE;

  static inline ::StringW getStaticF_TAA_LOW_PRECISION_SOURCE();

  static inline void setStaticF_TAA_LOW_PRECISION_SOURCE(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TemporalAA_ShaderKeywords();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TemporalAA_ShaderKeywords", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TemporalAA_ShaderKeywords(TemporalAA_ShaderKeywords&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TemporalAA_ShaderKeywords", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TemporalAA_ShaderKeywords(TemporalAA_ShaderKeywords const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12938 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::TemporalAA_ShaderKeywords, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.Universal.TemporalAAQuality
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.TemporalAA/Settings
struct CORDL_TYPE TemporalAA_Settings {
public:
  // Declarations
  __declspec(property(get = get_baseBlendFactor, put = set_baseBlendFactor)) float_t baseBlendFactor;

  __declspec(property(get = get_contrastAdaptiveSharpening, put = set_contrastAdaptiveSharpening)) float_t contrastAdaptiveSharpening;

  __declspec(property(get = get_jitterScale, put = set_jitterScale)) float_t jitterScale;

  __declspec(property(get = get_mipBias, put = set_mipBias)) float_t mipBias;

  __declspec(property(get = get_quality, put = set_quality)) ::UnityEngine::Rendering::Universal::TemporalAAQuality quality;

  __declspec(property(get = get_varianceClampScale, put = set_varianceClampScale)) float_t varianceClampScale;

  /// @brief Method Create, addr 0x66a12bc, size 0x20, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::TemporalAA_Settings Create();

  /// @brief Method get_baseBlendFactor, addr 0x66a11e4, size 0x10, virtual false, abstract: false, final false
  inline float_t get_baseBlendFactor();

  /// @brief Method get_contrastAdaptiveSharpening, addr 0x66a1294, size 0x8, virtual false, abstract: false, final false
  inline float_t get_contrastAdaptiveSharpening();

  /// @brief Method get_jitterScale, addr 0x66a1218, size 0x8, virtual false, abstract: false, final false
  inline float_t get_jitterScale();

  /// @brief Method get_mipBias, addr 0x66a1240, size 0x8, virtual false, abstract: false, final false
  inline float_t get_mipBias();

  /// @brief Method get_quality, addr 0x66a11c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::TemporalAAQuality get_quality();

  /// @brief Method get_varianceClampScale, addr 0x66a1268, size 0x8, virtual false, abstract: false, final false
  inline float_t get_varianceClampScale();

  /// @brief Method set_baseBlendFactor, addr 0x66a11f4, size 0x24, virtual false, abstract: false, final false
  inline void set_baseBlendFactor(float_t value);

  /// @brief Method set_contrastAdaptiveSharpening, addr 0x66a129c, size 0x20, virtual false, abstract: false, final false
  inline void set_contrastAdaptiveSharpening(float_t value);

  /// @brief Method set_jitterScale, addr 0x66a1220, size 0x20, virtual false, abstract: false, final false
  inline void set_jitterScale(float_t value);

  /// @brief Method set_mipBias, addr 0x66a1248, size 0x20, virtual false, abstract: false, final false
  inline void set_mipBias(float_t value);

  /// @brief Method set_quality, addr 0x66a11cc, size 0x18, virtual false, abstract: false, final false
  inline void set_quality(::UnityEngine::Rendering::Universal::TemporalAAQuality value);

  /// @brief Method set_varianceClampScale, addr 0x66a1270, size 0x24, virtual false, abstract: false, final false
  inline void set_varianceClampScale(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TemporalAA_Settings();

  // Ctor Parameters [CppParam { name: "m_Quality", ty: "::UnityEngine::Rendering::Universal::TemporalAAQuality", modifiers: "", def_value: None }, CppParam { name: "m_FrameInfluence", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_JitterScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_MipBias", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "m_VarianceClampScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ContrastAdaptiveSharpening", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "resetHistoryFrames", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "jitterFrameCountOffset", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TemporalAA_Settings(::UnityEngine::Rendering::Universal::TemporalAAQuality m_Quality, float_t m_FrameInfluence, float_t m_JitterScale, float_t m_MipBias, float_t m_VarianceClampScale,
                                float_t m_ContrastAdaptiveSharpening, int32_t resetHistoryFrames, int32_t jitterFrameCountOffset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12939 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_Quality, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::TemporalAAQuality m_Quality;

  /// @brief Field m_FrameInfluence, offset: 0x4, size: 0x4, def value: None
  float_t m_FrameInfluence;

  /// @brief Field m_JitterScale, offset: 0x8, size: 0x4, def value: None
  float_t m_JitterScale;

  /// @brief Field m_MipBias, offset: 0xc, size: 0x4, def value: None
  float_t m_MipBias;

  /// @brief Field m_VarianceClampScale, offset: 0x10, size: 0x4, def value: None
  float_t m_VarianceClampScale;

  /// @brief Field m_ContrastAdaptiveSharpening, offset: 0x14, size: 0x4, def value: None
  float_t m_ContrastAdaptiveSharpening;

  /// @brief Field resetHistoryFrames, offset: 0x18, size: 0x4, def value: None
  int32_t resetHistoryFrames;

  /// @brief Field jitterFrameCountOffset, offset: 0x1c, size: 0x4, def value: None
  int32_t jitterFrameCountOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_Settings, m_Quality) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_Settings, m_FrameInfluence) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_Settings, m_JitterScale) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_Settings, m_MipBias) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_Settings, m_VarianceClampScale) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_Settings, m_ContrastAdaptiveSharpening) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_Settings, resetHistoryFrames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_Settings, jitterFrameCountOffset) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::TemporalAA_Settings, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.TemporalAA/JitterFunc
class CORDL_TYPE TemporalAA_JitterFunc : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x66a12f0, size 0xc8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t frameIndex, ::ByRef<::UnityEngine::Vector2> jitter, ::ByRef<bool> allowScaling, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x66a13b8, size 0x24, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<::UnityEngine::Vector2> jitter, ::ByRef<bool> allowScaling, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x66a12dc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t frameIndex, ::ByRef<::UnityEngine::Vector2> jitter, ::ByRef<bool> allowScaling);

  static inline ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x669eed8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TemporalAA_JitterFunc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TemporalAA_JitterFunc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TemporalAA_JitterFunc(TemporalAA_JitterFunc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TemporalAA_JitterFunc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TemporalAA_JitterFunc(TemporalAA_JitterFunc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12940 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.TemporalAA/TaaPassData
class CORDL_TYPE TemporalAA_TaaPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field dstTex, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_dstTex, put = __cordl_internal_set_dstTex)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle dstTex;

  /// @brief Field material, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field passIndex, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_passIndex, put = __cordl_internal_set_passIndex)) int32_t passIndex;

  /// @brief Field srcColorTex, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_srcColorTex, put = __cordl_internal_set_srcColorTex)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle srcColorTex;

  /// @brief Field srcDepthTex, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_srcDepthTex, put = __cordl_internal_set_srcDepthTex)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle srcDepthTex;

  /// @brief Field srcMotionVectorTex, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_srcMotionVectorTex, put = __cordl_internal_set_srcMotionVectorTex)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle srcMotionVectorTex;

  /// @brief Field srcTaaAccumTex, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get_srcTaaAccumTex, put = __cordl_internal_set_srcTaaAccumTex)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle srcTaaAccumTex;

  /// @brief Field taaAlphaOutput, offset 0x81, size 0x1
  __declspec(property(get = __cordl_internal_get_taaAlphaOutput, put = __cordl_internal_set_taaAlphaOutput)) bool taaAlphaOutput;

  /// @brief Field taaFilterWeights, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_taaFilterWeights, put = __cordl_internal_set_taaFilterWeights)) ::ArrayW<float_t, ::Array<float_t>*> taaFilterWeights;

  /// @brief Field taaFrameInfluence, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_taaFrameInfluence, put = __cordl_internal_set_taaFrameInfluence)) float_t taaFrameInfluence;

  /// @brief Field taaLowPrecisionSource, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_taaLowPrecisionSource, put = __cordl_internal_set_taaLowPrecisionSource)) bool taaLowPrecisionSource;

  /// @brief Field taaVarianceClampScale, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_taaVarianceClampScale, put = __cordl_internal_set_taaVarianceClampScale)) float_t taaVarianceClampScale;

  static inline ::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_dstTex() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_dstTex();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr int32_t const& __cordl_internal_get_passIndex() const;

  constexpr int32_t& __cordl_internal_get_passIndex();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_srcColorTex() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_srcColorTex();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_srcDepthTex() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_srcDepthTex();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_srcMotionVectorTex() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_srcMotionVectorTex();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_srcTaaAccumTex() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_srcTaaAccumTex();

  constexpr bool const& __cordl_internal_get_taaAlphaOutput() const;

  constexpr bool& __cordl_internal_get_taaAlphaOutput();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_taaFilterWeights() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_taaFilterWeights();

  constexpr float_t const& __cordl_internal_get_taaFrameInfluence() const;

  constexpr float_t& __cordl_internal_get_taaFrameInfluence();

  constexpr bool const& __cordl_internal_get_taaLowPrecisionSource() const;

  constexpr bool& __cordl_internal_get_taaLowPrecisionSource();

  constexpr float_t const& __cordl_internal_get_taaVarianceClampScale() const;

  constexpr float_t& __cordl_internal_get_taaVarianceClampScale();

  constexpr void __cordl_internal_set_dstTex(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_passIndex(int32_t value);

  constexpr void __cordl_internal_set_srcColorTex(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_srcDepthTex(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_srcMotionVectorTex(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_srcTaaAccumTex(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_taaAlphaOutput(bool value);

  constexpr void __cordl_internal_set_taaFilterWeights(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_taaFrameInfluence(float_t value);

  constexpr void __cordl_internal_set_taaLowPrecisionSource(bool value);

  constexpr void __cordl_internal_set_taaVarianceClampScale(float_t value);

  /// @brief Method .ctor, addr 0x66a13dc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TemporalAA_TaaPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TemporalAA_TaaPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TemporalAA_TaaPassData(TemporalAA_TaaPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TemporalAA_TaaPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TemporalAA_TaaPassData(TemporalAA_TaaPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12941 };

  /// @brief Field dstTex, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___dstTex;

  /// @brief Field srcColorTex, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___srcColorTex;

  /// @brief Field srcDepthTex, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___srcDepthTex;

  /// @brief Field srcMotionVectorTex, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___srcMotionVectorTex;

  /// @brief Field srcTaaAccumTex, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___srcTaaAccumTex;

  /// @brief Field material, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field passIndex, offset: 0x68, size: 0x4, def value: None
  int32_t ___passIndex;

  /// @brief Field taaFrameInfluence, offset: 0x6c, size: 0x4, def value: None
  float_t ___taaFrameInfluence;

  /// @brief Field taaVarianceClampScale, offset: 0x70, size: 0x4, def value: None
  float_t ___taaVarianceClampScale;

  /// @brief Field taaFilterWeights, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___taaFilterWeights;

  /// @brief Field taaLowPrecisionSource, offset: 0x80, size: 0x1, def value: None
  bool ___taaLowPrecisionSource;

  /// @brief Field taaAlphaOutput, offset: 0x81, size: 0x1, def value: None
  bool ___taaAlphaOutput;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, ___dstTex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, ___srcColorTex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, ___srcDepthTex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, ___srcMotionVectorTex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, ___srcTaaAccumTex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, ___material) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, ___passIndex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, ___taaFrameInfluence) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, ___taaVarianceClampScale) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, ___taaFilterWeights) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, ___taaLowPrecisionSource) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, ___taaAlphaOutput) == 0x81, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData, 0x88>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.TemporalAA/<>c
class CORDL_TYPE TemporalAA___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::TemporalAA___c* __9;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_0,
                      put = setStaticF___9__17_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__17_0;

  /// @brief Field <>9__17_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_1,
                      put = setStaticF___9__17_1)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__17_1;

  static inline ::UnityEngine::Rendering::Universal::TemporalAA___c* New_ctor();

  /// @brief Method <Render>b__17_0, addr 0x66a1438, size 0x318, virtual false, abstract: false, final false
  inline void _Render_b__17_0(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <Render>b__17_1, addr 0x66a1750, size 0x114, virtual false, abstract: false, final false
  inline void _Render_b__17_1(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x66a1434, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::TemporalAA___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__17_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__17_1();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::TemporalAA___c* value);

  static inline void setStaticF___9__17_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__17_1(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TemporalAA___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TemporalAA___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TemporalAA___c(TemporalAA___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TemporalAA___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TemporalAA___c(TemporalAA___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12942 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::TemporalAA___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.TemporalAA
class CORDL_TYPE TemporalAA : public ::System::Object {
public:
  // Declarations
  using JitterFunc = ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc;

  using Settings = ::UnityEngine::Rendering::Universal::TemporalAA_Settings;

  using ShaderConstants = ::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants;

  using ShaderKeywords = ::UnityEngine::Rendering::Universal::TemporalAA_ShaderKeywords;

  using TaaPassData = ::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData;

  using __c = ::UnityEngine::Rendering::Universal::TemporalAA___c;

  /// @brief Field AccumulationFormatList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AccumulationFormatList,
                      put = setStaticF_AccumulationFormatList)) ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*>
      AccumulationFormatList;

  /// @brief Field s_JitterFunc, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_JitterFunc, put = setStaticF_s_JitterFunc)) ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc* s_JitterFunc;

  /// @brief Field s_warnCounter, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_warnCounter, put = setStaticF_s_warnCounter)) uint32_t s_warnCounter;

  /// @brief Field taaFilterOffsets, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_taaFilterOffsets, put = setStaticF_taaFilterOffsets)) ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> taaFilterOffsets;

  /// @brief Field taaFilterWeights, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_taaFilterWeights, put = setStaticF_taaFilterWeights)) ::ArrayW<float_t, ::Array<float_t>*> taaFilterWeights;

  /// @brief Method CalculateFilterWeights, addr 0x669f3dc, size 0x23c, virtual false, abstract: false, final false
  static inline ::ArrayW<float_t, ::Array<float_t>*> CalculateFilterWeights(::ByRef<::UnityEngine::Rendering::Universal::TemporalAA_Settings> settings);

  /// @brief Method CalculateJitter, addr 0x669f344, size 0x98, virtual false, abstract: false, final false
  static inline void CalculateJitter(int32_t frameIndex, ::ByRef<::UnityEngine::Vector2> jitter, ::ByRef<bool> allowScaling);

  /// @brief Method CalculateJitterMatrix, addr 0x669f17c, size 0x1c8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Matrix4x4 CalculateJitterMatrix(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                               ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc* jitterFunc);

  /// @brief Method CalculateTaaFrameIndex, addr 0x669eb08, size 0x40, virtual false, abstract: false, final false
  static inline int32_t CalculateTaaFrameIndex(::ByRef<::UnityEngine::Rendering::Universal::TemporalAA_Settings> settings);

  /// @brief Method ExecutePass, addr 0x669fcf4, size 0x538, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Material* taaMaterial, ::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData,
                                 ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination, ::UnityEngine::RenderTexture* motionVectors);

  /// @brief Method Render, addr 0x66a022c, size 0xbb4, virtual false, abstract: false, final false
  static inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Material* taaMaterial,
                            ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> srcColor,
                            ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> srcDepth, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> srcMotionVectors,
                            ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> dstColor);

  /// @brief Method TemporalAADescFromCameraDesc, addr 0x669f618, size 0x208, virtual false, abstract: false, final false
  static inline ::UnityEngine::RenderTextureDescriptor TemporalAADescFromCameraDesc(::ByRef<::UnityEngine::RenderTextureDescriptor> cameraDesc);

  /// @brief Method ValidateAndWarn, addr 0x669f820, size 0x31c, virtual false, abstract: false, final false
  static inline ::StringW ValidateAndWarn(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, bool isSTPRequested);

  static inline ::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> getStaticF_AccumulationFormatList();

  static inline ::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc* getStaticF_s_JitterFunc();

  static inline uint32_t getStaticF_s_warnCounter();

  static inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> getStaticF_taaFilterOffsets();

  static inline ::ArrayW<float_t, ::Array<float_t>*> getStaticF_taaFilterWeights();

  static inline void setStaticF_AccumulationFormatList(::ArrayW<::UnityEngine::Experimental::Rendering::GraphicsFormat, ::Array<::UnityEngine::Experimental::Rendering::GraphicsFormat>*> value);

  static inline void setStaticF_s_JitterFunc(::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc* value);

  static inline void setStaticF_s_warnCounter(uint32_t value);

  static inline void setStaticF_taaFilterOffsets(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  static inline void setStaticF_taaFilterWeights(::ArrayW<float_t, ::Array<float_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TemporalAA();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TemporalAA", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TemporalAA(TemporalAA&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TemporalAA", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TemporalAA(TemporalAA const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12943 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::TemporalAA, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::TemporalAA);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::TemporalAA*, "UnityEngine.Rendering.Universal", "TemporalAA");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::TemporalAA_JitterFunc*, "UnityEngine.Rendering.Universal", "TemporalAA/JitterFunc");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::TemporalAA_ShaderConstants*, "UnityEngine.Rendering.Universal", "TemporalAA/ShaderConstants");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::TemporalAA_ShaderKeywords);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::TemporalAA_ShaderKeywords*, "UnityEngine.Rendering.Universal", "TemporalAA/ShaderKeywords");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::TemporalAA_TaaPassData*, "UnityEngine.Rendering.Universal", "TemporalAA/TaaPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::TemporalAA___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::TemporalAA___c*, "UnityEngine.Rendering.Universal", "TemporalAA/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::TemporalAA_Settings, "UnityEngine.Rendering.Universal", "TemporalAA/Settings");
