#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderPipelineAsset_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__RenderPipelineAsset_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RenderPipelineAsset_1)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename TRenderPipeline> class RenderPipelineAsset_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::RenderPipelineAsset_1);
// Dependencies UnityEngine.Rendering.RenderPipelineAsset
namespace UnityEngine::Rendering {
// cpp template
template <typename TRenderPipeline>
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderPipelineAsset`1<TRenderPipeline>
class CORDL_TYPE RenderPipelineAsset_1 : public ::UnityEngine::Rendering::RenderPipelineAsset {
public:
  // Declarations
  __declspec(property(get = get_pipelineType)) ::System::Type* pipelineType;

  __declspec(property(get = get_renderPipelineShaderTag)) ::StringW renderPipelineShaderTag;

  __declspec(property(get = get_renderPipelineType)) ::System::Type* renderPipelineType;

  static inline ::UnityEngine::Rendering::RenderPipelineAsset_1<TRenderPipeline>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pipelineType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Type* get_pipelineType();

  /// @brief Method get_renderPipelineShaderTag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_renderPipelineShaderTag();

  /// @brief Method get_renderPipelineType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Type* get_renderPipelineType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderPipelineAsset_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineAsset_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderPipelineAsset_1(RenderPipelineAsset_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineAsset_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderPipelineAsset_1(RenderPipelineAsset_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10796 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::RenderPipelineAsset_1, "UnityEngine.Rendering", "RenderPipelineAsset`1");
