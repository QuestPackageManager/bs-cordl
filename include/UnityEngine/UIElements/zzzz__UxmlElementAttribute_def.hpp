#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlElementAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UxmlElementAttribute)
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlElementAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlElementAttribute);
// Dependencies System.Attribute
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlElementAttribute
class CORDL_TYPE UxmlElementAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::StringW name;

  static inline ::UnityEngine::UIElements::UxmlElementAttribute* New_ctor(::StringW uxmlName);

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr void __cordl_internal_set_name(::StringW value);

  /// @brief Method .ctor, addr 0x6a8b628, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW uxmlName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlElementAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlElementAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlElementAttribute(UxmlElementAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlElementAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlElementAttribute(UxmlElementAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5173 };

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UxmlElementAttribute, ___name) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlElementAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UxmlElementAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlElementAttribute*, "UnityEngine.UIElements", "UxmlElementAttribute");
