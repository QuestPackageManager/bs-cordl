#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/Instance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RadeonRays/zzzz__Transform_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Instance)
// Forward declare root types
namespace UnityEngine::Rendering::RadeonRays {
struct Instance;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RadeonRays::Instance);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::Instance, "UnityEngine.Rendering.RadeonRays", "Instance");
// Dependencies UnityEngine.Rendering.RadeonRays.Transform
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: true
// CS Name: UnityEngine.Rendering.RadeonRays.Instance
struct CORDL_TYPE Instance {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Instance();

  // Ctor Parameters [CppParam { name: "meshAccelStructOffset", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "instanceMask", ty: "uint32_t", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "vertexOffset", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshAccelStructLeavesOffset", ty: "uint32_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "triangleCullingEnabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "invertTriangleCulling",
  // ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "userInstanceID", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isOpaque", ty:
  // "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "localToWorldTransform", ty: "::UnityEngine::Rendering::RadeonRays::Transform", modifiers: "", def_value: None, comment:
  // None }]
  constexpr Instance(uint32_t meshAccelStructOffset, uint32_t instanceMask, uint32_t vertexOffset, uint32_t meshAccelStructLeavesOffset, bool triangleCullingEnabled, bool invertTriangleCulling,
                     uint32_t userInstanceID, bool isOpaque, ::UnityEngine::Rendering::RadeonRays::Transform localToWorldTransform) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20439 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4c };

  /// @brief Field meshAccelStructOffset, offset: 0x0, size: 0x4, def value: None
  uint32_t meshAccelStructOffset;

  /// @brief Field instanceMask, offset: 0x4, size: 0x4, def value: None
  uint32_t instanceMask;

  /// @brief Field vertexOffset, offset: 0x8, size: 0x4, def value: None
  uint32_t vertexOffset;

  /// @brief Field meshAccelStructLeavesOffset, offset: 0xc, size: 0x4, def value: None
  uint32_t meshAccelStructLeavesOffset;

  /// @brief Field triangleCullingEnabled, offset: 0x10, size: 0x1, def value: None
  bool triangleCullingEnabled;

  /// @brief Field invertTriangleCulling, offset: 0x11, size: 0x1, def value: None
  bool invertTriangleCulling;

  /// @brief Field userInstanceID, offset: 0x14, size: 0x4, def value: None
  uint32_t userInstanceID;

  /// @brief Field isOpaque, offset: 0x18, size: 0x1, def value: None
  bool isOpaque;

  /// @brief Field localToWorldTransform, offset: 0x1c, size: 0x30, def value: None
  ::UnityEngine::Rendering::RadeonRays::Transform localToWorldTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::Instance, meshAccelStructOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::Instance, instanceMask) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::Instance, vertexOffset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::Instance, meshAccelStructLeavesOffset) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::Instance, triangleCullingEnabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::Instance, invertTriangleCulling) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::Instance, userInstanceID) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::Instance, isOpaque) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::Instance, localToWorldTransform) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::Instance) == 0x4c, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
