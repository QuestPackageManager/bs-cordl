#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/ShapeGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ShapeGenerator)
namespace UnityEngine::ProBuilder {
struct Axis;
}
namespace UnityEngine::ProBuilder {
struct PivotLocation;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
struct ShapeType;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ShapeGenerator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::ShapeGenerator);
// Type: UnityEngine.ProBuilder::ShapeGenerator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder::ShapeGenerator*
class CORDL_TYPE ShapeGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_CubeTriangles, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_CubeTriangles, put = setStaticF_k_CubeTriangles))::ArrayW<int32_t, ::Array<int32_t>*> k_CubeTriangles;

  /// @brief Field k_CubeVertices, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_CubeVertices, put = setStaticF_k_CubeVertices))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> k_CubeVertices;

  /// @brief Field k_IcosphereTriangles, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_IcosphereTriangles, put = setStaticF_k_IcosphereTriangles))::ArrayW<int32_t, ::Array<int32_t>*> k_IcosphereTriangles;

  /// @brief Field k_IcosphereVertices, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_IcosphereVertices, put = setStaticF_k_IcosphereVertices))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> k_IcosphereVertices;

  /// @brief Method CreateShape, addr 0x32de240, size 0x4d8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> CreateShape(::UnityEngine::ProBuilder::ShapeType shape, ::UnityEngine::ProBuilder::PivotLocation pivotType);

  /// @brief Method GenerateArch, addr 0x32e3f9c, size 0x780, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> GenerateArch(::UnityEngine::ProBuilder::PivotLocation pivotType, float_t angle, float_t radius, float_t width, float_t depth,
                                                                                 int32_t radialCuts, bool insideFaces, bool outsideFaces, bool frontFaces, bool backFaces, bool endCaps);

  /// @brief Method GenerateCone, addr 0x32e35bc, size 0x9e0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> GenerateCone(::UnityEngine::ProBuilder::PivotLocation pivotType, float_t radius, float_t height, int32_t subdivAxis);

  /// @brief Method GenerateCube, addr 0x32de718, size 0x270, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> GenerateCube(::UnityEngine::ProBuilder::PivotLocation pivotType, ::UnityEngine::Vector3 size);

  /// @brief Method GenerateCurvedStair, addr 0x32df38c, size 0xdf8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> GenerateCurvedStair(::UnityEngine::ProBuilder::PivotLocation pivotType, float_t stairWidth, float_t height, float_t innerRadius,
                                                                                        float_t circumference, int32_t steps, bool buildSides);

  /// @brief Method GenerateCylinder, addr 0x32e0838, size 0x924, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> GenerateCylinder(::UnityEngine::ProBuilder::PivotLocation pivotType, int32_t axisDivisions, float_t radius, float_t height,
                                                                                     int32_t heightCuts, int32_t smoothing);

  /// @brief Method GenerateDoor, addr 0x32e1750, size 0x16f4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> GenerateDoor(::UnityEngine::ProBuilder::PivotLocation pivotType, float_t totalWidth, float_t totalHeight, float_t ledgeHeight,
                                                                                 float_t legWidth, float_t depth);

  /// @brief Method GenerateIcosahedron, addr 0x32e471c, size 0xa70, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> GenerateIcosahedron(::UnityEngine::ProBuilder::PivotLocation pivotType, float_t radius, int32_t subdivisions, bool weldVertices,
                                                                                        bool manualUvs);

  /// @brief Method GeneratePipe, addr 0x32e2e44, size 0x778, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> GeneratePipe(::UnityEngine::ProBuilder::PivotLocation pivotType, float_t radius, float_t height, float_t thickness,
                                                                                 int32_t subdivAxis, int32_t subdivHeight);

  /// @brief Method GeneratePlane, addr 0x32e115c, size 0x5f4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> GeneratePlane(::UnityEngine::ProBuilder::PivotLocation pivotType, float_t width, float_t height, int32_t widthCuts,
                                                                                  int32_t heightCuts, ::UnityEngine::ProBuilder::Axis axis);

  /// @brief Method GeneratePrism, addr 0x32e0184, size 0x6b4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> GeneratePrism(::UnityEngine::ProBuilder::PivotLocation pivotType, ::UnityEngine::Vector3 size);

  /// @brief Method GenerateStair, addr 0x32de988, size 0xa04, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> GenerateStair(::UnityEngine::ProBuilder::PivotLocation pivotType, ::UnityEngine::Vector3 size, int32_t steps, bool buildSides);

  /// @brief Method GenerateStair, addr 0x32e57d0, size 0x4e8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> GenerateStair(::UnityEngine::ProBuilder::PivotLocation pivotType, int32_t steps, float_t width, float_t height, float_t depth,
                                                                                  bool sidesGoToFloor, bool generateBack, bool platformsOnly);

  /// @brief Method GenerateTorus, addr 0x32e518c, size 0x644, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> GenerateTorus(::UnityEngine::ProBuilder::PivotLocation pivotType, int32_t rows, int32_t columns, float_t innerRadius,
                                                                                  float_t outerRadius, bool smooth, float_t horizontalCircumference, float_t verticalCircumference, bool manualUvs);

  /// @brief Method GetCirclePoints, addr 0x32e6ba0, size 0x390, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GetCirclePoints(int32_t segments, float_t radius, float_t circumference, ::UnityEngine::Quaternion rotation,
                                                                                                   float_t offset);

  /// @brief Method SubdivideIcosahedron, addr 0x32e5eec, size 0x62c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> SubdivideIcosahedron(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices, float_t radius);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_k_CubeTriangles();

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_k_CubeVertices();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_k_IcosphereTriangles();

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_k_IcosphereVertices();

  static inline void setStaticF_k_CubeTriangles(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_k_CubeVertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  static inline void setStaticF_k_IcosphereTriangles(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_k_IcosphereVertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShapeGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShapeGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShapeGenerator(ShapeGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShapeGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShapeGenerator(ShapeGenerator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ShapeGenerator, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::ShapeGenerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ShapeGenerator*, "UnityEngine.ProBuilder", "ShapeGenerator");
