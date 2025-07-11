#pragma once
// IWYU pragma private; include "UnityEngine/Bounds.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Bounds)
namespace System {
class IFormatProvider;
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
// Dependencies System.IEquatable`1<T>, System.IFormattable, UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Bounds
struct CORDL_TYPE Bounds {
public:
  // Declarations
  __declspec(property(get = get_center, put = set_center)) ::UnityEngine::Vector3 center;

  __declspec(property(get = get_extents, put = set_extents)) ::UnityEngine::Vector3 extents;

  __declspec(property(get = get_max)) ::UnityEngine::Vector3 max;

  __declspec(property(get = get_min)) ::UnityEngine::Vector3 min;

  __declspec(property(get = get_size, put = set_size)) ::UnityEngine::Vector3 size;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Bounds>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Bounds>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method ClosestPoint, addr 0x4870c4c, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3 point);

  /// @brief Method ClosestPoint_Injected, addr 0x4870cb4, size 0x54, virtual false, abstract: false, final false
  static inline void ClosestPoint_Injected(::ByRef<::UnityEngine::Bounds> _unity_self, ::ByRef<::UnityEngine::Vector3> point, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method Contains, addr 0x4870b5c, size 0x58, virtual false, abstract: false, final false
  inline bool Contains(::UnityEngine::Vector3 point);

  /// @brief Method Contains_Injected, addr 0x4870bb4, size 0x44, virtual false, abstract: false, final false
  static inline bool Contains_Injected(::ByRef<::UnityEngine::Bounds> _unity_self, ::ByRef<::UnityEngine::Vector3> point);

  /// @brief Method Encapsulate, addr 0x48707b4, size 0x78, virtual false, abstract: false, final false
  inline void Encapsulate(::UnityEngine::Vector3 point);

  /// @brief Method Equals, addr 0x48704a4, size 0xd0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x4870574, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Bounds other);

  /// @brief Method Expand, addr 0x487082c, size 0x30, virtual false, abstract: false, final false
  inline void Expand(::UnityEngine::Vector3 amount);

  /// @brief Method GetHashCode, addr 0x48703d4, size 0xd0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IntersectRay, addr 0x48708fc, size 0x74, virtual false, abstract: false, final false
  inline bool IntersectRay(::UnityEngine::Ray ray, ::ByRef<float_t> distance);

  /// @brief Method IntersectRayAABB, addr 0x4870970, size 0x54, virtual false, abstract: false, final false
  static inline bool IntersectRayAABB(::UnityEngine::Ray ray, ::UnityEngine::Bounds bounds, ::ByRef<float_t> dist);

  /// @brief Method IntersectRayAABB_Injected, addr 0x4870bf8, size 0x54, virtual false, abstract: false, final false
  static inline bool IntersectRayAABB_Injected(::ByRef<::UnityEngine::Ray> ray, ::ByRef<::UnityEngine::Bounds> bounds, ::ByRef<float_t> dist);

  /// @brief Method Intersects, addr 0x487085c, size 0xa0, virtual false, abstract: false, final false
  inline bool Intersects(::UnityEngine::Bounds bounds);

  /// @brief Method SetMinMax, addr 0x487077c, size 0x38, virtual false, abstract: false, final false
  inline void SetMinMax(::UnityEngine::Vector3 min, ::UnityEngine::Vector3 max);

  /// @brief Method ToString, addr 0x48709c4, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x48709d4, size 0x188, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x48703b4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size);

  /// @brief Method get_center, addr 0x48705e0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_center();

  /// @brief Method get_extents, addr 0x487062c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_extents();

  /// @brief Method get_max, addr 0x4870664, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_max();

  /// @brief Method get_min, addr 0x4870644, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_min();

  /// @brief Method get_size, addr 0x48705f8, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_size();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Bounds>"
  constexpr ::System::IEquatable_1<::UnityEngine::Bounds>* i___System__IEquatable_1___UnityEngine__Bounds_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Equality, addr 0x4870684, size 0x7c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Bounds lhs, ::UnityEngine::Bounds rhs);

  /// @brief Method op_Inequality, addr 0x4870700, size 0x7c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Bounds lhs, ::UnityEngine::Bounds rhs);

  /// @brief Method set_center, addr 0x48705ec, size 0xc, virtual false, abstract: false, final false
  inline void set_center(::UnityEngine::Vector3 value);

  /// @brief Method set_extents, addr 0x4870638, size 0xc, virtual false, abstract: false, final false
  inline void set_extents(::UnityEngine::Vector3 value);

  /// @brief Method set_size, addr 0x4870610, size 0x1c, virtual false, abstract: false, final false
  inline void set_size(::UnityEngine::Vector3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Bounds();

  // Ctor Parameters [CppParam { name: "m_Center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Extents", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
  // None }]
  constexpr Bounds(::UnityEngine::Vector3 m_Center, ::UnityEngine::Vector3 m_Extents) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10701 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Center, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Center;

  /// @brief Field m_Extents, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Extents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Bounds, m_Center) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Bounds, m_Extents) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Bounds, 0x18>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bounds, "UnityEngine", "Bounds");
