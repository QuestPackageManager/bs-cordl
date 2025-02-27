#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/Bone.hpp"
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
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// CS Name: UnityEngine.InputSystem.XR.Bone
struct CORDL_TYPE Bone {
public:
  // Declarations
  __declspec(property(get = get_parentBoneIndex, put = set_parentBoneIndex)) uint32_t parentBoneIndex;

  __declspec(property(get = get_position, put = set_position)) ::UnityEngine::Vector3 position;

  __declspec(property(get = get_rotation, put = set_rotation)) ::UnityEngine::Quaternion rotation;

  /// @brief Method get_parentBoneIndex, addr 0x45f4f2c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_parentBoneIndex();

  /// @brief Method get_position, addr 0x45f4f3c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_rotation, addr 0x45f4f54, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method set_parentBoneIndex, addr 0x45f4f34, size 0x8, virtual false, abstract: false, final false
  inline void set_parentBoneIndex(uint32_t value);

  /// @brief Method set_position, addr 0x45f4f48, size 0xc, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_rotation, addr 0x45f4f60, size 0xc, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Bone();

  // Ctor Parameters [CppParam { name: "m_ParentBoneIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value:
  // None }, CppParam { name: "m_Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }]
  constexpr Bone(uint32_t m_ParentBoneIndex, ::UnityEngine::Vector3 m_Position, ::UnityEngine::Quaternion m_Rotation) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6746 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_ParentBoneIndex, offset: 0x0, size: 0x4, def value: None
  uint32_t m_ParentBoneIndex;

  /// @brief Field m_Position, offset: 0x4, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_Position;

  /// @brief Field m_Rotation, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Quaternion m_Rotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::XR::Bone, m_ParentBoneIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::Bone, m_Position) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::Bone, m_Rotation) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::Bone, 0x20>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Bone, "UnityEngine.InputSystem.XR", "Bone");
