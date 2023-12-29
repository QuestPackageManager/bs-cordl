#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(QuaTools)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion {
class QuaTools;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::QuaTools);
// Type: RootMotion::QuaTools
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12425))
// CS Name: ::RootMotion::QuaTools*
class CORDL_TYPE QuaTools : public ::System::Object {
public:
  // Declarations
  /// @brief Method Lerp addr 0x11ce310 size 0x4c virtual false final false
  static inline ::UnityEngine::Quaternion Lerp(::UnityEngine::Quaternion fromRotation, ::UnityEngine::Quaternion toRotation, float_t weight);

  /// @brief Method Slerp addr 0x11ce35c size 0x4c virtual false final false
  static inline ::UnityEngine::Quaternion Slerp(::UnityEngine::Quaternion fromRotation, ::UnityEngine::Quaternion toRotation, float_t weight);

  /// @brief Method LinearBlend addr 0x11ce3a8 size 0x104 virtual false final false
  static inline ::UnityEngine::Quaternion LinearBlend(::UnityEngine::Quaternion q, float_t weight);

  /// @brief Method SphericalBlend addr 0x11ce4ac size 0x104 virtual false final false
  static inline ::UnityEngine::Quaternion SphericalBlend(::UnityEngine::Quaternion q, float_t weight);

  /// @brief Method FromToAroundAxis addr 0x11ce5b0 size 0x114 virtual false final false
  static inline ::UnityEngine::Quaternion FromToAroundAxis(::UnityEngine::Vector3 fromDirection, ::UnityEngine::Vector3 toDirection, ::UnityEngine::Vector3 axis);

  /// @brief Method RotationToLocalSpace addr 0x11ce6c4 size 0xa8 virtual false final false
  static inline ::UnityEngine::Quaternion RotationToLocalSpace(::UnityEngine::Quaternion space, ::UnityEngine::Quaternion rotation);

  /// @brief Method FromToRotation addr 0x11ce76c size 0x10c virtual false final false
  static inline ::UnityEngine::Quaternion FromToRotation(::UnityEngine::Quaternion from, ::UnityEngine::Quaternion to);

  /// @brief Method GetAxis addr 0x11ce878 size 0x168 virtual false final false
  static inline ::UnityEngine::Vector3 GetAxis(::UnityEngine::Vector3 v);

  /// @brief Method ClampRotation addr 0x11ce9e0 size 0x1e4 virtual false final false
  static inline ::UnityEngine::Quaternion ClampRotation(::UnityEngine::Quaternion rotation, float_t clampWeight, int32_t clampSmoothing);

  /// @brief Method ClampAngle addr 0x11cebc4 size 0xd0 virtual false final false
  static inline float_t ClampAngle(float_t angle, float_t clampWeight, int32_t clampSmoothing);

  /// @brief Method MatchRotation addr 0x11cec94 size 0x184 virtual false final false
  static inline ::UnityEngine::Quaternion MatchRotation(::UnityEngine::Quaternion targetRotation, ::UnityEngine::Vector3 targetforwardAxis, ::UnityEngine::Vector3 targetUpAxis,
                                                        ::UnityEngine::Vector3 forwardAxis, ::UnityEngine::Vector3 upAxis);

  /// @brief Method ToBiPolar addr 0x11cee18 size 0x10c virtual false final false
  static inline ::UnityEngine::Vector3 ToBiPolar(::UnityEngine::Vector3 euler);

  /// @brief Method ToBiPolar addr 0x11cef24 size 0x58 virtual false final false
  static inline float_t ToBiPolar(float_t angle);

  // Ctor Parameters [CppParam { name: "", ty: "QuaTools", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuaTools(QuaTools&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuaTools", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuaTools(QuaTools const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuaTools();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::QuaTools, 0x10>, "Size mismatch!");

} // namespace RootMotion
NEED_NO_BOX(::RootMotion::QuaTools);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::QuaTools*, "RootMotion", "QuaTools");
