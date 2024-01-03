#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Math);
// Type: UnityEngine.ProBuilder::Math
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12139))
// CS Name: ::UnityEngine.ProBuilder::Math*
class CORDL_TYPE Math : public ::System::Object {
public:
  // Declarations
  /// @brief Field tv1, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_tv1, put = setStaticF_tv1))::UnityEngine::Vector3 tv1;

  /// @brief Field tv2, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_tv2, put = setStaticF_tv2))::UnityEngine::Vector3 tv2;

  /// @brief Field tv3, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_tv3, put = setStaticF_tv3))::UnityEngine::Vector3 tv3;

  /// @brief Field tv4, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_tv4, put = setStaticF_tv4))::UnityEngine::Vector3 tv4;

  static inline void setStaticF_tv1(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_tv1();

  static inline void setStaticF_tv2(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_tv2();

  static inline void setStaticF_tv3(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_tv3();

  static inline void setStaticF_tv4(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_tv4();

  /// @brief Method PointInCircumference, addr 0x2b48188, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 PointInCircumference(float_t radius, float_t angleInDegrees, ::UnityEngine::Vector2 origin);

  /// @brief Method PointInEllipseCircumference, addr 0x2b481e4, size 0x12c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 PointInEllipseCircumference(float_t xRadius, float_t yRadius, float_t angleInDegrees, ::UnityEngine::Vector2 origin, ByRef<::UnityEngine::Vector2> tangent);

  /// @brief Method PointInEllipseCircumferenceWithConstantAngle, addr 0x2b48310, size 0x170, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 PointInEllipseCircumferenceWithConstantAngle(float_t xRadius, float_t yRadius, float_t angleInDegrees, ::UnityEngine::Vector2 origin,
                                                                                    ByRef<::UnityEngine::Vector2> tangent);

  /// @brief Method PointInSphere, addr 0x2b48480, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 PointInSphere(float_t radius, float_t latitudeAngle, float_t longitudeAngle);

  /// @brief Method SignedAngle, addr 0x2b484f8, size 0x104, virtual false, abstract: false, final false
  static inline float_t SignedAngle(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b);

  /// @brief Method SqrDistance, addr 0x2b485fc, size 0x24, virtual false, abstract: false, final false
  static inline float_t SqrDistance(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);

  /// @brief Method TriangleArea, addr 0x2b48620, size 0xb4, virtual false, abstract: false, final false
  static inline float_t TriangleArea(::UnityEngine::Vector3 x, ::UnityEngine::Vector3 y, ::UnityEngine::Vector3 z);

  /// @brief Method PolygonArea, addr 0x2b486d4, size 0x110, virtual false, abstract: false, final false
  static inline float_t PolygonArea(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices, ::ArrayW<int32_t, ::Array<int32_t>*> indexes);

  /// @brief Method RotateAroundPoint, addr 0x2b487e4, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 RotateAroundPoint(::UnityEngine::Vector2 v, ::UnityEngine::Vector2 origin, float_t theta);

  /// @brief Method ScaleAroundPoint, addr 0x2b48854, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 ScaleAroundPoint(::UnityEngine::Vector2 v, ::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 scale);

  /// @brief Method Perpendicular, addr 0x2b48870, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Perpendicular(::UnityEngine::Vector2 value);

  /// @brief Method ReflectPoint, addr 0x2b48884, size 0x18c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 ReflectPoint(::UnityEngine::Vector2 point, ::UnityEngine::Vector2 lineStart, ::UnityEngine::Vector2 lineEnd);

  /// @brief Method SqrDistanceRayPoint, addr 0x2b48a10, size 0x98, virtual false, abstract: false, final false
  static inline float_t SqrDistanceRayPoint(::UnityEngine::Ray ray, ::UnityEngine::Vector3 point);

  /// @brief Method DistancePointLineSegment, addr 0x2b48aa8, size 0x16c, virtual false, abstract: false, final false
  static inline float_t DistancePointLineSegment(::UnityEngine::Vector2 point, ::UnityEngine::Vector2 lineStart, ::UnityEngine::Vector2 lineEnd);

  /// @brief Method DistancePointLineSegment, addr 0x2b48c14, size 0x230, virtual false, abstract: false, final false
  static inline float_t DistancePointLineSegment(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 lineStart, ::UnityEngine::Vector3 lineEnd);

  /// @brief Method GetNearestPointRayRay, addr 0x2b48e44, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetNearestPointRayRay(::UnityEngine::Ray a, ::UnityEngine::Ray b);

  /// @brief Method GetNearestPointRayRay, addr 0x2b48f04, size 0x164, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetNearestPointRayRay(::UnityEngine::Vector3 ao, ::UnityEngine::Vector3 ad, ::UnityEngine::Vector3 bo, ::UnityEngine::Vector3 bd);

  /// @brief Method GetLineSegmentIntersect, addr 0x2b49068, size 0x114, virtual false, abstract: false, final false
  static inline bool GetLineSegmentIntersect(::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, ::UnityEngine::Vector2 p3, ByRef<::UnityEngine::Vector2> intersect);

  /// @brief Method GetLineSegmentIntersect, addr 0x2b395fc, size 0x78, virtual false, abstract: false, final false
  static inline bool GetLineSegmentIntersect(::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, ::UnityEngine::Vector2 p3);

  /// @brief Method PointInPolygon, addr 0x2b4917c, size 0x278, virtual false, abstract: false, final false
  static inline bool PointInPolygon(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> polygon, ::UnityEngine::Vector2 point, ::ArrayW<int32_t, ::Array<int32_t>*> indexes);

  /// @brief Method PointInPolygon, addr 0x2b493f4, size 0x124, virtual false, abstract: false, final false
  static inline bool PointInPolygon(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> positions, ::UnityEngine::ProBuilder::Bounds2D* polyBounds,
                                    ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> edges, ::UnityEngine::Vector2 point);

  /// @brief Method PointInPolygon, addr 0x2b49518, size 0x124, virtual false, abstract: false, final false
  static inline bool PointInPolygon(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions, ::UnityEngine::ProBuilder::Bounds2D* polyBounds,
                                    ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> edges, ::UnityEngine::Vector2 point);

  /// @brief Method RectIntersectsLineSegment, addr 0x2b4963c, size 0x4, virtual false, abstract: false, final false
  static inline bool RectIntersectsLineSegment(::UnityEngine::Rect rect, ::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b);

  /// @brief Method RectIntersectsLineSegment, addr 0x2b49640, size 0x8, virtual false, abstract: false, final false
  static inline bool RectIntersectsLineSegment(::UnityEngine::Rect rect, ::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);

  /// @brief Method RayIntersectsTriangle, addr 0x2b42dfc, size 0x2dc, virtual false, abstract: false, final false
  static inline bool RayIntersectsTriangle(::UnityEngine::Ray InRay, ::UnityEngine::Vector3 InTriangleA, ::UnityEngine::Vector3 InTriangleB, ::UnityEngine::Vector3 InTriangleC,
                                           ByRef<float_t> OutDistance, ByRef<::UnityEngine::Vector3> OutPoint);

  /// @brief Method RayIntersectsTriangle2, addr 0x2b44044, size 0x238, virtual false, abstract: false, final false
  static inline bool RayIntersectsTriangle2(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 dir, ::UnityEngine::Vector3 vert0, ::UnityEngine::Vector3 vert1, ::UnityEngine::Vector3 vert2,
                                            ByRef<float_t> distance, ByRef<::UnityEngine::Vector3> normal);

  /// @brief Method Secant, addr 0x2b49690, size 0x18, virtual false, abstract: false, final false
  static inline float_t Secant(float_t x);

  /// @brief Method Normal, addr 0x2b496a8, size 0x1b4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Normal(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2);

  /// @brief Method Normal, addr 0x2b4985c, size 0x77c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Normal(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method Normal, addr 0x2b49fd8, size 0x20c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Normal(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face);

  /// @brief Method NormalTangentBitangent, addr 0x2b44ebc, size 0x3ec, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Normal NormalTangentBitangent(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face);

  /// @brief Method IsCardinalAxis, addr 0x2b4a1e4, size 0x248, virtual false, abstract: false, final false
  static inline bool IsCardinalAxis(::UnityEngine::Vector3 v, float_t epsilon);

  /// @brief Method DivideBy, addr 0x2b4a42c, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 DivideBy(::UnityEngine::Vector2 v, ::UnityEngine::Vector2 o);

  /// @brief Method DivideBy, addr 0x2b4a438, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 DivideBy(::UnityEngine::Vector3 v, ::UnityEngine::Vector3 o);

  /// @brief Method Max, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Max(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method Min, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Min(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method LargestValue, addr 0x2b4a448, size 0x24, virtual false, abstract: false, final false
  static inline float_t LargestValue(::UnityEngine::Vector3 v);

  /// @brief Method LargestValue, addr 0x2b4a46c, size 0xc, virtual false, abstract: false, final false
  static inline float_t LargestValue(::UnityEngine::Vector2 v);

  /// @brief Method SmallestVector2, addr 0x2b4a478, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 SmallestVector2(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> v);

  /// @brief Method SmallestVector2, addr 0x2b4a4cc, size 0x338, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 SmallestVector2(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> v, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method LargestVector2, addr 0x2b4a804, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 LargestVector2(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> v);

  /// @brief Method LargestVector2, addr 0x2b4a858, size 0x338, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 LargestVector2(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> v, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method GetBounds, addr 0x2b45768, size 0x5d0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Bounds GetBounds(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions, ::System::Collections::Generic::IList_1<int32_t>* indices);

  /// @brief Method Average, addr 0x2b4ab90, size 0x348, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Average(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* array, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method Average, addr 0x2b4aed8, size 0x5a0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Average(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* array, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method Average, addr 0x2b4b478, size 0x5a8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 Average(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* array, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method InvertScaleVector, addr 0x2b4ba20, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 InvertScaleVector(::UnityEngine::Vector3 scaleVector);

  /// @brief Method Approx2, addr 0x2b4ba80, size 0x24, virtual false, abstract: false, final false
  static inline bool Approx2(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, float_t delta);

  /// @brief Method Approx3, addr 0x2b4baa4, size 0x30, virtual false, abstract: false, final false
  static inline bool Approx3(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, float_t delta);

  /// @brief Method Approx4, addr 0x2b4bad4, size 0x40, virtual false, abstract: false, final false
  static inline bool Approx4(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b, float_t delta);

  /// @brief Method ApproxC, addr 0x2b4bb14, size 0x40, virtual false, abstract: false, final false
  static inline bool ApproxC(::UnityEngine::Color a, ::UnityEngine::Color b, float_t delta);

  /// @brief Method Approx, addr 0x2b4bb54, size 0x14, virtual false, abstract: false, final false
  static inline bool Approx(float_t a, float_t b, float_t delta);

  /// @brief Method Clamp, addr 0x2b480e0, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t Clamp(int32_t value, int32_t lowerBound, int32_t upperBound);

  /// @brief Method Abs, addr 0x2b4bb68, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Abs(::UnityEngine::Vector3 v);

  /// @brief Method Sign, addr 0x2b4bb78, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Sign(::UnityEngine::Vector3 v);

  /// @brief Method Sum, addr 0x2b4bb9c, size 0x18, virtual false, abstract: false, final false
  static inline float_t Sum(::UnityEngine::Vector3 v);

  /// @brief Method Cross, addr 0x2b49660, size 0x30, virtual false, abstract: false, final false
  static inline void Cross(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ByRef<::UnityEngine::Vector3> res);

  /// @brief Method Subtract, addr 0x2b49648, size 0x18, virtual false, abstract: false, final false
  static inline void Subtract(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ByRef<::UnityEngine::Vector3> res);

  /// @brief Method IsNumber, addr 0x2b4bbb4, size 0xb4, virtual false, abstract: false, final false
  static inline bool IsNumber(float_t value);

  /// @brief Method IsNumber, addr 0x2b4bc68, size 0x34, virtual false, abstract: false, final false
  static inline bool IsNumber(::UnityEngine::Vector2 value);

  /// @brief Method IsNumber, addr 0x2b4bc9c, size 0x44, virtual false, abstract: false, final false
  static inline bool IsNumber(::UnityEngine::Vector3 value);

  /// @brief Method IsNumber, addr 0x2b4bce0, size 0x60, virtual false, abstract: false, final false
  static inline bool IsNumber(::UnityEngine::Vector4 value);

  /// @brief Method MakeNonZero, addr 0x2b4bd40, size 0xd0, virtual false, abstract: false, final false
  static inline float_t MakeNonZero(float_t value, float_t min);

  /// @brief Method FixNaN, addr 0x2b4be10, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 FixNaN(::UnityEngine::Vector4 value);

  /// @brief Method EnsureUnitVector, addr 0x2b4be90, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 EnsureUnitVector(::UnityEngine::Vector2 value);

  /// @brief Method EnsureUnitVector, addr 0x2b4bf98, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 EnsureUnitVector(::UnityEngine::Vector3 value);

  /// @brief Method EnsureUnitVector, addr 0x2b4c0b8, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 EnsureUnitVector(::UnityEngine::Vector4 value);

  // Ctor Parameters [CppParam { name: "", ty: "Math", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Math(Math&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Math", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Math(Math const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Math();

public:
  /// @brief Field phi offset 0xffffffff size 0x4
  static constexpr float_t phi{ 1.618034 };

  /// @brief Field k_FltEpsilon offset 0xffffffff size 0x4
  static constexpr float_t k_FltEpsilon{ 0.000000000000000000000000000000000000000000001 };

  /// @brief Field k_FltCompareEpsilon offset 0xffffffff size 0x4
  static constexpr float_t k_FltCompareEpsilon{ 0.0001 };

  /// @brief Field handleEpsilon offset 0xffffffff size 0x4
  static constexpr float_t handleEpsilon{ 0.0001 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Math, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Math);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Math*, "UnityEngine.ProBuilder", "Math");
