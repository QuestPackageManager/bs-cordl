#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceComponentDesc.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__InstanceComponentGroup_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUInstanceComponentDesc)
namespace UnityEngine::Rendering {
struct InstanceComponentGroup;
}
namespace UnityEngine::Rendering {
struct InstanceType;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct GPUInstanceComponentDesc;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GPUInstanceComponentDesc);
// Dependencies UnityEngine.Rendering.InstanceComponentGroup, UnityEngine.Rendering.InstanceType
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUInstanceComponentDesc
struct CORDL_TYPE GPUInstanceComponentDesc {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x66018b4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t inPropertyID, int32_t inByteSize, bool inIsOverriden, bool inPerInstance, ::UnityEngine::Rendering::InstanceType inInstanceType,
                    ::UnityEngine::Rendering::InstanceComponentGroup inComponentType);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUInstanceComponentDesc();

  // Ctor Parameters [CppParam { name: "propertyID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "byteSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "isOverriden", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isPerInstance", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "instanceType", ty:
  // "::UnityEngine::Rendering::InstanceType", modifiers: "", def_value: None }, CppParam { name: "componentGroup", ty: "::UnityEngine::Rendering::InstanceComponentGroup", modifiers: "", def_value:
  // None }]
  constexpr GPUInstanceComponentDesc(int32_t propertyID, int32_t byteSize, bool isOverriden, bool isPerInstance, ::UnityEngine::Rendering::InstanceType instanceType,
                                     ::UnityEngine::Rendering::InstanceComponentGroup componentGroup) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17631 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field propertyID, offset: 0x0, size: 0x4, def value: None
  int32_t propertyID;

  /// @brief Field byteSize, offset: 0x4, size: 0x4, def value: None
  int32_t byteSize;

  /// @brief Field isOverriden, offset: 0x8, size: 0x1, def value: None
  bool isOverriden;

  /// @brief Field isPerInstance, offset: 0x9, size: 0x1, def value: None
  bool isPerInstance;

  /// @brief Field instanceType, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::Rendering::InstanceType instanceType;

  /// @brief Field componentGroup, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::InstanceComponentGroup componentGroup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceComponentDesc, propertyID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceComponentDesc, byteSize) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceComponentDesc, isOverriden) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceComponentDesc, isPerInstance) == 0x9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceComponentDesc, instanceType) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceComponentDesc, componentGroup) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUInstanceComponentDesc, 0x14>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUInstanceComponentDesc, "UnityEngine.Rendering", "GPUInstanceComponentDesc");
