#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\BufferPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResourcePool_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferPool)
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class BufferPool;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::BufferPool*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::BufferPool*, "UnityEngine.Rendering.RenderGraphModule", "BufferPool");
// Dependencies UnityEngine.Rendering.RenderGraphModule.RenderGraphResourcePool`1<Type>
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.BufferPool
class CORDL_TYPE BufferPool : public ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<::UnityEngine::GraphicsBuffer*> {
public:
  // Declarations
  /// @brief Method GetResourceName, addr 0x67e4ae8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW GetResourceName(::by_ref<::UnityEngine::GraphicsBuffer*> res);

  /// @brief Method GetResourceSize, addr 0x67e4b2c, size 0x44, virtual true, abstract: false, final false
  inline int64_t GetResourceSize(::by_ref<::UnityEngine::GraphicsBuffer*> res);

  /// @brief Method GetResourceTypeName, addr 0x67e4b70, size 0x44, virtual true, abstract: false, final false
  inline ::StringW GetResourceTypeName();

  /// @brief Method GetSortIndex, addr 0x67e4bb4, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetSortIndex(::UnityEngine::GraphicsBuffer* res);

  static inline ::UnityEngine::Rendering::RenderGraphModule::BufferPool* New_ctor();

  /// @brief Method ReleaseInternalResource, addr 0x67e4ad4, size 0x14, virtual true, abstract: false, final false
  inline void ReleaseInternalResource(::UnityEngine::GraphicsBuffer* res);

  /// @brief Method .ctor, addr 0x67e4bd4, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BufferPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferPool(BufferPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferPool(BufferPool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12442 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::BufferPool) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
