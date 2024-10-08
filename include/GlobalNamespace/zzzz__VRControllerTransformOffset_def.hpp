#pragma once
// IWYU pragma private; include "GlobalNamespace/VRControllerTransformOffset.hpp"
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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VRControllerTransformOffset*
class CORDL_TYPE VRControllerTransformOffset : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_poseOffset)) ::UnityEngine::Pose poseOffset;

  __declspec(property(get = get_positionOffset)) ::UnityEngine::Vector3 positionOffset;

  __declspec(property(get = get_rotationOffset)) ::UnityEngine::Vector3 rotationOffset;

  static inline ::GlobalNamespace::VRControllerTransformOffset* New_ctor();

  /// @brief Method .ctor, addr 0x39693ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_poseOffset, addr 0x3968d38, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Pose get_poseOffset();

  /// @brief Method get_positionOffset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Vector3 get_positionOffset();

  /// @brief Method get_rotationOffset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Vector3 get_rotationOffset();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRControllerTransformOffset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VRControllerTransformOffset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRControllerTransformOffset(VRControllerTransformOffset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRControllerTransformOffset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRControllerTransformOffset(VRControllerTransformOffset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16445 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRControllerTransformOffset, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VRControllerTransformOffset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRControllerTransformOffset*, "", "VRControllerTransformOffset");
