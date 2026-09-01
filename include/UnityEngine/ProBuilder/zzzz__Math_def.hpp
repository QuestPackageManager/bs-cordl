#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\Math.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Math)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine::ProBuilder {
class Bounds2D;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
struct Normal;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Math;
}
// Write type traits
MARK_REF_T(::UnityEngine::ProBuilder::Math*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ProBuilder::Math*, "UnityEngine.ProBuilder", "Math");
// Dependencies System.Object, UnityEngine.Vector3
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.Math
class CORDL_TYPE Math : public ::System::Object {
public:
  // Declarations
  /// @brief Field tv1, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_tv1, put = setStaticF_tv1)) ::UnityEngine::Vector3 tv1;

  /// @brief Field tv2, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_tv2, put = setStaticF_tv2)) ::UnityEngine::Vector3 tv2;

  /// @brief Field tv3, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_tv3, put = setStaticF_tv3)) ::UnityEngine::Vector3 tv3;

  /// @brief Field tv4, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_tv4, put = setStaticF_tv4)) ::UnityEngine::Vector3 tv4;

  /// @brief Method Abs, addr 0x66c8174, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Abs(::UnityEngine::Vector3 v);

  /// @brief Method Approx, addr 0x66c8160, size 0x14, virtual false, abstract: false, final false
  static inline bool Approx(float_t a, float_t b, float_t delta);

  /// @brief Method Approx2, addr 0x66c8098, size 0x18, virtual false, abstract: false, final false
  static inline bool Approx2(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, float_t delta);

  /// @brief Method Approx3, addr 0x66c80b0, size 0x30, virtual false, abstract: false, final false
  static inline bool Approx3(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, float_t delta);

  /// @brief Method Approx4, addr 0x66c80e0, size 0x40, virtual false, abstract: false, final false
  static inline bool Approx4(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b, float_t delta);

  /// @brief Method ApproxC, addr 0x66c8120, size 0x40, virtual false, abstract: false, final false
  static inline bool ApproxC(::UnityEngine::Color a, ::UnityEngine::Color b, float_t delta);

  /// @brief Method Average, addr 0x66c7190, size 0x360, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Average(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* array, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method Average, addr 0x66c74f0, size 0x5b8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Average(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* array, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method Average, addr 0x66c7aa8, size 0x5c0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 Average(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* array, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method Clamp, addr 0x66c45d4, size 0x14, virtual false, abstract: false, final false
  static inline int32_t Clamp(int32_t value, int32_t lowerBound, int32_t upperBound);

  /// @brief Method Cross, addr 0x66c5bbc, size 0x30, virtual false, abstract: false, final false
  static inline void Cross(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::by_ref<::UnityEngine::Vector3> res);

  /// @brief Method DistancePointLineSegment, addr 0x66c4f6c, size 0x1c0, virtual false, abstract: false, final false
  static inline float_t DistancePointLineSegment(::UnityEngine::Vector2 point, ::UnityEngine::Vector2 lineStart, ::UnityEngine::Vector2 lineEnd);

  /// @brief Method DistancePointLineSegment, addr 0x66c512c, size 0x278, virtual false, abstract: false, final false
  static inline float_t DistancePointLineSegment(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 lineStart, ::UnityEngine::Vector3 lineEnd);

  /// @brief Method DivideBy, addr 0x66c6a24, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 DivideBy(::UnityEngine::Vector2 v, ::UnityEngine::Vector2 o);

  /// @brief Method DivideBy, addr 0x66c6a30, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 DivideBy(::UnityEngine::Vector3 v, ::UnityEngine::Vector3 o);

  /// @brief Method EnsureUnitVector, addr 0x66c82dc, size 0x11c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 EnsureUnitVector(::UnityEngine::Vector2 value);

  /// @brief Method EnsureUnitVector, addr 0x66c83f8, size 0x134, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 EnsureUnitVector(::UnityEngine::Vector3 value);

  /// @brief Method EnsureUnitVector, addr 0x66c852c, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 EnsureUnitVector(::UnityEngine::Vector4 value);

  /// @brief Method FixNaN, addr 0x66c82ac, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 FixNaN(::UnityEngine::Vector4 value);

  /// @brief Method GetBounds, addr 0x66c1e40, size 0x5d8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Bounds GetBounds(::ArrayW<::UnityEngine::Vector3> positions, ::System::Collections::Generic::IList_1<int32_t>* indices);

  /// @brief Method GetLineSegmentIntersect, addr 0x66b5bd4, size 0x74, virtual false, abstract: false, final false
  static inline bool GetLineSegmentIntersect(::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, ::UnityEngine::Vector2 p3);

  /// @brief Method GetLineSegmentIntersect, addr 0x66c5558, size 0x118, virtual false, abstract: false, final false
  static inline bool GetLineSegmentIntersect(::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, ::UnityEngine::Vector2 p3, ::by_ref<::UnityEngine::Vector2> intersect);

  /// @brief Method GetNearestPointRayRay, addr 0x66c53a4, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetNearestPointRayRay(::UnityEngine::Ray a, ::UnityEngine::Ray b);

