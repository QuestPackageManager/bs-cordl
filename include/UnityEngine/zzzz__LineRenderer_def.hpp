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

  /// @brief Method BakeMesh, addr 0x4873738, size 0x5c, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, bool useTransform);

  /// @brief Method BakeMesh, addr 0x48736b8, size 0x80, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, bool useTransform);

  /// @brief Method GetColorGradientCopy, addr 0x48738d0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Gradient* GetColorGradientCopy();

  /// @brief Method GetPosition, addr 0x4873210, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPosition(int32_t index);

  /// @brief Method GetPosition_Injected, addr 0x4873274, size 0x54, virtual false, abstract: false, final false
  inline void GetPosition_Injected(int32_t index, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetPositions, addr 0x4873994, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetPositions(::ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> positions);

  /// @brief Method GetPositions, addr 0x4873bdc, size 0x98, virtual false, abstract: false, final false
  inline int32_t GetPositions(::ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>> positions);

  /// @brief Method GetPositions, addr 0x4873cc8, size 0xd4, virtual false, abstract: false, final false
  inline int32_t GetPositions(::ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>> positions);

  /// @brief Method GetPositionsWithNativeContainer, addr 0x4873c74, size 0x54, virtual false, abstract: false, final false
  inline int32_t GetPositionsWithNativeContainer(::System::IntPtr positions, int32_t length);

  /// @brief Method GetWidthCurveCopy, addr 0x48737d0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* GetWidthCurveCopy();

  static inline ::UnityEngine::LineRenderer* New_ctor();

  /// @brief Method SetColorGradient, addr 0x4873950, size 0x44, virtual false, abstract: false, final false
  inline void SetColorGradient(::UnityEngine::Gradient* curve);

  /// @brief Method SetColors, addr 0x4872a6c, size 0x48, virtual false, abstract: false, final false
  inline void SetColors(::UnityEngine::Color start, ::UnityEngine::Color end);

  /// @brief Method SetPosition, addr 0x4873160, size 0x5c, virtual false, abstract: false, final false
  inline void SetPosition(int32_t index, ::UnityEngine::Vector3 position);

  /// @brief Method SetPosition_Injected, addr 0x48731bc, size 0x54, virtual false, abstract: false, final false
  inline void SetPosition_Injected(int32_t index, ::ByRef<::UnityEngine::Vector3> position);

  /// @brief Method SetPositions, addr 0x48739d8, size 0x44, virtual false, abstract: false, final false
  inline void SetPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions);

  /// @brief Method SetPositions, addr 0x4873a1c, size 0x98, virtual false, abstract: false, final false
  inline void SetPositions(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> positions);

  /// @brief Method SetPositions, addr 0x4873b08, size 0xd4, virtual false, abstract: false, final false
  inline void SetPositions(::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> positions);

  /// @brief Method SetPositionsWithNativeContainer, addr 0x4873ab4, size 0x54, virtual false, abstract: false, final false
  inline void SetPositionsWithNativeContainer(::System::IntPtr positions, int32_t count);

  /// @brief Method SetVertexCount, addr 0x4872b5c, size 0x44, virtual false, abstract: false, final false
  inline void SetVertexCount(int32_t count);

  /// @brief Method SetWidth, addr 0x4872958, size 0x7c, virtual false, abstract: false, final false
  inline void SetWidth(float_t start, float_t end);

  /// @brief Method SetWidthCurve, addr 0x4873850, size 0x44, virtual false, abstract: false, final false
  inline void SetWidthCurve(::UnityEngine::AnimationCurve* curve);

  /// @brief Method Simplify, addr 0x487366c, size 0x4c, virtual false, abstract: false, final false
  inline void Simplify(float_t tolerance);

  /// @brief Method .ctor, addr 0x4873d9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_alignment, addr 0x487356c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::LineAlignment get_alignment();

  /// @brief Method get_colorGradient, addr 0x4873894, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Gradient* get_colorGradient();

  /// @brief Method get_endColor, addr 0x4873080, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_endColor();

  /// @brief Method get_endColor_Injected, addr 0x48730d8, size 0x44, virtual false, abstract: false, final false
  inline void get_endColor_Injected(::ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_endWidth, addr 0x4872cdc, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_endWidth();

  /// @brief Method get_generateLightingData, addr 0x487346c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_generateLightingData();

  /// @brief Method get_loop, addr 0x4872f20, size 0x3c, virtual false, abstract: false, final false
  inline bool get_loop();

  /// @brief Method get_maskInteraction, addr 0x48735ec, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::SpriteMaskInteraction get_maskInteraction();

  /// @brief Method get_numCapVertices, addr 0x4872e20, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_numCapVertices();

  /// @brief Method get_numCornerVertices, addr 0x4872da0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_numCornerVertices();

  /// @brief Method get_numPositions, addr 0x4872be4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_numPositions();

  /// @brief Method get_positionCount, addr 0x4872c20, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_positionCount();

  /// @brief Method get_shadowBias, addr 0x48733e4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_shadowBias();

  /// @brief Method get_startColor, addr 0x4872fa0, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_startColor();

  /// @brief Method get_startColor_Injected, addr 0x4872ff8, size 0x44, virtual false, abstract: false, final false
  inline void get_startColor_Injected(::ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_startWidth, addr 0x4872ca0, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_startWidth();

  /// @brief Method get_textureMode, addr 0x48734ec, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::LineTextureMode get_textureMode();

  /// @brief Method get_textureScale, addr 0x48732c8, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_textureScale();

  /// @brief Method get_textureScale_Injected, addr 0x4873314, size 0x44, virtual false, abstract: false, final false
  inline void get_textureScale_Injected(::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_useWorldSpace, addr 0x4872ea0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useWorldSpace();

  /// @brief Method get_widthCurve, addr 0x4873794, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* get_widthCurve();

  /// @brief Method get_widthMultiplier, addr 0x4872d18, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_widthMultiplier();

  /// @brief Method set_alignment, addr 0x48735a8, size 0x44, virtual false, abstract: false, final false
  inline void set_alignment(::UnityEngine::LineAlignment value);

  /// @brief Method set_colorGradient, addr 0x487390c, size 0x44, virtual false, abstract: false, final false
  inline void set_colorGradient(::UnityEngine::Gradient* value);

  /// @brief Method set_endColor, addr 0x4872b08, size 0x54, virtual false, abstract: false, final false
  inline void set_endColor(::UnityEngine::Color value);

  /// @brief Method set_endColor_Injected, addr 0x487311c, size 0x44, virtual false, abstract: false, final false
  inline void set_endColor_Injected(::ByRef<::UnityEngine::Color> value);

  /// @brief Method set_endWidth, addr 0x4872a20, size 0x4c, virtual false, abstract: false, final false
  inline void set_endWidth(float_t value);

  /// @brief Method set_generateLightingData, addr 0x48734a8, size 0x44, virtual false, abstract: false, final false
  inline void set_generateLightingData(bool value);

  /// @brief Method set_loop, addr 0x4872f5c, size 0x44, virtual false, abstract: false, final false
  inline void set_loop(bool value);

  /// @brief Method set_maskInteraction, addr 0x4873628, size 0x44, virtual false, abstract: false, final false
  inline void set_maskInteraction(::UnityEngine::SpriteMaskInteraction value);

  /// @brief Method set_numCapVertices, addr 0x4872e5c, size 0x44, virtual false, abstract: false, final false
  inline void set_numCapVertices(int32_t value);

  /// @brief Method set_numCornerVertices, addr 0x4872ddc, size 0x44, virtual false, abstract: false, final false
  inline void set_numCornerVertices(int32_t value);

  /// @brief Method set_numPositions, addr 0x4872c5c, size 0x44, virtual false, abstract: false, final false
  inline void set_numPositions(int32_t value);

  /// @brief Method set_positionCount, addr 0x4872ba0, size 0x44, virtual false, abstract: false, final false
  inline void set_positionCount(int32_t value);

  /// @brief Method set_shadowBias, addr 0x4873420, size 0x4c, virtual false, abstract: false, final false
  inline void set_shadowBias(float_t value);

  /// @brief Method set_startColor, addr 0x4872ab4, size 0x54, virtual false, abstract: false, final false
  inline void set_startColor(::UnityEngine::Color value);

  /// @brief Method set_startColor_Injected, addr 0x487303c, size 0x44, virtual false, abstract: false, final false
  inline void set_startColor_Injected(::ByRef<::UnityEngine::Color> value);

  /// @brief Method set_startWidth, addr 0x48729d4, size 0x4c, virtual false, abstract: false, final false
  inline void set_startWidth(float_t value);

  /// @brief Method set_textureMode, addr 0x4873528, size 0x44, virtual false, abstract: false, final false
  inline void set_textureMode(::UnityEngine::LineTextureMode value);

  /// @brief Method set_textureScale, addr 0x4873358, size 0x48, virtual false, abstract: false, final false
  inline void set_textureScale(::UnityEngine::Vector2 value);

  /// @brief Method set_textureScale_Injected, addr 0x48733a0, size 0x44, virtual false, abstract: false, final false
  inline void set_textureScale_Injected(::ByRef<::UnityEngine::Vector2> value);

  /// @brief Method set_useWorldSpace, addr 0x4872edc, size 0x44, virtual false, abstract: false, final false
  inline void set_useWorldSpace(bool value);

  /// @brief Method set_widthCurve, addr 0x487380c, size 0x44, virtual false, abstract: false, final false
  inline void set_widthCurve(::UnityEngine::AnimationCurve* value);

  /// @brief Method set_widthMultiplier, addr 0x4872d54, size 0x4c, virtual false, abstract: false, final false
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
