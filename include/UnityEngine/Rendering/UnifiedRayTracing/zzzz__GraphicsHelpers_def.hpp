#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/GraphicsHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsHelpers)
namespace Unity::Mathematics {
struct uint3;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
class GraphicsHelpers;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers*, "UnityEngine.Rendering.UnifiedRayTracing", "GraphicsHelpers");
// Dependencies System.Object
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.GraphicsHelpers
class CORDL_TYPE GraphicsHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method CopyBuffer, addr 0x6e08774, size 0x1d0, virtual false, abstract: false, final false
  static inline void CopyBuffer(::UnityEngine::ComputeShader* copyShader, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* src, int32_t srcOffsetInDWords,
                                ::UnityEngine::GraphicsBuffer* dst, int32_t dstOffsetInDwords, int32_t sizeInDWords);

  /// @brief Method CopyBuffer, addr 0x6e08954, size 0xf4, virtual false, abstract: false, final false
  static inline void CopyBuffer(::UnityEngine::ComputeShader* copyShader, ::UnityEngine::GraphicsBuffer* src, int32_t srcOffsetInDWords, ::UnityEngine::GraphicsBuffer* dst, int32_t dstOffsetInDwords,
                                int32_t sizeInDwords);

  /// @brief Method DivUp, addr 0x6e08a68, size 0x38, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::uint3 DivUp(::Unity::Mathematics::uint3 x, ::Unity::Mathematics::uint3 y);

  /// @brief Method DivUp, addr 0x6e08944, size 0x10, virtual false, abstract: false, final false
  static inline int32_t DivUp(int32_t x, int32_t y);

  /// @brief Method DivUp, addr 0x6e08a48, size 0x10, virtual false, abstract: false, final false
  static inline int32_t DivUp(int32_t x, uint32_t y);

  /// @brief Method DivUp, addr 0x6e08a58, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t DivUp(uint32_t x, uint32_t y);

  /// @brief Method Flush, addr 0x6e08aa0, size 0x90, virtual false, abstract: false, final false
  static inline void Flush(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method ReallocateBuffer, addr 0x6e04824, size 0x130, virtual false, abstract: false, final false
  static inline bool ReallocateBuffer(::UnityEngine::ComputeShader* copyShader, int32_t oldCapacity, int32_t newCapacity, int32_t elementSizeInBytes, ::by_ref<::UnityEngine::GraphicsBuffer*> buffer);

  /// @brief Method get_MaxGraphicsBufferSizeInBytes, addr 0x6e04614, size 0x28, virtual false, abstract: false, final false
  static inline int64_t get_MaxGraphicsBufferSizeInBytes();

  /// @brief Method get_MaxGraphicsBufferSizeInGigaBytes, addr 0x6e047e4, size 0x40, virtual false, abstract: false, final false
  static inline float_t get_MaxGraphicsBufferSizeInGigaBytes();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicsHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphicsHelpers", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphicsHelpers(GraphicsHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphicsHelpers", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphicsHelpers(GraphicsHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20478 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::GraphicsHelpers) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
