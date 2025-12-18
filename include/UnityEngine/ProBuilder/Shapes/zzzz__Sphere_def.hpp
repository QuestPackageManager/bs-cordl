#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Shapes/Sphere.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Sphere)
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Sphere;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Shapes::Sphere);
// Dependencies UnityEngine.ProBuilder.Shapes.Shape
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Shapes.Sphere
class CORDL_TYPE Sphere : public ::UnityEngine::ProBuilder::Shapes::Shape {
public:
  // Declarations
  /// @brief Field k_IcosphereTriangles, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_IcosphereTriangles, put = setStaticF_k_IcosphereTriangles)) ::ArrayW<int32_t, ::Array<int32_t>*> k_IcosphereTriangles;

  /// @brief Field k_IcosphereVertices, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_IcosphereVertices, put = setStaticF_k_IcosphereVertices)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> k_IcosphereVertices;

  /// @brief Field m_BottomMostVertexIndex, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BottomMostVertexIndex, put = __cordl_internal_set_m_BottomMostVertexIndex)) int32_t m_BottomMostVertexIndex;

  /// @brief Field m_Smooth, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Smooth, put = __cordl_internal_set_m_Smooth)) bool m_Smooth;

  /// @brief Field m_Subdivisions, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Subdivisions, put = __cordl_internal_set_m_Subdivisions)) int32_t m_Subdivisions;

  /// @brief Method CopyShape, addr 0x6551a98, size 0x90, virtual true, abstract: false, final false
  inline void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape);

  static inline ::UnityEngine::ProBuilder::Shapes::Sphere* New_ctor();

  /// @brief Method RebuildMesh, addr 0x6551b84, size 0x8e8, virtual true, abstract: false, final false
  inline ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation);

  /// @brief Method SubdivideIcosahedron, addr 0x655246c, size 0x50c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> SubdivideIcosahedron(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices, float_t radius);

  /// @brief Method UpdateBounds, addr 0x6551b28, size 0x5c, virtual true, abstract: false, final false
  inline ::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation, ::UnityEngine::Bounds bounds);

  constexpr int32_t const& __cordl_internal_get_m_BottomMostVertexIndex() const;

  constexpr int32_t& __cordl_internal_get_m_BottomMostVertexIndex();

  constexpr bool const& __cordl_internal_get_m_Smooth() const;

  constexpr bool& __cordl_internal_get_m_Smooth();

  constexpr int32_t const& __cordl_internal_get_m_Subdivisions() const;

  constexpr int32_t& __cordl_internal_get_m_Subdivisions();

  constexpr void __cordl_internal_set_m_BottomMostVertexIndex(int32_t value);

  constexpr void __cordl_internal_set_m_Smooth(bool value);

  constexpr void __cordl_internal_set_m_Subdivisions(int32_t value);

  /// @brief Method .ctor, addr 0x6552978, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_k_IcosphereTriangles();

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_k_IcosphereVertices();

  static inline void setStaticF_k_IcosphereTriangles(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_k_IcosphereVertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Sphere();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Sphere", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Sphere(Sphere&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Sphere", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Sphere(Sphere const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16814 };

  /// @brief Field m_Subdivisions, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Subdivisions;

  /// @brief Field m_BottomMostVertexIndex, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_BottomMostVertexIndex;

  /// @brief Field m_Smooth, offset: 0x18, size: 0x1, def value: None
  bool ___m_Smooth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Sphere, ___m_Subdivisions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Sphere, ___m_BottomMostVertexIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Shapes::Sphere, ___m_Smooth) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::Sphere, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Sphere);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Sphere*, "UnityEngine.ProBuilder.Shapes", "Sphere");