  /// @brief Method GetNearestPointRayRay, addr 0x66c53e8, size 0x170, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetNearestPointRayRay(::UnityEngine::Vector3 ao, ::UnityEngine::Vector3 ad, ::UnityEngine::Vector3 bo, ::UnityEngine::Vector3 bd);

  /// @brief Method InvertScaleVector, addr 0x66c8068, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 InvertScaleVector(::UnityEngine::Vector3 scaleVector);

  /// @brief Method IsCardinalAxis, addr 0x66c679c, size 0x288, virtual false, abstract: false, final false
  static inline bool IsCardinalAxis(::UnityEngine::Vector3 v, float_t epsilon);

  /// @brief Method IsNumber, addr 0x66c81d4, size 0x24, virtual false, abstract: false, final false
  static inline bool IsNumber(::UnityEngine::Vector2 value);

  /// @brief Method IsNumber, addr 0x66c81f8, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsNumber(::UnityEngine::Vector3 value);

  /// @brief Method IsNumber, addr 0x66c8234, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsNumber(::UnityEngine::Vector4 value);

  /// @brief Method IsNumber, addr 0x66c81c0, size 0x14, virtual false, abstract: false, final false
  static inline bool IsNumber(float_t value);

  /// @brief Method LargestValue, addr 0x66c6a5c, size 0xc, virtual false, abstract: false, final false
  static inline float_t LargestValue(::UnityEngine::Vector2 v);

  /// @brief Method LargestValue, addr 0x66c6a40, size 0x1c, virtual false, abstract: false, final false
  static inline float_t LargestValue(::UnityEngine::Vector3 v);

  /// @brief Method LargestVector2, addr 0x66c6dfc, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 LargestVector2(::ArrayW<::UnityEngine::Vector2> v);

  /// @brief Method LargestVector2, addr 0x66c6e48, size 0x348, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 LargestVector2(::ArrayW<::UnityEngine::Vector2> v, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method MakeNonZero, addr 0x66c8280, size 0x2c, virtual false, abstract: false, final false
  static inline float_t MakeNonZero(float_t value, float_t min);

  /// @brief Method Max, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Max(::ArrayW<T> array);

  /// @brief Method Min, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Min(::ArrayW<T> array);

  /// @brief Method Normal, addr 0x66c65a8, size 0x1f4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Normal(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face);

  /// @brief Method Normal, addr 0x66c5c04, size 0x1d0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Normal(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2);

  /// @brief Method Normal, addr 0x66c5dd4, size 0x7d4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Normal(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method NormalTangentBitangent, addr 0x66c1508, size 0x434, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Normal NormalTangentBitangent(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face);

  /// @brief Method Perpendicular, addr 0x66c4d74, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Perpendicular(::UnityEngine::Vector2 value);

  /// @brief Method PointInCircumference, addr 0x66c4678, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 PointInCircumference(float_t radius, float_t angleInDegrees, ::UnityEngine::Vector2 origin);

  /// @brief Method PointInEllipseCircumference, addr 0x66c46d8, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 PointInEllipseCircumference(float_t xRadius, float_t yRadius, float_t angleInDegrees, ::UnityEngine::Vector2 origin, ::by_ref<::UnityEngine::Vector2> tangent);

