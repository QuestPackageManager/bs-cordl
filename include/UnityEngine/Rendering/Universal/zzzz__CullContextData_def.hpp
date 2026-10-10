#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/CullContextData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextItem_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
CORDL_MODULE_EXPORT(CullContextData)
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct ShadowCastersCullingInfos;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class CullContextData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::CullContextData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::CullContextData*, "UnityEngine.Rendering.Universal", "CullContextData");
// Dependencies System.Nullable`1<T>, UnityEngine.Rendering.ContextItem, UnityEngine.Rendering.ScriptableRenderContext
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.CullContextData
class CORDL_TYPE CullContextData : public ::UnityEngine::Rendering::ContextItem {
public:
  // Declarations
  /// @brief Field m_RenderContext, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_m_RenderContext, put = __cordl_internal_set_m_RenderContext)) ::System::Nullable_1<::UnityEngine::Rendering::ScriptableRenderContext> m_RenderContext;

  /// @brief Method Cull, addr 0x6bf1cd8, size 0xf0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CullingResults Cull(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> parameters);

  /// @brief Method CullShadowCasters, addr 0x6bf1dc8, size 0x118, virtual false, abstract: false, final false
  inline void CullShadowCasters(::UnityEngine::Rendering::CullingResults cullingResults, ::UnityEngine::Rendering::ShadowCastersCullingInfos shadowCastersCullingInfos);

  static inline ::UnityEngine::Rendering::Universal::CullContextData* New_ctor();

  /// @brief Method Reset, addr 0x6bf1c6c, size 0x8, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method SetRenderContext, addr 0x6bf1c74, size 0x64, virtual false, abstract: false, final false
  inline void SetRenderContext(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::ScriptableRenderContext const> renderContext);

  constexpr ::System::Nullable_1<::UnityEngine::Rendering::ScriptableRenderContext> const& __cordl_internal_get_m_RenderContext() const;

  constexpr ::System::Nullable_1<::UnityEngine::Rendering::ScriptableRenderContext>& __cordl_internal_get_m_RenderContext();

  constexpr void __cordl_internal_set_m_RenderContext(::System::Nullable_1<::UnityEngine::Rendering::ScriptableRenderContext> value);

  /// @brief Method .ctor, addr 0x6bf1ee0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CullContextData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CullContextData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CullContextData(CullContextData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CullContextData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CullContextData(CullContextData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9270 };

  /// @brief Field m_RenderContext, offset: 0x10, size: 0x10, def value: None
  ::System::Nullable_1<::UnityEngine::Rendering::ScriptableRenderContext> ___m_RenderContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::CullContextData, ___m_RenderContext) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::CullContextData) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
