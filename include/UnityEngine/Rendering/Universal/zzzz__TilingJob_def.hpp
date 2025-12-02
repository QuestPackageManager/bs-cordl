#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/TilingJob.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "Unity/Mathematics/zzzz__int2_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Fixed2_1_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__InclusiveRange_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleLight_def.hpp"
#include "UnityEngine/Rendering/zzzz__VisibleReflectionProbe_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TilingJob)
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace Unity::Jobs {
class IJobFor;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct int4;
}
namespace UnityEngine::Rendering::Universal {
struct InclusiveRange;
}
namespace UnityEngine::Rendering::Universal {
struct TilingJob___c__DisplayClass19_0;
}
namespace UnityEngine::Rendering::Universal {
struct TilingJob___c__DisplayClass20_0;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct TilingJob;
}
namespace UnityEngine::Rendering::Universal {
struct TilingJob___c__DisplayClass19_0;
}
namespace UnityEngine::Rendering::Universal {
struct TilingJob___c__DisplayClass20_0;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::TilingJob);
MARK_VAL_T(::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass19_0);
MARK_VAL_T(::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass20_0);
// Dependencies Unity.Mathematics.float3, UnityEngine.Rendering.VisibleLight
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.TilingJob/<>c__DisplayClass19_0
struct CORDL_TYPE TilingJob___c__DisplayClass19_0 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TilingJob___c__DisplayClass19_0();

  // Ctor Parameters [CppParam { name: "light", ty: "::UnityEngine::Rendering::VisibleLight", modifiers: "", def_value: None }, CppParam { name: "lightPositionVS", ty: "::Unity::Mathematics::float3",
  // modifiers: "", def_value: None }, CppParam { name: "lightDirectionVS", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "cosHalfAngle", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "coneHeight", ty: "float_t", modifiers: "", def_value: None }]
  constexpr TilingJob___c__DisplayClass19_0(::UnityEngine::Rendering::VisibleLight light, ::Unity::Mathematics::float3 lightPositionVS, ::Unity::Mathematics::float3 lightDirectionVS,
                                            float_t cosHalfAngle, float_t coneHeight) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12950 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x94 };

  /// @brief Field light, offset: 0x0, size: 0x74, def value: None
  ::UnityEngine::Rendering::VisibleLight light;

  /// @brief Field lightPositionVS, offset: 0x74, size: 0xc, def value: None
  ::Unity::Mathematics::float3 lightPositionVS;

  /// @brief Field lightDirectionVS, offset: 0x80, size: 0xc, def value: None
  ::Unity::Mathematics::float3 lightDirectionVS;

  /// @brief Field cosHalfAngle, offset: 0x8c, size: 0x4, def value: None
  float_t cosHalfAngle;

  /// @brief Field coneHeight, offset: 0x90, size: 0x4, def value: None
  float_t coneHeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass19_0, light) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass19_0, lightPositionVS) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass19_0, lightDirectionVS) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass19_0, cosHalfAngle) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass19_0, coneHeight) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass19_0, 0x94>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies Unity.Mathematics.float3, UnityEngine.Rendering.VisibleLight
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.TilingJob/<>c__DisplayClass20_0
struct CORDL_TYPE TilingJob___c__DisplayClass20_0 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TilingJob___c__DisplayClass20_0();

  // Ctor Parameters [CppParam { name: "light", ty: "::UnityEngine::Rendering::VisibleLight", modifiers: "", def_value: None }, CppParam { name: "lightPosVS", ty: "::Unity::Mathematics::float3",
  // modifiers: "", def_value: None }, CppParam { name: "lightDirVS", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "cosHalfAngle", ty: "float_t", modifiers:
  // "", def_value: None }]
  constexpr TilingJob___c__DisplayClass20_0(::UnityEngine::Rendering::VisibleLight light, ::Unity::Mathematics::float3 lightPosVS, ::Unity::Mathematics::float3 lightDirVS,
                                            float_t cosHalfAngle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12951 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  /// @brief Field light, offset: 0x0, size: 0x74, def value: None
  ::UnityEngine::Rendering::VisibleLight light;

  /// @brief Field lightPosVS, offset: 0x74, size: 0xc, def value: None
  ::Unity::Mathematics::float3 lightPosVS;

  /// @brief Field lightDirVS, offset: 0x80, size: 0xc, def value: None
  ::Unity::Mathematics::float3 lightDirVS;

  /// @brief Field cosHalfAngle, offset: 0x8c, size: 0x4, def value: None
  float_t cosHalfAngle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass20_0, light) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass20_0, lightPosVS) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass20_0, lightDirVS) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass20_0, cosHalfAngle) == 0x8c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass20_0, 0x90>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float2, Unity.Mathematics.float4, Unity.Mathematics.float4x4, Unity.Mathematics.int2, UnityEngine.Rendering.Universal.Fixed2`1<T>,
// UnityEngine.Rendering.Universal.InclusiveRange, UnityEngine.Rendering.VisibleLight, UnityEngine.Rendering.VisibleReflectionProbe
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.TilingJob
struct CORDL_TYPE TilingJob {
public:
  // Declarations
  using __c__DisplayClass19_0 = ::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass19_0;

  using __c__DisplayClass20_0 = ::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass20_0;

  /// @brief Field k_CubeLineIndices, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_CubeLineIndices, put = setStaticF_k_CubeLineIndices)) ::ArrayW<::Unity::Mathematics::int4, ::Array<::Unity::Mathematics::int4>*> k_CubeLineIndices;

  /// @brief Field k_CubePoints, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_CubePoints, put = setStaticF_k_CubePoints)) ::ArrayW<::Unity::Mathematics::float3, ::Array<::Unity::Mathematics::float3>*> k_CubePoints;

  /// @brief Convert operator to "::Unity::Jobs::IJobFor"
  constexpr operator ::Unity::Jobs::IJobFor*();

  /// @brief Method EvaluateNearConic, addr 0x66a5f38, size 0x1e0, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 EvaluateNearConic(float_t near, ::Unity::Mathematics::float3 o, ::Unity::Mathematics::float3 d, float_t r, ::Unity::Mathematics::float3 u,
                                                               ::Unity::Mathematics::float3 v, float_t theta);

  /// @brief Method Execute, addr 0x66a2318, size 0x118, virtual true, abstract: false, final true
  inline void Execute(int32_t jobIndex);

  /// @brief Method ExpandOrthographic, addr 0x66a72cc, size 0x11c, virtual false, abstract: false, final false
  inline void ExpandOrthographic(::Unity::Mathematics::float3 positionVS);

  /// @brief Method ExpandRangeOrthographic, addr 0x66a74d8, size 0xdc, virtual false, abstract: false, final false
  inline void ExpandRangeOrthographic(::ByRef<::UnityEngine::Rendering::Universal::InclusiveRange> range, float_t xVS);

  /// @brief Method ExpandY, addr 0x66a5404, size 0x11c, virtual false, abstract: false, final false
  inline void ExpandY(::Unity::Mathematics::float3 positionVS);

  /// @brief Method FindNearConicTangentTheta, addr 0x66a5cb0, size 0x288, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 FindNearConicTangentTheta(::Unity::Mathematics::float2 o, ::Unity::Mathematics::float2 d, float_t r, ::Unity::Mathematics::float2 u,
                                                                       ::Unity::Mathematics::float2 v);

  /// @brief Method FindNearConicYTheta, addr 0x66a6a44, size 0x478, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float2 FindNearConicYTheta(float_t near, ::Unity::Mathematics::float3 o, ::Unity::Mathematics::float3 d, float_t r, ::Unity::Mathematics::float3 u,
                                                                 ::Unity::Mathematics::float3 v, float_t y);

  /// @brief Method GetCircleClipPoints, addr 0x66a5a9c, size 0x214, virtual false, abstract: false, final false
  static inline bool GetCircleClipPoints(::Unity::Mathematics::float3 circleCenter, ::Unity::Mathematics::float3 circleNormal, float_t circleRadius, float_t near,
                                         ::ByRef<::Unity::Mathematics::float3> p0, ::ByRef<::Unity::Mathematics::float3> p1);

  /// @brief Method GetConeSideTangentPoints, addr 0x66a6238, size 0x4e4, virtual false, abstract: false, final false
  static inline void GetConeSideTangentPoints(::Unity::Mathematics::float3 vertex, ::Unity::Mathematics::float3 axis, float_t cosHalfAngle, float_t circleRadius, float_t coneHeight, float_t range,
                                              ::Unity::Mathematics::float3 circleU, ::Unity::Mathematics::float3 circleV, ::ByRef<::Unity::Mathematics::float3> l1,
                                              ::ByRef<::Unity::Mathematics::float3> l2);

  /// @brief Method GetProjectedCircleHorizon, addr 0x66a588c, size 0x210, virtual false, abstract: false, final false
  static inline void GetProjectedCircleHorizon(::Unity::Mathematics::float2 center, float_t radius, ::Unity::Mathematics::float2 U, ::Unity::Mathematics::float2 V,
                                               ::ByRef<::Unity::Mathematics::float2> uv1, ::ByRef<::Unity::Mathematics::float2> uv2);

  /// @brief Method GetSphereHorizon, addr 0x66a5528, size 0x274, virtual false, abstract: false, final false
  static inline void GetSphereHorizon(::Unity::Mathematics::float2 center, float_t radius, float_t near, float_t clipRadius, ::ByRef<::Unity::Mathematics::float2> p0,
                                      ::ByRef<::Unity::Mathematics::float2> p1);

  /// @brief Method GetSphereYPlaneHorizon, addr 0x66a6ebc, size 0x410, virtual false, abstract: false, final false
  static inline void GetSphereYPlaneHorizon(::Unity::Mathematics::float3 center, float_t sphereRadius, float_t near, float_t clipRadius, float_t y, ::ByRef<::Unity::Mathematics::float3> left,
                                            ::ByRef<::Unity::Mathematics::float3> right);

  /// @brief Method IntersectCircleYPlane, addr 0x66a67a0, size 0x2a4, virtual false, abstract: false, final false
  static inline bool IntersectCircleYPlane(float_t y, ::Unity::Mathematics::float3 circleCenter, ::Unity::Mathematics::float3 circleNormal, ::Unity::Mathematics::float3 circleU,
                                           ::Unity::Mathematics::float3 circleV, float_t circleRadius, ::ByRef<::Unity::Mathematics::float3> p1, ::ByRef<::Unity::Mathematics::float3> p2);

  /// @brief Method IntersectEllipseLine, addr 0x66a7628, size 0x160, virtual false, abstract: false, final false
  static inline ::System::ValueTuple_2<float_t, float_t> IntersectEllipseLine(float_t a, float_t b, ::Unity::Mathematics::float3 line);

  /// @brief Method TileLight, addr 0x66a3098, size 0x1b90, virtual false, abstract: false, final false
  inline void TileLight(int32_t lightIndex);

  /// @brief Method TileLightOrthographic, addr 0x66a2430, size 0xc68, virtual false, abstract: false, final false
  inline void TileLightOrthographic(int32_t lightIndex);

  /// @brief Method TileReflectionProbe, addr 0x66a4c28, size 0x7dc, virtual false, abstract: false, final false
  inline void TileReflectionProbe(int32_t index);

  /// @brief Method ViewToTileSpace, addr 0x66a671c, size 0x84, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 ViewToTileSpace(::Unity::Mathematics::float3 positionVS);

  /// @brief Method ViewToTileSpaceOrthographic, addr 0x66a75b4, size 0x74, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float2 ViewToTileSpaceOrthographic(::Unity::Mathematics::float3 positionVS);

  /// @brief Method <TileLightOrthographic>g__SpherePointIsValid|20_0, addr 0x66a73e8, size 0xf0, virtual false, abstract: false, final false
  static inline bool _TileLightOrthographic_g__SpherePointIsValid_20_0(::Unity::Mathematics::float3 p,
                                                                       ::ByRef<::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass20_0> _cordl_fixed_empty_name_whitespace);

  /// @brief Method <TileLight>g__ConicPointIsValid|19_1, addr 0x66a6118, size 0x120, virtual false, abstract: false, final false
  static inline bool _TileLight_g__ConicPointIsValid_19_1(::Unity::Mathematics::float3 p,
                                                          ::ByRef<::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass19_0> _cordl_fixed_empty_name_whitespace);

  /// @brief Method <TileLight>g__SpherePointIsValid|19_0, addr 0x66a579c, size 0xf0, virtual false, abstract: false, final false
  static inline bool _TileLight_g__SpherePointIsValid_19_0(::Unity::Mathematics::float3 p,
                                                           ::ByRef<::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass19_0> _cordl_fixed_empty_name_whitespace);

  static inline ::ArrayW<::Unity::Mathematics::int4, ::Array<::Unity::Mathematics::int4>*> getStaticF_k_CubeLineIndices();

  static inline ::ArrayW<::Unity::Mathematics::float3, ::Array<::Unity::Mathematics::float3>*> getStaticF_k_CubePoints();

  /// @brief Convert to "::Unity::Jobs::IJobFor"
  constexpr ::Unity::Jobs::IJobFor* i___Unity__Jobs__IJobFor();

  static inline void setStaticF_k_CubeLineIndices(::ArrayW<::Unity::Mathematics::int4, ::Array<::Unity::Mathematics::int4>*> value);

  static inline void setStaticF_k_CubePoints(::ArrayW<::Unity::Mathematics::float3, ::Array<::Unity::Mathematics::float3>*> value);

  /// @brief Method square, addr 0x66a5520, size 0x8, virtual false, abstract: false, final false
  static inline float_t square(float_t x);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TilingJob();

  // Ctor Parameters [CppParam { name: "lights", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight>", modifiers: "", def_value: None }, CppParam { name:
  // "reflectionProbes", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleReflectionProbe>", modifiers: "", def_value: None }, CppParam { name: "tileRanges", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::InclusiveRange>", modifiers: "", def_value: None }, CppParam { name: "itemsPerTile", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "rangesPerItem", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "worldToViews", ty:
  // "::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: None }, CppParam { name: "tileScale", ty: "::Unity::Mathematics::float2", modifiers: "",
  // def_value: None }, CppParam { name: "tileScaleInv", ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }, CppParam { name: "viewPlaneBottoms", ty:
  // "::UnityEngine::Rendering::Universal::Fixed2_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "viewPlaneTops", ty: "::UnityEngine::Rendering::Universal::Fixed2_1<float_t>",
  // modifiers: "", def_value: None }, CppParam { name: "viewToViewportScaleBiases", ty: "::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4>", modifiers: "", def_value: None
  // }, CppParam { name: "tileCount", ty: "::Unity::Mathematics::int2", modifiers: "", def_value: None }, CppParam { name: "near", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "isOrthographic", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_TileYRange", ty: "::UnityEngine::Rendering::Universal::InclusiveRange", modifiers: "", def_value: None },
  // CppParam { name: "m_Offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ViewIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CenterOffset",
  // ty: "::Unity::Mathematics::float2", modifiers: "", def_value: None }]
  constexpr TilingJob(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> lights,
                      ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleReflectionProbe> reflectionProbes,
                      ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::InclusiveRange> tileRanges, int32_t itemsPerTile, int32_t rangesPerItem,
                      ::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4x4> worldToViews, ::Unity::Mathematics::float2 tileScale, ::Unity::Mathematics::float2 tileScaleInv,
                      ::UnityEngine::Rendering::Universal::Fixed2_1<float_t> viewPlaneBottoms, ::UnityEngine::Rendering::Universal::Fixed2_1<float_t> viewPlaneTops,
                      ::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4> viewToViewportScaleBiases, ::Unity::Mathematics::int2 tileCount, float_t near, bool isOrthographic,
                      ::UnityEngine::Rendering::Universal::InclusiveRange m_TileYRange, int32_t m_Offset, int32_t m_ViewIndex, ::Unity::Mathematics::float2 m_CenterOffset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12952 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x120 };

  /// @brief Field lights, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> lights;

  /// @brief Field reflectionProbes, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleReflectionProbe> reflectionProbes;

  /// @brief Field tileRanges, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::InclusiveRange> tileRanges;

  /// @brief Field itemsPerTile, offset: 0x30, size: 0x4, def value: None
  int32_t itemsPerTile;

  /// @brief Field rangesPerItem, offset: 0x34, size: 0x4, def value: None
  int32_t rangesPerItem;

  /// @brief Field worldToViews, offset: 0x38, size: 0x80, def value: None
  ::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4x4> worldToViews;

  /// @brief Field tileScale, offset: 0xb8, size: 0x8, def value: None
  ::Unity::Mathematics::float2 tileScale;

  /// @brief Field tileScaleInv, offset: 0xc0, size: 0x8, def value: None
  ::Unity::Mathematics::float2 tileScaleInv;

  /// @brief Field viewPlaneBottoms, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Fixed2_1<float_t> viewPlaneBottoms;

  /// @brief Field viewPlaneTops, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Fixed2_1<float_t> viewPlaneTops;

  /// @brief Field viewToViewportScaleBiases, offset: 0xd8, size: 0x20, def value: None
  ::UnityEngine::Rendering::Universal::Fixed2_1<::Unity::Mathematics::float4> viewToViewportScaleBiases;

  /// @brief Field tileCount, offset: 0xf8, size: 0x8, def value: None
  ::Unity::Mathematics::int2 tileCount;

  /// @brief Field near, offset: 0x100, size: 0x4, def value: None
  float_t near;

  /// @brief Field isOrthographic, offset: 0x104, size: 0x1, def value: None
  bool isOrthographic;

  /// @brief Field m_TileYRange, offset: 0x106, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::InclusiveRange m_TileYRange;

  /// @brief Field m_Offset, offset: 0x10c, size: 0x4, def value: None
  int32_t m_Offset;

  /// @brief Field m_ViewIndex, offset: 0x110, size: 0x4, def value: None
  int32_t m_ViewIndex;

  /// @brief Field m_CenterOffset, offset: 0x114, size: 0x8, def value: None
  ::Unity::Mathematics::float2 m_CenterOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, lights) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, reflectionProbes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, tileRanges) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, itemsPerTile) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, rangesPerItem) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, worldToViews) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, tileScale) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, tileScaleInv) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, viewPlaneBottoms) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, viewPlaneTops) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, viewToViewportScaleBiases) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, tileCount) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, near) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, isOrthographic) == 0x104, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, m_TileYRange) == 0x106, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, m_Offset) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, m_ViewIndex) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TilingJob, m_CenterOffset) == 0x114, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::TilingJob, 0x120>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::TilingJob, "UnityEngine.Rendering.Universal", "TilingJob");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass19_0, "UnityEngine.Rendering.Universal", "TilingJob/<>c__DisplayClass19_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::TilingJob___c__DisplayClass20_0, "UnityEngine.Rendering.Universal", "TilingJob/<>c__DisplayClass20_0");
