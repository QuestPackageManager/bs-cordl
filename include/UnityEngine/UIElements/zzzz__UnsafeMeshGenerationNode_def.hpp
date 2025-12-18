#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UnsafeMeshGenerationNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeMeshGenerationNode)
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace UnityEngine::UIElements::UIR {
class Entry;
}
namespace UnityEngine::UIElements {
class MeshGenerationNodeImpl;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct UnsafeMeshGenerationNode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UnsafeMeshGenerationNode);
// Dependencies System.Runtime.InteropServices.GCHandle
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.UnsafeMeshGenerationNode
struct CORDL_TYPE UnsafeMeshGenerationNode {
public:
  // Declarations
  /// @brief Method Create, addr 0x6c0a270, size 0x8, virtual false, abstract: false, final false
  static inline void Create(::System::Runtime::InteropServices::GCHandle handle, ::ByRef<::UnityEngine::UIElements::UnsafeMeshGenerationNode> node);

  /// @brief Method DrawGradientsInternal, addr 0x6c0a400, size 0x54, virtual false, abstract: false, final false
  inline void DrawGradientsInternal(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices, ::Unity::Collections::NativeSlice_1<uint16_t> indices,
                                    ::UnityEngine::UIElements::VectorImage* gradientsOwner);

  /// @brief Method DrawMesh, addr 0x6c0a278, size 0x58, virtual false, abstract: false, final false
  inline void DrawMesh(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices, ::Unity::Collections::NativeSlice_1<uint16_t> indices, ::UnityEngine::Texture* texture);

  /// @brief Method DrawMeshInternal, addr 0x6c0a39c, size 0x64, virtual false, abstract: false, final false
  inline void DrawMeshInternal(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices, ::Unity::Collections::NativeSlice_1<uint16_t> indices, ::UnityEngine::Texture* texture,
                               bool skipAtlas);

  /// @brief Method GetManaged, addr 0x6c0a194, size 0xdc, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MeshGenerationNodeImpl* GetManaged();

  /// @brief Method GetParentEntry, addr 0x6c0a560, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::Entry* GetParentEntry();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeMeshGenerationNode();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }]
  constexpr UnsafeMeshGenerationNode(::System::Runtime::InteropServices::GCHandle m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4673 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Handle, offset: 0x0, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle m_Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UnsafeMeshGenerationNode, m_Handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UnsafeMeshGenerationNode, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UnsafeMeshGenerationNode, "UnityEngine.UIElements", "UnsafeMeshGenerationNode");
