#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Gizmo/PolylineRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PolylineRenderer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Gizmo {
class PolylineRenderer;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer);
// Dependencies System.Object, UnityEngine.Bounds, UnityEngine.Matrix4x4
namespace Meta::XR::ImmersiveDebugger::Gizmo {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer
class CORDL_TYPE PolylineRenderer : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BufferSize)) int32_t BufferSize;

  __declspec(property(get = get_Copies)) int32_t Copies;

  __declspec(property(get = get_LineScaleFactor, put = set_LineScaleFactor)) float_t LineScaleFactor;

  /// @brief Field _argsBuffer, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__argsBuffer, put = __cordl_internal_set__argsBuffer)) ::UnityEngine::ComputeBuffer* _argsBuffer;

  /// @brief Field _argsData, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__argsData, put = __cordl_internal_set__argsData)) ::ArrayW<uint32_t, ::Array<uint32_t>*> _argsData;

  /// @brief Field _baseMesh, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__baseMesh, put = __cordl_internal_set__baseMesh)) ::UnityW<::UnityEngine::Mesh> _baseMesh;

  /// @brief Field _bounds, offset 0x2c, size 0x18
  __declspec(property(get = __cordl_internal_get__bounds, put = __cordl_internal_set__bounds)) ::UnityEngine::Bounds _bounds;

  /// @brief Field _colorBuffer, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__colorBuffer, put = __cordl_internal_set__colorBuffer)) ::UnityEngine::ComputeBuffer* _colorBuffer;

  /// @brief Field _colorBufferShaderID, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get__colorBufferShaderID, put = __cordl_internal_set__colorBufferShaderID)) int32_t _colorBufferShaderID;

  /// @brief Field _colors, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__colors, put = __cordl_internal_set__colors)) ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> _colors;

  /// @brief Field _colorsNeedUpdate, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__colorsNeedUpdate, put = __cordl_internal_set__colorsNeedUpdate)) bool _colorsNeedUpdate;

  /// @brief Field _lineScaleFactor, offset 0xd4, size 0x4
  __declspec(property(get = __cordl_internal_get__lineScaleFactor, put = __cordl_internal_set__lineScaleFactor)) float_t _lineScaleFactor;

  /// @brief Field _localToWorldShaderID, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__localToWorldShaderID, put = __cordl_internal_set__localToWorldShaderID)) int32_t _localToWorldShaderID;

  /// @brief Field _material, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__material, put = __cordl_internal_set__material)) ::UnityW<::UnityEngine::Material> _material;

  /// @brief Field _matrix, offset 0x94, size 0x40
  __declspec(property(get = __cordl_internal_get__matrix, put = __cordl_internal_set__matrix)) ::UnityEngine::Matrix4x4 _matrix;

  /// @brief Field _maxLineCount, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__maxLineCount, put = __cordl_internal_set__maxLineCount)) int32_t _maxLineCount;

  /// @brief Field _positionBuffer, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__positionBuffer, put = __cordl_internal_set__positionBuffer)) ::UnityEngine::ComputeBuffer* _positionBuffer;

  /// @brief Field _positionBufferShaderID, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__positionBufferShaderID, put = __cordl_internal_set__positionBufferShaderID)) int32_t _positionBufferShaderID;

  /// @brief Field _positions, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__positions, put = __cordl_internal_set__positions)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> _positions;

  /// @brief Field _positionsNeedUpdate, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__positionsNeedUpdate, put = __cordl_internal_set__positionsNeedUpdate)) bool _positionsNeedUpdate;

  /// @brief Field _renderSinglePass, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__renderSinglePass, put = __cordl_internal_set__renderSinglePass)) bool _renderSinglePass;

  /// @brief Field _scaleShaderID, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__scaleShaderID, put = __cordl_internal_set__scaleShaderID)) int32_t _scaleShaderID;

  /// @brief Method Cleanup, addr 0x58bbc80, size 0xf4, virtual false, abstract: false, final false
  inline void Cleanup();

  static inline ::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer* New_ctor(::UnityEngine::Material* material, bool renderSinglePass);

  /// @brief Method PrepareColorBuffer, addr 0x58bfabc, size 0x110, virtual false, abstract: false, final false
  inline void PrepareColorBuffer(int32_t count);

  /// @brief Method RenderLines, addr 0x58bbe4c, size 0x1d0, virtual false, abstract: false, final false
  inline void RenderLines();

  /// @brief Method SetColor, addr 0x58bf8c8, size 0xd4, virtual false, abstract: false, final false
  inline void SetColor(int32_t count, ::UnityEngine::Color color);

  /// @brief Method SetColors, addr 0x58bf99c, size 0x120, virtual false, abstract: false, final false
  inline void SetColors(int32_t count, ::System::Collections::Generic::List_1<::UnityEngine::Color>* colors);

  /// @brief Method SetDrawCount, addr 0x58bf884, size 0x44, virtual false, abstract: false, final false
  inline void SetDrawCount(int32_t c);

  /// @brief Method SetLines, addr 0x58bf490, size 0xb4, virtual false, abstract: false, final false
  inline void SetLines(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* positions, ::UnityEngine::Color color);

  /// @brief Method SetLines, addr 0x58bbdb0, size 0x9c, virtual false, abstract: false, final false
  inline void SetLines(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* positions, ::System::Collections::Generic::List_1<::UnityEngine::Color>* colors, int32_t maxCount);

  /// @brief Method SetPositions, addr 0x58bf544, size 0x340, virtual false, abstract: false, final false
  inline void SetPositions(int32_t count, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* positions);

  /// @brief Method SetTransform, addr 0x58bfbcc, size 0x48, virtual false, abstract: false, final false
  inline void SetTransform(::UnityEngine::Transform* transform);

  constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get__argsBuffer() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get__argsBuffer();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get__argsData() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get__argsData();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__baseMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__baseMesh();

  constexpr ::UnityEngine::Bounds const& __cordl_internal_get__bounds() const;

  constexpr ::UnityEngine::Bounds& __cordl_internal_get__bounds();

  constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get__colorBuffer() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get__colorBuffer();

  constexpr int32_t const& __cordl_internal_get__colorBufferShaderID() const;

  constexpr int32_t& __cordl_internal_get__colorBufferShaderID();

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> const& __cordl_internal_get__colors() const;

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>& __cordl_internal_get__colors();

  constexpr bool const& __cordl_internal_get__colorsNeedUpdate() const;

  constexpr bool& __cordl_internal_get__colorsNeedUpdate();

  constexpr float_t const& __cordl_internal_get__lineScaleFactor() const;

  constexpr float_t& __cordl_internal_get__lineScaleFactor();

  constexpr int32_t const& __cordl_internal_get__localToWorldShaderID() const;

  constexpr int32_t& __cordl_internal_get__localToWorldShaderID();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get__matrix() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get__matrix();

  constexpr int32_t const& __cordl_internal_get__maxLineCount() const;

  constexpr int32_t& __cordl_internal_get__maxLineCount();

  constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get__positionBuffer() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get__positionBuffer();

  constexpr int32_t const& __cordl_internal_get__positionBufferShaderID() const;

  constexpr int32_t& __cordl_internal_get__positionBufferShaderID();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get__positions() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get__positions();

  constexpr bool const& __cordl_internal_get__positionsNeedUpdate() const;

  constexpr bool& __cordl_internal_get__positionsNeedUpdate();

  constexpr bool const& __cordl_internal_get__renderSinglePass() const;

  constexpr bool& __cordl_internal_get__renderSinglePass();

  constexpr int32_t const& __cordl_internal_get__scaleShaderID() const;

  constexpr int32_t& __cordl_internal_get__scaleShaderID();

  constexpr void __cordl_internal_set__argsBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set__argsData(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set__baseMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set__bounds(::UnityEngine::Bounds value);

  constexpr void __cordl_internal_set__colorBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set__colorBufferShaderID(int32_t value);

  constexpr void __cordl_internal_set__colors(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  constexpr void __cordl_internal_set__colorsNeedUpdate(bool value);

  constexpr void __cordl_internal_set__lineScaleFactor(float_t value);

  constexpr void __cordl_internal_set__localToWorldShaderID(int32_t value);

  constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__matrix(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set__maxLineCount(int32_t value);

  constexpr void __cordl_internal_set__positionBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set__positionBufferShaderID(int32_t value);

  constexpr void __cordl_internal_set__positions(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set__positionsNeedUpdate(bool value);

  constexpr void __cordl_internal_set__renderSinglePass(bool value);

  constexpr void __cordl_internal_set__scaleShaderID(int32_t value);

  /// @brief Method .ctor, addr 0x58bb7a0, size 0x460, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Material* material, bool renderSinglePass);

  /// @brief Method get_BufferSize, addr 0x58bf46c, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_BufferSize();

  /// @brief Method get_Copies, addr 0x58bf458, size 0x14, virtual false, abstract: false, final false
  inline int32_t get_Copies();

  /// @brief Method get_LineScaleFactor, addr 0x58bf480, size 0x8, virtual false, abstract: false, final false
  inline float_t get_LineScaleFactor();

  /// @brief Method set_LineScaleFactor, addr 0x58bf488, size 0x8, virtual false, abstract: false, final false
  inline void set_LineScaleFactor(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PolylineRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PolylineRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PolylineRenderer(PolylineRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PolylineRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PolylineRenderer(PolylineRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18442 };

  /// @brief Field _positions, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ____positions;

  /// @brief Field _positionsNeedUpdate, offset: 0x18, size: 0x1, def value: None
  bool ____positionsNeedUpdate;

  /// @brief Field _colors, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> ____colors;

  /// @brief Field _colorsNeedUpdate, offset: 0x28, size: 0x1, def value: None
  bool ____colorsNeedUpdate;

  /// @brief Field _bounds, offset: 0x2c, size: 0x18, def value: None
  ::UnityEngine::Bounds ____bounds;

  /// @brief Field _baseMesh, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____baseMesh;

  /// @brief Field _material, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____material;

  /// @brief Field _renderSinglePass, offset: 0x58, size: 0x1, def value: None
  bool ____renderSinglePass;

  /// @brief Field _positionBuffer, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ____positionBuffer;

  /// @brief Field _colorBuffer, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ____colorBuffer;

  /// @brief Field _argsBuffer, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ____argsBuffer;

  /// @brief Field _argsData, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ____argsData;

  /// @brief Field _positionBufferShaderID, offset: 0x80, size: 0x4, def value: None
  int32_t ____positionBufferShaderID;

  /// @brief Field _colorBufferShaderID, offset: 0x84, size: 0x4, def value: None
  int32_t ____colorBufferShaderID;

  /// @brief Field _localToWorldShaderID, offset: 0x88, size: 0x4, def value: None
  int32_t ____localToWorldShaderID;

  /// @brief Field _scaleShaderID, offset: 0x8c, size: 0x4, def value: None
  int32_t ____scaleShaderID;

  /// @brief Field _maxLineCount, offset: 0x90, size: 0x4, def value: None
  int32_t ____maxLineCount;

  /// @brief Field _matrix, offset: 0x94, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ____matrix;

  /// @brief Field _lineScaleFactor, offset: 0xd4, size: 0x4, def value: None
  float_t ____lineScaleFactor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer, ____positions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer, ____positionsNeedUpdate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer, ____colors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer, ____colorsNeedUpdate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer, ____bounds) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer, ____baseMesh) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer, ____material) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer, ____renderSinglePass) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer, ____positionBuffer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer, ____colorBuffer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer, ____argsBuffer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer, ____argsData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer, ____positionBufferShaderID) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer, ____colorBufferShaderID) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer, ____localToWorldShaderID) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer, ____scaleShaderID) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer, ____maxLineCount) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer, ____matrix) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer, ____lineScaleFactor) == 0xd4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer, 0xd8>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Gizmo
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Gizmo::PolylineRenderer*, "Meta.XR.ImmersiveDebugger.Gizmo", "PolylineRenderer");
