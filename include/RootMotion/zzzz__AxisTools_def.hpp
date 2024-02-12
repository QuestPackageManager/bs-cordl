#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AxisTools)
namespace RootMotion {
struct Axis;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion {
class AxisTools;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::AxisTools);
// Type: RootMotion::AxisTools
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12379))
// CS Name: ::RootMotion::AxisTools*
class CORDL_TYPE AxisTools : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToVector3, addr 0x12d05dc, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ToVector3(::RootMotion::Axis axis);

  /// @brief Method ToAxis, addr 0x12d06bc, size 0x38, virtual false, abstract: false, final false
  static inline ::RootMotion::Axis ToAxis(::UnityEngine::Vector3 v);

  /// @brief Method GetAxisToPoint, addr 0x12d06f4, size 0xfc, virtual false, abstract: false, final false
  static inline ::RootMotion::Axis GetAxisToPoint(::UnityEngine::Transform* t, ::UnityEngine::Vector3 worldPosition);

  /// @brief Method GetAxisToDirection, addr 0x12d083c, size 0xfc, virtual false, abstract: false, final false
  static inline ::RootMotion::Axis GetAxisToDirection(::UnityEngine::Transform* t, ::UnityEngine::Vector3 direction);

  /// @brief Method GetAxisVectorToPoint, addr 0x12d07f0, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetAxisVectorToPoint(::UnityEngine::Transform* t, ::UnityEngine::Vector3 worldPosition);

  /// @brief Method GetAxisVectorToDirection, addr 0x12d0938, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetAxisVectorToDirection(::UnityEngine::Transform* t, ::UnityEngine::Vector3 direction);

  /// @brief Method GetAxisVectorToDirection, addr 0x12d097c, size 0x48c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetAxisVectorToDirection(::UnityEngine::Quaternion r, ::UnityEngine::Vector3 direction);

  static inline ::RootMotion::AxisTools* New_ctor();

  /// @brief Method .ctor, addr 0x12d0e08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AxisTools", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AxisTools(AxisTools&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AxisTools", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AxisTools(AxisTools const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AxisTools();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::AxisTools, 0x10>, "Size mismatch!");

} // namespace RootMotion
NEED_NO_BOX(::RootMotion::AxisTools);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::AxisTools*, "RootMotion", "AxisTools");
