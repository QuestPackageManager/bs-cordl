#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LineRenderer)
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
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class LineRenderer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::LineRenderer);
// Type: UnityEngine::LineRenderer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::LineRenderer*
class CORDL_TYPE LineRenderer : public ::UnityEngine::Renderer {
public:
  // Declarations
  __declspec(property(get = get_alignment, put = set_alignment))::UnityEngine::LineAlignment alignment;

  __declspec(property(get = get_colorGradient, put = set_colorGradient))::UnityEngine::Gradient* colorGradient;

  __declspec(property(get = get_endColor, put = set_endColor))::UnityEngine::Color endColor;

  __declspec(property(get = get_endWidth, put = set_endWidth)) float_t endWidth;

  __declspec(property(get = get_generateLightingData, put = set_generateLightingData)) bool generateLightingData;

  __declspec(property(get = get_loop, put = set_loop)) bool loop;

  __declspec(property(get = get_numCapVertices, put = set_numCapVertices)) int32_t numCapVertices;

  __declspec(property(get = get_numCornerVertices, put = set_numCornerVertices)) int32_t numCornerVertices;

  __declspec(property(get = get_numPositions, put = set_numPositions)) int32_t numPositions;

  __declspec(property(get = get_positionCount, put = set_positionCount)) int32_t positionCount;

  __declspec(property(get = get_shadowBias, put = set_shadowBias)) float_t shadowBias;

  __declspec(property(get = get_startColor, put = set_startColor))::UnityEngine::Color startColor;

  __declspec(property(get = get_startWidth, put = set_startWidth)) float_t startWidth;

  __declspec(property(get = get_textureMode, put = set_textureMode))::UnityEngine::LineTextureMode textureMode;

  __declspec(property(get = get_useWorldSpace, put = set_useWorldSpace)) bool useWorldSpace;

  __declspec(property(get = get_widthCurve, put = set_widthCurve))::UnityEngine::AnimationCurve* widthCurve;

  __declspec(property(get = get_widthMultiplier, put = set_widthMultiplier)) float_t widthMultiplier;

  /// @brief Method BakeMesh, addr 0x33db83c, size 0x5c, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, bool useTransform);

  /// @brief Method BakeMesh, addr 0x33db7d8, size 0x64, virtual false, abstract: false, final false
  inline void BakeMesh(::UnityEngine::Mesh* mesh, bool useTransform);

  /// @brief Method GetColorGradientCopy, addr 0x33db9d4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Gradient* GetColorGradientCopy();

  /// @brief Method GetPosition, addr 0x33db4cc, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPosition(int32_t index);

  /// @brief Method GetPosition_Injected, addr 0x33db530, size 0x54, virtual false, abstract: false, final false
  inline void GetPosition_Injected(int32_t index, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetPositions, addr 0x33dba98, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetPositions(ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> positions);

  /// @brief Method GetPositions, addr 0x33dbce0, size 0x98, virtual false, abstract: false, final false
  inline int32_t GetPositions(ByRef<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>> positions);

  /// @brief Method GetPositions, addr 0x33dbdcc, size 0xd4, virtual false, abstract: false, final false
  inline int32_t GetPositions(ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>> positions);

  /// @brief Method GetPositionsWithNativeContainer, addr 0x33dbd78, size 0x54, virtual false, abstract: false, final false
  inline int32_t GetPositionsWithNativeContainer(void* positions, int32_t length);

  /// @brief Method GetWidthCurveCopy, addr 0x33db8d4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* GetWidthCurveCopy();

  static inline ::UnityEngine::LineRenderer* New_ctor();

  /// @brief Method SetColorGradient, addr 0x33dba54, size 0x44, virtual false, abstract: false, final false
  inline void SetColorGradient(::UnityEngine::Gradient* curve);

  /// @brief Method SetColors, addr 0x33dbf1c, size 0x48, virtual false, abstract: false, final false
  inline void SetColors(::UnityEngine::Color start, ::UnityEngine::Color end);

  /// @brief Method SetPosition, addr 0x33db41c, size 0x5c, virtual false, abstract: false, final false
  inline void SetPosition(int32_t index, ::UnityEngine::Vector3 position);

  /// @brief Method SetPosition_Injected, addr 0x33db478, size 0x54, virtual false, abstract: false, final false
  inline void SetPosition_Injected(int32_t index, ByRef<::UnityEngine::Vector3> position);

  /// @brief Method SetPositions, addr 0x33dbadc, size 0x44, virtual false, abstract: false, final false
  inline void SetPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions);

  /// @brief Method SetPositions, addr 0x33dbb20, size 0x98, virtual false, abstract: false, final false
  inline void SetPositions(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> positions);

  /// @brief Method SetPositions, addr 0x33dbc0c, size 0xd4, virtual false, abstract: false, final false
  inline void SetPositions(::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> positions);

  /// @brief Method SetPositionsWithNativeContainer, addr 0x33dbbb8, size 0x54, virtual false, abstract: false, final false
  inline void SetPositionsWithNativeContainer(void* positions, int32_t count);

  /// @brief Method SetVertexCount, addr 0x33dbf64, size 0x44, virtual false, abstract: false, final false
  inline void SetVertexCount(int32_t count);

  /// @brief Method SetWidth, addr 0x33dbea0, size 0x7c, virtual false, abstract: false, final false
  inline void SetWidth(float_t start, float_t end);

