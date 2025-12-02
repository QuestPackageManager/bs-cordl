#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IPanelRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IPanelRenderer)
// Forward declare root types
namespace UnityEngine::UIElements {
class IPanelRenderer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IPanelRenderer);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IPanelRenderer
class CORDL_TYPE IPanelRenderer {
public:
  // Declarations
  __declspec(property(get = get_forceGammaRendering, put = set_forceGammaRendering)) bool forceGammaRendering;

  __declspec(property(get = get_vertexBudget, put = set_vertexBudget)) uint32_t vertexBudget;

  /// @brief Method Render, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Render();

  /// @brief Method Reset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method get_forceGammaRendering, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_forceGammaRendering();

  /// @brief Method get_vertexBudget, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline uint32_t get_vertexBudget();

  /// @brief Method set_forceGammaRendering, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_forceGammaRendering(bool value);

  /// @brief Method set_vertexBudget, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_vertexBudget(uint32_t value);

  // Ctor Parameters [CppParam { name: "", ty: "IPanelRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPanelRenderer(IPanelRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4679 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IPanelRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IPanelRenderer*, "UnityEngine.UIElements", "IPanelRenderer");
