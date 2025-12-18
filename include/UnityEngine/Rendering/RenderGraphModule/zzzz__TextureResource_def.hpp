#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/TextureResource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphResource_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureDesc_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::TextureResource);
// Dependencies UnityEngine.Rendering.RenderGraphModule.RenderGraphResource`2<DescType, ResType>, UnityEngine.Rendering.RenderGraphModule.TextureDesc
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.TextureResource
class CORDL_TYPE TextureResource
    : public ::UnityEngine::Rendering::RenderGraphModule::RenderGraphResource_2<::UnityEngine::Rendering::RenderGraphModule::TextureDesc, ::UnityEngine::Rendering::RTHandle*> {
public:
  // Declarations
  /// @brief Field m_TextureCreationIndex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_m_TextureCreationIndex, put = setStaticF_m_TextureCreationIndex)) int32_t m_TextureCreationIndex;

  /// @brief Method CreateGraphicsResource, addr 0x6633e0c, size 0x410, virtual true, abstract: false, final false
  inline void CreateGraphicsResource();

  /// @brief Method GetDescHashCode, addr 0x6633e04, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetDescHashCode();

  /// @brief Method GetName, addr 0x6633d90, size 0x74, virtual true, abstract: false, final false
  inline ::StringW GetName();

  /// @brief Method LogCreation, addr 0x6634294, size 0x134, virtual true, abstract: false, final false
  inline void LogCreation(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* logger);

  /// @brief Method LogRelease, addr 0x66343c8, size 0xe4, virtual true, abstract: false, final false
  inline void LogRelease(::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* logger);

  static inline ::UnityEngine::Rendering::RenderGraphModule::TextureResource* New_ctor();

  /// @brief Method ReleaseGraphicsResource, addr 0x6634240, size 0x54, virtual true, abstract: false, final false
  inline void ReleaseGraphicsResource();

  /// @brief Method UpdateGraphicsResource, addr 0x663421c, size 0x24, virtual true, abstract: false, final false
  inline void UpdateGraphicsResource();

  /// @brief Method .ctor, addr 0x66344ac, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_m_TextureCreationIndex();

  static inline void setStaticF_m_TextureCreationIndex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureResource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextureResource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextureResource(TextureResource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextureResource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextureResource(TextureResource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12441 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::TextureResource, 0xc8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::TextureResource);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::TextureResource*, "UnityEngine.Rendering.RenderGraphModule", "TextureResource");
