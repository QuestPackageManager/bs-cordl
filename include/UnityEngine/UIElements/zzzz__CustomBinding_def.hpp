#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CustomBinding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Binding_def.hpp"
CORDL_MODULE_EXPORT(CustomBinding)
namespace UnityEngine::UIElements {
struct BindingContext;
}
namespace UnityEngine::UIElements {
struct BindingResult;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class CustomBinding;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::CustomBinding);
// Dependencies UnityEngine.UIElements.Binding
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.CustomBinding
class CORDL_TYPE CustomBinding : public ::UnityEngine::UIElements::Binding {
public:
  // Declarations
  /// @brief Method Update, addr 0x6a0a898, size 0xc, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::BindingResult Update(::ByRef<::UnityEngine::UIElements::BindingContext> context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomBinding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomBinding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomBinding(CustomBinding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomBinding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomBinding(CustomBinding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4036 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::CustomBinding, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::CustomBinding);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CustomBinding*, "UnityEngine.UIElements", "CustomBinding");
