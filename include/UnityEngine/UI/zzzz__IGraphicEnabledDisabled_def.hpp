#pragma once
// IWYU pragma private; include "UnityEngine/UI/IGraphicEnabledDisabled.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGraphicEnabledDisabled)
// Forward declare root types
namespace UnityEngine::UI {
class IGraphicEnabledDisabled;
}
// Write type traits
MARK_REF_T(::UnityEngine::UI::IGraphicEnabledDisabled*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::IGraphicEnabledDisabled*, "UnityEngine.UI", "IGraphicEnabledDisabled");
// [Obsolete("Not supported anymore")]
// Dependencies
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.IGraphicEnabledDisabled
class CORDL_TYPE IGraphicEnabledDisabled {
public:
  // Declarations
  /// @brief Method OnSiblingGraphicEnabledDisabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnSiblingGraphicEnabledDisabled();

  // Ctor Parameters [CppParam { name: "", ty: "IGraphicEnabledDisabled", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGraphicEnabledDisabled(IGraphicEnabledDisabledconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17417 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI
