#pragma once
// IWYU pragma private; include "UnityEngine/LineRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LineRenderer)
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
struct LineAlignment;
}
namespace UnityEngine {
struct LineTextureMode;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct SpriteMaskInteraction;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class LineRenderer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::LineRenderer);
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.LineRenderer
class CORDL_TYPE LineRenderer : public ::UnityEngine::Renderer {
public:
// Declarations
 __declspec(property(get=get_alignment, put=set_alignment)) ::UnityEngine::LineAlignment  alignment;

 __declspec(property(get=get_colorGradient, put=set_colorGradient)) ::UnityEngine::Gradient*  colorGradient;

 __declspec(property(get=get_endColor, put=set_endColor)) ::UnityEngine::Color  endColor;

 __declspec(property(get=get_endWidth, put=set_endWidth)) float_t  endWidth;

 __declspec(property(get=get_generateLightingData, put=set_generateLightingData)) bool  generateLightingData;

 __declspec(property(get=get_loop, put=set_loop)) bool  loop;

 __declspec(property(get=get_maskInteraction, put=set_maskInteraction)) ::UnityEngine::SpriteMaskInteraction  maskInteraction;

 __declspec(property(get=get_numCapVertices, put=set_numCapVertices)) int32_t  numCapVertices;

 __declspec(property(get=get_numCornerVertices, put=set_numCornerVertices)) int32_t  numCornerVertices;

 __declspec(property(get=get_numPositions, put=set_numPositions)) int32_t  numPositions;

 __declspec(property(get=get_positionCount, put=set_positionCount)) int32_t  positionCount;

 __declspec(property(get=get_shadowBias, put=set_shadowBias)) float_t  shadowBias;

 __declspec(property(get=get_startColor, put=set_startColor)) ::UnityEngine::Color  startColor;

 __declspec(property(get=get_startWidth, put=set_startWidth)) float_t  startWidth;

 __declspec(property(get=get_textureMode, put=set_textureMode)) ::UnityEngine::LineTextureMode  textureMode;

 __declspec(property(get=get_textureScale, put=set_textureScale)) ::UnityEngine::Vector2  textureScale;

 __declspec(property(get=get_useWorldSpace, put=set_useWorldSpace)) bool  useWorldSpace;

 __declspec(property(get=get_widthCurve, put=set_widthCurve)) ::UnityEngine::AnimationCurve*  widthCurve;

 __declspec(property(get=get_widthMultiplier, put=set_widthMultiplier)) float_t  widthMultiplier;

/// @brief Method BakeMesh, addr 0x68c1d4c, size 0x158, virtual false, abstract: false, final false
inline void BakeMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Camera*  camera, bool  useTransform) ;

/// @brief Method BakeMesh, addr 0x68c1d14, size 0x38, virtual false, abstract: false, final false
inline void BakeMesh(::UnityEngine::Mesh*  mesh, bool  useTransform) ;

/// @brief Method BakeMesh_Injected, addr 0x68c1ea4, size 0x5c, virtual false, abstract: false, final false
static inline void BakeMesh_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  mesh, ::System::IntPtr  camera, bool  useTransform) ;

/// @brief Method GetColorGradientCopy, addr 0x68c2074, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Gradient* GetColorGradientCopy() ;

/// @brief Method GetColorGradientCopy_Injected, addr 0x68c2260, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetColorGradientCopy_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetPosition, addr 0x68c11a8, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPosition(int32_t  index) ;

/// @brief Method GetPosition_Injected, addr 0x68c1258, size 0x54, virtual false, abstract: false, final false
static inline void GetPosition_Injected(::System::IntPtr  _unity_self, int32_t  index, ::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method GetPositions, addr 0x68c22e0, size 0x190, virtual false, abstract: false, final false
inline int32_t GetPositions(::ByRef<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>  positions) ;

/// @brief Method GetPositions, addr 0x68c277c, size 0x5c, virtual false, abstract: false, final false
inline int32_t GetPositions(::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  positions) ;

/// @brief Method GetPositions, addr 0x68c2870, size 0x70, virtual false, abstract: false, final false
inline int32_t GetPositions(::ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>  positions) ;

/// @brief Method GetPositionsWithNativeContainer, addr 0x68c27d8, size 0x98, virtual false, abstract: false, final false
inline int32_t GetPositionsWithNativeContainer(::System::IntPtr  positions, int32_t  length) ;

/// @brief Method GetPositionsWithNativeContainer_Injected, addr 0x68c2934, size 0x54, virtual false, abstract: false, final false
static inline int32_t GetPositionsWithNativeContainer_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  positions, int32_t  length) ;

/// @brief Method GetPositions_Injected, addr 0x68c2470, size 0x44, virtual false, abstract: false, final false
static inline int32_t GetPositions_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>  positions) ;

