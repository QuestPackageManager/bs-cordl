#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Bounds)
namespace System {
class IFormattable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
class IFormatProvider;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct Bounds;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Bounds);
// Type: UnityEngine::Bounds
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10164))
// CS Name: ::UnityEngine::Bounds
struct CORDL_TYPE Bounds {
public:
  // Declarations
  __declspec(property(get = get_center, put = set_center))::UnityEngine::Vector3 center;

  __declspec(property(get = get_size, put = set_size))::UnityEngine::Vector3 size;

  __declspec(property(get = get_extents, put = set_extents))::UnityEngine::Vector3 extents;

  __declspec(property(get = get_min))::UnityEngine::Vector3 min;

  __declspec(property(get = get_max))::UnityEngine::Vector3 max;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Bounds>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Bounds>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method .ctor, addr 0x2cc9dd4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size);

  /// @brief Method GetHashCode, addr 0x2cc9df4, size 0xd0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Equals, addr 0x2cc9edc, size 0xd0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x2cc9fac, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Bounds other);

  /// @brief Method get_center, addr 0x2cc9ec4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_center();

  /// @brief Method set_center, addr 0x2cca018, size 0xc, virtual false, abstract: false, final false
  inline void set_center(::UnityEngine::Vector3 value);

  /// @brief Method get_size, addr 0x2cca024, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_size();

  /// @brief Method set_size, addr 0x2cca03c, size 0x1c, virtual false, abstract: false, final false
  inline void set_size(::UnityEngine::Vector3 value);

  /// @brief Method get_extents, addr 0x2cc9ed0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_extents();

  /// @brief Method set_extents, addr 0x2cca058, size 0xc, virtual false, abstract: false, final false
  inline void set_extents(::UnityEngine::Vector3 value);

  /// @brief Method get_min, addr 0x2cca064, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_min();

  /// @brief Method get_max, addr 0x2cca084, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_max();

  /// @brief Method op_Equality, addr 0x2cca0a4, size 0x7c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Bounds lhs, ::UnityEngine::Bounds rhs);

  /// @brief Method op_Inequality, addr 0x2cca120, size 0x48, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Bounds lhs, ::UnityEngine::Bounds rhs);

  /// @brief Method SetMinMax, addr 0x2cca168, size 0x38, virtual false, abstract: false, final false
  inline void SetMinMax(::UnityEngine::Vector3 min, ::UnityEngine::Vector3 max);

  /// @brief Method Encapsulate, addr 0x2cca1a0, size 0x78, virtual false, abstract: false, final false
  inline void Encapsulate(::UnityEngine::Vector3 point);

  /// @brief Method Expand, addr 0x2cca218, size 0x30, virtual false, abstract: false, final false
  inline void Expand(::UnityEngine::Vector3 amount);

  /// @brief Method Intersects, addr 0x2cca248, size 0xa0, virtual false, abstract: false, final false
  inline bool Intersects(::UnityEngine::Bounds bounds);

  /// @brief Method IntersectRay, addr 0x2cca2e8, size 0x74, virtual false, abstract: false, final false
  inline bool IntersectRay(::UnityEngine::Ray ray, ByRef<float_t> distance);

  /// @brief Method ToString, addr 0x2cca3b0, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x2cca3bc, size 0x188, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method Contains, addr 0x2cca544, size 0x58, virtual false, abstract: false, final false
  inline bool Contains(::UnityEngine::Vector3 point);

  /// @brief Method IntersectRayAABB, addr 0x2cca35c, size 0x54, virtual false, abstract: false, final false
  static inline bool IntersectRayAABB(::UnityEngine::Ray ray, ::UnityEngine::Bounds bounds, ByRef<float_t> dist);

  /// @brief Method ClosestPoint, addr 0x2cca634, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3 point);

  /// @brief Method Contains_Injected, addr 0x2cca59c, size 0x44, virtual false, abstract: false, final false
  static inline bool Contains_Injected(ByRef<::UnityEngine::Bounds> _unity_self, ByRef<::UnityEngine::Vector3> point);

  /// @brief Method IntersectRayAABB_Injected, addr 0x2cca5e0, size 0x54, virtual false, abstract: false, final false
  static inline bool IntersectRayAABB_Injected(ByRef<::UnityEngine::Ray> ray, ByRef<::UnityEngine::Bounds> bounds, ByRef<float_t> dist);

  /// @brief Method ClosestPoint_Injected, addr 0x2cca69c, size 0x54, virtual false, abstract: false, final false
  static inline void ClosestPoint_Injected(ByRef<::UnityEngine::Bounds> _unity_self, ByRef<::UnityEngine::Vector3> point, ByRef<::UnityEngine::Vector3> ret);

  // Ctor Parameters [CppParam { name: "m_Center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Extents", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
  // None }]
  constexpr Bounds(::UnityEngine::Vector3 m_Center, ::UnityEngine::Vector3 m_Extents) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Bounds();

  /// @brief Field m_Center, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Center;

  /// @brief Field m_Extents, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Extents;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bounds, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Bounds, m_Center) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Bounds, m_Extents) == 0xc, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bounds, "UnityEngine", "Bounds");
