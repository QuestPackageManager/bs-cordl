#pragma once
// IWYU pragma private; include "UnityEngine/Plane.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Plane)
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
struct Plane;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Plane);
DEFINE_IL2CPP_CLASS(::UnityEngine::Plane, "UnityEngine", "Plane");
// [UsedByNativeCode]
// Dependencies UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Plane
struct CORDL_TYPE Plane {
public:
  // Declarations
  __declspec(property(get = get_distance)) float_t distance;

  __declspec(property(get = get_normal)) ::UnityEngine::Vector3 normal;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Plane>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Plane>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// [IsReadOnly]
  /// @brief Method ClosestPointOnPlane, addr 0x6ed344c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ClosestPointOnPlane(::UnityEngine::Vector3 point);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6ed3680, size 0xac, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6ed372c, size 0x40, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Plane other);

  /// [IsReadOnly]
  /// @brief Method Equals, addr 0x6ed376c, size 0x40, virtual false, abstract: false, final false
  inline bool Equals(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Plane const> other);

  /// [IsReadOnly]
  /// @brief Method GetDistanceToPoint, addr 0x6ed3488, size 0x24, virtual false, abstract: false, final false
  inline float_t GetDistanceToPoint(::UnityEngine::Vector3 point);

  /// [IsReadOnly]
  /// @brief Method GetDistanceToPoint, addr 0x6ed34ac, size 0x30, virtual false, abstract: false, final false
  inline float_t GetDistanceToPoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3 const> point);

  /// [IsReadOnly]
  /// @brief Method GetHashCode, addr 0x6ed37ac, size 0x64, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// [IsReadOnly]
  /// @brief Method Raycast, addr 0x6ed3544, size 0x104, virtual false, abstract: false, final false
  inline bool Raycast(::UnityEngine::Ray ray, ::by_ref<float_t> enter);

  /// [IsReadOnly]
  /// @brief Method SameSide, addr 0x6ed34dc, size 0x68, virtual false, abstract: false, final false
  inline bool SameSide(::UnityEngine::Vector3 inPt0, ::UnityEngine::Vector3 inPt1);

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x6ed3810, size 0x10, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// [IsReadOnly]
  /// @brief Method ToString, addr 0x6ed3820, size 0x14c, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x6ed3318, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 c);

  /// @brief Method .ctor, addr 0x6ed3240, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 inNormal, float_t d);

  /// @brief Method .ctor, addr 0x6ed3140, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 inNormal, ::UnityEngine::Vector3 inPoint);

  /// [IsReadOnly]
  /// @brief Method get_distance, addr 0x6ed3138, size 0x8, virtual false, abstract: false, final false
  inline float_t get_distance();

  /// [IsReadOnly]
  /// @brief Method get_normal, addr 0x6ed312c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_normal();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Plane>"
  constexpr ::System::IEquatable_1<::UnityEngine::Plane>* i___System__IEquatable_1___UnityEngine__Plane_();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Equality, addr 0x6ed3648, size 0x38, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Plane lhs, ::UnityEngine::Plane rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Plane();

  // Ctor Parameters [CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "",
  // def_value: None, comment: None }]
  constexpr Plane(::UnityEngine::Vector3 m_Normal, float_t m_Distance) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9688 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field size offset 0xffffffff size 0x4
  static constexpr int32_t size{ static_cast<int32_t>(0x10) };

  /// @brief Field m_Normal, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Normal;

  /// @brief Field m_Distance, offset: 0xc, size: 0x4, def value: None
  float_t m_Distance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Plane, m_Normal) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Plane, m_Distance) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Plane) == 0x10, "Size mismatch!");

} // namespace UnityEngine
