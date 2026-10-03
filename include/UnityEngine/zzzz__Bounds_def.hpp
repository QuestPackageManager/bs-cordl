#pragma once
// IWYU pragma private; include "UnityEngine/Bounds.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Bounds)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class Object;
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
DEFINE_IL2CPP_CLASS(::UnityEngine::Bounds, "UnityEngine", "Bounds");
// [NativeHeader("Runtime/Geometry/Ray.h")]
// [NativeClass("AABB")]
// [NativeType(Header = "Runtime/Geometry/AABB.h")]
// [NativeHeader("Runtime/Math/MathScripting.h")]
// [NativeHeader("Runtime/Geometry/AABB.h")]
// [NativeHeader("Runtime/Geometry/Intersection.h")]
// [RequiredByNativeCode(Optional = true, GenerateProxy = true)]
// Dependencies UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Bounds
struct CORDL_TYPE Bounds {
public:
  // Declarations
  __declspec(property(get = get_center, put = set_center)) ::UnityEngine::Vector3 center;

  __declspec(property(get = get_extents, put = set_extents)) ::UnityEngine::Vector3 extents;

  __declspec(property(get = get_max, put = set_max)) ::UnityEngine::Vector3 max;

  __declspec(property(get = get_min, put = set_min)) ::UnityEngine::Vector3 min;

  __declspec(property(get = get_size, put = set_size)) ::UnityEngine::Vector3 size;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Bounds>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Bounds>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// [IsReadOnly]
  /// @brief Method ClosestPoint, addr 0x6ed2884, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3 point);

  /// [IsReadOnly]
  /// @brief Method Contains, addr 0x6ed2774, size 0x58, virtual false, abstract: false, final false
  inline bool Contains(::UnityEngine::Vector3 point);

  /// @brief Method Encapsulate, addr 0x6ed2324, size 0xdc, virtual false, abstract: false, final false
  inline void Encapsulate(::UnityEngine::Bounds bounds);

  /// @brief Method Encapsulate, addr 0x6ed2230, size 0x78, virtual false, abstract: false, final false
  inline void Encapsulate(::UnityEngine::Vector3 point);

  /// @brief Method Encapsulate, addr 0x6ed22a8, size 0x7c, virtual false, abstract: false, final false
  inline void Encapsulate(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3> point);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6ed1dd4, size 0xcc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6ed1ea0, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Bounds other);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6ed1f0c, size 0x6c, virtual false, abstract: false, final false
  inline bool Equals(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Bounds> other);

  /// @brief Method Expand, addr 0x6ed2400, size 0x30, virtual false, abstract: false, final false
  inline void Expand(::UnityEngine::Vector3 amount);

  /// [IsReadOnly]
  /// @brief Method GetHashCode, addr 0x6ed1d34, size 0xa0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// [FreeFunction("BoundsScripting::ClosestPoint", HasExplicitThis = true, IsThreadSafe = true)]
  /// [IsReadOnly]
  /// @brief Method Internal_ClosestPoint, addr 0x6ed27cc, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 Internal_ClosestPoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3> point);

  /// @brief Method Internal_ClosestPoint_Injected, addr 0x6ed2830, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_ClosestPoint_Injected(::by_ref<::UnityEngine::Bounds> _unity_self, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3> point, ::by_ref<::UnityEngine::Vector3> ret);

  /// [NativeMethod("IsInside", IsThreadSafe = true)]
  /// [IsReadOnly]
  /// @brief Method Internal_Contains, addr 0x6ed2730, size 0x44, virtual false, abstract: false, final false
  inline bool Internal_Contains(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3> point);

  /// [IsReadOnly]
  /// @brief Method IntersectRay, addr 0x6ed24d0, size 0x5c, virtual false, abstract: false, final false
  inline bool IntersectRay(::UnityEngine::Ray ray);

  /// [IsReadOnly]
  /// @brief Method IntersectRay, addr 0x6ed2580, size 0x54, virtual false, abstract: false, final false
  inline bool IntersectRay(::UnityEngine::Ray ray, ::by_ref<float_t> distance);

  /// [FreeFunction("IntersectRayAABB", IsThreadSafe = true)]
  /// @brief Method IntersectRayAABB, addr 0x6ed252c, size 0x54, virtual false, abstract: false, final false
  static inline bool IntersectRayAABB(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray> ray, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Bounds> bounds, ::by_ref<float_t> dist);

  /// [IsReadOnly]
  /// @brief Method Intersects, addr 0x6ed2430, size 0xa0, virtual false, abstract: false, final false
  inline bool Intersects(::UnityEngine::Bounds bounds);

  /// @brief Method SetMinMax, addr 0x6ed21ac, size 0x38, virtual false, abstract: false, final false
  inline void SetMinMax(::UnityEngine::Vector3 min, ::UnityEngine::Vector3 max);

  /// @brief Method SetMinMax, addr 0x6ed21e4, size 0x4c, virtual false, abstract: false, final false
  inline void SetMinMax(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3> min, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3> max);

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x6ed25d4, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x6ed25e4, size 0x14c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6ed1d0c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size);

  /// [IsReadOnly]
  /// @brief Method get_center, addr 0x6ed1f78, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_center();

  /// [IsReadOnly]
  /// @brief Method get_extents, addr 0x6ed1fc8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_extents();

  /// [IsReadOnly]
  /// @brief Method get_max, addr 0x6ed2050, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_max();

  /// [IsReadOnly]
  /// @brief Method get_min, addr 0x6ed1fe0, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_min();

  /// [IsReadOnly]
  /// @brief Method get_size, addr 0x6ed1f90, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_size();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Bounds>"
  constexpr ::System::IEquatable_1<::UnityEngine::Bounds>* i___System__IEquatable_1___UnityEngine__Bounds_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Equality, addr 0x6ed20c0, size 0x74, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Bounds lhs, ::UnityEngine::Bounds rhs);

  /// @brief Method op_Inequality, addr 0x6ed2134, size 0x78, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Bounds lhs, ::UnityEngine::Bounds rhs);

  /// @brief Method set_center, addr 0x6ed1f84, size 0xc, virtual false, abstract: false, final false
  inline void set_center(::UnityEngine::Vector3 value);

  /// @brief Method set_extents, addr 0x6ed1fd4, size 0xc, virtual false, abstract: false, final false
  inline void set_extents(::UnityEngine::Vector3 value);

  /// @brief Method set_max, addr 0x6ed2070, size 0x50, virtual false, abstract: false, final false
  inline void set_max(::UnityEngine::Vector3 value);

  /// @brief Method set_min, addr 0x6ed2000, size 0x50, virtual false, abstract: false, final false
  inline void set_min(::UnityEngine::Vector3 value);

  /// @brief Method set_size, addr 0x6ed1fa8, size 0x20, virtual false, abstract: false, final false
  inline void set_size(::UnityEngine::Vector3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Bounds();

  // Ctor Parameters [CppParam { name: "m_Center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Extents", ty: "::UnityEngine::Vector3", modifiers:
  // "", def_value: None, comment: None }]
  constexpr Bounds(::UnityEngine::Vector3 m_Center, ::UnityEngine::Vector3 m_Extents) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9685 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Center, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Center;

  /// [NativeName("m_Extent")]
  /// @brief Field m_Extents, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Extents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Bounds, m_Center) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Bounds, m_Extents) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Bounds) == 0x18, "Size mismatch!");

} // namespace UnityEngine