/// @brief Method GetWidthCurveCopy, addr 0x68c1f04, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* GetWidthCurveCopy() ;

/// @brief Method GetWidthCurveCopy_Injected, addr 0x68c21e0, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetWidthCurveCopy_Injected(::System::IntPtr  _unity_self) ;

static inline ::UnityEngine::LineRenderer* New_ctor() ;

/// @brief Method SetColorGradient, addr 0x68c2110, size 0xd0, virtual false, abstract: false, final false
inline void SetColorGradient(::UnityEngine::Gradient*  curve) ;

/// @brief Method SetColorGradient_Injected, addr 0x68c229c, size 0x44, virtual false, abstract: false, final false
static inline void SetColorGradient_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  curve) ;

/// @brief Method SetColors, addr 0x68c0168, size 0x48, virtual false, abstract: false, final false
inline void SetColors(::UnityEngine::Color  start, ::UnityEngine::Color  end) ;

/// @brief Method SetPosition, addr 0x68c10ac, size 0xa8, virtual false, abstract: false, final false
inline void SetPosition(int32_t  index, ::UnityEngine::Vector3  position) ;

/// @brief Method SetPosition_Injected, addr 0x68c1154, size 0x54, virtual false, abstract: false, final false
static inline void SetPosition_Injected(::System::IntPtr  _unity_self, int32_t  index, ::ByRef<::UnityEngine::Vector3>  position) ;

/// @brief Method SetPositions, addr 0x68c24b4, size 0x120, virtual false, abstract: false, final false
inline void SetPositions(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  positions) ;

/// @brief Method SetPositions, addr 0x68c2618, size 0x5c, virtual false, abstract: false, final false
inline void SetPositions(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions) ;

/// @brief Method SetPositions, addr 0x68c270c, size 0x70, virtual false, abstract: false, final false
inline void SetPositions(::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  positions) ;

/// @brief Method SetPositionsWithNativeContainer, addr 0x68c2674, size 0x98, virtual false, abstract: false, final false
inline void SetPositionsWithNativeContainer(::System::IntPtr  positions, int32_t  count) ;

/// @brief Method SetPositionsWithNativeContainer_Injected, addr 0x68c28e0, size 0x54, virtual false, abstract: false, final false
static inline void SetPositionsWithNativeContainer_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  positions, int32_t  count) ;

/// @brief Method SetPositions_Injected, addr 0x68c25d4, size 0x44, virtual false, abstract: false, final false
static inline void SetPositions_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>  positions) ;

/// @brief Method SetVertexCount, addr 0x68c02e0, size 0x4, virtual false, abstract: false, final false
inline void SetVertexCount(int32_t  count) ;

/// @brief Method SetWidth, addr 0x68c0020, size 0x28, virtual false, abstract: false, final false
inline void SetWidth(float_t  start, float_t  end) ;

/// @brief Method SetWidthCurve, addr 0x68c1fa0, size 0xd0, virtual false, abstract: false, final false
inline void SetWidthCurve(::UnityEngine::AnimationCurve*  curve) ;

/// @brief Method SetWidthCurve_Injected, addr 0x68c221c, size 0x44, virtual false, abstract: false, final false
static inline void SetWidthCurve_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  curve) ;

/// @brief Method Simplify, addr 0x68c1c38, size 0x90, virtual false, abstract: false, final false
inline void Simplify(float_t  tolerance) ;

/// @brief Method Simplify_Injected, addr 0x68c1cc8, size 0x4c, virtual false, abstract: false, final false
static inline void Simplify_Injected(::System::IntPtr  _unity_self, float_t  tolerance) ;

/// @brief Method .ctor, addr 0x68c2988, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_alignment, addr 0x68c1918, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::LineAlignment get_alignment() ;

/// @brief Method get_alignment_Injected, addr 0x68c1998, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::LineAlignment get_alignment_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_colorGradient, addr 0x68c2070, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Gradient* get_colorGradient() ;

/// @brief Method get_endColor, addr 0x68c0f08, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_endColor() ;

/// @brief Method get_endColor_Injected, addr 0x68c0fa4, size 0x44, virtual false, abstract: false, final false
static inline void get_endColor_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Color>  ret) ;

/// @brief Method get_endWidth, addr 0x68c0504, size 0x80, virtual false, abstract: false, final false
inline float_t get_endWidth() ;

/// @brief Method get_endWidth_Injected, addr 0x68c0584, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_endWidth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_generateLightingData, addr 0x68c15f8, size 0x80, virtual false, abstract: false, final false
inline bool get_generateLightingData() ;

