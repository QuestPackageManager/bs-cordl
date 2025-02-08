#pragma once
// IWYU pragma private; include "Unity/Mathematics/Geometry/MinMaxAABB.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MinMaxAABB)
namespace Unity::Mathematics {
struct float3;
}
// Forward declare root types
namespace Unity::Mathematics::Geometry {
struct MinMaxAABB;
}
// Write type traits
MARK_VAL_T(::Unity::Mathematics::Geometry::MinMaxAABB);
// Dependencies System.IEquatable`1<T>, Unity.Mathematics.float3
namespace Unity::Mathematics::Geometry {
// Is value type: true
// CS Name: Unity.Mathematics.Geometry.MinMaxAABB
struct CORDL_TYPE MinMaxAABB {
public:
  // Declarations
  __declspec(property(get = get_Center)) ::Unity::Mathematics::float3 Center;

  __declspec(property(get = get_Extents)) ::Unity::Mathematics::float3 Extents;

  __declspec(property(get = get_HalfExtents)) ::Unity::Mathematics::float3 HalfExtents;

  __declspec(property(get = get_IsValid)) bool IsValid;

  __declspec(property(get = get_SurfaceArea)) float_t SurfaceArea;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Mathematics::Geometry::MinMaxAABB>"
  constexpr operator ::System::IEquatable_1<::Unity::Mathematics::Geometry::MinMaxAABB>*();

  /// @brief Method Contains, addr 0x4674284, size 0x74, virtual false, abstract: false, final false
  inline bool Contains(::Unity::Mathematics::Geometry::MinMaxAABB aabb);

  /// @brief Method Contains, addr 0x4674220, size 0x64, virtual false, abstract: false, final false
  inline bool Contains(::Unity::Mathematics::float3 point);

  /// @brief Method CreateFromCenterAndExtents, addr 0x46740cc, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::Geometry::MinMaxAABB CreateFromCenterAndExtents(::Unity::Mathematics::float3 center, ::Unity::Mathematics::float3 extents);

  /// @brief Method CreateFromCenterAndHalfExtents, addr 0x4674104, size 0x28, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::Geometry::MinMaxAABB CreateFromCenterAndHalfExtents(::Unity::Mathematics::float3 center, ::Unity::Mathematics::float3 halfExtents);

  /// @brief Method Encapsulate, addr 0x4674394, size 0x94, virtual false, abstract: false, final false
  inline void Encapsulate(::Unity::Mathematics::Geometry::MinMaxAABB aabb);

  /// @brief Method Encapsulate, addr 0x4674428, size 0xc8, virtual false, abstract: false, final false
  inline void Encapsulate(::Unity::Mathematics::float3 point);

  /// @brief Method Equals, addr 0x46744f0, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Mathematics::Geometry::MinMaxAABB other);

  /// @brief Method Expand, addr 0x4674368, size 0x2c, virtual false, abstract: false, final false
  inline void Expand(float_t signedDistance);

  /// @brief Method Overlaps, addr 0x46742f8, size 0x70, virtual false, abstract: false, final false
  inline bool Overlaps(::Unity::Mathematics::Geometry::MinMaxAABB aabb);

  /// @brief Method ToString, addr 0x467455c, size 0xb8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x46740bc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Mathematics::float3 min, ::Unity::Mathematics::float3 max);

  /// @brief Method get_Center, addr 0x467417c, size 0x30, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_Center();

  /// @brief Method get_Extents, addr 0x467412c, size 0x20, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_Extents();

  /// @brief Method get_HalfExtents, addr 0x467414c, size 0x30, virtual false, abstract: false, final false
  inline ::Unity::Mathematics::float3 get_HalfExtents();

  /// @brief Method get_IsValid, addr 0x46741ac, size 0x40, virtual false, abstract: false, final false
  inline bool get_IsValid();

  /// @brief Method get_SurfaceArea, addr 0x46741ec, size 0x34, virtual false, abstract: false, final false
  inline float_t get_SurfaceArea();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Mathematics::Geometry::MinMaxAABB>"
  constexpr ::System::IEquatable_1<::Unity::Mathematics::Geometry::MinMaxAABB>* i___System__IEquatable_1___Unity__Mathematics__Geometry__MinMaxAABB_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MinMaxAABB();

  // Ctor Parameters [CppParam { name: "Min", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "Max", ty: "::Unity::Mathematics::float3", modifiers: "",
  // def_value: None }]
  constexpr MinMaxAABB(::Unity::Mathematics::float3 Min, ::Unity::Mathematics::float3 Max) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10031 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Min, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::float3 Min;

  /// @brief Field Max, offset: 0xc, size: 0xc, def value: None
  ::Unity::Mathematics::float3 Max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Mathematics::Geometry::MinMaxAABB, Min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Mathematics::Geometry::MinMaxAABB, Max) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::Geometry::MinMaxAABB, 0x18>, "Size mismatch!");

} // namespace Unity::Mathematics::Geometry
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::Geometry::MinMaxAABB, "Unity.Mathematics.Geometry", "MinMaxAABB");
