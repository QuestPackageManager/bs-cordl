#pragma once
// IWYU pragma private; include "TMPro/ShaderUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderUtilities)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace TMPro {
class ShaderUtilities;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::ShaderUtilities);
// Type: TMPro::ShaderUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMPro::ShaderUtilities*
class CORDL_TYPE ShaderUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Field ID_BevelAmount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_BevelAmount, put = setStaticF_ID_BevelAmount)) int32_t ID_BevelAmount;

  /// @brief Field ID_ClipRect, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_ClipRect, put = setStaticF_ID_ClipRect)) int32_t ID_ClipRect;

  /// @brief Field ID_EnvMap, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_EnvMap, put = setStaticF_ID_EnvMap)) int32_t ID_EnvMap;

  /// @brief Field ID_EnvMatrix, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_EnvMatrix, put = setStaticF_ID_EnvMatrix)) int32_t ID_EnvMatrix;

  /// @brief Field ID_EnvMatrixRotation, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_EnvMatrixRotation, put = setStaticF_ID_EnvMatrixRotation)) int32_t ID_EnvMatrixRotation;

  /// @brief Field ID_FaceColor, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_FaceColor, put = setStaticF_ID_FaceColor)) int32_t ID_FaceColor;

  /// @brief Field ID_FaceDilate, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_FaceDilate, put = setStaticF_ID_FaceDilate)) int32_t ID_FaceDilate;

  /// @brief Field ID_FaceTex, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_FaceTex, put = setStaticF_ID_FaceTex)) int32_t ID_FaceTex;

  /// @brief Field ID_GlowColor, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_GlowColor, put = setStaticF_ID_GlowColor)) int32_t ID_GlowColor;

  /// @brief Field ID_GlowInner, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_GlowInner, put = setStaticF_ID_GlowInner)) int32_t ID_GlowInner;

  /// @brief Field ID_GlowOffset, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_GlowOffset, put = setStaticF_ID_GlowOffset)) int32_t ID_GlowOffset;

  /// @brief Field ID_GlowOuter, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_GlowOuter, put = setStaticF_ID_GlowOuter)) int32_t ID_GlowOuter;

  /// @brief Field ID_GlowPower, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_GlowPower, put = setStaticF_ID_GlowPower)) int32_t ID_GlowPower;

  /// @brief Field ID_GradientScale, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_GradientScale, put = setStaticF_ID_GradientScale)) int32_t ID_GradientScale;

  /// @brief Field ID_LightAngle, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_LightAngle, put = setStaticF_ID_LightAngle)) int32_t ID_LightAngle;

  /// @brief Field ID_MainTex, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_MainTex, put = setStaticF_ID_MainTex)) int32_t ID_MainTex;

  /// @brief Field ID_MaskCoord, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_MaskCoord, put = setStaticF_ID_MaskCoord)) int32_t ID_MaskCoord;

  /// @brief Field ID_MaskSoftnessX, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_MaskSoftnessX, put = setStaticF_ID_MaskSoftnessX)) int32_t ID_MaskSoftnessX;

  /// @brief Field ID_MaskSoftnessY, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_MaskSoftnessY, put = setStaticF_ID_MaskSoftnessY)) int32_t ID_MaskSoftnessY;

  /// @brief Field ID_Outline2Color, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_Outline2Color, put = setStaticF_ID_Outline2Color)) int32_t ID_Outline2Color;

  /// @brief Field ID_Outline2Width, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_Outline2Width, put = setStaticF_ID_Outline2Width)) int32_t ID_Outline2Width;

  /// @brief Field ID_OutlineColor, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_OutlineColor, put = setStaticF_ID_OutlineColor)) int32_t ID_OutlineColor;

  /// @brief Field ID_OutlineSoftness, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_OutlineSoftness, put = setStaticF_ID_OutlineSoftness)) int32_t ID_OutlineSoftness;

  /// @brief Field ID_OutlineTex, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_OutlineTex, put = setStaticF_ID_OutlineTex)) int32_t ID_OutlineTex;

  /// @brief Field ID_OutlineWidth, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_OutlineWidth, put = setStaticF_ID_OutlineWidth)) int32_t ID_OutlineWidth;

  /// @brief Field ID_Padding, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_Padding, put = setStaticF_ID_Padding)) int32_t ID_Padding;

  /// @brief Field ID_PerspectiveFilter, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_PerspectiveFilter, put = setStaticF_ID_PerspectiveFilter)) int32_t ID_PerspectiveFilter;

  /// @brief Field ID_ScaleRatio_A, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_ScaleRatio_A, put = setStaticF_ID_ScaleRatio_A)) int32_t ID_ScaleRatio_A;

  /// @brief Field ID_ScaleRatio_B, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_ScaleRatio_B, put = setStaticF_ID_ScaleRatio_B)) int32_t ID_ScaleRatio_B;

  /// @brief Field ID_ScaleRatio_C, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_ScaleRatio_C, put = setStaticF_ID_ScaleRatio_C)) int32_t ID_ScaleRatio_C;

  /// @brief Field ID_ScaleX, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_ScaleX, put = setStaticF_ID_ScaleX)) int32_t ID_ScaleX;

  /// @brief Field ID_ScaleY, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_ScaleY, put = setStaticF_ID_ScaleY)) int32_t ID_ScaleY;

  /// @brief Field ID_ShaderFlags, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_ShaderFlags, put = setStaticF_ID_ShaderFlags)) int32_t ID_ShaderFlags;

  /// @brief Field ID_Sharpness, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_Sharpness, put = setStaticF_ID_Sharpness)) int32_t ID_Sharpness;

  /// @brief Field ID_Shininess, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_Shininess, put = setStaticF_ID_Shininess)) int32_t ID_Shininess;

  /// @brief Field ID_StencilComp, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_StencilComp, put = setStaticF_ID_StencilComp)) int32_t ID_StencilComp;

  /// @brief Field ID_StencilID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_StencilID, put = setStaticF_ID_StencilID)) int32_t ID_StencilID;

  /// @brief Field ID_StencilOp, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_StencilOp, put = setStaticF_ID_StencilOp)) int32_t ID_StencilOp;

  /// @brief Field ID_StencilReadMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_StencilReadMask, put = setStaticF_ID_StencilReadMask)) int32_t ID_StencilReadMask;

  /// @brief Field ID_StencilWriteMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_StencilWriteMask, put = setStaticF_ID_StencilWriteMask)) int32_t ID_StencilWriteMask;

  /// @brief Field ID_TextureHeight, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_TextureHeight, put = setStaticF_ID_TextureHeight)) int32_t ID_TextureHeight;

  /// @brief Field ID_TextureWidth, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_TextureWidth, put = setStaticF_ID_TextureWidth)) int32_t ID_TextureWidth;

  /// @brief Field ID_UnderlayColor, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_UnderlayColor, put = setStaticF_ID_UnderlayColor)) int32_t ID_UnderlayColor;

  /// @brief Field ID_UnderlayDilate, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_UnderlayDilate, put = setStaticF_ID_UnderlayDilate)) int32_t ID_UnderlayDilate;

  /// @brief Field ID_UnderlayIsoPerimeter, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_UnderlayIsoPerimeter, put = setStaticF_ID_UnderlayIsoPerimeter)) int32_t ID_UnderlayIsoPerimeter;

  /// @brief Field ID_UnderlayOffset, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_UnderlayOffset, put = setStaticF_ID_UnderlayOffset)) int32_t ID_UnderlayOffset;

  /// @brief Field ID_UnderlayOffsetX, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_UnderlayOffsetX, put = setStaticF_ID_UnderlayOffsetX)) int32_t ID_UnderlayOffsetX;

  /// @brief Field ID_UnderlayOffsetY, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_UnderlayOffsetY, put = setStaticF_ID_UnderlayOffsetY)) int32_t ID_UnderlayOffsetY;

  /// @brief Field ID_UnderlaySoftness, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_UnderlaySoftness, put = setStaticF_ID_UnderlaySoftness)) int32_t ID_UnderlaySoftness;

  /// @brief Field ID_UseClipRect, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_UseClipRect, put = setStaticF_ID_UseClipRect)) int32_t ID_UseClipRect;

  /// @brief Field ID_VertexOffsetX, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_VertexOffsetX, put = setStaticF_ID_VertexOffsetX)) int32_t ID_VertexOffsetX;

  /// @brief Field ID_VertexOffsetY, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_VertexOffsetY, put = setStaticF_ID_VertexOffsetY)) int32_t ID_VertexOffsetY;

  /// @brief Field ID_WeightBold, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_WeightBold, put = setStaticF_ID_WeightBold)) int32_t ID_WeightBold;

  /// @brief Field ID_WeightNormal, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_ID_WeightNormal, put = setStaticF_ID_WeightNormal)) int32_t ID_WeightNormal;

  /// @brief Field Keyword_Bevel, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Keyword_Bevel, put = setStaticF_Keyword_Bevel))::StringW Keyword_Bevel;

  /// @brief Field Keyword_Glow, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Keyword_Glow, put = setStaticF_Keyword_Glow))::StringW Keyword_Glow;

  /// @brief Field Keyword_MASK_HARD, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Keyword_MASK_HARD, put = setStaticF_Keyword_MASK_HARD))::StringW Keyword_MASK_HARD;

  /// @brief Field Keyword_MASK_SOFT, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Keyword_MASK_SOFT, put = setStaticF_Keyword_MASK_SOFT))::StringW Keyword_MASK_SOFT;

  /// @brief Field Keyword_MASK_TEX, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Keyword_MASK_TEX, put = setStaticF_Keyword_MASK_TEX))::StringW Keyword_MASK_TEX;

  /// @brief Field Keyword_Outline, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Keyword_Outline, put = setStaticF_Keyword_Outline))::StringW Keyword_Outline;

  /// @brief Field Keyword_Ratios, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Keyword_Ratios, put = setStaticF_Keyword_Ratios))::StringW Keyword_Ratios;

  /// @brief Field Keyword_Underlay, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Keyword_Underlay, put = setStaticF_Keyword_Underlay))::StringW Keyword_Underlay;

  /// @brief Field ShaderTag_CullMode, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ShaderTag_CullMode, put = setStaticF_ShaderTag_CullMode))::StringW ShaderTag_CullMode;

  /// @brief Field ShaderTag_ZTestMode, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ShaderTag_ZTestMode, put = setStaticF_ShaderTag_ZTestMode))::StringW ShaderTag_ZTestMode;

  /// @brief Field isInitialized, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isInitialized, put = setStaticF_isInitialized)) bool isInitialized;

  /// @brief Field k_ShaderRef_MobileBitmap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_ShaderRef_MobileBitmap, put = setStaticF_k_ShaderRef_MobileBitmap))::UnityW<::UnityEngine::Shader> k_ShaderRef_MobileBitmap;

  /// @brief Field k_ShaderRef_MobileSDF, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_ShaderRef_MobileSDF, put = setStaticF_k_ShaderRef_MobileSDF))::UnityW<::UnityEngine::Shader> k_ShaderRef_MobileSDF;

  /// @brief Field m_clamp, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_m_clamp, put = setStaticF_m_clamp)) float_t m_clamp;

  /// @brief Method GetFontExtent, addr 0x33ae3b0, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetFontExtent(::UnityEngine::Material* material);

  /// @brief Method GetPadding, addr 0x33ae590, size 0x6a8, virtual false, abstract: false, final false
  static inline float_t GetPadding(::UnityEngine::Material* material, bool enableExtraPadding, bool isBold);

  /// @brief Method GetPadding, addr 0x33aec38, size 0x880, virtual false, abstract: false, final false
  static inline float_t GetPadding(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> materials, bool enableExtraPadding, bool isBold);

  /// @brief Method GetShaderPropertyIDs, addr 0x33a7454, size 0xaec, virtual false, abstract: false, final false
  static inline void GetShaderPropertyIDs();

  /// @brief Method IsMaskingEnabled, addr 0x33ae3f4, size 0x19c, virtual false, abstract: false, final false
  static inline bool IsMaskingEnabled(::UnityEngine::Material* material);

  /// @brief Method UpdateShaderRatios, addr 0x33adf54, size 0x45c, virtual false, abstract: false, final false
  static inline void UpdateShaderRatios(::UnityEngine::Material* mat);

  static inline int32_t getStaticF_ID_BevelAmount();

  static inline int32_t getStaticF_ID_ClipRect();

  static inline int32_t getStaticF_ID_EnvMap();

  static inline int32_t getStaticF_ID_EnvMatrix();

  static inline int32_t getStaticF_ID_EnvMatrixRotation();

  static inline int32_t getStaticF_ID_FaceColor();

  static inline int32_t getStaticF_ID_FaceDilate();

  static inline int32_t getStaticF_ID_FaceTex();

  static inline int32_t getStaticF_ID_GlowColor();

  static inline int32_t getStaticF_ID_GlowInner();

  static inline int32_t getStaticF_ID_GlowOffset();

  static inline int32_t getStaticF_ID_GlowOuter();

  static inline int32_t getStaticF_ID_GlowPower();

  static inline int32_t getStaticF_ID_GradientScale();

  static inline int32_t getStaticF_ID_LightAngle();

  static inline int32_t getStaticF_ID_MainTex();

  static inline int32_t getStaticF_ID_MaskCoord();

  static inline int32_t getStaticF_ID_MaskSoftnessX();

  static inline int32_t getStaticF_ID_MaskSoftnessY();

  static inline int32_t getStaticF_ID_Outline2Color();

  static inline int32_t getStaticF_ID_Outline2Width();

  static inline int32_t getStaticF_ID_OutlineColor();

  static inline int32_t getStaticF_ID_OutlineSoftness();

  static inline int32_t getStaticF_ID_OutlineTex();

  static inline int32_t getStaticF_ID_OutlineWidth();

  static inline int32_t getStaticF_ID_Padding();

  static inline int32_t getStaticF_ID_PerspectiveFilter();

  static inline int32_t getStaticF_ID_ScaleRatio_A();

  static inline int32_t getStaticF_ID_ScaleRatio_B();

  static inline int32_t getStaticF_ID_ScaleRatio_C();

  static inline int32_t getStaticF_ID_ScaleX();

  static inline int32_t getStaticF_ID_ScaleY();

  static inline int32_t getStaticF_ID_ShaderFlags();

  static inline int32_t getStaticF_ID_Sharpness();

  static inline int32_t getStaticF_ID_Shininess();

  static inline int32_t getStaticF_ID_StencilComp();

  static inline int32_t getStaticF_ID_StencilID();

  static inline int32_t getStaticF_ID_StencilOp();

  static inline int32_t getStaticF_ID_StencilReadMask();

  static inline int32_t getStaticF_ID_StencilWriteMask();

  static inline int32_t getStaticF_ID_TextureHeight();

  static inline int32_t getStaticF_ID_TextureWidth();

  static inline int32_t getStaticF_ID_UnderlayColor();

  static inline int32_t getStaticF_ID_UnderlayDilate();

  static inline int32_t getStaticF_ID_UnderlayIsoPerimeter();

  static inline int32_t getStaticF_ID_UnderlayOffset();

  static inline int32_t getStaticF_ID_UnderlayOffsetX();

  static inline int32_t getStaticF_ID_UnderlayOffsetY();

  static inline int32_t getStaticF_ID_UnderlaySoftness();

  static inline int32_t getStaticF_ID_UseClipRect();

  static inline int32_t getStaticF_ID_VertexOffsetX();

  static inline int32_t getStaticF_ID_VertexOffsetY();

  static inline int32_t getStaticF_ID_WeightBold();

  static inline int32_t getStaticF_ID_WeightNormal();

  static inline ::StringW getStaticF_Keyword_Bevel();

  static inline ::StringW getStaticF_Keyword_Glow();

  static inline ::StringW getStaticF_Keyword_MASK_HARD();

  static inline ::StringW getStaticF_Keyword_MASK_SOFT();

  static inline ::StringW getStaticF_Keyword_MASK_TEX();

  static inline ::StringW getStaticF_Keyword_Outline();

  static inline ::StringW getStaticF_Keyword_Ratios();

  static inline ::StringW getStaticF_Keyword_Underlay();

  static inline ::StringW getStaticF_ShaderTag_CullMode();

  static inline ::StringW getStaticF_ShaderTag_ZTestMode();

  static inline bool getStaticF_isInitialized();

  static inline ::UnityW<::UnityEngine::Shader> getStaticF_k_ShaderRef_MobileBitmap();

  static inline ::UnityW<::UnityEngine::Shader> getStaticF_k_ShaderRef_MobileSDF();

  static inline float_t getStaticF_m_clamp();

  /// @brief Method get_ShaderRef_MobileBitmap, addr 0x33adcc8, size 0xfc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> get_ShaderRef_MobileBitmap();

  /// @brief Method get_ShaderRef_MobileSDF, addr 0x33adbcc, size 0xfc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> get_ShaderRef_MobileSDF();

  static inline void setStaticF_ID_BevelAmount(int32_t value);

  static inline void setStaticF_ID_ClipRect(int32_t value);

  static inline void setStaticF_ID_EnvMap(int32_t value);

  static inline void setStaticF_ID_EnvMatrix(int32_t value);

  static inline void setStaticF_ID_EnvMatrixRotation(int32_t value);

  static inline void setStaticF_ID_FaceColor(int32_t value);

  static inline void setStaticF_ID_FaceDilate(int32_t value);

  static inline void setStaticF_ID_FaceTex(int32_t value);

  static inline void setStaticF_ID_GlowColor(int32_t value);

  static inline void setStaticF_ID_GlowInner(int32_t value);

  static inline void setStaticF_ID_GlowOffset(int32_t value);

  static inline void setStaticF_ID_GlowOuter(int32_t value);

  static inline void setStaticF_ID_GlowPower(int32_t value);

  static inline void setStaticF_ID_GradientScale(int32_t value);

  static inline void setStaticF_ID_LightAngle(int32_t value);

  static inline void setStaticF_ID_MainTex(int32_t value);

  static inline void setStaticF_ID_MaskCoord(int32_t value);

  static inline void setStaticF_ID_MaskSoftnessX(int32_t value);

  static inline void setStaticF_ID_MaskSoftnessY(int32_t value);

  static inline void setStaticF_ID_Outline2Color(int32_t value);

  static inline void setStaticF_ID_Outline2Width(int32_t value);

  static inline void setStaticF_ID_OutlineColor(int32_t value);

  static inline void setStaticF_ID_OutlineSoftness(int32_t value);

  static inline void setStaticF_ID_OutlineTex(int32_t value);

  static inline void setStaticF_ID_OutlineWidth(int32_t value);

  static inline void setStaticF_ID_Padding(int32_t value);

  static inline void setStaticF_ID_PerspectiveFilter(int32_t value);

  static inline void setStaticF_ID_ScaleRatio_A(int32_t value);

  static inline void setStaticF_ID_ScaleRatio_B(int32_t value);

  static inline void setStaticF_ID_ScaleRatio_C(int32_t value);

  static inline void setStaticF_ID_ScaleX(int32_t value);

  static inline void setStaticF_ID_ScaleY(int32_t value);

  static inline void setStaticF_ID_ShaderFlags(int32_t value);

  static inline void setStaticF_ID_Sharpness(int32_t value);

  static inline void setStaticF_ID_Shininess(int32_t value);

  static inline void setStaticF_ID_StencilComp(int32_t value);

  static inline void setStaticF_ID_StencilID(int32_t value);

  static inline void setStaticF_ID_StencilOp(int32_t value);

  static inline void setStaticF_ID_StencilReadMask(int32_t value);

  static inline void setStaticF_ID_StencilWriteMask(int32_t value);

  static inline void setStaticF_ID_TextureHeight(int32_t value);

  static inline void setStaticF_ID_TextureWidth(int32_t value);

  static inline void setStaticF_ID_UnderlayColor(int32_t value);

  static inline void setStaticF_ID_UnderlayDilate(int32_t value);

  static inline void setStaticF_ID_UnderlayIsoPerimeter(int32_t value);

  static inline void setStaticF_ID_UnderlayOffset(int32_t value);

  static inline void setStaticF_ID_UnderlayOffsetX(int32_t value);

  static inline void setStaticF_ID_UnderlayOffsetY(int32_t value);

  static inline void setStaticF_ID_UnderlaySoftness(int32_t value);

  static inline void setStaticF_ID_UseClipRect(int32_t value);

  static inline void setStaticF_ID_VertexOffsetX(int32_t value);

  static inline void setStaticF_ID_VertexOffsetY(int32_t value);

  static inline void setStaticF_ID_WeightBold(int32_t value);

  static inline void setStaticF_ID_WeightNormal(int32_t value);

  static inline void setStaticF_Keyword_Bevel(::StringW value);

  static inline void setStaticF_Keyword_Glow(::StringW value);

  static inline void setStaticF_Keyword_MASK_HARD(::StringW value);

  static inline void setStaticF_Keyword_MASK_SOFT(::StringW value);

  static inline void setStaticF_Keyword_MASK_TEX(::StringW value);

  static inline void setStaticF_Keyword_Outline(::StringW value);

  static inline void setStaticF_Keyword_Ratios(::StringW value);

  static inline void setStaticF_Keyword_Underlay(::StringW value);

  static inline void setStaticF_ShaderTag_CullMode(::StringW value);

  static inline void setStaticF_ShaderTag_ZTestMode(::StringW value);

  static inline void setStaticF_isInitialized(bool value);

  static inline void setStaticF_k_ShaderRef_MobileBitmap(::UnityW<::UnityEngine::Shader> value);

  static inline void setStaticF_k_ShaderRef_MobileSDF(::UnityW<::UnityEngine::Shader> value);

  static inline void setStaticF_m_clamp(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderUtilities(ShaderUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderUtilities(ShaderUtilities const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::ShaderUtilities, 0x10>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::ShaderUtilities);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::ShaderUtilities*, "TMPro", "ShaderUtilities");
