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

  /// @brief Method BakeMesh, addr 0x48793b8, size 0x5c, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, bool useTransform);

  /// @brief Method BakeMesh, addr 0x4879338, size 0x80, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, bool useTransform);

  /// @brief Method GetColorGradientCopy, addr 0x4879550, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Gradient* GetColorGradientCopy();

  /// @brief Method GetPosition, addr 0x4878e90, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPosition(int32_t index);

  /// @brief Method GetPosition_Injected, addr 0x4878ef4, size 0x54, virtual false, abstract: false, final false
  inline void GetPosition_Injected(int32_t index, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetPositions, addr 0x4879614, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetPositions(::ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> positions);

  /// @brief Method GetPositions, addr 0x487985c, size 0x98, virtual false, abstract: false, final false
  inline int32_t GetPositions(::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>> positions);

  /// @brief Method GetPositions, addr 0x4879948, size 0xd4, virtual false, abstract: false, final false
  inline int32_t GetPositions(::ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>> positions);

  /// @brief Method GetPositionsWithNativeContainer, addr 0x48798f4, size 0x54, virtual false, abstract: false, final false
  inline int32_t GetPositionsWithNativeContainer(::System::IntPtr positions, int32_t length);

  /// @brief Method GetWidthCurveCopy, addr 0x4879450, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* GetWidthCurveCopy();

  static inline ::UnityEngine::LineRenderer* New_ctor();

  /// @brief Method SetColorGradient, addr 0x48795d0, size 0x44, virtual false, abstract: false, final false
  inline void SetColorGradient(::UnityEngine::Gradient* curve);

  /// @brief Method SetColors, addr 0x48786ec, size 0x48, virtual false, abstract: false, final false
  inline void SetColors(::UnityEngine::Color start, ::UnityEngine::Color end);

  /// @brief Method SetPosition, addr 0x4878de0, size 0x5c, virtual false, abstract: false, final false
  inline void SetPosition(int32_t index, ::UnityEngine::Vector3 position);

  /// @brief Method SetPosition_Injected, addr 0x4878e3c, size 0x54, virtual false, abstract: false, final false
  inline void SetPosition_Injected(int32_t index, ::ByRef<::UnityEngine::Vector3> position);

  /// @brief Method SetPositions, addr 0x4879658, size 0x44, virtual false, abstract: false, final false
  inline void SetPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions);

  /// @brief Method SetPositions, addr 0x487969c, size 0x98, virtual false, abstract: false, final false
  inline void SetPositions(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> positions);

  /// @brief Method SetPositions, addr 0x4879788, size 0xd4, virtual false, abstract: false, final false
  inline void SetPositions(::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> positions);

  /// @brief Method SetPositionsWithNativeContainer, addr 0x4879734, size 0x54, virtual false, abstract: false, final false
  inline void SetPositionsWithNativeContainer(::System::IntPtr positions, int32_t count);

  /// @brief Method SetVertexCount, addr 0x48787dc, size 0x44, virtual false, abstract: false, final false
  inline void SetVertexCount(int32_t count);

  /// @brief Method SetWidth, addr 0x48785d8, size 0x7c, virtual false, abstract: false, final false
  inline void SetWidth(float_t start, float_t end);

  /// @brief Method SetWidthCurve, addr 0x48794d0, size 0x44, virtual false, abstract: false, final false
  inline void SetWidthCurve(::UnityEngine::AnimationCurve* curve);

  /// @brief Method Simplify, addr 0x48792ec, size 0x4c, virtual false, abstract: false, final false
  inline void Simplify(float_t tolerance);

  /// @brief Method .ctor, addr 0x4879a1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_alignment, addr 0x48791ec, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::LineAlignment get_alignment();

  /// @brief Method get_colorGradient, addr 0x4879514, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Gradient* get_colorGradient();

  /// @brief Method get_endColor, addr 0x4878d00, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_endColor();

  /// @brief Method get_endColor_Injected, addr 0x4878d58, size 0x44, virtual false, abstract: false, final false
  inline void get_endColor_Injected(::ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_endWidth, addr 0x487895c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_endWidth();

  /// @brief Method get_generateLightingData, addr 0x48790ec, size 0x3c, virtual false, abstract: false, final false
  inline bool get_generateLightingData();

  /// @brief Method get_loop, addr 0x4878ba0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_loop();

  /// @brief Method get_maskInteraction, addr 0x487926c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::SpriteMaskInteraction get_maskInteraction();

  /// @brief Method get_numCapVertices, addr 0x4878aa0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_numCapVertices();

  /// @brief Method get_numCornerVertices, addr 0x4878a20, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_numCornerVertices();

  /// @brief Method get_numPositions, addr 0x4878864, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_numPositions();

  /// @brief Method get_positionCount, addr 0x48788a0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_positionCount();

  /// @brief Method get_shadowBias, addr 0x4879064, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_shadowBias();

  /// @brief Method get_startColor, addr 0x4878c20, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_startColor();

  /// @brief Method get_startColor_Injected, addr 0x4878c78, size 0x44, virtual false, abstract: false, final false
  inline void get_startColor_Injected(::ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_startWidth, addr 0x4878920, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_startWidth();

  /// @brief Method get_textureMode, addr 0x487916c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::LineTextureMode get_textureMode();

  /// @brief Method get_textureScale, addr 0x4878f48, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_textureScale();

  /// @brief Method get_textureScale_Injected, addr 0x4878f94, size 0x44, virtual false, abstract: false, final false
  inline void get_textureScale_Injected(::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_useWorldSpace, addr 0x4878b20, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useWorldSpace();

  /// @brief Method get_widthCurve, addr 0x4879414, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* get_widthCurve();

  /// @brief Method get_widthMultiplier, addr 0x4878998, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_widthMultiplier();

  /// @brief Method set_alignment, addr 0x4879228, size 0x44, virtual false, abstract: false, final false
  inline void set_alignment(::UnityEngine::LineAlignment value);

  /// @brief Method set_colorGradient, addr 0x487958c, size 0x44, virtual false, abstract: false, final false
  inline void set_colorGradient(::UnityEngine::Gradient* value);

  /// @brief Method set_endColor, addr 0x4878788, size 0x54, virtual false, abstract: false, final false
  inline void set_endColor(::UnityEngine::Color value);

  /// @brief Method set_endColor_Injected, addr 0x4878d9c, size 0x44, virtual false, abstract: false, final false
  inline void set_endColor_Injected(::ByRef<::UnityEngine::Color> value);

  /// @brief Method set_endWidth, addr 0x48786a0, size 0x4c, virtual false, abstract: false, final false
  inline void set_endWidth(float_t value);

  /// @brief Method set_generateLightingData, addr 0x4879128, size 0x44, virtual false, abstract: false, final false
  inline void set_generateLightingData(bool value);

  /// @brief Method set_loop, addr 0x4878bdc, size 0x44, virtual false, abstract: false, final false
  inline void set_loop(bool value);

  /// @brief Method set_maskInteraction, addr 0x48792a8, size 0x44, virtual false, abstract: false, final false
  inline void set_maskInteraction(::UnityEngine::SpriteMaskInteraction value);

  /// @brief Method set_numCapVertices, addr 0x4878adc, size 0x44, virtual false, abstract: false, final false
  inline void set_numCapVertices(int32_t value);

  /// @brief Method set_numCornerVertices, addr 0x4878a5c, size 0x44, virtual false, abstract: false, final false
  inline void set_numCornerVertices(int32_t value);

  /// @brief Method set_numPositions, addr 0x48788dc, size 0x44, virtual false, abstract: false, final false
  inline void set_numPositions(int32_t value);

  /// @brief Method set_positionCount, addr 0x4878820, size 0x44, virtual false, abstract: false, final false
  inline void set_positionCount(int32_t value);

  /// @brief Method set_shadowBias, addr 0x48790a0, size 0x4c, virtual false, abstract: false, final false
  inline void set_shadowBias(float_t value);

  /// @brief Method set_startColor, addr 0x4878734, size 0x54, virtual false, abstract: false, final false
  inline void set_startColor(::UnityEngine::Color value);

  /// @brief Method set_startColor_Injected, addr 0x4878cbc, size 0x44, virtual false, abstract: false, final false
  inline void set_startColor_Injected(::ByRef<::UnityEngine::Color> value);

  /// @brief Method set_startWidth, addr 0x4878654, size 0x4c, virtual false, abstract: false, final false
  inline void set_startWidth(float_t value);

  /// @brief Method set_textureMode, addr 0x48791a8, size 0x44, virtual false, abstract: false, final false
  inline void set_textureMode(::UnityEngine::LineTextureMode value);

  /// @brief Method set_textureScale, addr 0x4878fd8, size 0x48, virtual false, abstract: false, final false
  inline void set_textureScale(::UnityEngine::Vector2 value);

  /// @brief Method set_textureScale_Injected, addr 0x4879020, size 0x44, virtual false, abstract: false, final false
  inline void set_textureScale_Injected(::ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_useWorldSpace, addr 0x4878b5c, size 0x44, virtual false, abstract: false, final false
  inline void set_useWorldSpace(bool value);

  /// @brief Method set_widthCurve, addr 0x487948c, size 0x44, virtual false, abstract: false, final false
  inline void set_widthCurve(::UnityEngine::AnimationCurve* value);

  /// @brief Method set_widthMultiplier, addr 0x48789d4, size 0x4c, virtual false, abstract: false, final false
  inline void set_widthMultiplier(float_t value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10734 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LineRenderer, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::LineRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LineRenderer*, "UnityEngine", "LineRenderer");
