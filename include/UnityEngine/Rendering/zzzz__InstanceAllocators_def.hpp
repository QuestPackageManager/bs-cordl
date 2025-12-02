#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceAllocators.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__InstanceAllocator_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceAllocators)
namespace UnityEngine::Rendering {
struct InstanceAllocator;
}
namespace UnityEngine::Rendering {
struct InstanceHandle;
}
namespace UnityEngine::Rendering {
struct InstanceType;
}
namespace UnityEngine::Rendering {
struct SharedInstanceHandle;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct InstanceAllocators;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::InstanceAllocators);
// Dependencies UnityEngine.Rendering.InstanceAllocator
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceAllocators
struct CORDL_TYPE InstanceAllocators {
public:
  // Declarations
  /// @brief Method AllocateInstance, addr 0x6604d5c, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::InstanceHandle AllocateInstance(::UnityEngine::Rendering::InstanceType type);

  /// @brief Method AllocateSharedInstance, addr 0x6604e88, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::SharedInstanceHandle AllocateSharedInstance();

  /// @brief Method Dispose, addr 0x6604c8c, size 0x20, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method FreeInstance, addr 0x6604df0, size 0x98, virtual false, abstract: false, final false
  inline void FreeInstance(::UnityEngine::Rendering::InstanceHandle instance);

  /// @brief Method FreeSharedInstance, addr 0x6604ef0, size 0x68, virtual false, abstract: false, final false
  inline void FreeSharedInstance(::UnityEngine::Rendering::SharedInstanceHandle instance);

  /// @brief Method GetInstanceAllocator, addr 0x6604cac, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::InstanceAllocator GetInstanceAllocator(::UnityEngine::Rendering::InstanceType type);

  /// @brief Method GetInstanceHandlesLength, addr 0x6604d14, size 0x24, virtual false, abstract: false, final false
  inline int32_t GetInstanceHandlesLength(::UnityEngine::Rendering::InstanceType type);

  /// @brief Method GetInstancesLength, addr 0x6604d38, size 0x24, virtual false, abstract: false, final false
  inline int32_t GetInstancesLength(::UnityEngine::Rendering::InstanceType type);

  /// @brief Method Initialize, addr 0x6604c2c, size 0x60, virtual false, abstract: false, final false
  inline void Initialize();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceAllocators();

  // Ctor Parameters [CppParam { name: "m_InstanceAlloc_MeshRenderer", ty: "::UnityEngine::Rendering::InstanceAllocator", modifiers: "", def_value: None }, CppParam { name:
  // "m_InstanceAlloc_SpeedTree", ty: "::UnityEngine::Rendering::InstanceAllocator", modifiers: "", def_value: None }, CppParam { name: "m_SharedInstanceAlloc", ty:
  // "::UnityEngine::Rendering::InstanceAllocator", modifiers: "", def_value: None }]
  constexpr InstanceAllocators(::UnityEngine::Rendering::InstanceAllocator m_InstanceAlloc_MeshRenderer, ::UnityEngine::Rendering::InstanceAllocator m_InstanceAlloc_SpeedTree,
                               ::UnityEngine::Rendering::InstanceAllocator m_SharedInstanceAlloc) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17647 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field m_InstanceAlloc_MeshRenderer, offset: 0x0, size: 0x20, def value: None
  ::UnityEngine::Rendering::InstanceAllocator m_InstanceAlloc_MeshRenderer;

  /// @brief Field m_InstanceAlloc_SpeedTree, offset: 0x20, size: 0x20, def value: None
  ::UnityEngine::Rendering::InstanceAllocator m_InstanceAlloc_SpeedTree;

  /// @brief Field m_SharedInstanceAlloc, offset: 0x40, size: 0x20, def value: None
  ::UnityEngine::Rendering::InstanceAllocator m_SharedInstanceAlloc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceAllocators, m_InstanceAlloc_MeshRenderer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceAllocators, m_InstanceAlloc_SpeedTree) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceAllocators, m_SharedInstanceAlloc) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceAllocators, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceAllocators, "UnityEngine.Rendering", "InstanceAllocators");
