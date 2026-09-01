#pragma once
// IWYU pragma private; include "UnityEngine\UI\ILayoutIgnorer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILayoutIgnorer)
// Forward declare root types
namespace UnityEngine::UI {
class ILayoutIgnorer;
}
// Write type traits
MARK_REF_T(::UnityEngine::UI::ILayoutIgnorer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::ILayoutIgnorer*, "UnityEngine.UI", "ILayoutIgnorer");
// Dependencies
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.ILayoutIgnorer
class CORDL_TYPE ILayoutIgnorer {
public:
  // Declarations
  __declspec(property(get = get_ignoreLayout)) bool ignoreLayout;

  /// @brief Method get_ignoreLayout, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_ignoreLayout();

  // Ctor Parameters [CppParam { name: "", ty: "ILayoutIgnorer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILayoutIgnorer(ILayoutIgnorer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17458 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI
