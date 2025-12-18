#pragma once
// IWYU pragma private; include "GlobalNamespace/VRControllerTransformOffset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(VRControllerTransformOffset)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class VRControllerTransformOffset;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VRControllerTransformOffset);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VRControllerTransformOffset
class CORDL_TYPE VRControllerTransformOffset : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_alternativeHandling)) bool alternativeHandling;

  __declspec(property(get = get_leftPositionOffset)) ::UnityEngine::Vector3 leftPositionOffset;

  __declspec(property(get = get_leftRotationOffset)) ::UnityEngine::Vector3 leftRotationOffset;

  __declspec(property(get = get_rightPositionOffset)) ::UnityEngine::Vector3 rightPositionOffset;

  __declspec(property(get = get_rightRotationOffset)) ::UnityEngine::Vector3 rightRotationOffset;

  static inline ::GlobalNamespace::VRControllerTransformOffset* New_ctor();

  /// @brief Method .ctor, addr 0x56aa5f0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_alternativeHandling, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_alternativeHandling();

  /// @brief Method get_leftPositionOffset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_leftPositionOffset();

  /// @brief Method get_leftRotationOffset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_leftRotationOffset();

  /// @brief Method get_rightPositionOffset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_rightPositionOffset();

  /// @brief Method get_rightRotationOffset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_rightRotationOffset();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20321 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRControllerTransformOffset, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VRControllerTransformOffset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRControllerTransformOffset*, "", "VRControllerTransformOffset");
