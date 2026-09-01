#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\TempMeshAllocator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TempMeshAllocator)
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TempMeshAllocator;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TempMeshAllocator);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::TempMeshAllocator, "UnityEngine.UIElements", "TempMeshAllocator");
// Dependencies System.Runtime.InteropServices.GCHandle
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.TempMeshAllocator
struct CORDL_TYPE TempMeshAllocator {
public:
  // Declarations
  /// @brief Method AllocateTempMesh, addr 0x6dd6ce0, size 0x158, virtual false, abstract: false, final false
  inline void AllocateTempMesh(int32_t vertexCount, int32_t indexCount, ::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> vertices,
                               ::by_ref<::Unity::Collections::NativeSlice_1<uint16_t>> indices);

  /// @brief Method Create, addr 0x6dd7cec, size 0x8, virtual false, abstract: false, final false
  static inline void Create(::System::Runtime::InteropServices::GCHandle handle, ::by_ref<::UnityEngine::UIElements::TempMeshAllocator> allocator);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TempMeshAllocator();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }]
  constexpr TempMeshAllocator(::System::Runtime::InteropServices::GCHandle m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4681 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Handle, offset: 0x0, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle m_Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TempMeshAllocator, m_Handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::TempMeshAllocator) == 0x8, "Size mismatch!");

} // namespace UnityEngine::UIElements
