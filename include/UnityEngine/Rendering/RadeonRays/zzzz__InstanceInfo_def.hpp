#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/InstanceInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RadeonRays/zzzz__Transform_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceInfo)
// Forward declare root types
namespace UnityEngine::Rendering::RadeonRays {
struct InstanceInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RadeonRays::InstanceInfo);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::InstanceInfo, "UnityEngine.Rendering.RadeonRays", "InstanceInfo");
// Dependencies UnityEngine.Rendering.RadeonRays.Transform
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: true
// CS Name: UnityEngine.Rendering.RadeonRays.InstanceInfo
struct CORDL_TYPE InstanceInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceInfo();

  // Ctor Parameters [CppParam { name: "blasOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "instanceMask", ty: "int32_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "vertexOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "indexOffset", ty: "int32_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "disableTriangleCulling", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "invertTriangleCulling", ty: "uint32_t", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "userInstanceID", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isOpaque", ty: "int32_t", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "worldToLocalTransform", ty: "::UnityEngine::Rendering::RadeonRays::Transform", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "localToWorldTransform", ty: "::UnityEngine::Rendering::RadeonRays::Transform", modifiers: "", def_value: None, comment: None }]
  constexpr InstanceInfo(int32_t blasOffset, int32_t instanceMask, int32_t vertexOffset, int32_t indexOffset, uint32_t disableTriangleCulling, uint32_t invertTriangleCulling, uint32_t userInstanceID,
                         int32_t isOpaque, ::UnityEngine::Rendering::RadeonRays::Transform worldToLocalTransform, ::UnityEngine::Rendering::RadeonRays::Transform localToWorldTransform) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20440 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  /// @brief Field blasOffset, offset: 0x0, size: 0x4, def value: None
  int32_t blasOffset;

  /// @brief Field instanceMask, offset: 0x4, size: 0x4, def value: None
  int32_t instanceMask;

  /// @brief Field vertexOffset, offset: 0x8, size: 0x4, def value: None
  int32_t vertexOffset;

  /// @brief Field indexOffset, offset: 0xc, size: 0x4, def value: None
  int32_t indexOffset;

  /// @brief Field disableTriangleCulling, offset: 0x10, size: 0x4, def value: None
  uint32_t disableTriangleCulling;

  /// @brief Field invertTriangleCulling, offset: 0x14, size: 0x4, def value: None
  uint32_t invertTriangleCulling;

  /// @brief Field userInstanceID, offset: 0x18, size: 0x4, def value: None
  uint32_t userInstanceID;

  /// @brief Field isOpaque, offset: 0x1c, size: 0x4, def value: None
  int32_t isOpaque;

  /// @brief Field worldToLocalTransform, offset: 0x20, size: 0x30, def value: None
  ::UnityEngine::Rendering::RadeonRays::Transform worldToLocalTransform;

  /// @brief Field localToWorldTransform, offset: 0x50, size: 0x30, def value: None
  ::UnityEngine::Rendering::RadeonRays::Transform localToWorldTransform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::InstanceInfo, blasOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::InstanceInfo, instanceMask) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::InstanceInfo, vertexOffset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::InstanceInfo, indexOffset) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::InstanceInfo, disableTriangleCulling) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::InstanceInfo, invertTriangleCulling) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::InstanceInfo, userInstanceID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::InstanceInfo, isOpaque) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::InstanceInfo, worldToLocalTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::InstanceInfo, localToWorldTransform) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::InstanceInfo) == 0x80, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
