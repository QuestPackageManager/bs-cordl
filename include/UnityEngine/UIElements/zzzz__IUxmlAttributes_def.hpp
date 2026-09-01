#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\IUxmlAttributes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IUxmlAttributes)
// Forward declare root types
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::IUxmlAttributes*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::IUxmlAttributes*, "UnityEngine.UIElements", "IUxmlAttributes");
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IUxmlAttributes
class CORDL_TYPE IUxmlAttributes {
public:
  // Declarations
  /// @brief Method TryGetAttributeValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryGetAttributeValue(::StringW attributeName, ::by_ref<::StringW> value);

  // Ctor Parameters [CppParam { name: "", ty: "IUxmlAttributes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUxmlAttributes(IUxmlAttributes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5134 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
