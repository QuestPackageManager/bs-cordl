#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshGenerationNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__UnsafeMeshGenerationNode_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MeshGenerationNode)
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace UnityEngine::UIElements::UIR {
class Entry;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct MeshGenerationNode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::MeshGenerationNode);
// Dependencies UnityEngine.UIElements.UnsafeMeshGenerationNode
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.MeshGenerationNode
struct CORDL_TYPE MeshGenerationNode {
public:
  // Declarations
  /// @brief Method Create, addr 0x6c0a16c, size 0x8, virtual false, abstract: false, final false
  static inline void Create(::System::Runtime::InteropServices::GCHandle handle, ::ByRef<::UnityEngine::UIElements::MeshGenerationNode> node);

  /// @brief Method GetParentEntry, addr 0x6c0a174, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::Entry* GetParentEntry();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshGenerationNode();

  // Ctor Parameters [CppParam { name: "m_UnsafeNode", ty: "::UnityEngine::UIElements::UnsafeMeshGenerationNode", modifiers: "", def_value: None }]
  constexpr MeshGenerationNode(::UnityEngine::UIElements::UnsafeMeshGenerationNode m_UnsafeNode) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4672 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_UnsafeNode, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UnsafeMeshGenerationNode m_UnsafeNode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MeshGenerationNode, m_UnsafeNode) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MeshGenerationNode, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MeshGenerationNode, "UnityEngine.UIElements", "MeshGenerationNode");
