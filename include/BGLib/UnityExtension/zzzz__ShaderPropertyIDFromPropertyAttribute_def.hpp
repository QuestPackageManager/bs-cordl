#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/ShaderPropertyIDFromPropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/UnityExtension/zzzz__ShaderPropertyIDFromRendererAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ShaderPropertyIDFromPropertyAttribute)
namespace BGLib::UnityExtension {
struct ShaderPropertyAttributeFilter_PropType;
}
// Forward declare root types
namespace BGLib::UnityExtension {
class ShaderPropertyIDFromPropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute);
// Dependencies BGLib.UnityExtension.ShaderPropertyIDFromRendererAttribute
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: BGLib.UnityExtension.ShaderPropertyIDFromPropertyAttribute
class CORDL_TYPE ShaderPropertyIDFromPropertyAttribute : public ::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute {
public:
  // Declarations
  /// @brief Field nestedPropertyName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_nestedPropertyName, put = __cordl_internal_set_nestedPropertyName)) ::StringW nestedPropertyName;

  /// @brief Method GetTargetName, addr 0x22b3b50, size 0xd4, virtual true, abstract: false, final false
  inline ::StringW GetTargetName();

  static inline ::BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute* New_ctor(::StringW propertyName, ::StringW nestedPropertyName, ::StringW nameFilter,
                                                                                         ::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType filterPropType);

  constexpr ::StringW const& __cordl_internal_get_nestedPropertyName() const;

  constexpr ::StringW& __cordl_internal_get_nestedPropertyName();

  constexpr void __cordl_internal_set_nestedPropertyName(::StringW value);

  /// @brief Method .ctor, addr 0x22b3b20, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW propertyName, ::StringW nestedPropertyName, ::StringW nameFilter, ::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType filterPropType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderPropertyIDFromPropertyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderPropertyIDFromPropertyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderPropertyIDFromPropertyAttribute(ShaderPropertyIDFromPropertyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderPropertyIDFromPropertyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderPropertyIDFromPropertyAttribute(ShaderPropertyIDFromPropertyAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17182 };

  /// @brief Field nestedPropertyName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___nestedPropertyName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute, ___nestedPropertyName) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute, 0x28>, "Size mismatch!");

} // namespace BGLib::UnityExtension
NEED_NO_BOX(::BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::ShaderPropertyIDFromPropertyAttribute*, "BGLib.UnityExtension", "ShaderPropertyIDFromPropertyAttribute");
