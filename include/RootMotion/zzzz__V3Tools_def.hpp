#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(V3Tools)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion {
class V3Tools;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::V3Tools);
// Type: RootMotion::V3Tools
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// CS Name: ::RootMotion::V3Tools*
class CORDL_TYPE V3Tools : public ::System::Object {
public:
  // Declarations
  /// @brief Method ClampDirection, addr 0x131be1c, size 0x230, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ClampDirection(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 normalDirection, float_t clampWeight, int32_t clampSmoothing);

  /// @brief Method ClampDirection, addr 0x131c04c, size 0x250, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ClampDirection(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 normalDirection, float_t clampWeight, int32_t clampSmoothing, ByRef<bool> changed);

  /// @brief Method ClampDirection, addr 0x131c29c, size 0x258, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ClampDirection(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 normalDirection, float_t clampWeight, int32_t clampSmoothing, ByRef<float_t> clampValue);

  /// @brief Method ExtractHorizontal, addr 0x131bca0, size 0x17c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ExtractHorizontal(::UnityEngine::Vector3 v, ::UnityEngine::Vector3 normal, float_t weight);

  /// @brief Method ExtractVertical, addr 0x131bb50, size 0x150, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ExtractVertical(::UnityEngine::Vector3 v, ::UnityEngine::Vector3 verticalAxis, float_t weight);

  /// @brief Method InverseTransformPointUnscaled, addr 0x131c914, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 InverseTransformPointUnscaled(::UnityEngine::Transform* t, ::UnityEngine::Vector3 point);

  /// @brief Method Lerp, addr 0x131babc, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Lerp(::UnityEngine::Vector3 fromVector, ::UnityEngine::Vector3 toVector, float_t weight);

  /// @brief Method LineToPlane, addr 0x131c4f4, size 0x1ac, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 LineToPlane(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 planeNormal, ::UnityEngine::Vector3 planePoint);

  /// @brief Method PointToPlane, addr 0x131c6a0, size 0x1f8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 PointToPlane(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 planePosition, ::UnityEngine::Vector3 planeNormal);

  /// @brief Method Slerp, addr 0x131bb18, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Slerp(::UnityEngine::Vector3 fromVector, ::UnityEngine::Vector3 toVector, float_t weight);

  /// @brief Method TransformPointUnscaled, addr 0x131c898, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 TransformPointUnscaled(::UnityEngine::Transform* t, ::UnityEngine::Vector3 point);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr V3Tools();

public:
  // Ctor Parameters [CppParam { name: "", ty: "V3Tools", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  V3Tools(V3Tools&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "V3Tools", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  V3Tools(V3Tools const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::V3Tools, 0x10>, "Size mismatch!");

} // namespace RootMotion
NEED_NO_BOX(::RootMotion::V3Tools);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::V3Tools*, "RootMotion", "V3Tools");