  /// @brief Method SetWidthCurve, addr 0x33db954, size 0x44, virtual false, abstract: false, final false
  inline void SetWidthCurve(::UnityEngine::AnimationCurve* curve);

  /// @brief Method Simplify, addr 0x33db78c, size 0x4c, virtual false, abstract: false, final false
  inline void Simplify(float_t tolerance);

  /// @brief Method .ctor, addr 0x33dc028, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_alignment, addr 0x33db70c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::LineAlignment get_alignment();

  /// @brief Method get_colorGradient, addr 0x33db998, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Gradient* get_colorGradient();

  /// @brief Method get_endColor, addr 0x33db268, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_endColor();

  /// @brief Method get_endColor_Injected, addr 0x33db2c0, size 0x44, virtual false, abstract: false, final false
  inline void get_endColor_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_endWidth, addr 0x33dae24, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_endWidth();

  /// @brief Method get_generateLightingData, addr 0x33db60c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_generateLightingData();

  /// @brief Method get_loop, addr 0x33db0b4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_loop();

  /// @brief Method get_numCapVertices, addr 0x33dafb4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_numCapVertices();

  /// @brief Method get_numCornerVertices, addr 0x33daf34, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_numCornerVertices();

  /// @brief Method get_numPositions, addr 0x33dbfa8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_numPositions();

  /// @brief Method get_positionCount, addr 0x33db39c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_positionCount();

  /// @brief Method get_shadowBias, addr 0x33db584, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_shadowBias();

  /// @brief Method get_startColor, addr 0x33db134, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_startColor();

  /// @brief Method get_startColor_Injected, addr 0x33db18c, size 0x44, virtual false, abstract: false, final false
  inline void get_startColor_Injected(ByRef<::UnityEngine::Color> ret);

  /// @brief Method get_startWidth, addr 0x33dad9c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_startWidth();

  /// @brief Method get_textureMode, addr 0x33db68c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::LineTextureMode get_textureMode();

  /// @brief Method get_useWorldSpace, addr 0x33db034, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useWorldSpace();

  /// @brief Method get_widthCurve, addr 0x33db898, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* get_widthCurve();

  /// @brief Method get_widthMultiplier, addr 0x33daeac, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_widthMultiplier();

  /// @brief Method set_alignment, addr 0x33db748, size 0x44, virtual false, abstract: false, final false
  inline void set_alignment(::UnityEngine::LineAlignment value);

  /// @brief Method set_colorGradient, addr 0x33dba10, size 0x44, virtual false, abstract: false, final false
  inline void set_colorGradient(::UnityEngine::Gradient* value);

  /// @brief Method set_endColor, addr 0x33db304, size 0x54, virtual false, abstract: false, final false
  inline void set_endColor(::UnityEngine::Color value);

  /// @brief Method set_endColor_Injected, addr 0x33db358, size 0x44, virtual false, abstract: false, final false
  inline void set_endColor_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method set_endWidth, addr 0x33dae60, size 0x4c, virtual false, abstract: false, final false
  inline void set_endWidth(float_t value);

  /// @brief Method set_generateLightingData, addr 0x33db648, size 0x44, virtual false, abstract: false, final false
  inline void set_generateLightingData(bool value);

  /// @brief Method set_loop, addr 0x33db0f0, size 0x44, virtual false, abstract: false, final false
  inline void set_loop(bool value);

  /// @brief Method set_numCapVertices, addr 0x33daff0, size 0x44, virtual false, abstract: false, final false
  inline void set_numCapVertices(int32_t value);

  /// @brief Method set_numCornerVertices, addr 0x33daf70, size 0x44, virtual false, abstract: false, final false
  inline void set_numCornerVertices(int32_t value);

  /// @brief Method set_numPositions, addr 0x33dbfe4, size 0x44, virtual false, abstract: false, final false
  inline void set_numPositions(int32_t value);

  /// @brief Method set_positionCount, addr 0x33db3d8, size 0x44, virtual false, abstract: false, final false
  inline void set_positionCount(int32_t value);

  /// @brief Method set_shadowBias, addr 0x33db5c0, size 0x4c, virtual false, abstract: false, final false
  inline void set_shadowBias(float_t value);

  /// @brief Method set_startColor, addr 0x33db1d0, size 0x54, virtual false, abstract: false, final false
  inline void set_startColor(::UnityEngine::Color value);

  /// @brief Method set_startColor_Injected, addr 0x33db224, size 0x44, virtual false, abstract: false, final false
  inline void set_startColor_Injected(ByRef<::UnityEngine::Color> value);

  /// @brief Method set_startWidth, addr 0x33dadd8, size 0x4c, virtual false, abstract: false, final false
  inline void set_startWidth(float_t value);

  /// @brief Method set_textureMode, addr 0x33db6c8, size 0x44, virtual false, abstract: false, final false
  inline void set_textureMode(::UnityEngine::LineTextureMode value);

  /// @brief Method set_useWorldSpace, addr 0x33db070, size 0x44, virtual false, abstract: false, final false
  inline void set_useWorldSpace(bool value);

  /// @brief Method set_widthCurve, addr 0x33db910, size 0x44, virtual false, abstract: false, final false
  inline void set_widthCurve(::UnityEngine::AnimationCurve* value);

  /// @brief Method set_widthMultiplier, addr 0x33daee8, size 0x4c, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LineRenderer, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::LineRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LineRenderer*, "UnityEngine", "LineRenderer");
