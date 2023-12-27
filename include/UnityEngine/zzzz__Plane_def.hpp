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
CORDL_MODULE_EXPORT(Plane)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Ray;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
// Forward declare root types
namespace UnityEngine {
struct Plane;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Plane);
// Type: UnityEngine::Plane
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10163))
// CS Name: ::UnityEngine::Plane
struct CORDL_TYPE Plane {
public:
  // Declarations
  __declspec(property(get = get_normal))::UnityEngine::Vector3 normal;

  __declspec(property(get = get_distance)) float_t distance;

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method get_normal addr 0x2cc96ac size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_normal();

  /// @brief Method get_distance addr 0x2cc96b8 size 0x8 virtual false final false
  inline float_t get_distance();

  /// @brief Method .ctor addr 0x2cc96c0 size 0x110 virtual false final false
  inline void _ctor(::UnityEngine::Vector3 inNormal, ::UnityEngine::Vector3 inPoint);

  /// @brief Method .ctor addr 0x2cc97d0 size 0x178 virtual false final false
  inline void _ctor(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 c);

  /// @brief Method SetNormalAndPosition addr 0x2cc9948 size 0x110 virtual false final false
  inline void SetNormalAndPosition(::UnityEngine::Vector3 inNormal, ::UnityEngine::Vector3 inPoint);

  /// @brief Method ClosestPointOnPlane addr 0x2cc9a58 size 0x3c virtual false final false
  inline ::UnityEngine::Vector3 ClosestPointOnPlane(::UnityEngine::Vector3 point);

  /// @brief Method GetDistanceToPoint addr 0x2cc9a94 size 0x24 virtual false final false
  inline float_t GetDistanceToPoint(::UnityEngine::Vector3 point);

  /// @brief Method SameSide addr 0x2cc9ab8 size 0x70 virtual false final false
  inline bool SameSide(::UnityEngine::Vector3 inPt0, ::UnityEngine::Vector3 inPt1);

  /// @brief Method Raycast addr 0x2cc9b28 size 0x100 virtual false final false
  inline bool Raycast(::UnityEngine::Ray ray, ByRef<float_t> enter);

  /// @brief Method ToString addr 0x2cc9c40 size 0xc virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToString addr 0x2cc9c4c size 0x188 virtual true final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  // Ctor Parameters [CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value: None }]
  constexpr Plane(::UnityEngine::Vector3 m_Normal, float_t m_Distance) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Plane();

  /// @brief Field m_Normal, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Normal;

  /// @brief Field m_Distance, offset: 0xc, size: 0x4, def value: None
  float_t m_Distance;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field size offset 0xffffffff size 0x4
  static constexpr int32_t size{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Plane, 0x10>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Plane, "UnityEngine", "Plane");
