#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Bone)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
struct Bone;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::Bone);
// Type: UnityEngine.InputSystem.XR::Bone
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.XR::Bone
struct CORDL_TYPE Bone {
public:
  // Declarations
  __declspec(property(get = get_parentBoneIndex, put = set_parentBoneIndex)) uint32_t parentBoneIndex;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::Vector3 position;

  __declspec(property(get = get_rotation, put = set_rotation))::UnityEngine::Quaternion rotation;

  /// @brief Method get_parentBoneIndex, addr 0x2ff5c60, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_parentBoneIndex();

  /// @brief Method get_position, addr 0x2ff5c70, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_rotation, addr 0x2ff5c88, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method set_parentBoneIndex, addr 0x2ff5c68, size 0x8, virtual false, abstract: false, final false
  inline void set_parentBoneIndex(uint32_t value);

  /// @brief Method set_position, addr 0x2ff5c7c, size 0xc, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_rotation, addr 0x2ff5c94, size 0xc, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Bone();

  // Ctor Parameters [CppParam { name: "_parentBoneIndex_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_position_k__BackingField", ty: "::UnityEngine::Vector3",
  // modifiers: "", def_value: None }, CppParam { name: "_rotation_k__BackingField", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }]
  constexpr Bone(uint32_t _parentBoneIndex_k__BackingField, ::UnityEngine::Vector3 _position_k__BackingField, ::UnityEngine::Quaternion _rotation_k__BackingField) noexcept;

  /// @brief Field <parentBoneIndex>k__BackingField, offset: 0x0, size: 0x4, def value: None
  uint32_t _parentBoneIndex_k__BackingField;

  /// @brief Field <position>k__BackingField, offset: 0x4, size: 0xc, def value: None
  ::UnityEngine::Vector3 _position_k__BackingField;

  /// @brief Field <rotation>k__BackingField, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Quaternion _rotation_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::Bone, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::Bone, _parentBoneIndex_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::Bone, _position_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::Bone, _rotation_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Bone, "UnityEngine.InputSystem.XR", "Bone");
