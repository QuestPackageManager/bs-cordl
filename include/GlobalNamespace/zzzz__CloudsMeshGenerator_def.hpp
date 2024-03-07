#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CloudsMeshGenerator)
namespace GlobalNamespace {
struct __CloudsMeshGenerator__Cloud;
}
namespace GlobalNamespace {
struct __CloudsMeshGenerator__ProhibitedRadius;
}
namespace GlobalNamespace {
struct __CloudsMeshGenerator__RadiusChunk;
}
namespace GlobalNamespace {
struct __CloudsMeshGenerator__Ring;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CloudsMeshGenerator;
}
namespace GlobalNamespace {
struct __CloudsMeshGenerator__Cloud;
}
namespace GlobalNamespace {
struct __CloudsMeshGenerator__ProhibitedRadius;
}
namespace GlobalNamespace {
struct __CloudsMeshGenerator__RadiusChunk;
}
namespace GlobalNamespace {
struct __CloudsMeshGenerator__Ring;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CloudsMeshGenerator);
MARK_VAL_T(::GlobalNamespace::__CloudsMeshGenerator__Cloud);
MARK_VAL_T(::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius);
MARK_VAL_T(::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk);
MARK_VAL_T(::GlobalNamespace::__CloudsMeshGenerator__Ring);
// Type: ::Cloud
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::CloudsMeshGenerator::Cloud
struct CORDL_TYPE __CloudsMeshGenerator__Cloud {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CloudsMeshGenerator__Cloud();

  // Ctor Parameters [CppParam { name: "precisionOpaqueMesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: None }, CppParam { name: "lowPolyMesh", ty:
  // "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: None }, CppParam { name: "sizeModifier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bottomThreshold", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "weight", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "precisionVertexCount", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "lowPolyVertexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "generatedCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __CloudsMeshGenerator__Cloud(::UnityW<::UnityEngine::Mesh> precisionOpaqueMesh, ::UnityW<::UnityEngine::Mesh> lowPolyMesh, float_t sizeModifier, float_t bottomThreshold, int32_t weight,
                                         int32_t precisionVertexCount, int32_t lowPolyVertexCount, int32_t generatedCount) noexcept;

  /// @brief Field precisionOpaqueMesh, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> precisionOpaqueMesh;

  /// @brief Field lowPolyMesh, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> lowPolyMesh;

  /// @brief Field sizeModifier, offset: 0x10, size: 0x4, def value: None
  float_t sizeModifier;

  /// @brief Field bottomThreshold, offset: 0x14, size: 0x4, def value: None
  float_t bottomThreshold;

  /// @brief Field weight, offset: 0x18, size: 0x4, def value: None
  int32_t weight;

  /// @brief Field precisionVertexCount, offset: 0x1c, size: 0x4, def value: None
  int32_t precisionVertexCount;

  /// @brief Field lowPolyVertexCount, offset: 0x20, size: 0x4, def value: None
  int32_t lowPolyVertexCount;

  /// @brief Field generatedCount, offset: 0x24, size: 0x4, def value: None
  int32_t generatedCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CloudsMeshGenerator__Cloud, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CloudsMeshGenerator__Cloud, precisionOpaqueMesh) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CloudsMeshGenerator__Cloud, lowPolyMesh) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CloudsMeshGenerator__Cloud, sizeModifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CloudsMeshGenerator__Cloud, bottomThreshold) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CloudsMeshGenerator__Cloud, weight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CloudsMeshGenerator__Cloud, precisionVertexCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CloudsMeshGenerator__Cloud, lowPolyVertexCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CloudsMeshGenerator__Cloud, generatedCount) == 0x24, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Ring
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::CloudsMeshGenerator::Ring
struct CORDL_TYPE __CloudsMeshGenerator__Ring {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CloudsMeshGenerator__Ring();

  // Ctor Parameters [CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "normalizedRadius", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "meshCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cloudIDs", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: None }, CppParam { name:
  // "sizeMultiplier", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __CloudsMeshGenerator__Ring(float_t radius, float_t normalizedRadius, int32_t meshCount, ::ArrayW<int32_t, ::Array<int32_t>*> cloudIDs, float_t sizeMultiplier) noexcept;

  /// @brief Field radius, offset: 0x0, size: 0x4, def value: None
  float_t radius;

  /// @brief Field normalizedRadius, offset: 0x4, size: 0x4, def value: None
  float_t normalizedRadius;

