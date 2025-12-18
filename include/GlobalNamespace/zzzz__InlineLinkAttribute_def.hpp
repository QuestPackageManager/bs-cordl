#pragma once
// IWYU pragma private; include "GlobalNamespace/InlineLinkAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InlineLinkAttribute)
// Forward declare root types
namespace GlobalNamespace {
class InlineLinkAttribute;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::InlineLinkAttribute);
// Dependencies UnityEngine.PropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: InlineLinkAttribute
class CORDL_TYPE InlineLinkAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  /// @brief Field DocumentationURL, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_DocumentationURL, put = __cordl_internal_set_DocumentationURL)) ::StringW DocumentationURL;

  static inline ::GlobalNamespace::InlineLinkAttribute* New_ctor(::StringW documentationURL);

  constexpr ::StringW const& __cordl_internal_get_DocumentationURL() const;

  constexpr ::StringW& __cordl_internal_get_DocumentationURL();

  constexpr void __cordl_internal_set_DocumentationURL(::StringW value);

  /// @brief Method .ctor, addr 0x5c48ffc, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW documentationURL);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InlineLinkAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InlineLinkAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InlineLinkAttribute(InlineLinkAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InlineLinkAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InlineLinkAttribute(InlineLinkAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7029 };

  /// @brief Field DocumentationURL, offset: 0x18, size: 0x8, def value: None
  ::StringW ___DocumentationURL;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InlineLinkAttribute, ___DocumentationURL) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InlineLinkAttribute, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::InlineLinkAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InlineLinkAttribute*, "", "InlineLinkAttribute");
