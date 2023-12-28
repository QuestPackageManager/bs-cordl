#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Sphere)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Sphere;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Shapes::Sphere);
// Type: UnityEngine.ProBuilder.Shapes::Sphere
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12233))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12235))
// CS Name: ::UnityEngine.ProBuilder.Shapes::Sphere*
class CORDL_TYPE Sphere : public ::UnityEngine::ProBuilder::Shapes::Shape {
public:
  // Declarations
  /// @brief Field m_Subdivisions, offset 0x10, size 0x4
  __declspec(property(get = __get_m_Subdivisions, put = __set_m_Subdivisions)) int32_t m_Subdivisions;

  /// @brief Field m_BottomMostVertexIndex, offset 0x14, size 0x4
  __declspec(property(get = __get_m_BottomMostVertexIndex, put = __set_m_BottomMostVertexIndex)) int32_t m_BottomMostVertexIndex;

  /// @brief Field m_Smooth, offset 0x18, size 0x1
  __declspec(property(get = __get_m_Smooth, put = __set_m_Smooth)) bool m_Smooth;

  /// @brief Field k_IcosphereVertices, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_IcosphereVertices, put = setStaticF_k_IcosphereVertices))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> k_IcosphereVertices;

  /// @brief Field k_IcosphereTriangles, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_IcosphereTriangles, put = setStaticF_k_IcosphereTriangles))::ArrayW<int32_t, ::Array<int32_t>*> k_IcosphereTriangles;

  constexpr int32_t& __get_m_Subdivisions();

  constexpr int32_t const& __get_m_Subdivisions() const;

  constexpr void __set_m_Subdivisions(int32_t value);

  constexpr int32_t& __get_m_BottomMostVertexIndex();

  constexpr int32_t const& __get_m_BottomMostVertexIndex() const;

  constexpr void __set_m_BottomMostVertexIndex(int32_t value);

  constexpr bool& __get_m_Smooth();

  constexpr bool const& __get_m_Smooth() const;

  constexpr void __set_m_Smooth(bool value);

  static inline void setStaticF_k_IcosphereVertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_k_IcosphereVertices();

  static inline void setStaticF_k_IcosphereTriangles(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_k_IcosphereTriangles();

  /// @brief Method CopyShape addr 0x2b8dc68 size 0x84 virtual true final false
  inline void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape);

  /// @brief Method UpdateBounds addr 0x2b8dcec size 0x6c virtual true final false
  inline ::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation, ::UnityEngine::Bounds bounds);

  /// @brief Method RebuildMesh addr 0x2b8dd58 size 0x8fc virtual true final false
  inline ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation);

  /// @brief Method SubdivideIcosahedron addr 0x2b8e654 size 0x62c virtual false final false
  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> SubdivideIcosahedron(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices, float_t radius);

  static inline ::UnityEngine::ProBuilder::Shapes::Sphere* New_ctor();

  /// @brief Method .ctor addr 0x2b8ec80 size 0x18 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Sphere", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Sphere(Sphere&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Sphere", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Sphere(Sphere const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Sphere();

public:
  /// @brief Field m_Subdivisions, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Subdivisions;

  /// @brief Field m_BottomMostVertexIndex, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_BottomMostVertexIndex;

  /// @brief Field m_Smooth, offset: 0x18, size: 0x1, def value: None
  bool ___m_Smooth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::Sphere, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Sphere);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Sphere*, "UnityEngine.ProBuilder.Shapes", "Sphere");
