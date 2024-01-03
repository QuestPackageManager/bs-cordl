#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BezierPoint)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine::ProBuilder {
struct BezierTangentDirection;
}
namespace UnityEngine::ProBuilder {
struct BezierTangentMode;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct BezierPoint;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::BezierPoint);
// Type: UnityEngine.ProBuilder::BezierPoint
// SizeInfo { instance_size: 52, native_size: 52, calculated_instance_size: 52, calculated_native_size: 68, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10252))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12103))
// CS Name: ::UnityEngine.ProBuilder::BezierPoint
struct CORDL_TYPE BezierPoint {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2b3727c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 tangentIn, ::UnityEngine::Vector3 tangentOut, ::UnityEngine::Quaternion rotation);

  /// @brief Method EnforceTangentMode, addr 0x2b372a4, size 0x318, virtual false, abstract: false, final false
  inline void EnforceTangentMode(::UnityEngine::ProBuilder::BezierTangentDirection master, ::UnityEngine::ProBuilder::BezierTangentMode mode);

  /// @brief Method SetPosition, addr 0x2b375bc, size 0x50, virtual false, abstract: false, final false
  inline void SetPosition(::UnityEngine::Vector3 position);

  /// @brief Method SetTangentIn, addr 0x2b3760c, size 0x14, virtual false, abstract: false, final false
  inline void SetTangentIn(::UnityEngine::Vector3 tangent, ::UnityEngine::ProBuilder::BezierTangentMode mode);

  /// @brief Method SetTangentOut, addr 0x2b37620, size 0x14, virtual false, abstract: false, final false
  inline void SetTangentOut(::UnityEngine::Vector3 tangent, ::UnityEngine::ProBuilder::BezierTangentMode mode);

  /// @brief Method QuadraticPosition, addr 0x2b37634, size 0x60, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 QuadraticPosition(::UnityEngine::ProBuilder::BezierPoint a, ::UnityEngine::ProBuilder::BezierPoint b, float_t t);

  /// @brief Method CubicPosition, addr 0x2b37694, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 CubicPosition(::UnityEngine::ProBuilder::BezierPoint a, ::UnityEngine::ProBuilder::BezierPoint b, float_t t);

  /// @brief Method GetLookDirection, addr 0x2b37734, size 0x9f8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetLookDirection(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::BezierPoint>* points, int32_t index, int32_t previous, int32_t next);

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "tangentIn", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
  // None }, CppParam { name: "tangentOut", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None
  // }]
  constexpr BezierPoint(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 tangentIn, ::UnityEngine::Vector3 tangentOut, ::UnityEngine::Quaternion rotation) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr BezierPoint();

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field tangentIn, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 tangentIn;

  /// @brief Field tangentOut, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 tangentOut;

  /// @brief Field rotation, offset: 0x24, size: 0x10, def value: None
  ::UnityEngine::Quaternion rotation;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x34 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::BezierPoint, 0x34>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::BezierPoint, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::BezierPoint, tangentIn) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::BezierPoint, tangentOut) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::BezierPoint, rotation) == 0x24, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::BezierPoint, "UnityEngine.ProBuilder", "BezierPoint");
