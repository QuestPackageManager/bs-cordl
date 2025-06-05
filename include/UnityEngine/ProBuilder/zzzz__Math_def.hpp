#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Math.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
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

  /// @brief Method Abs, addr 0x471460c, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Abs(::UnityEngine::Vector3 v);

  /// @brief Method Approx, addr 0x47145f8, size 0x14, virtual false, abstract: false, final false
  static inline bool Approx(float_t a, float_t b, float_t delta);

  /// @brief Method Approx2, addr 0x4714528, size 0x20, virtual false, abstract: false, final false
  static inline bool Approx2(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, float_t delta);

  /// @brief Method Approx3, addr 0x4714548, size 0x30, virtual false, abstract: false, final false
  static inline bool Approx3(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, float_t delta);

  /// @brief Method Approx4, addr 0x4714578, size 0x40, virtual false, abstract: false, final false
  static inline bool Approx4(::UnityEngine::Vector4 a, ::UnityEngine::Vector4 b, float_t delta);

  /// @brief Method ApproxC, addr 0x47145b8, size 0x40, virtual false, abstract: false, final false
  static inline bool ApproxC(::UnityEngine::Color a, ::UnityEngine::Color b, float_t delta);

  /// @brief Method Average, addr 0x471365c, size 0x34c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Average(::System::Collections::Generic::IList_1<::UnityEngine::Vector2>* array, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method Average, addr 0x47139a8, size 0x5a4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Average(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* array, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method Average, addr 0x4713f4c, size 0x5ac, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 Average(::System::Collections::Generic::IList_1<::UnityEngine::Vector4>* array, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method Clamp, addr 0x4710c68, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t Clamp(int32_t value, int32_t lowerBound, int32_t upperBound);

  /// @brief Method Cross, addr 0x471211c, size 0x30, virtual false, abstract: false, final false
  static inline void Cross(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::ByRef<::UnityEngine::Vector3> res);

  /// @brief Method DistancePointLineSegment, addr 0x47115d4, size 0x16c, virtual false, abstract: false, final false
  static inline float_t DistancePointLineSegment(::UnityEngine::Vector2 point, ::UnityEngine::Vector2 lineStart, ::UnityEngine::Vector2 lineEnd);

  /// @brief Method DistancePointLineSegment, addr 0x4711740, size 0x230, virtual false, abstract: false, final false
  static inline float_t DistancePointLineSegment(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 lineStart, ::UnityEngine::Vector3 lineEnd);

  /// @brief Method DivideBy, addr 0x4712ef8, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 DivideBy(::UnityEngine::Vector2 v, ::UnityEngine::Vector2 o);

  /// @brief Method DivideBy, addr 0x4712f04, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 DivideBy(::UnityEngine::Vector3 v, ::UnityEngine::Vector3 o);

  /// @brief Method EnsureUnitVector, addr 0x47147a4, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 EnsureUnitVector(::UnityEngine::Vector2 value);

  /// @brief Method EnsureUnitVector, addr 0x47148ac, size 0x120, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 EnsureUnitVector(::UnityEngine::Vector3 value);

  /// @brief Method EnsureUnitVector, addr 0x47149cc, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 EnsureUnitVector(::UnityEngine::Vector4 value);

  /// @brief Method FixNaN, addr 0x4714758, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 FixNaN(::UnityEngine::Vector4 value);

  /// @brief Method GetBounds, addr 0x470e5ac, size 0x5d0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Bounds GetBounds(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions, ::System::Collections::Generic::IList_1<int32_t>* indices);

  /// @brief Method GetLineSegmentIntersect, addr 0x470236c, size 0x78, virtual false, abstract: false, final false
  static inline bool GetLineSegmentIntersect(::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, ::UnityEngine::Vector2 p3);

  /// @brief Method GetLineSegmentIntersect, addr 0x4711b18, size 0x120, virtual false, abstract: false, final false
  static inline bool GetLineSegmentIntersect(::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, ::UnityEngine::Vector2 p3, ::ByRef<::UnityEngine::Vector2> intersect);

  /// @brief Method GetNearestPointRayRay, addr 0x4711970, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetNearestPointRayRay(::UnityEngine::Ray a, ::UnityEngine::Ray b);

  /// @brief Method GetNearestPointRayRay, addr 0x47119b4, size 0x164, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetNearestPointRayRay(::UnityEngine::Vector3 ao, ::UnityEngine::Vector3 ad, ::UnityEngine::Vector3 bo, ::UnityEngine::Vector3 bd);

  /// @brief Method InvertScaleVector, addr 0x47144f8, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 InvertScaleVector(::UnityEngine::Vector3 scaleVector);

  /// @brief Method IsCardinalAxis, addr 0x4712cb0, size 0x248, virtual false, abstract: false, final false
  static inline bool IsCardinalAxis(::UnityEngine::Vector3 v, float_t epsilon);

  /// @brief Method IsNumber, addr 0x471466c, size 0x24, virtual false, abstract: false, final false
  static inline bool IsNumber(::UnityEngine::Vector2 value);

  /// @brief Method IsNumber, addr 0x4714690, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsNumber(::UnityEngine::Vector3 value);

  /// @brief Method IsNumber, addr 0x47146cc, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsNumber(::UnityEngine::Vector4 value);

  /// @brief Method IsNumber, addr 0x4714658, size 0x14, virtual false, abstract: false, final false
  static inline bool IsNumber(float_t value);

  /// @brief Method LargestValue, addr 0x4712f38, size 0xc, virtual false, abstract: false, final false
  static inline float_t LargestValue(::UnityEngine::Vector2 v);

  /// @brief Method LargestValue, addr 0x4712f14, size 0x24, virtual false, abstract: false, final false
  static inline float_t LargestValue(::UnityEngine::Vector3 v);

  /// @brief Method LargestVector2, addr 0x47132d0, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 LargestVector2(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> v);

  /// @brief Method LargestVector2, addr 0x4713324, size 0x338, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 LargestVector2(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> v, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method MakeNonZero, addr 0x4714718, size 0x40, virtual false, abstract: false, final false
  static inline float_t MakeNonZero(float_t value, float_t min);

  /// @brief Method Max, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Max(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method Min, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Min(::ArrayW<T, ::Array<T>*> array);

  /// @brief Method Normal, addr 0x4712ac0, size 0x1f0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Normal(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face);

  /// @brief Method Normal, addr 0x4712164, size 0x1b4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Normal(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2);

  /// @brief Method Normal, addr 0x4712318, size 0x7a8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Normal(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method NormalTangentBitangent, addr 0x470dce8, size 0x3ec, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Normal NormalTangentBitangent(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face);

  /// @brief Method Perpendicular, addr 0x47113f0, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Perpendicular(::UnityEngine::Vector2 value);

  /// @brief Method PointInCircumference, addr 0x4710d10, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 PointInCircumference(float_t radius, float_t angleInDegrees, ::UnityEngine::Vector2 origin);

  /// @brief Method PointInEllipseCircumference, addr 0x4710d6c, size 0x128, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 PointInEllipseCircumference(float_t xRadius, float_t yRadius, float_t angleInDegrees, ::UnityEngine::Vector2 origin, ::ByRef<::UnityEngine::Vector2> tangent);

  /// @brief Method PointInEllipseCircumferenceWithConstantAngle, addr 0x4710e94, size 0x16c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 PointInEllipseCircumferenceWithConstantAngle(float_t xRadius, float_t yRadius, float_t angleInDegrees, ::UnityEngine::Vector2 origin,
                                                                                    ::ByRef<::UnityEngine::Vector2> tangent);

  /// @brief Method PointInPolygon, addr 0x4711c38, size 0x278, virtual false, abstract: false, final false
  static inline bool PointInPolygon(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> polygon, ::UnityEngine::Vector2 point, ::ArrayW<int32_t, ::Array<int32_t>*> indexes);

  /// @brief Method PointInPolygon, addr 0x4711eb0, size 0x124, virtual false, abstract: false, final false
  static inline bool PointInPolygon(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> positions, ::UnityEngine::ProBuilder::Bounds2D* polyBounds,
                                    ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> edges, ::UnityEngine::Vector2 point);

  /// @brief Method PointInPolygon, addr 0x4711fd4, size 0x124, virtual false, abstract: false, final false
  static inline bool PointInPolygon(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> positions, ::UnityEngine::ProBuilder::Bounds2D* polyBounds,
                                    ::ArrayW<::UnityEngine::ProBuilder::Edge, ::Array<::UnityEngine::ProBuilder::Edge>*> edges, ::UnityEngine::Vector2 point);

  /// @brief Method PointInSphere, addr 0x4711000, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 PointInSphere(float_t radius, float_t latitudeAngle, float_t longitudeAngle);

  /// @brief Method PolygonArea, addr 0x4711254, size 0x110, virtual false, abstract: false, final false
  static inline float_t PolygonArea(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> vertices, ::ArrayW<int32_t, ::Array<int32_t>*> indexes);

  /// @brief Method RayIntersectsTriangle, addr 0x470bae4, size 0x2a0, virtual false, abstract: false, final false
  static inline bool RayIntersectsTriangle(::UnityEngine::Ray InRay, ::UnityEngine::Vector3 InTriangleA, ::UnityEngine::Vector3 InTriangleB, ::UnityEngine::Vector3 InTriangleC,
                                           ::ByRef<float_t> OutDistance, ::ByRef<::UnityEngine::Vector3> OutPoint);

  /// @brief Method RayIntersectsTriangle2, addr 0x470cdb8, size 0x238, virtual false, abstract: false, final false
  static inline bool RayIntersectsTriangle2(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 dir, ::UnityEngine::Vector3 vert0, ::UnityEngine::Vector3 vert1, ::UnityEngine::Vector3 vert2,
                                            ::ByRef<float_t> distance, ::ByRef<::UnityEngine::Vector3> normal);

  /// @brief Method RectIntersectsLineSegment, addr 0x47120f8, size 0x4, virtual false, abstract: false, final false
  static inline bool RectIntersectsLineSegment(::UnityEngine::Rect rect, ::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b);

  /// @brief Method RectIntersectsLineSegment, addr 0x47120fc, size 0x8, virtual false, abstract: false, final false
  static inline bool RectIntersectsLineSegment(::UnityEngine::Rect rect, ::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);

  /// @brief Method ReflectPoint, addr 0x4711404, size 0x17c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 ReflectPoint(::UnityEngine::Vector2 point, ::UnityEngine::Vector2 lineStart, ::UnityEngine::Vector2 lineEnd);

  /// @brief Method RotateAroundPoint, addr 0x4711364, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 RotateAroundPoint(::UnityEngine::Vector2 v, ::UnityEngine::Vector2 origin, float_t theta);

  /// @brief Method ScaleAroundPoint, addr 0x47113d4, size 0x1c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 ScaleAroundPoint(::UnityEngine::Vector2 v, ::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 scale);

  /// @brief Method Secant, addr 0x471214c, size 0x18, virtual false, abstract: false, final false
  static inline float_t Secant(float_t x);

  /// @brief Method Sign, addr 0x471461c, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Sign(::UnityEngine::Vector3 v);

  /// @brief Method SignedAngle, addr 0x4711078, size 0x104, virtual false, abstract: false, final false
  static inline float_t SignedAngle(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b);

  /// @brief Method SmallestVector2, addr 0x4712f44, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 SmallestVector2(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> v);

  /// @brief Method SmallestVector2, addr 0x4712f98, size 0x338, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 SmallestVector2(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> v, ::System::Collections::Generic::IList_1<int32_t>* indexes);

  /// @brief Method SqrDistance, addr 0x471117c, size 0x24, virtual false, abstract: false, final false
  static inline float_t SqrDistance(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b);

  /// @brief Method SqrDistanceRayPoint, addr 0x4711580, size 0x54, virtual false, abstract: false, final false
  static inline float_t SqrDistanceRayPoint(::UnityEngine::Ray ray, ::UnityEngine::Vector3 point);

  /// @brief Method Subtract, addr 0x4712104, size 0x18, virtual false, abstract: false, final false
  static inline void Subtract(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::ByRef<::UnityEngine::Vector3> res);

  /// @brief Method Sum, addr 0x4714640, size 0x18, virtual false, abstract: false, final false
  static inline float_t Sum(::UnityEngine::Vector3 v);

  /// @brief Method TriangleArea, addr 0x47111a0, size 0xb4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14257 };

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
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Math, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Math);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Math*, "UnityEngine.ProBuilder", "Math");