  /// @brief Method PointInEllipseCircumferenceWithConstantAngle, addr 0x66c4814, size 0x16c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 PointInEllipseCircumferenceWithConstantAngle(float_t xRadius, float_t yRadius, float_t angleInDegrees, ::UnityEngine::Vector2 origin,
                                                                                    ::by_ref<::UnityEngine::Vector2> tangent);

  /// @brief Method PointInPolygon, addr 0x66c5670, size 0x278, virtual false, abstract: false, final false
  static inline bool PointInPolygon(::ArrayW<::UnityEngine::Vector2> polygon, ::UnityEngine::Vector2 point, ::ArrayW<int32_t> indexes);

  /// @brief Method PointInPolygon, addr 0x66c58e8, size 0x158, virtual false, abstract: false, final false
  static inline bool PointInPolygon(::ArrayW<::UnityEngine::Vector2> positions, ::UnityEngine::ProBuilder::Bounds2D* polyBounds, ::ArrayW<::UnityEngine::ProBuilder::Edge> edges,
                                    ::UnityEngine::Vector2 point);

  /// @brief Method PointInPolygon, addr 0x66c5a40, size 0x158, virtual false, abstract: false, final false
  static inline bool PointInPolygon(::ArrayW<::UnityEngine::Vector3> positions, ::UnityEngine::ProBuilder::Bounds2D* polyBounds, ::ArrayW<::UnityEngine::ProBuilder::Edge> edges,
                                    ::UnityEngine::Vector2 point);

  /// @brief Method PointInSphere, addr 0x66c4980, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 PointInSphere(float_t radius, float_t latitudeAngle, float_t longitudeAngle);

  /// @brief Method PolygonArea, addr 0x66c4be4, size 0x100, virtual false, abstract: false, final false
  static inline float_t PolygonArea(::ArrayW<::UnityEngine::Vector3> vertices, ::ArrayW<int32_t> indexes);

  /// @brief Method RayIntersectsTriangle, addr 0x66bf268, size 0x29c, virtual false, abstract: false, final false
  static inline bool RayIntersectsTriangle(::UnityEngine::Ray InRay, ::UnityEngine::Vector3 InTriangleA, ::UnityEngine::Vector3 InTriangleB, ::UnityEngine::Vector3 InTriangleC,
                                           ::by_ref<float_t> OutDistance, ::by_ref<::UnityEngine::Vector3> OutPoint);

  /// @brief Method RayIntersectsTriangle2, addr 0x66c05b4, size 0x244, virtual false, abstract: false, final false
  static inline bool RayIntersectsTriangle2(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 dir, ::UnityEngine::Vector3 vert0, ::UnityEngine::Vector3 vert1, ::UnityEngine::Vector3 vert2,
                                            ::by_ref<float_t> distance, ::by_ref<::UnityEngine::Vector3> normal);

  /// @brief Method RectIntersectsLineSegment, addr 0x66c5b98, size 0x4, virtual false, abstract: false, final false
  static inline bool RectIntersectsLineSegment(::UnityEngine::Rect rect, ::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b);

  /// @brief Method RectIntersectsLineSegment, addr 0x66c5b9c, size 0x8, virtual false, abstract: false, final false
  static inline bool RectIntersectsLineSegment(::UnityEngine::Rect rect, ::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);

  /// @brief Method ReflectPoint, addr 0x66c4d88, size 0x18c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 ReflectPoint(::UnityEngine::Vector2 point, ::UnityEngine::Vector2 lineStart, ::UnityEngine::Vector2 lineEnd);

  /// @brief Method RotateAroundPoint, addr 0x66c4ce4, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 RotateAroundPoint(::UnityEngine::Vector2 v, ::UnityEngine::Vector2 origin, float_t theta);

  /// @brief Method ScaleAroundPoint, addr 0x66c4d58, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 ScaleAroundPoint(::UnityEngine::Vector2 v, ::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 scale);

  /// @brief Method Secant, addr 0x66c5bec, size 0x18, virtual false, abstract: false, final false
  static inline float_t Secant(float_t x);

  /// @brief Method Sign, addr 0x66c8184, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Sign(::UnityEngine::Vector3 v);

  /// @brief Method SignedAngle, addr 0x66c49f4, size 0x114, virtual false, abstract: false, final false
  static inline float_t SignedAngle(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b);

  /// @brief Method SmallestVector2, addr 0x66c6a68, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 SmallestVector2(::ArrayW<::UnityEngine::Vector2> v);

  /// @brief Method SmallestVector2, addr 0x66c6ab4, size 0x348, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 SmallestVector2(::ArrayW<::UnityEngine::Vector2> v, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method SqrDistance, addr 0x66c4b08, size 0x24, virtual false, abstract: false, final false
  static inline float_t SqrDistance(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);

  /// @brief Method SqrDistanceRayPoint, addr 0x66c4f14, size 0x58, virtual false, abstract: false, final false
  static inline float_t SqrDistanceRayPoint(::UnityEngine::Ray ray, ::UnityEngine::Vector3 point);

  /// @brief Method Subtract, addr 0x66c5ba4, size 0x18, virtual false, abstract: false, final false
  static inline void Subtract(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::by_ref<::UnityEngine::Vector3> res);

  /// @brief Method Sum, addr 0x66c81a8, size 0x18, virtual false, abstract: false, final false
  static inline float_t Sum(::UnityEngine::Vector3 v);

  /// @brief Method TriangleArea, addr 0x66c4b2c, size 0xb8, virtual false, abstract: false, final false
  static inline float_t TriangleArea(::UnityEngine::Vector3 x, ::UnityEngine::Vector3 y, ::UnityEngine::Vector3 z);

  static inline ::UnityEngine::Vector3 getStaticF_tv1();

  static inline ::UnityEngine::Vector3 getStaticF_tv2();

  static inline ::UnityEngine::Vector3 getStaticF_tv3();

  static inline ::UnityEngine::Vector3 getStaticF_tv4();

  static inline void setStaticF_tv1(::UnityEngine::Vector3 value);

  static inline void setStaticF_tv2(::UnityEngine::Vector3 value);

  static inline void setStaticF_tv3(::UnityEngine::Vector3 value);

  static inline void setStaticF_tv4(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Math();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Math", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Math(Math&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Math", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Math(Math const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16750 };

  /// @brief Field handleEpsilon offset 0xffffffff size 0x4
  static constexpr float_t handleEpsilon{ static_cast<float_t>(0.0001f) };

  /// @brief Field k_FltCompareEpsilon offset 0xffffffff size 0x4
  static constexpr float_t k_FltCompareEpsilon{ static_cast<float_t>(0.0001f) };

  /// @brief Field k_FltEpsilon offset 0xffffffff size 0x4
  static constexpr float_t k_FltEpsilon{ static_cast<float_t>(1e-45f) };

  /// @brief Field phi offset 0xffffffff size 0x4
  static constexpr float_t phi{ static_cast<float_t>(1.618034f) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ProBuilder::Math) == 0x10, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
