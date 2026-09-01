#pragma once
// IWYU pragma private; include "UnityEngine\Bounds.hpp"
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

  /// @brief Method ClosestPoint, addr 0x6a7fa3c, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3 point);

  /// @brief Method ClosestPoint_Injected, addr 0x6a7faa4, size 0x8c0, virtual false, abstract: false, final false
  static inline void ClosestPoint_Injected(::by_ref<::UnityEngine::Bounds> _unity_self, ::by_ref<::UnityEngine::Vector3> point, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method Contains, addr 0x6a7f94c, size 0x58, virtual false, abstract: false, final false
  inline bool Contains(::UnityEngine::Vector3 point);

  /// @brief Method Contains_Injected, addr 0x6a7f9a4, size 0x44, virtual false, abstract: false, final false
  static inline bool Contains_Injected(::by_ref<::UnityEngine::Bounds> _unity_self, ::by_ref<::UnityEngine::Vector3> point);

  /// @brief Method Encapsulate, addr 0x6a7f510, size 0xfc, virtual false, abstract: false, final false
  inline void Encapsulate(::UnityEngine::Bounds bounds);

  /// @brief Method Encapsulate, addr 0x6a7f498, size 0x78, virtual false, abstract: false, final false
  inline void Encapsulate(::UnityEngine::Vector3 point);

  /// @brief Method Equals, addr 0x6a7f110, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x6a7f1d8, size 0x54, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Bounds other);

  /// @brief Method Expand, addr 0x6a7f60c, size 0x30, virtual false, abstract: false, final false
  inline void Expand(::UnityEngine::Vector3 amount);

  /// @brief Method GetHashCode, addr 0x6a7f070, size 0xa0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IntersectRay, addr 0x6a7f6dc, size 0x74, virtual false, abstract: false, final false
  inline bool IntersectRay(::UnityEngine::Ray ray, ::by_ref<float_t> distance);

  /// @brief Method IntersectRayAABB, addr 0x6a7f750, size 0x54, virtual false, abstract: false, final false
  static inline bool IntersectRayAABB(::UnityEngine::Ray ray, ::UnityEngine::Bounds bounds, ::by_ref<float_t> dist);

  /// @brief Method IntersectRayAABB_Injected, addr 0x6a7f9e8, size 0x54, virtual false, abstract: false, final false
  static inline bool IntersectRayAABB_Injected(::by_ref<::UnityEngine::Ray> ray, ::by_ref<::UnityEngine::Bounds> bounds, ::by_ref<float_t> dist);

  /// @brief Method Intersects, addr 0x6a7f63c, size 0xa0, virtual false, abstract: false, final false
  inline bool Intersects(::UnityEngine::Bounds bounds);

  /// @brief Method SetMinMax, addr 0x6a7f460, size 0x38, virtual false, abstract: false, final false
  inline void SetMinMax(::UnityEngine::Vector3 min, ::UnityEngine::Vector3 max);

  /// @brief Method ToString, addr 0x6a7f7a4, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x6a7f7b4, size 0x198, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6a7f048, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 size);

  /// @brief Method get_center, addr 0x6a7f22c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_center();

  /// @brief Method get_extents, addr 0x6a7f27c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_extents();

  /// @brief Method get_max, addr 0x6a7f304, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_max();

  /// @brief Method get_min, addr 0x6a7f294, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_min();

  /// @brief Method get_size, addr 0x6a7f244, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_size();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Bounds>"
  constexpr ::System::IEquatable_1<::UnityEngine::Bounds>* i___System__IEquatable_1___UnityEngine__Bounds_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Equality, addr 0x6a7f374, size 0x74, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Bounds lhs, ::UnityEngine::Bounds rhs);

  /// @brief Method op_Inequality, addr 0x6a7f3e8, size 0x78, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Bounds lhs, ::UnityEngine::Bounds rhs);

  /// @brief Method set_center, addr 0x6a7f238, size 0xc, virtual false, abstract: false, final false
  inline void set_center(::UnityEngine::Vector3 value);

  /// @brief Method set_extents, addr 0x6a7f288, size 0xc, virtual false, abstract: false, final false
  inline void set_extents(::UnityEngine::Vector3 value);

  /// @brief Method set_max, addr 0x6a7f324, size 0x50, virtual false, abstract: false, final false
  inline void set_max(::UnityEngine::Vector3 value);

  /// @brief Method set_min, addr 0x6a7f2b4, size 0x50, virtual false, abstract: false, final false
  inline void set_min(::UnityEngine::Vector3 value);

  /// @brief Method set_size, addr 0x6a7f25c, size 0x20, virtual false, abstract: false, final false
  inline void set_size(::UnityEngine::Vector3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Bounds();

  // Ctor Parameters [CppParam { name: "m_Center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Extents", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
  // None }]
  constexpr Bounds(::UnityEngine::Vector3 m_Center, ::UnityEngine::Vector3 m_Extents) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10114 };

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

static_assert(sizeof(::UnityEngine::Bounds) == 0x18, "Size mismatch!");

} // namespace UnityEngine
