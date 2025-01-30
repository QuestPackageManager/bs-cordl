#pragma once
// IWYU pragma private; include "UnityEngine/UI/IGraphicEnabledDisabled.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGraphicEnabledDisabled)
// Forward declare root types
namespace UnityEngine::UI {
class IGraphicEnabledDisabled;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::IGraphicEnabledDisabled);
// Dependencies
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.IGraphicEnabledDisabled
class CORDL_TYPE IGraphicEnabledDisabled {
public:
  // Declarations
  /// @brief Method OnSiblingGraphicEnabledDisabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnSiblingGraphicEnabledDisabled();

  // Ctor Parameters [CppParam { name: "", ty: "IGraphicEnabledDisabled", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGraphicEnabledDisabled(IGraphicEnabledDisabled const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15061 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::IGraphicEnabledDisabled);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::IGraphicEnabledDisabled*, "UnityEngine.UI", "IGraphicEnabledDisabled");
