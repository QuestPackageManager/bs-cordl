#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ITextElement)
// Forward declare root types
namespace UnityEngine::UIElements {
class ITextElement;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ITextElement);
// Type: UnityEngine.UIElements::ITextElement
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6070))
// CS Name: ::UnityEngine.UIElements::ITextElement*
class CORDL_TYPE ITextElement {
public:
  // Declarations
  __declspec(property(get = get_text))::StringW text;

  /// @brief Method get_text, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_text();

  // Ctor Parameters [CppParam { name: "", ty: "ITextElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITextElement(ITextElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITextElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITextElement(ITextElement const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ITextElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ITextElement*, "UnityEngine.UIElements", "ITextElement");
