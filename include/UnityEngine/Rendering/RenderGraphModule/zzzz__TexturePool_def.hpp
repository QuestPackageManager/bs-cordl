#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderGraphModule\TexturePool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResourcePool_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TexturePool)
namespace UnityEngine::Rendering {
class RTHandle;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class TexturePool;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::TexturePool*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::TexturePool*, "UnityEngine.Rendering.RenderGraphModule", "TexturePool");
// Dependencies UnityEngine.Rendering.RenderGraphModule.RenderGraphResourcePool`1<Type>
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.TexturePool
class CORDL_TYPE TexturePool : public ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResourcePool_1<::UnityEngine::Rendering::RTHandle*> {
public:
  // Declarations
  /// @brief Method GetResourceName, addr 0x67eb668, size 0x20, virtual true, abstract: false, final false
  inline ::StringW GetResourceName(::by_ref<::UnityEngine::Rendering::RTHandle*> res);

  /// @brief Method GetResourceSize, addr 0x67eb688, size 0x1c, virtual true, abstract: false, final false
  inline int64_t GetResourceSize(::by_ref<::UnityEngine::Rendering::RTHandle*> res);

  /// @brief Method GetResourceTypeName, addr 0x67eb6a4, size 0x44, virtual true, abstract: false, final false
  inline ::StringW GetResourceTypeName();

  /// @brief Method GetSortIndex, addr 0x67eb6e8, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetSortIndex(::UnityEngine::Rendering::RTHandle* res);

  static inline ::UnityEngine::Rendering::RenderGraphModule::TexturePool* New_ctor();

  /// @brief Method ReleaseInternalResource, addr 0x67eb650, size 0x18, virtual true, abstract: false, final false
  inline void ReleaseInternalResource(::UnityEngine::Rendering::RTHandle* res);

  /// @brief Method .ctor, addr 0x67e5d78, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TexturePool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TexturePool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TexturePool(TexturePool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TexturePool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TexturePool(TexturePool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12467 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::TexturePool) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