/// @brief Method get_generateLightingData_Injected, addr 0x68c1678, size 0x3c, virtual false, abstract: false, final false
static inline bool get_generateLightingData_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_loop, addr 0x68c0c54, size 0x80, virtual false, abstract: false, final false
inline bool get_loop() ;

/// @brief Method get_loop_Injected, addr 0x68c0cd4, size 0x3c, virtual false, abstract: false, final false
static inline bool get_loop_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_maskInteraction, addr 0x68c1aa8, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::SpriteMaskInteraction get_maskInteraction() ;

/// @brief Method get_maskInteraction_Injected, addr 0x68c1b28, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::SpriteMaskInteraction get_maskInteraction_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_numCapVertices, addr 0x68c0934, size 0x80, virtual false, abstract: false, final false
inline int32_t get_numCapVertices() ;

/// @brief Method get_numCapVertices_Injected, addr 0x68c09b4, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_numCapVertices_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_numCornerVertices, addr 0x68c07a4, size 0x80, virtual false, abstract: false, final false
inline int32_t get_numCornerVertices() ;

/// @brief Method get_numCornerVertices_Injected, addr 0x68c0824, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_numCornerVertices_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_numPositions, addr 0x68c0374, size 0x4, virtual false, abstract: false, final false
inline int32_t get_numPositions() ;

/// @brief Method get_positionCount, addr 0x68c0378, size 0x80, virtual false, abstract: false, final false
inline int32_t get_positionCount() ;

/// @brief Method get_positionCount_Injected, addr 0x68c102c, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_positionCount_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_shadowBias, addr 0x68c1460, size 0x80, virtual false, abstract: false, final false
inline float_t get_shadowBias() ;

/// @brief Method get_shadowBias_Injected, addr 0x68c14e0, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_shadowBias_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_startColor, addr 0x68c0de4, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_startColor() ;

/// @brief Method get_startColor_Injected, addr 0x68c0e80, size 0x44, virtual false, abstract: false, final false
static inline void get_startColor_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Color>  ret) ;

/// @brief Method get_startWidth, addr 0x68c03fc, size 0x80, virtual false, abstract: false, final false
inline float_t get_startWidth() ;

/// @brief Method get_startWidth_Injected, addr 0x68c047c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_startWidth_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_textureMode, addr 0x68c1788, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::LineTextureMode get_textureMode() ;

/// @brief Method get_textureMode_Injected, addr 0x68c1808, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::LineTextureMode get_textureMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_textureScale, addr 0x68c12ac, size 0x98, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_textureScale() ;

/// @brief Method get_textureScale_Injected, addr 0x68c1344, size 0x44, virtual false, abstract: false, final false
static inline void get_textureScale_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_useWorldSpace, addr 0x68c0ac4, size 0x80, virtual false, abstract: false, final false
inline bool get_useWorldSpace() ;

/// @brief Method get_useWorldSpace_Injected, addr 0x68c0b44, size 0x3c, virtual false, abstract: false, final false
static inline bool get_useWorldSpace_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_widthCurve, addr 0x68c1f00, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_widthCurve() ;

/// @brief Method get_widthMultiplier, addr 0x68c060c, size 0x80, virtual false, abstract: false, final false
inline float_t get_widthMultiplier() ;

/// @brief Method get_widthMultiplier_Injected, addr 0x68c068c, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_widthMultiplier_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_alignment, addr 0x68c19d4, size 0x90, virtual false, abstract: false, final false
inline void set_alignment(::UnityEngine::LineAlignment  value) ;

/// @brief Method set_alignment_Injected, addr 0x68c1a64, size 0x44, virtual false, abstract: false, final false
static inline void set_alignment_Injected(::System::IntPtr  _unity_self, ::UnityEngine::LineAlignment  value) ;

/// @brief Method set_colorGradient, addr 0x68c210c, size 0x4, virtual false, abstract: false, final false
inline void set_colorGradient(::UnityEngine::Gradient*  value) ;

/// @brief Method set_endColor, addr 0x68c0248, size 0x98, virtual false, abstract: false, final false
inline void set_endColor(::UnityEngine::Color  value) ;

/// @brief Method set_endColor_Injected, addr 0x68c0fe8, size 0x44, virtual false, abstract: false, final false
static inline void set_endColor_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Color>  value) ;

/// @brief Method set_endWidth, addr 0x68c00d8, size 0x90, virtual false, abstract: false, final false
inline void set_endWidth(float_t  value) ;

/// @brief Method set_endWidth_Injected, addr 0x68c05c0, size 0x4c, virtual false, abstract: false, final false
static inline void set_endWidth_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_generateLightingData, addr 0x68c16b4, size 0x90, virtual false, abstract: false, final false
inline void set_generateLightingData(bool  value) ;

/// @brief Method set_generateLightingData_Injected, addr 0x68c1744, size 0x44, virtual false, abstract: false, final false
static inline void set_generateLightingData_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_loop, addr 0x68c0d10, size 0x90, virtual false, abstract: false, final false
inline void set_loop(bool  value) ;

/// @brief Method set_loop_Injected, addr 0x68c0da0, size 0x44, virtual false, abstract: false, final false
static inline void set_loop_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_maskInteraction, addr 0x68c1b64, size 0x90, virtual false, abstract: false, final false
inline void set_maskInteraction(::UnityEngine::SpriteMaskInteraction  value) ;

/// @brief Method set_maskInteraction_Injected, addr 0x68c1bf4, size 0x44, virtual false, abstract: false, final false
static inline void set_maskInteraction_Injected(::System::IntPtr  _unity_self, ::UnityEngine::SpriteMaskInteraction  value) ;

/// @brief Method set_numCapVertices, addr 0x68c09f0, size 0x90, virtual false, abstract: false, final false
inline void set_numCapVertices(int32_t  value) ;

/// @brief Method set_numCapVertices_Injected, addr 0x68c0a80, size 0x44, virtual false, abstract: false, final false
static inline void set_numCapVertices_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_numCornerVertices, addr 0x68c0860, size 0x90, virtual false, abstract: false, final false
inline void set_numCornerVertices(int32_t  value) ;

/// @brief Method set_numCornerVertices_Injected, addr 0x68c08f0, size 0x44, virtual false, abstract: false, final false
static inline void set_numCornerVertices_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_numPositions, addr 0x68c03f8, size 0x4, virtual false, abstract: false, final false
inline void set_numPositions(int32_t  value) ;

/// @brief Method set_positionCount, addr 0x68c02e4, size 0x90, virtual false, abstract: false, final false
inline void set_positionCount(int32_t  value) ;

/// @brief Method set_positionCount_Injected, addr 0x68c1068, size 0x44, virtual false, abstract: false, final false
static inline void set_positionCount_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_shadowBias, addr 0x68c151c, size 0x90, virtual false, abstract: false, final false
inline void set_shadowBias(float_t  value) ;

/// @brief Method set_shadowBias_Injected, addr 0x68c15ac, size 0x4c, virtual false, abstract: false, final false
static inline void set_shadowBias_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_startColor, addr 0x68c01b0, size 0x98, virtual false, abstract: false, final false
inline void set_startColor(::UnityEngine::Color  value) ;

/// @brief Method set_startColor_Injected, addr 0x68c0ec4, size 0x44, virtual false, abstract: false, final false
static inline void set_startColor_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Color>  value) ;

/// @brief Method set_startWidth, addr 0x68c0048, size 0x90, virtual false, abstract: false, final false
inline void set_startWidth(float_t  value) ;

/// @brief Method set_startWidth_Injected, addr 0x68c04b8, size 0x4c, virtual false, abstract: false, final false
static inline void set_startWidth_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_textureMode, addr 0x68c1844, size 0x90, virtual false, abstract: false, final false
inline void set_textureMode(::UnityEngine::LineTextureMode  value) ;

/// @brief Method set_textureMode_Injected, addr 0x68c18d4, size 0x44, virtual false, abstract: false, final false
static inline void set_textureMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::LineTextureMode  value) ;

/// @brief Method set_textureScale, addr 0x68c1388, size 0x94, virtual false, abstract: false, final false
inline void set_textureScale(::UnityEngine::Vector2  value) ;

/// @brief Method set_textureScale_Injected, addr 0x68c141c, size 0x44, virtual false, abstract: false, final false
static inline void set_textureScale_Injected(::System::IntPtr  _unity_self, ::ByRef<::UnityEngine::Vector2>  value) ;

/// @brief Method set_useWorldSpace, addr 0x68c0b80, size 0x90, virtual false, abstract: false, final false
inline void set_useWorldSpace(bool  value) ;

/// @brief Method set_useWorldSpace_Injected, addr 0x68c0c10, size 0x44, virtual false, abstract: false, final false
static inline void set_useWorldSpace_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_widthCurve, addr 0x68c1f9c, size 0x4, virtual false, abstract: false, final false
inline void set_widthCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_widthMultiplier, addr 0x68c06c8, size 0x90, virtual false, abstract: false, final false
inline void set_widthMultiplier(float_t  value) ;

/// @brief Method set_widthMultiplier_Injected, addr 0x68c0758, size 0x4c, virtual false, abstract: false, final false
static inline void set_widthMultiplier_Injected(::System::IntPtr  _unity_self, float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LineRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LineRenderer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LineRenderer(LineRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LineRenderer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LineRenderer(LineRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10137};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LineRenderer, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::LineRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LineRenderer*, "UnityEngine", "LineRenderer");