  /// @brief Field meshCount, offset: 0x8, size: 0x4, def value: None
  int32_t meshCount;

  /// @brief Field cloudIDs, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> cloudIDs;

  /// @brief Field sizeMultiplier, offset: 0x18, size: 0x4, def value: None
  float_t sizeMultiplier;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CloudsMeshGenerator__Ring, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CloudsMeshGenerator__Ring, radius) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CloudsMeshGenerator__Ring, normalizedRadius) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CloudsMeshGenerator__Ring, meshCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CloudsMeshGenerator__Ring, cloudIDs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CloudsMeshGenerator__Ring, sizeMultiplier) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ProhibitedRadius
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::CloudsMeshGenerator::ProhibitedRadius
struct CORDL_TYPE __CloudsMeshGenerator__ProhibitedRadius {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CloudsMeshGenerator__ProhibitedRadius();

  // Ctor Parameters [CppParam { name: "transform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value:
  // None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __CloudsMeshGenerator__ProhibitedRadius(::UnityW<::UnityEngine::Transform> transform, float_t distance, float_t radius) noexcept;

  /// @brief Field transform, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> transform;

  /// @brief Field distance, offset: 0x8, size: 0x4, def value: None
  float_t distance;

  /// @brief Field radius, offset: 0xc, size: 0x4, def value: None
  float_t radius;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius, transform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius, distance) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius, radius) == 0xc, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RadiusChunk
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::CloudsMeshGenerator::RadiusChunk
struct CORDL_TYPE __CloudsMeshGenerator__RadiusChunk {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CloudsMeshGenerator__RadiusChunk();

  // Ctor Parameters [CppParam { name: "normalizedStart", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "normalizedEnd", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "absoluteStart", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "absoluteEnd", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __CloudsMeshGenerator__RadiusChunk(float_t normalizedStart, float_t normalizedEnd, float_t absoluteStart, float_t absoluteEnd) noexcept;

  /// @brief Field normalizedStart, offset: 0x0, size: 0x4, def value: None
  float_t normalizedStart;

  /// @brief Field normalizedEnd, offset: 0x4, size: 0x4, def value: None
  float_t normalizedEnd;

  /// @brief Field absoluteStart, offset: 0x8, size: 0x4, def value: None
  float_t absoluteStart;

  /// @brief Field absoluteEnd, offset: 0xc, size: 0x4, def value: None
  float_t absoluteEnd;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk, normalizedStart) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk, normalizedEnd) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk, absoluteStart) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk, absoluteEnd) == 0xc, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CloudsMeshGenerator
