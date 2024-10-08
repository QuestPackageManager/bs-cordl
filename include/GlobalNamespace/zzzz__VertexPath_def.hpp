#pragma once
// IWYU pragma private; include "GlobalNamespace/VertexPath.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VertexPath)
namespace GlobalNamespace {
class BezierPath;
}
namespace GlobalNamespace {
struct __VertexPath__Vertex;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class VertexPath;
}
namespace GlobalNamespace {
struct __VertexPath__Vertex;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VertexPath);
MARK_VAL_T(::GlobalNamespace::__VertexPath__Vertex);
// Type: ::Vertex
// SizeInfo { instance_size: 36, native_size: 36, calculated_instance_size: 36, calculated_native_size: 52, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::VertexPath::Vertex
struct CORDL_TYPE __VertexPath__Vertex {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __VertexPath__Vertex();

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "tangent", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
  // None }, CppParam { name: "normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
  constexpr __VertexPath__Vertex(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 tangent, ::UnityEngine::Vector3 normal) noexcept;

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field tangent, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 tangent;

  /// @brief Field normal, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 normal;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5157 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__VertexPath__Vertex, 0x24>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__VertexPath__Vertex, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VertexPath__Vertex, tangent) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__VertexPath__Vertex, normal) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::VertexPath
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VertexPath*
class CORDL_TYPE VertexPath : public ::System::Object {
public:
  // Declarations
  using Vertex = ::GlobalNamespace::__VertexPath__Vertex;

  /// @brief Field _anchorVertexMap, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__anchorVertexMap, put = __cordl_internal_set__anchorVertexMap)) ::ArrayW<int32_t, ::Array<int32_t>*> _anchorVertexMap;

  /// @brief Field _back, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF__back, put = setStaticF__back)) ::UnityEngine::Vector3 _back;

  /// @brief Field _cumulativeLengthAtEachVertex, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__cumulativeLengthAtEachVertex, put = __cordl_internal_set__cumulativeLengthAtEachVertex)) ::ArrayW<float_t, ::Array<float_t>*>
      _cumulativeLengthAtEachVertex;

  /// @brief Field _length, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__length, put = __cordl_internal_set__length)) float_t _length;

  /// @brief Field _localVertices, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__localVertices,
                      put = __cordl_internal_set__localVertices)) ::ArrayW<::GlobalNamespace::__VertexPath__Vertex, ::Array<::GlobalNamespace::__VertexPath__Vertex>*>
      _localVertices;

  __declspec(property(get = get_length)) float_t length;

  /// @brief Field vertexCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_vertexCount, put = __cordl_internal_set_vertexCount)) int32_t vertexCount;

  /// @brief Method AddVertex, addr 0x3abd72c, size 0x40c, virtual false, abstract: false, final false
  inline void AddVertex(ByRef<::UnityEngine::Vector3> p0, ByRef<::UnityEngine::Vector3> p1, ByRef<::UnityEngine::Vector3> p2, ByRef<::UnityEngine::Vector3> p3, float_t t,
                        ByRef<::UnityEngine::Vector3> lastRotationAxis, ByRef<float_t> currentPathLength, ByRef<::GlobalNamespace::__VertexPath__Vertex> lastVertex, ByRef<int32_t> vertCount);

  /// @brief Method GetPoint, addr 0x3abd6f4, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPoint(int32_t index);

  /// @brief Method GetVertex, addr 0x3abd694, size 0x60, virtual false, abstract: false, final false
  inline void GetVertex(int32_t index, ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Vector3> tangent, ByRef<::UnityEngine::Vector3> normal);

  static inline ::GlobalNamespace::VertexPath* New_ctor(int32_t numberOfPathSegments);

  /// @brief Method SplitBezierPathIntoFixNumberOfSegments, addr 0x3abd120, size 0x53c, virtual false, abstract: false, final false
  inline void SplitBezierPathIntoFixNumberOfSegments(::GlobalNamespace::BezierPath* bezierPath, int32_t numberOfVertexSegments);

  /// @brief Method TimeAtPoint, addr 0x3abd65c, size 0x38, virtual false, abstract: false, final false
  inline float_t TimeAtPoint(int32_t pointIndex);

  /// @brief Method UpdateByBezierPath, addr 0x3abcca0, size 0x458, virtual false, abstract: false, final false
  inline void UpdateByBezierPath(::GlobalNamespace::BezierPath* bezierPath);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__anchorVertexMap() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__anchorVertexMap();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__cumulativeLengthAtEachVertex() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__cumulativeLengthAtEachVertex();

  constexpr float_t const& __cordl_internal_get__length() const;

  constexpr float_t& __cordl_internal_get__length();

  constexpr ::ArrayW<::GlobalNamespace::__VertexPath__Vertex, ::Array<::GlobalNamespace::__VertexPath__Vertex>*> const& __cordl_internal_get__localVertices() const;

  constexpr ::ArrayW<::GlobalNamespace::__VertexPath__Vertex, ::Array<::GlobalNamespace::__VertexPath__Vertex>*>& __cordl_internal_get__localVertices();

  constexpr int32_t const& __cordl_internal_get_vertexCount() const;

  constexpr int32_t& __cordl_internal_get_vertexCount();

  constexpr void __cordl_internal_set__anchorVertexMap(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__cumulativeLengthAtEachVertex(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__length(float_t value);

  constexpr void __cordl_internal_set__localVertices(::ArrayW<::GlobalNamespace::__VertexPath__Vertex, ::Array<::GlobalNamespace::__VertexPath__Vertex>*> value);

  constexpr void __cordl_internal_set_vertexCount(int32_t value);

  /// @brief Method .ctor, addr 0x3abcbbc, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(int32_t numberOfPathSegments);

  static inline ::UnityEngine::Vector3 getStaticF__back();

  /// @brief Method get_length, addr 0x3abd118, size 0x8, virtual false, abstract: false, final false
  inline float_t get_length();

  static inline void setStaticF__back(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VertexPath();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VertexPath", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VertexPath(VertexPath&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VertexPath", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VertexPath(VertexPath const&) = delete;

  /// @brief Field vertexCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___vertexCount;

  /// @brief Field _localVertices, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__VertexPath__Vertex, ::Array<::GlobalNamespace::__VertexPath__Vertex>*> ____localVertices;

  /// @brief Field _length, offset: 0x20, size: 0x4, def value: None
  float_t ____length;

  /// @brief Field _cumulativeLengthAtEachVertex, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____cumulativeLengthAtEachVertex;

  /// @brief Field _anchorVertexMap, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____anchorVertexMap;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5158 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VertexPath, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VertexPath, ___vertexCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VertexPath, ____localVertices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VertexPath, ____length) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VertexPath, ____cumulativeLengthAtEachVertex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VertexPath, ____anchorVertexMap) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VertexPath);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VertexPath*, "", "VertexPath");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__VertexPath__Vertex, "", "VertexPath/Vertex");
