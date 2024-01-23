#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VRControllerTransformOffset)
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class VRControllerTransformOffset;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VRControllerTransformOffset);
// Type: ::VRControllerTransformOffset
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14439))
// CS Name: ::VRControllerTransformOffset*
class CORDL_TYPE VRControllerTransformOffset : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_poseOffset))::UnityEngine::Pose poseOffset;

  __declspec(property(get = get_positionOffset))::UnityEngine::Vector3 positionOffset;

  __declspec(property(get = get_rotationOffset))::UnityEngine::Vector3 rotationOffset;

  /// @brief Method get_poseOffset, addr 0x20ffd98, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Pose get_poseOffset();

  /// @brief Method get_positionOffset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Vector3 get_positionOffset();

  /// @brief Method get_rotationOffset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Vector3 get_rotationOffset();

  static inline ::GlobalNamespace::VRControllerTransformOffset* New_ctor();

  /// @brief Method .ctor, addr 0x21003b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VRControllerTransformOffset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRControllerTransformOffset(VRControllerTransformOffset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRControllerTransformOffset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRControllerTransformOffset(VRControllerTransformOffset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRControllerTransformOffset();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRControllerTransformOffset, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VRControllerTransformOffset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRControllerTransformOffset*, "", "VRControllerTransformOffset");
