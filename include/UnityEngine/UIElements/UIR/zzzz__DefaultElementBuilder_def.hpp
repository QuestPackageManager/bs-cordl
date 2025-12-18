#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/DefaultElementBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/UIR/zzzz__BaseElementBuilder_def.hpp"
CORDL_MODULE_EXPORT(DefaultElementBuilder)
namespace UnityEngine::UIElements::UIR {
class RenderChain;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class DefaultElementBuilder;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::DefaultElementBuilder);
// Dependencies UnityEngine.UIElements.UIR.BaseElementBuilder
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.DefaultElementBuilder
class CORDL_TYPE DefaultElementBuilder : public ::UnityEngine::UIElements::UIR::BaseElementBuilder {
public:
  // Declarations
  /// @brief Field m_RenderChain, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderChain, put = __cordl_internal_set_m_RenderChain)) ::UnityEngine::UIElements::UIR::RenderChain* m_RenderChain;

  /// @brief Method DrawVisualElementBackground, addr 0x6b0b130, size 0x11ec, virtual true, abstract: false, final false
  inline void DrawVisualElementBackground(Il2CppObject* mgc);

  /// @brief Method DrawVisualElementBorder, addr 0x6b0c31c, size 0x990, virtual true, abstract: false, final false
  inline void DrawVisualElementBorder(Il2CppObject* mgc);

  /// @brief Method DrawVisualElementStencilMask, addr 0x6b0ccac, size 0xa0, virtual true, abstract: false, final false
  inline void DrawVisualElementStencilMask(Il2CppObject* mgc);

  /// @brief Method GenerateStencilClipEntryForRoundedRectBackground, addr 0x6b0cd4c, size 0x728, virtual false, abstract: false, final false
  static inline void GenerateStencilClipEntryForRoundedRectBackground(Il2CppObject* mgc);

  static inline ::UnityEngine::UIElements::UIR::DefaultElementBuilder* New_ctor(::UnityEngine::UIElements::UIR::RenderChain* renderChain);

  /// @brief Method RequiresStencilMask, addr 0x6b0b0a4, size 0x8c, virtual true, abstract: false, final false
  inline bool RequiresStencilMask(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method ScheduleMeshGenerationJobs, addr 0x6b0d474, size 0xe0, virtual true, abstract: false, final false
  inline void ScheduleMeshGenerationJobs(Il2CppObject* mgc);

  constexpr ::UnityEngine::UIElements::UIR::RenderChain* const& __cordl_internal_get_m_RenderChain() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderChain*& __cordl_internal_get_m_RenderChain();

  constexpr void __cordl_internal_set_m_RenderChain(::UnityEngine::UIElements::UIR::RenderChain* value);

  /// @brief Method .ctor, addr 0x6b0b09c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::UIR::RenderChain* renderChain);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultElementBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultElementBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultElementBuilder(DefaultElementBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultElementBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultElementBuilder(DefaultElementBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5286 };

  /// @brief Field m_RenderChain, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChain* ___m_RenderChain;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::DefaultElementBuilder, ___m_RenderChain) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::DefaultElementBuilder, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::DefaultElementBuilder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::DefaultElementBuilder*, "UnityEngine.UIElements.UIR", "DefaultElementBuilder");
