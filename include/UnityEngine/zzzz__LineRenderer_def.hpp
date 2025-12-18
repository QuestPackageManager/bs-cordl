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
MARK_REF_PTR_T(::UnityEngine::LineRenderer);
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

  /// @brief Method BakeMesh, addr 0x68c168c, size 0x158, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, bool useTransform);

  /// @brief Method BakeMesh, addr 0x68c1654, size 0x38, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, bool useTransform);

  /// @brief Method BakeMesh_Injected, addr 0x68c17e4, size 0x5c, virtual false, abstract: false, final false
  static inline void BakeMesh_Injected(::System::IntPtr _unity_self, ::System::IntPtr mesh, ::System::IntPtr camera, bool useTransform);

  /// @brief Method GetColorGradientCopy, addr 0x68c19b4, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Gradient* GetColorGradientCopy();

  /// @brief Method GetColorGradientCopy_Injected, addr 0x68c1ba0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetColorGradientCopy_Injected(::System::IntPtr _unity_self);

  /// @brief Method GetPosition, addr 0x68c0ae8, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPosition(int32_t index);

  /// @brief Method GetPosition_Injected, addr 0x68c0b98, size 0x54, virtual false, abstract: false, final false
  static inline void GetPosition_Injected(::System::IntPtr _unity_self, int32_t index, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetPositions, addr 0x68c1c20, size 0x190, virtual false, abstract: false, final false
  inline int32_t GetPositions(::ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> positions);

  /// @brief Method GetPositions, addr 0x68c20bc, size 0x5c, virtual false, abstract: false, final false
  inline int32_t GetPositions(::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>> positions);

  /// @brief Method GetPositions, addr 0x68c21b0, size 0x70, virtual false, abstract: false, final false
  inline int32_t GetPositions(::ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>> positions);

  /// @brief Method GetPositionsWithNativeContainer, addr 0x68c2118, size 0x98, virtual false, abstract: false, final false
  inline int32_t GetPositionsWithNativeContainer(::System::IntPtr positions, int32_t length);

  /// @brief Method GetPositionsWithNativeContainer_Injected, addr 0x68c2274, size 0x54, virtual false, abstract: false, final false
  static inline int32_t GetPositionsWithNativeContainer_Injected(::System::IntPtr _unity_self, ::System::IntPtr positions, int32_t length);

  /// @brief Method GetPositions_Injected, addr 0x68c1db0, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetPositions_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> positions);

  /// @brief Method GetWidthCurveCopy, addr 0x68c1844, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* GetWidthCurveCopy();

  /// @brief Method GetWidthCurveCopy_Injected, addr 0x68c1b20, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetWidthCurveCopy_Injected(::System::IntPtr _unity_self);

  static inline ::UnityEngine::LineRenderer* New_ctor();

  /// @brief Method SetColorGradient, addr 0x68c1a50, size 0xd0, virtual false, abstract: false, final false
  inline void SetColorGradient(::UnityEngine::Gradient* curve);

  /// @brief Method SetColorGradient_Injected, addr 0x68c1bdc, size 0x44, virtual false, abstract: false, final false
  static inline void SetColorGradient_Injected(::System::IntPtr _unity_self, ::System::IntPtr curve);

  /// @brief Method SetColors, addr 0x68bfaa8, size 0x48, virtual false, abstract: false, final false
  inline void SetColors(::UnityEngine::Color start, ::UnityEngine::Color end);

  /// @brief Method SetPosition, addr 0x68c09ec, size 0xa8, virtual false, abstract: false, final false
  inline void SetPosition(int32_t index, ::UnityEngine::Vector3 position);

  /// @brief Method SetPosition_Injected, addr 0x68c0a94, size 0x54, virtual false, abstract: false, final false
  static inline void SetPosition_Injected(::System::IntPtr _unity_self, int32_t index, ::ByRef<::UnityEngine::Vector3> position);

  /// @brief Method SetPositions, addr 0x68c1df4, size 0x120, virtual false, abstract: false, final false
  inline void SetPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions);

  /// @brief Method SetPositions, addr 0x68c1f58, size 0x5c, virtual false, abstract: false, final false
  inline void SetPositions(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> positions);

  /// @brief Method SetPositions, addr 0x68c204c, size 0x70, virtual false, abstract: false, final false
  inline void SetPositions(::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> positions);

  /// @brief Method SetPositionsWithNativeContainer, addr 0x68c1fb4, size 0x98, virtual false, abstract: false, final false
  inline void SetPositionsWithNativeContainer(::System::IntPtr positions, int32_t count);

  /// @brief Method SetPositionsWithNativeContainer_Injected, addr 0x68c2220, size 0x54, virtual false, abstract: false, final false
  static inline void SetPositionsWithNativeContainer_Injected(::System::IntPtr _unity_self, ::System::IntPtr positions, int32_t count);

  /// @brief Method SetPositions_Injected, addr 0x68c1f14, size 0x44, virtual false, abstract: false, final false
  static inline void SetPositions_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> positions);

  /// @brief Method SetVertexCount, addr 0x68bfc20, size 0x4, virtual false, abstract: false, final false
  inline void SetVertexCount(int32_t count);

  /// @brief Method SetWidth, addr 0x68bf960, size 0x28, virtual false, abstract: false, final false
  inline void SetWidth(float_t start, float_t end);

  /// @brief Method SetWidthCurve, addr 0x68c18e0, size 0xd0, virtual false, abstract: false, final false
  inline void SetWidthCurve(::UnityEngine::AnimationCurve* curve);

  /// @brief Method SetWidthCurve_Injected, addr 0x68c1b5c, size 0x44, virtual false, abstract: false, final false
  static inline void SetWidthCurve_Injected(::System::IntPtr _unity_self, ::System::IntPtr curve);

  /// @brief Method Simplify, addr 0x68c1578, size 0x90, virtual false, abstract: false, final false
  inline void Simplify(float_t tolerance);

  /// @brief Method Simplify_Injected, addr 0x68c1608, size 0x4c, virtual false, abstract: false, final false
  static inline void Simplify_Injected(::System::IntPtr _unity_self, float_t tolerance);

  /// @brief Method .ctor, addr 0x68c22c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_alignment, addr 0x68c1258, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::LineAlignment get_alignment();

  /// @brief Method get_alignment_Injected, addr 0x68c12d8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::LineAlignment get_alignment_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_colorGradient, addr 0x68c19b0, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Gradient* get_colorGradient();

  /// @brief Method get_endColor, addr 0x68c0848, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_endColor();

  /// @brief Method get_endColor_Injected, addr 0x68c08e4, size 0x44, virtual false, abstract: false, final false
  static inline void get_endColor_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_endWidth, addr 0x68bfe44, size 0x80, virtual false, abstract: false, final false
  inline float_t get_endWidth();

  /// @brief Method get_endWidth_Injected, addr 0x68bfec4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_endWidth_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_generateLightingData, addr 0x68c0f38, size 0x80, virtual false, abstract: false, final false
  inline bool get_generateLightingData();

  /// @brief Method get_generateLightingData_Injected, addr 0x68c0fb8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_generateLightingData_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_loop, addr 0x68c0594, size 0x80, virtual false, abstract: false, final false
  inline bool get_loop();

  /// @brief Method get_loop_Injected, addr 0x68c0614, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_loop_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maskInteraction, addr 0x68c13e8, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::SpriteMaskInteraction get_maskInteraction();

  /// @brief Method get_maskInteraction_Injected, addr 0x68c1468, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::SpriteMaskInteraction get_maskInteraction_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_numCapVertices, addr 0x68c0274, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_numCapVertices();

  /// @brief Method get_numCapVertices_Injected, addr 0x68c02f4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_numCapVertices_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_numCornerVertices, addr 0x68c00e4, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_numCornerVertices();

  /// @brief Method get_numCornerVertices_Injected, addr 0x68c0164, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_numCornerVertices_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_numPositions, addr 0x68bfcb4, size 0x4, virtual false, abstract: false, final false
  inline int32_t get_numPositions();

  /// @brief Method get_positionCount, addr 0x68bfcb8, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_positionCount();

  /// @brief Method get_positionCount_Injected, addr 0x68c096c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_positionCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_shadowBias, addr 0x68c0da0, size 0x80, virtual false, abstract: false, final false
  inline float_t get_shadowBias();

  /// @brief Method get_shadowBias_Injected, addr 0x68c0e20, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_shadowBias_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_startColor, addr 0x68c0724, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_startColor();

  /// @brief Method get_startColor_Injected, addr 0x68c07c0, size 0x44, virtual false, abstract: false, final false
  static inline void get_startColor_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_startWidth, addr 0x68bfd3c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_startWidth();

  /// @brief Method get_startWidth_Injected, addr 0x68bfdbc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_startWidth_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_textureMode, addr 0x68c10c8, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::LineTextureMode get_textureMode();

  /// @brief Method get_textureMode_Injected, addr 0x68c1148, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::LineTextureMode get_textureMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_textureScale, addr 0x68c0bec, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_textureScale();

  /// @brief Method get_textureScale_Injected, addr 0x68c0c84, size 0x44, virtual false, abstract: false, final false
  static inline void get_textureScale_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_useWorldSpace, addr 0x68c0404, size 0x80, virtual false, abstract: false, final false
  inline bool get_useWorldSpace();

  /// @brief Method get_useWorldSpace_Injected, addr 0x68c0484, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useWorldSpace_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_widthCurve, addr 0x68c1840, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* get_widthCurve();

  /// @brief Method get_widthMultiplier, addr 0x68bff4c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_widthMultiplier();

  /// @brief Method get_widthMultiplier_Injected, addr 0x68bffcc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_widthMultiplier_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_alignment, addr 0x68c1314, size 0x90, virtual false, abstract: false, final false
  inline void set_alignment(::UnityEngine::LineAlignment value);

  /// @brief Method set_alignment_Injected, addr 0x68c13a4, size 0x44, virtual false, abstract: false, final false
  static inline void set_alignment_Injected(::System::IntPtr _unity_self, ::UnityEngine::LineAlignment value);

  /// @brief Method set_colorGradient, addr 0x68c1a4c, size 0x4, virtual false, abstract: false, final false
  inline void set_colorGradient(::UnityEngine::Gradient* value);

  /// @brief Method set_endColor, addr 0x68bfb88, size 0x98, virtual false, abstract: false, final false
  inline void set_endColor(::UnityEngine::Color value);

  /// @brief Method set_endColor_Injected, addr 0x68c0928, size 0x44, virtual false, abstract: false, final false
  static inline void set_endColor_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Color> value);

  /// @brief Method set_endWidth, addr 0x68bfa18, size 0x90, virtual false, abstract: false, final false
  inline void set_endWidth(float_t value);

  /// @brief Method set_endWidth_Injected, addr 0x68bff00, size 0x4c, virtual false, abstract: false, final false
  static inline void set_endWidth_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_generateLightingData, addr 0x68c0ff4, size 0x90, virtual false, abstract: false, final false
  inline void set_generateLightingData(bool value);

  /// @brief Method set_generateLightingData_Injected, addr 0x68c1084, size 0x44, virtual false, abstract: false, final false
  static inline void set_generateLightingData_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_loop, addr 0x68c0650, size 0x90, virtual false, abstract: false, final false
  inline void set_loop(bool value);

  /// @brief Method set_loop_Injected, addr 0x68c06e0, size 0x44, virtual false, abstract: false, final false
  static inline void set_loop_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_maskInteraction, addr 0x68c14a4, size 0x90, virtual false, abstract: false, final false
  inline void set_maskInteraction(::UnityEngine::SpriteMaskInteraction value);

  /// @brief Method set_maskInteraction_Injected, addr 0x68c1534, size 0x44, virtual false, abstract: false, final false
  static inline void set_maskInteraction_Injected(::System::IntPtr _unity_self, ::UnityEngine::SpriteMaskInteraction value);

  /// @brief Method set_numCapVertices, addr 0x68c0330, size 0x90, virtual false, abstract: false, final false
  inline void set_numCapVertices(int32_t value);

  /// @brief Method set_numCapVertices_Injected, addr 0x68c03c0, size 0x44, virtual false, abstract: false, final false
  static inline void set_numCapVertices_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_numCornerVertices, addr 0x68c01a0, size 0x90, virtual false, abstract: false, final false
  inline void set_numCornerVertices(int32_t value);

  /// @brief Method set_numCornerVertices_Injected, addr 0x68c0230, size 0x44, virtual false, abstract: false, final false
  static inline void set_numCornerVertices_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_numPositions, addr 0x68bfd38, size 0x4, virtual false, abstract: false, final false
  inline void set_numPositions(int32_t value);

  /// @brief Method set_positionCount, addr 0x68bfc24, size 0x90, virtual false, abstract: false, final false
  inline void set_positionCount(int32_t value);

  /// @brief Method set_positionCount_Injected, addr 0x68c09a8, size 0x44, virtual false, abstract: false, final false
  static inline void set_positionCount_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_shadowBias, addr 0x68c0e5c, size 0x90, virtual false, abstract: false, final false
  inline void set_shadowBias(float_t value);

  /// @brief Method set_shadowBias_Injected, addr 0x68c0eec, size 0x4c, virtual false, abstract: false, final false
  static inline void set_shadowBias_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_startColor, addr 0x68bfaf0, size 0x98, virtual false, abstract: false, final false
  inline void set_startColor(::UnityEngine::Color value);

  /// @brief Method set_startColor_Injected, addr 0x68c0804, size 0x44, virtual false, abstract: false, final false
  static inline void set_startColor_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Color> value);

  /// @brief Method set_startWidth, addr 0x68bf988, size 0x90, virtual false, abstract: false, final false
  inline void set_startWidth(float_t value);

  /// @brief Method set_startWidth_Injected, addr 0x68bfdf8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_startWidth_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_textureMode, addr 0x68c1184, size 0x90, virtual false, abstract: false, final false
  inline void set_textureMode(::UnityEngine::LineTextureMode value);

  /// @brief Method set_textureMode_Injected, addr 0x68c1214, size 0x44, virtual false, abstract: false, final false
  static inline void set_textureMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::LineTextureMode value);

  /// @brief Method set_textureScale, addr 0x68c0cc8, size 0x94, virtual false, abstract: false, final false
  inline void set_textureScale(::UnityEngine::Vector2 value);

  /// @brief Method set_textureScale_Injected, addr 0x68c0d5c, size 0x44, virtual false, abstract: false, final false
  static inline void set_textureScale_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_useWorldSpace, addr 0x68c04c0, size 0x90, virtual false, abstract: false, final false
  inline void set_useWorldSpace(bool value);

  /// @brief Method set_useWorldSpace_Injected, addr 0x68c0550, size 0x44, virtual false, abstract: false, final false
  static inline void set_useWorldSpace_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_widthCurve, addr 0x68c18dc, size 0x4, virtual false, abstract: false, final false
  inline void set_widthCurve(::UnityEngine::AnimationCurve* value);

  /// @brief Method set_widthMultiplier, addr 0x68c0008, size 0x90, virtual false, abstract: false, final false
  inline void set_widthMultiplier(float_t value);

  /// @brief Method set_widthMultiplier_Injected, addr 0x68c0098, size 0x4c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10133 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LineRenderer, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::LineRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LineRenderer*, "UnityEngine", "LineRenderer");
