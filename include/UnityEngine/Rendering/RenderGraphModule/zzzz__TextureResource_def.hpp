#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/TextureResource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResource_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureDesc_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureUVOriginSelection_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextureResource)
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphLogger;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
class TextureResource;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RenderGraphModule::TextureResource*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::TextureResource*, "UnityEngine.Rendering.RenderGraphModule", "TextureResource");
// [DebuggerDisplay("TextureResource ({desc.name})")]
// Dependencies UnityEngine.Rendering.RenderGraphModule.RenderGraphResource`2<DescType, ResType>, UnityEngine.Rendering.RenderGraphModule.TextureDesc,
// UnityEngine.Rendering.RenderGraphModule.TextureUVOriginSelection
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.TextureResource
class CORDL_TYPE TextureResource
    : public ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<::UnityEngine::Rendering::RenderGraphModule::TextureDesc, ::UnityEngine::Rendering::RTHandle*> {
public:
  // Declarations
  /// @brief Field m_TextureCreationIndex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_m_TextureCreationIndex, put = setStaticF_m_TextureCreationIndex)) int32_t m_TextureCreationIndex;

  /// @brief Field textureUVOrigin, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_textureUVOrigin, put = __cordl_internal_set_textureUVOrigin)) ::UnityEngine::Rendering::RenderGraphModule::TextureUVOriginSelection textureUVOrigin;

  /// @brief Method CreateGraphicsResource, addr 0x6c14834, size 0x38c, virtual true, abstract: false, final false
  inline void CreateGraphicsResource();

  /// @brief Method GetDescHashCode, addr 0x6c1482c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetDescHashCode();

  /// @brief Method GetName, addr 0x6c147b8, size 0x74, virtual true, abstract: false, final false
  inline ::StringW GetName();

  /// @brief Method LogCreation, addr 0x6c14c38, size 0x138, virtual true, abstract: false, final false
  inline void LogCreation(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* logger);

  /// @brief Method LogRelease, addr 0x6c14d70, size 0xe8, virtual true, abstract: false, final false
  inline void LogRelease(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* logger);

  static inline ::UnityEngine::Rendering::RenderGraphModule::TextureResource* New_ctor();

  /// @brief Method ReleaseGraphicsResource, addr 0x6c14be4, size 0x54, virtual true, abstract: false, final false
  inline void ReleaseGraphicsResource();

  /// @brief Method UpdateGraphicsResource, addr 0x6c14bc0, size 0x24, virtual true, abstract: false, final false
  inline void UpdateGraphicsResource();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureUVOriginSelection const& __cordl_internal_get_textureUVOrigin() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureUVOriginSelection& __cordl_internal_get_textureUVOrigin();

  constexpr void __cordl_internal_set_textureUVOrigin(::UnityEngine::Rendering::RenderGraphModule::TextureUVOriginSelection value);

  /// @brief Method .ctor, addr 0x6c14e58, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_m_TextureCreationIndex();

  static inline void setStaticF_m_TextureCreationIndex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureResource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextureResource", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextureResource(TextureResource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextureResource", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextureResource(TextureResource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9378 };

  /// @brief Field textureUVOrigin, offset: 0xc0, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureUVOriginSelection ___textureUVOrigin;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureResource, ___textureUVOrigin) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::TextureResource) == 0xc8, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