// SizeInfo { instance_size: 232, native_size: -1, calculated_instance_size: 232, calculated_native_size: 232, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CloudsMeshGenerator*
class CORDL_TYPE CloudsMeshGenerator : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using Cloud = ::GlobalNamespace::__CloudsMeshGenerator__Cloud;

  using ProhibitedRadius = ::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius;

  using RadiusChunk = ::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk;

  using Ring = ::GlobalNamespace::__CloudsMeshGenerator__Ring;

  /// @brief Field _bottomHorizontalScale, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__bottomHorizontalScale, put = __cordl_internal_set__bottomHorizontalScale)) float_t _bottomHorizontalScale;

  /// @brief Field _bottomPushDistance, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__bottomPushDistance, put = __cordl_internal_set__bottomPushDistance)) float_t _bottomPushDistance;

  /// @brief Field _bottomPushEnabled, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__bottomPushEnabled, put = __cordl_internal_set__bottomPushEnabled)) bool _bottomPushEnabled;

  /// @brief Field _bottomScaleTopBottom, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__bottomScaleTopBottom, put = __cordl_internal_set__bottomScaleTopBottom))::UnityEngine::Vector2 _bottomScaleTopBottom;

  /// @brief Field _clouds, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__clouds,
                      put = __cordl_internal_set__clouds))::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__Cloud, ::Array<::GlobalNamespace::__CloudsMeshGenerator__Cloud>*> _clouds;

  /// @brief Field _curveMesh, offset 0x9d, size 0x1
  __declspec(property(get = __cordl_internal_get__curveMesh, put = __cordl_internal_set__curveMesh)) bool _curveMesh;

  /// @brief Field _drawRingGizmos, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get__drawRingGizmos, put = __cordl_internal_set__drawRingGizmos)) bool _drawRingGizmos;

  /// @brief Field _flipNormals, offset 0x9c, size 0x1
  __declspec(property(get = __cordl_internal_get__flipNormals, put = __cordl_internal_set__flipNormals)) bool _flipNormals;

  /// @brief Field _generatedMesh, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__generatedMesh, put = __cordl_internal_set__generatedMesh))::UnityW<::UnityEngine::Mesh> _generatedMesh;

  /// @brief Field _heightCloseFar, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__heightCloseFar, put = __cordl_internal_set__heightCloseFar))::UnityEngine::AnimationCurve* _heightCloseFar;

  /// @brief Field _heightRandomness, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__heightRandomness, put = __cordl_internal_set__heightRandomness)) float_t _heightRandomness;

  /// @brief Field _lowPolyThreshold, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__lowPolyThreshold, put = __cordl_internal_set__lowPolyThreshold)) float_t _lowPolyThreshold;

  /// @brief Field _meshBounds, offset 0xb8, size 0x18
  __declspec(property(get = __cordl_internal_get__meshBounds, put = __cordl_internal_set__meshBounds))::UnityEngine::Bounds _meshBounds;

  /// @brief Field _meshCount, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get__meshCount, put = __cordl_internal_set__meshCount)) int32_t _meshCount;

  /// @brief Field _meshFilter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__meshFilter, put = __cordl_internal_set__meshFilter))::UnityW<::UnityEngine::MeshFilter> _meshFilter;

  /// @brief Field _meshName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__meshName, put = __cordl_internal_set__meshName))::StringW _meshName;

  /// @brief Field _meshSize, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__meshSize, put = __cordl_internal_set__meshSize))::UnityEngine::Vector2 _meshSize;

  /// @brief Field _meshesPerRadius, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__meshesPerRadius, put = __cordl_internal_set__meshesPerRadius)) float_t _meshesPerRadius;

  /// @brief Field _pauseGenerator, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__pauseGenerator, put = __cordl_internal_set__pauseGenerator)) bool _pauseGenerator;

  /// @brief Field _perMeshRadiusOffset, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__perMeshRadiusOffset, put = __cordl_internal_set__perMeshRadiusOffset)) float_t _perMeshRadiusOffset;

  /// @brief Field _possibleColors, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__possibleColors, put = __cordl_internal_set__possibleColors))::UnityEngine::Gradient* _possibleColors;

  /// @brief Field _prohibitedRadii, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__prohibitedRadii,
                      put = __cordl_internal_set__prohibitedRadii))::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius,
                                                                            ::Array<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius>*> _prohibitedRadii;

  /// @brief Field _radiusChunks, offset 0xd0, size 0x8
  __declspec(
      property(get = __cordl_internal_get__radiusChunks,
               put = __cordl_internal_set__radiusChunks))::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk, ::Array<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk>*> _radiusChunks;

  /// @brief Field _radiusCloseFar, offset 0x7c, size 0x8
  __declspec(property(get = __cordl_internal_get__radiusCloseFar, put = __cordl_internal_set__radiusCloseFar))::UnityEngine::Vector2 _radiusCloseFar;

  /// @brief Field _randomSeed, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__randomSeed, put = __cordl_internal_set__randomSeed)) int32_t _randomSeed;

  /// @brief Field _ratioRandomness, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__ratioRandomness, put = __cordl_internal_set__ratioRandomness)) float_t _ratioRandomness;

  /// @brief Field _ringCount, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get__ringCount, put = __cordl_internal_set__ringCount)) int32_t _ringCount;

  /// @brief Field _ringRotationRandomness, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__ringRotationRandomness, put = __cordl_internal_set__ringRotationRandomness)) float_t _ringRotationRandomness;

  /// @brief Field _rings, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__rings,
                      put = __cordl_internal_set__rings))::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__Ring, ::Array<::GlobalNamespace::__CloudsMeshGenerator__Ring>*> _rings;

  /// @brief Field _sizeCloseFar, offset 0x84, size 0x8
  __declspec(property(get = __cordl_internal_get__sizeCloseFar, put = __cordl_internal_set__sizeCloseFar))::UnityEngine::Vector2 _sizeCloseFar;

  /// @brief Field _sizeRandomness, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__sizeRandomness, put = __cordl_internal_set__sizeRandomness)) float_t _sizeRandomness;

  /// @brief Field _sortedProhibitedRadii, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__sortedProhibitedRadii,
                      put = __cordl_internal_set__sortedProhibitedRadii))::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius,
                                                                                  ::Array<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius>*> _sortedProhibitedRadii;

  /// @brief Field _vertexCount, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get__vertexCount, put = __cordl_internal_set__vertexCount)) int32_t _vertexCount;

  static inline ::GlobalNamespace::CloudsMeshGenerator* New_ctor();

  constexpr float_t const& __cordl_internal_get__bottomHorizontalScale() const;

  constexpr float_t& __cordl_internal_get__bottomHorizontalScale();

  constexpr float_t const& __cordl_internal_get__bottomPushDistance() const;

  constexpr float_t& __cordl_internal_get__bottomPushDistance();

  constexpr bool const& __cordl_internal_get__bottomPushEnabled() const;

  constexpr bool& __cordl_internal_get__bottomPushEnabled();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__bottomScaleTopBottom() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__bottomScaleTopBottom();

  constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__Cloud, ::Array<::GlobalNamespace::__CloudsMeshGenerator__Cloud>*> const& __cordl_internal_get__clouds() const;

  constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__Cloud, ::Array<::GlobalNamespace::__CloudsMeshGenerator__Cloud>*>& __cordl_internal_get__clouds();

  constexpr bool const& __cordl_internal_get__curveMesh() const;

  constexpr bool& __cordl_internal_get__curveMesh();

  constexpr bool const& __cordl_internal_get__drawRingGizmos() const;

  constexpr bool& __cordl_internal_get__drawRingGizmos();

  constexpr bool const& __cordl_internal_get__flipNormals() const;

  constexpr bool& __cordl_internal_get__flipNormals();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get__generatedMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get__generatedMesh();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__heightCloseFar();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__heightCloseFar() const;

  constexpr float_t const& __cordl_internal_get__heightRandomness() const;

  constexpr float_t& __cordl_internal_get__heightRandomness();

  constexpr float_t const& __cordl_internal_get__lowPolyThreshold() const;

  constexpr float_t& __cordl_internal_get__lowPolyThreshold();

  constexpr ::UnityEngine::Bounds const& __cordl_internal_get__meshBounds() const;

  constexpr ::UnityEngine::Bounds& __cordl_internal_get__meshBounds();

  constexpr int32_t const& __cordl_internal_get__meshCount() const;

  constexpr int32_t& __cordl_internal_get__meshCount();

  constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get__meshFilter() const;

  constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get__meshFilter();

  constexpr ::StringW const& __cordl_internal_get__meshName() const;

  constexpr ::StringW& __cordl_internal_get__meshName();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__meshSize() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__meshSize();

  constexpr float_t const& __cordl_internal_get__meshesPerRadius() const;

  constexpr float_t& __cordl_internal_get__meshesPerRadius();

  constexpr bool const& __cordl_internal_get__pauseGenerator() const;

  constexpr bool& __cordl_internal_get__pauseGenerator();

  constexpr float_t const& __cordl_internal_get__perMeshRadiusOffset() const;

  constexpr float_t& __cordl_internal_get__perMeshRadiusOffset();

  constexpr ::UnityEngine::Gradient*& __cordl_internal_get__possibleColors();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> const& __cordl_internal_get__possibleColors() const;

  constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius, ::Array<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius>*> const&
  __cordl_internal_get__prohibitedRadii() const;

  constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius, ::Array<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius>*>& __cordl_internal_get__prohibitedRadii();

  constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk, ::Array<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk>*> const& __cordl_internal_get__radiusChunks() const;

  constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk, ::Array<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk>*>& __cordl_internal_get__radiusChunks();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__radiusCloseFar() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__radiusCloseFar();

  constexpr int32_t const& __cordl_internal_get__randomSeed() const;

  constexpr int32_t& __cordl_internal_get__randomSeed();

  constexpr float_t const& __cordl_internal_get__ratioRandomness() const;

  constexpr float_t& __cordl_internal_get__ratioRandomness();

  constexpr int32_t const& __cordl_internal_get__ringCount() const;

  constexpr int32_t& __cordl_internal_get__ringCount();

  constexpr float_t const& __cordl_internal_get__ringRotationRandomness() const;

  constexpr float_t& __cordl_internal_get__ringRotationRandomness();

  constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__Ring, ::Array<::GlobalNamespace::__CloudsMeshGenerator__Ring>*> const& __cordl_internal_get__rings() const;

  constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__Ring, ::Array<::GlobalNamespace::__CloudsMeshGenerator__Ring>*>& __cordl_internal_get__rings();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__sizeCloseFar() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__sizeCloseFar();

  constexpr float_t const& __cordl_internal_get__sizeRandomness() const;

  constexpr float_t& __cordl_internal_get__sizeRandomness();

  constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius, ::Array<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius>*> const&
  __cordl_internal_get__sortedProhibitedRadii() const;

  constexpr ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius, ::Array<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius>*>& __cordl_internal_get__sortedProhibitedRadii();

  constexpr int32_t const& __cordl_internal_get__vertexCount() const;

  constexpr int32_t& __cordl_internal_get__vertexCount();

  constexpr void __cordl_internal_set__bottomHorizontalScale(float_t value);

  constexpr void __cordl_internal_set__bottomPushDistance(float_t value);

  constexpr void __cordl_internal_set__bottomPushEnabled(bool value);

  constexpr void __cordl_internal_set__bottomScaleTopBottom(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__clouds(::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__Cloud, ::Array<::GlobalNamespace::__CloudsMeshGenerator__Cloud>*> value);

  constexpr void __cordl_internal_set__curveMesh(bool value);

  constexpr void __cordl_internal_set__drawRingGizmos(bool value);

  constexpr void __cordl_internal_set__flipNormals(bool value);

  constexpr void __cordl_internal_set__generatedMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set__heightCloseFar(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set__heightRandomness(float_t value);

  constexpr void __cordl_internal_set__lowPolyThreshold(float_t value);

  constexpr void __cordl_internal_set__meshBounds(::UnityEngine::Bounds value);

  constexpr void __cordl_internal_set__meshCount(int32_t value);

  constexpr void __cordl_internal_set__meshFilter(::UnityW<::UnityEngine::MeshFilter> value);

  constexpr void __cordl_internal_set__meshName(::StringW value);

  constexpr void __cordl_internal_set__meshSize(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__meshesPerRadius(float_t value);

  constexpr void __cordl_internal_set__pauseGenerator(bool value);

  constexpr void __cordl_internal_set__perMeshRadiusOffset(float_t value);

  constexpr void __cordl_internal_set__possibleColors(::UnityEngine::Gradient* value);

  constexpr void
  __cordl_internal_set__prohibitedRadii(::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius, ::Array<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius>*> value);

  constexpr void __cordl_internal_set__radiusChunks(::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk, ::Array<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk>*> value);

  constexpr void __cordl_internal_set__radiusCloseFar(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__randomSeed(int32_t value);

  constexpr void __cordl_internal_set__ratioRandomness(float_t value);

  constexpr void __cordl_internal_set__ringCount(int32_t value);

  constexpr void __cordl_internal_set__ringRotationRandomness(float_t value);

  constexpr void __cordl_internal_set__rings(::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__Ring, ::Array<::GlobalNamespace::__CloudsMeshGenerator__Ring>*> value);

  constexpr void __cordl_internal_set__sizeCloseFar(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__sizeRandomness(float_t value);

  constexpr void
  __cordl_internal_set__sortedProhibitedRadii(::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius, ::Array<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius>*> value);

  constexpr void __cordl_internal_set__vertexCount(int32_t value);

  /// @brief Method .ctor, addr 0xe91284, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CloudsMeshGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CloudsMeshGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CloudsMeshGenerator(CloudsMeshGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CloudsMeshGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CloudsMeshGenerator(CloudsMeshGenerator const&) = delete;

  /// @brief Field _meshFilter, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshFilter> ____meshFilter;

  /// @brief Field _meshName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____meshName;

  /// @brief Field _pauseGenerator, offset: 0x28, size: 0x1, def value: None
  bool ____pauseGenerator;

  /// @brief Field _bottomPushEnabled, offset: 0x29, size: 0x1, def value: None
  bool ____bottomPushEnabled;

  /// @brief Field _bottomPushDistance, offset: 0x2c, size: 0x4, def value: None
  float_t ____bottomPushDistance;

  /// @brief Field _bottomScaleTopBottom, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____bottomScaleTopBottom;

  /// @brief Field _bottomHorizontalScale, offset: 0x38, size: 0x4, def value: None
  float_t ____bottomHorizontalScale;

  /// @brief Field _drawRingGizmos, offset: 0x3c, size: 0x1, def value: None
  bool ____drawRingGizmos;

  /// @brief Field _prohibitedRadii, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius, ::Array<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius>*> ____prohibitedRadii;

  /// @brief Field _meshSize, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____meshSize;

  /// @brief Field _sizeRandomness, offset: 0x50, size: 0x4, def value: None
  float_t ____sizeRandomness;

  /// @brief Field _ratioRandomness, offset: 0x54, size: 0x4, def value: None
  float_t ____ratioRandomness;

  /// @brief Field _perMeshRadiusOffset, offset: 0x58, size: 0x4, def value: None
  float_t ____perMeshRadiusOffset;

  /// @brief Field _possibleColors, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Gradient* ____possibleColors;

  /// @brief Field _randomSeed, offset: 0x68, size: 0x4, def value: None
  int32_t ____randomSeed;

  /// @brief Field _heightRandomness, offset: 0x6c, size: 0x4, def value: None
  float_t ____heightRandomness;

  /// @brief Field _ringRotationRandomness, offset: 0x70, size: 0x4, def value: None
  float_t ____ringRotationRandomness;

  /// @brief Field _ringCount, offset: 0x74, size: 0x4, def value: None
  int32_t ____ringCount;

  /// @brief Field _meshesPerRadius, offset: 0x78, size: 0x4, def value: None
  float_t ____meshesPerRadius;

  /// @brief Field _radiusCloseFar, offset: 0x7c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____radiusCloseFar;

  /// @brief Field _sizeCloseFar, offset: 0x84, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____sizeCloseFar;

  /// @brief Field _heightCloseFar, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ____heightCloseFar;

  /// @brief Field _lowPolyThreshold, offset: 0x98, size: 0x4, def value: None
  float_t ____lowPolyThreshold;

  /// @brief Field _flipNormals, offset: 0x9c, size: 0x1, def value: None
  bool ____flipNormals;

  /// @brief Field _curveMesh, offset: 0x9d, size: 0x1, def value: None
  bool ____curveMesh;

  /// @brief Field _clouds, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__Cloud, ::Array<::GlobalNamespace::__CloudsMeshGenerator__Cloud>*> ____clouds;

  /// @brief Field _meshCount, offset: 0xa8, size: 0x4, def value: None
  int32_t ____meshCount;

  /// @brief Field _vertexCount, offset: 0xac, size: 0x4, def value: None
  int32_t ____vertexCount;

  /// @brief Field _generatedMesh, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ____generatedMesh;

  /// @brief Field _meshBounds, offset: 0xb8, size: 0x18, def value: None
  ::UnityEngine::Bounds ____meshBounds;

  /// @brief Field _radiusChunks, offset: 0xd0, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk, ::Array<::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk>*> ____radiusChunks;

  /// @brief Field _rings, offset: 0xd8, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__Ring, ::Array<::GlobalNamespace::__CloudsMeshGenerator__Ring>*> ____rings;

  /// @brief Field _sortedProhibitedRadii, offset: 0xe0, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius, ::Array<::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius>*> ____sortedProhibitedRadii;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CloudsMeshGenerator, 0xe8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____meshFilter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____meshName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____pauseGenerator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____bottomPushEnabled) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____bottomPushDistance) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____bottomScaleTopBottom) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____bottomHorizontalScale) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____drawRingGizmos) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____prohibitedRadii) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____meshSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____sizeRandomness) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____ratioRandomness) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____perMeshRadiusOffset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____possibleColors) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____randomSeed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____heightRandomness) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____ringRotationRandomness) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____ringCount) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____meshesPerRadius) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____radiusCloseFar) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____sizeCloseFar) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____heightCloseFar) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____lowPolyThreshold) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____flipNormals) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____curveMesh) == 0x9d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____clouds) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____meshCount) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____vertexCount) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____generatedMesh) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____meshBounds) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____radiusChunks) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____rings) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CloudsMeshGenerator, ____sortedProhibitedRadii) == 0xe0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CloudsMeshGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CloudsMeshGenerator*, "", "CloudsMeshGenerator");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CloudsMeshGenerator__Cloud, "", "CloudsMeshGenerator/Cloud");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CloudsMeshGenerator__ProhibitedRadius, "", "CloudsMeshGenerator/ProhibitedRadius");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CloudsMeshGenerator__RadiusChunk, "", "CloudsMeshGenerator/RadiusChunk");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CloudsMeshGenerator__Ring, "", "CloudsMeshGenerator/Ring");
