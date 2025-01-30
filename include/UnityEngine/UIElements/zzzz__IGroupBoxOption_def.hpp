#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IGroupBoxOption.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGroupBoxOption)
// Forward declare root types
namespace UnityEngine::UIElements {
class IGroupBoxOption;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IGroupBoxOption);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IGroupBoxOption
class CORDL_TYPE IGroupBoxOption {
public:
  // Declarations
  /// @brief Method SetSelected, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetSelected(bool selected);

  // Ctor Parameters [CppParam { name: "", ty: "IGroupBoxOption", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGroupBoxOption(IGroupBoxOption const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5970 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IGroupBoxOption);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IGroupBoxOption*, "UnityEngine.UIElements", "IGroupBoxOption");
