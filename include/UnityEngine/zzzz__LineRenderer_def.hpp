#pragma once
// IWYU pragma private; include "UnityEngine/LineRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LineRenderer)
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
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
MARK_REF_T(::UnityEngine::LineRenderer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::LineRenderer*, "UnityEngine", "LineRenderer");
// Dependencies UnityEngine.Renderer
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.LineRenderer
class CORDL_TYPE LineRenderer : public ::UnityEngine::Renderer {
public:
  // Declarations
  __declspec(property(get = get_alignment, put = set_alignment)) ::UnityEngine::LineAlignment alignment;

  __declspec(property(get = get_colorGradient, put = set_colorGradient)) ::UnityEngine::Gradient* colorGradient;

  __declspec(property(get = get_endColor, put = set_endColor)) ::UnityEngine::Color endColor;

  __declspec(property(get = get_endWidth, put = set_endWidth)) float_t endWidth;

  __declspec(property(get = get_generateLightingData, put = set_generateLightingData)) bool generateLightingData;

  __declspec(property(get = get_loop, put = set_loop)) bool loop;

  __declspec(property(get = get_maskInteraction, put = set_maskInteraction)) ::UnityEngine::SpriteMaskInteraction maskInteraction;

  __declspec(property(get = get_numCapVertices, put = set_numCapVertices)) int32_t numCapVertices;

  __declspec(property(get = get_numCornerVertices, put = set_numCornerVertices)) int32_t numCornerVertices;

  __declspec(property(get = get_numPositions, put = set_numPositions)) int32_t numPositions;

  __declspec(property(get = get_positionCount, put = set_positionCount)) int32_t positionCount;

  __declspec(property(get = get_shadowBias, put = set_shadowBias)) float_t shadowBias;

  __declspec(property(get = get_startColor, put = set_startColor)) ::UnityEngine::Color startColor;

  __declspec(property(get = get_startWidth, put = set_startWidth)) float_t startWidth;

  __declspec(property(get = get_textureMode, put = set_textureMode)) ::UnityEngine::LineTextureMode textureMode;

  __declspec(property(get = get_textureScale, put = set_textureScale)) ::UnityEngine::Vector2 textureScale;

  __declspec(property(get = get_useWorldSpace, put = set_useWorldSpace)) bool useWorldSpace;

  __declspec(property(get = get_widthCurve, put = set_widthCurve)) ::UnityEngine::AnimationCurve* widthCurve;

  __declspec(property(get = get_widthMultiplier, put = set_widthMultiplier)) float_t widthMultiplier;

  /// @brief Method BakeMesh, addr 0x6a88d68, size 0x158, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, bool useTransform);

  /// @brief Method BakeMesh, addr 0x6a88d30, size 0x38, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, bool useTransform);

  /// @brief Method BakeMesh_Injected, addr 0x6a88ec0, size 0x5c, virtual false, abstract: false, final false
  static inline void BakeMesh_Injected(::System::IntPtr _unity_self, ::System::IntPtr mesh, ::System::IntPtr camera, bool useTransform);

  /// @brief Method GetColorGradientCopy, addr 0x6a89090, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Gradient* GetColorGradientCopy();

  /// @brief Method GetColorGradientCopy_Injected, addr 0x6a8927c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetColorGradientCopy_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetPosition, addr 0x6a881c4, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPosition(int32_t index);

  /// @brief Method GetPosition_Injected, addr 0x6a88274, size 0x54, virtual false, abstract: false, final false
  static inline void GetPosition_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method GetPositions, addr 0x6a892fc, size 0x190, virtual false, abstract: false, final false
  inline int32_t GetPositions(::by_ref<::ArrayW<::UnityEngine::Vector3>> positions);

  /// @brief Method GetPositions, addr 0x6a89798, size 0x5c, virtual false, abstract: false, final false
  inline int32_t GetPositions(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>> positions);

  /// @brief Method GetPositions, addr 0x6a8988c, size 0x70, virtual false, abstract: false, final false
  inline int32_t GetPositions(::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>> positions);

  /// @brief Method GetPositionsWithNativeContainer, addr 0x6a897f4, size 0x98, virtual false, abstract: false, final false
  inline int32_t GetPositionsWithNativeContainer(::System::IntPtr positions, int32_t length);

  /// @brief Method GetPositionsWithNativeContainer_Injected, addr 0x6a89950, size 0x54, virtual false, abstract: false, final false
  static inline int32_t GetPositionsWithNativeContainer_Injected(::System::IntPtr _unity_self, ::System::IntPtr positions, int32_t length);

  /// @brief Method GetPositions_Injected, addr 0x6a8948c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetPositions_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> positions);

  /// @brief Method GetWidthCurveCopy, addr 0x6a88f20, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* GetWidthCurveCopy();

  /// @brief Method GetWidthCurveCopy_Injected, addr 0x6a891fc, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetWidthCurveCopy_Injected(::System::IntPtr _unity_self);

  static inline ::UnityEngine::LineRenderer* New_ctor();

  /// @brief Method SetColorGradient, addr 0x6a8912c, size 0xd0, virtual false, abstract: false, final false
  inline void SetColorGradient(::UnityEngine::Gradient* curve);

  /// @brief Method SetColorGradient_Injected, addr 0x6a892b8, size 0x44, virtual false, abstract: false, final false
  static inline void SetColorGradient_Injected(::System::IntPtr _unity_self, ::System::IntPtr curve);

  /// @brief Method SetColors, addr 0x6a87184, size 0x48, virtual false, abstract: false, final false
  inline void SetColors(::UnityEngine::Color start, ::UnityEngine::Color end);

  /// @brief Method SetPosition, addr 0x6a880c8, size 0xa8, virtual false, abstract: false, final false
  inline void SetPosition(int32_t index, ::UnityEngine::Vector3 position);

  /// @brief Method SetPosition_Injected, addr 0x6a88170, size 0x54, virtual false, abstract: false, final false
  static inline void SetPosition_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<::UnityEngine::Vector3> position);

  /// @brief Method SetPositions, addr 0x6a894d0, size 0x120, virtual false, abstract: false, final false
  inline void SetPositions(::ArrayW<::UnityEngine::Vector3> positions);

  /// @brief Method SetPositions, addr 0x6a89634, size 0x5c, virtual false, abstract: false, final false
  inline void SetPositions(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> positions);

  /// @brief Method SetPositions, addr 0x6a89728, size 0x70, virtual false, abstract: false, final false
  inline void SetPositions(::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> positions);

  /// @brief Method SetPositionsWithNativeContainer, addr 0x6a89690, size 0x98, virtual false, abstract: false, final false
  inline void SetPositionsWithNativeContainer(::System::IntPtr positions, int32_t count);

  /// @brief Method SetPositionsWithNativeContainer_Injected, addr 0x6a898fc, size 0x54, virtual false, abstract: false, final false
  static inline void SetPositionsWithNativeContainer_Injected(::System::IntPtr _unity_self, ::System::IntPtr positions, int32_t count);

  /// @brief Method SetPositions_Injected, addr 0x6a895f0, size 0x44, virtual false, abstract: false, final false
  static inline void SetPositions_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> positions);

  /// @brief Method SetVertexCount, addr 0x6a872fc, size 0x4, virtual false, abstract: false, final false
  inline void SetVertexCount(int32_t count);

  /// @brief Method SetWidth, addr 0x6a8703c, size 0x28, virtual false, abstract: false, final false
  inline void SetWidth(float_t start, float_t end);

  /// @brief Method SetWidthCurve, addr 0x6a88fbc, size 0xd0, virtual false, abstract: false, final false
  inline void SetWidthCurve(::UnityEngine::AnimationCurve* curve);

  /// @brief Method SetWidthCurve_Injected, addr 0x6a89238, size 0x44, virtual false, abstract: false, final false
  static inline void SetWidthCurve_Injected(::System::IntPtr _unity_self, ::System::IntPtr curve);

  /// @brief Method Simplify, addr 0x6a88c54, size 0x90, virtual false, abstract: false, final false
  inline void Simplify(float_t tolerance);

  /// @brief Method Simplify_Injected, addr 0x6a88ce4, size 0x4c, virtual false, abstract: false, final false
  static inline void Simplify_Injected(::System::IntPtr _unity_self, float_t tolerance);

  /// @brief Method .ctor, addr 0x6a899a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_alignment, addr 0x6a88934, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::LineAlignment get_alignment();

  /// @brief Method get_alignment_Injected, addr 0x6a889b4, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::LineAlignment get_alignment_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_colorGradient, addr 0x6a8908c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Gradient* get_colorGradient();

  /// @brief Method get_endColor, addr 0x6a87f24, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_endColor();

  /// @brief Method get_endColor_Injected, addr 0x6a87fc0, size 0x44, virtual false, abstract: false, final false
  static inline void get_endColor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Color> ret);

  /// @brief Method get_endWidth, addr 0x6a87520, size 0x80, virtual false, abstract: false, final false
  inline float_t get_endWidth();

  /// @brief Method get_endWidth_Injected, addr 0x6a875a0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_endWidth_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_generateLightingData, addr 0x6a88614, size 0x80, virtual false, abstract: false, final false
  inline bool get_generateLightingData();

  /// @brief Method get_generateLightingData_Injected, addr 0x6a88694, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_generateLightingData_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_loop, addr 0x6a87c70, size 0x80, virtual false, abstract: false, final false
  inline bool get_loop();

  /// @brief Method get_loop_Injected, addr 0x6a87cf0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_loop_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maskInteraction, addr 0x6a88ac4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::SpriteMaskInteraction get_maskInteraction();

  /// @brief Method get_maskInteraction_Injected, addr 0x6a88b44, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::SpriteMaskInteraction get_maskInteraction_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_numCapVertices, addr 0x6a87950, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_numCapVertices();

  /// @brief Method get_numCapVertices_Injected, addr 0x6a879d0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_numCapVertices_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_numCornerVertices, addr 0x6a877c0, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_numCornerVertices();

  /// @brief Method get_numCornerVertices_Injected, addr 0x6a87840, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_numCornerVertices_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_numPositions, addr 0x6a87390, size 0x4, virtual false, abstract: false, final false
  inline int32_t get_numPositions();

  /// @brief Method get_positionCount, addr 0x6a87394, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_positionCount();

  /// @brief Method get_positionCount_Injected, addr 0x6a88048, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_positionCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_shadowBias, addr 0x6a8847c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_shadowBias();

  /// @brief Method get_shadowBias_Injected, addr 0x6a884fc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_shadowBias_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_startColor, addr 0x6a87e00, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_startColor();

  /// @brief Method get_startColor_Injected, addr 0x6a87e9c, size 0x44, virtual false, abstract: false, final false
  static inline void get_startColor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Color> ret);

  /// @brief Method get_startWidth, addr 0x6a87418, size 0x80, virtual false, abstract: false, final false
  inline float_t get_startWidth();

  /// @brief Method get_startWidth_Injected, addr 0x6a87498, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_startWidth_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_textureMode, addr 0x6a887a4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::LineTextureMode get_textureMode();

  /// @brief Method get_textureMode_Injected, addr 0x6a88824, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::LineTextureMode get_textureMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_textureScale, addr 0x6a882c8, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_textureScale();

  /// @brief Method get_textureScale_Injected, addr 0x6a88360, size 0x44, virtual false, abstract: false, final false
  static inline void get_textureScale_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret);

  /// @brief Method get_useWorldSpace, addr 0x6a87ae0, size 0x80, virtual false, abstract: false, final false
  inline bool get_useWorldSpace();

  /// @brief Method get_useWorldSpace_Injected, addr 0x6a87b60, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useWorldSpace_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_widthCurve, addr 0x6a88f1c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* get_widthCurve();

  /// @brief Method get_widthMultiplier, addr 0x6a87628, size 0x80, virtual false, abstract: false, final false
  inline float_t get_widthMultiplier();

  /// @brief Method get_widthMultiplier_Injected, addr 0x6a876a8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_widthMultiplier_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_alignment, addr 0x6a889f0, size 0x90, virtual false, abstract: false, final false
  inline void set_alignment(::UnityEngine::LineAlignment value);

  /// @brief Method set_alignment_Injected, addr 0x6a88a80, size 0x44, virtual false, abstract: false, final false
  static inline void set_alignment_Injected(::System::IntPtr _unity_self, ::UnityEngine::LineAlignment value);

  /// @brief Method set_colorGradient, addr 0x6a89128, size 0x4, virtual false, abstract: false, final false
  inline void set_colorGradient(::UnityEngine::Gradient* value);

  /// @brief Method set_endColor, addr 0x6a87264, size 0x98, virtual false, abstract: false, final false
  inline void set_endColor(::UnityEngine::Color value);

  /// @brief Method set_endColor_Injected, addr 0x6a88004, size 0x44, virtual false, abstract: false, final false
  static inline void set_endColor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Color> value);

  /// @brief Method set_endWidth, addr 0x6a870f4, size 0x90, virtual false, abstract: false, final false
  inline void set_endWidth(float_t value);

  /// @brief Method set_endWidth_Injected, addr 0x6a875dc, size 0x4c, virtual false, abstract: false, final false
  static inline void set_endWidth_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_generateLightingData, addr 0x6a886d0, size 0x90, virtual false, abstract: false, final false
  inline void set_generateLightingData(bool value);

  /// @brief Method set_generateLightingData_Injected, addr 0x6a88760, size 0x44, virtual false, abstract: false, final false
  static inline void set_generateLightingData_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_loop, addr 0x6a87d2c, size 0x90, virtual false, abstract: false, final false
  inline void set_loop(bool value);

  /// @brief Method set_loop_Injected, addr 0x6a87dbc, size 0x44, virtual false, abstract: false, final false
  static inline void set_loop_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_maskInteraction, addr 0x6a88b80, size 0x90, virtual false, abstract: false, final false
  inline void set_maskInteraction(::UnityEngine::SpriteMaskInteraction value);

  /// @brief Method set_maskInteraction_Injected, addr 0x6a88c10, size 0x44, virtual false, abstract: false, final false
  static inline void set_maskInteraction_Injected(::System::IntPtr _unity_self, ::UnityEngine::SpriteMaskInteraction value);

  /// @brief Method set_numCapVertices, addr 0x6a87a0c, size 0x90, virtual false, abstract: false, final false
  inline void set_numCapVertices(int32_t value);

  /// @brief Method set_numCapVertices_Injected, addr 0x6a87a9c, size 0x44, virtual false, abstract: false, final false
  static inline void set_numCapVertices_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_numCornerVertices, addr 0x6a8787c, size 0x90, virtual false, abstract: false, final false
  inline void set_numCornerVertices(int32_t value);

  /// @brief Method set_numCornerVertices_Injected, addr 0x6a8790c, size 0x44, virtual false, abstract: false, final false
  static inline void set_numCornerVertices_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_numPositions, addr 0x6a87414, size 0x4, virtual false, abstract: false, final false
  inline void set_numPositions(int32_t value);

  /// @brief Method set_positionCount, addr 0x6a87300, size 0x90, virtual false, abstract: false, final false
  inline void set_positionCount(int32_t value);

  /// @brief Method set_positionCount_Injected, addr 0x6a88084, size 0x44, virtual false, abstract: false, final false
  static inline void set_positionCount_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_shadowBias, addr 0x6a88538, size 0x90, virtual false, abstract: false, final false
  inline void set_shadowBias(float_t value);

  /// @brief Method set_shadowBias_Injected, addr 0x6a885c8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_shadowBias_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_startColor, addr 0x6a871cc, size 0x98, virtual false, abstract: false, final false
  inline void set_startColor(::UnityEngine::Color value);

  /// @brief Method set_startColor_Injected, addr 0x6a87ee0, size 0x44, virtual false, abstract: false, final false
  static inline void set_startColor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Color> value);

  /// @brief Method set_startWidth, addr 0x6a87064, size 0x90, virtual false, abstract: false, final false
  inline void set_startWidth(float_t value);

  /// @brief Method set_startWidth_Injected, addr 0x6a874d4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_startWidth_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_textureMode, addr 0x6a88860, size 0x90, virtual false, abstract: false, final false
  inline void set_textureMode(::UnityEngine::LineTextureMode value);

  /// @brief Method set_textureMode_Injected, addr 0x6a888f0, size 0x44, virtual false, abstract: false, final false
  static inline void set_textureMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::LineTextureMode value);

  /// @brief Method set_textureScale, addr 0x6a883a4, size 0x94, virtual false, abstract: false, final false
  inline void set_textureScale(::UnityEngine::Vector2 value);

  /// @brief Method set_textureScale_Injected, addr 0x6a88438, size 0x44, virtual false, abstract: false, final false
  static inline void set_textureScale_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> value);

  /// @brief Method set_useWorldSpace, addr 0x6a87b9c, size 0x90, virtual false, abstract: false, final false
  inline void set_useWorldSpace(bool value);

  /// @brief Method set_useWorldSpace_Injected, addr 0x6a87c2c, size 0x44, virtual false, abstract: false, final false
  static inline void set_useWorldSpace_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_widthCurve, addr 0x6a88fb8, size 0x4, virtual false, abstract: false, final false
  inline void set_widthCurve(::UnityEngine::AnimationCurve* value);

  /// @brief Method set_widthMultiplier, addr 0x6a876e4, size 0x90, virtual false, abstract: false, final false
  inline void set_widthMultiplier(float_t value);

  /// @brief Method set_widthMultiplier_Injected, addr 0x6a87774, size 0x4c, virtual false, abstract: false, final false
  static inline void set_widthMultiplier_Injected(::System::IntPtr _unity_self, float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LineRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LineRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LineRenderer(LineRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LineRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LineRenderer(LineRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10126 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::LineRenderer) == 0x18, "Size mismatch!");

} // namespace UnityEngine
