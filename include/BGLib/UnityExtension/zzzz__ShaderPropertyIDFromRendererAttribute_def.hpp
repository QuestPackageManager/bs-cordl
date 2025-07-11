#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/ShaderPropertyIDFromRendererAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/UnityExtension/zzzz__ShaderPropertyIDAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ShaderPropertyIDFromRendererAttribute)
namespace BGLib::UnityExtension {
struct ShaderPropertyAttributeFilter_PropType;
}
// Forward declare root types
namespace BGLib::UnityExtension {
class ShaderPropertyIDFromRendererAttribute;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute);
// Dependencies BGLib.UnityExtension.ShaderPropertyIDAttribute
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: BGLib.UnityExtension.ShaderPropertyIDFromRendererAttribute
class CORDL_TYPE ShaderPropertyIDFromRendererAttribute : public ::BGLib::UnityExtension::ShaderPropertyIDAttribute {
public:
  // Declarations
  /// @brief Field propertyName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_propertyName, put = __cordl_internal_set_propertyName)) ::StringW propertyName;

  /// @brief Method GetTargetName, addr 0x22b7618, size 0x8, virtual true, abstract: false, final false
  inline ::StringW GetTargetName();

  static inline ::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute* New_ctor(::StringW propertyName, ::StringW nameFilter,
                                                                                         ::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType filterPropType);

  constexpr ::StringW const& __cordl_internal_get_propertyName() const;

  constexpr ::StringW& __cordl_internal_get_propertyName();

  constexpr void __cordl_internal_set_propertyName(::StringW value);

  /// @brief Method .ctor, addr 0x22b75ec, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW propertyName, ::StringW nameFilter, ::BGLib::UnityExtension::ShaderPropertyAttributeFilter_PropType filterPropType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderPropertyIDFromRendererAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderPropertyIDFromRendererAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderPropertyIDFromRendererAttribute(ShaderPropertyIDFromRendererAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderPropertyIDFromRendererAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderPropertyIDFromRendererAttribute(ShaderPropertyIDFromRendererAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17183 };

  /// @brief Field propertyName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___propertyName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute, ___propertyName) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute, 0x20>, "Size mismatch!");

} // namespace BGLib::UnityExtension
NEED_NO_BOX(::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::ShaderPropertyIDFromRendererAttribute*, "BGLib.UnityExtension", "ShaderPropertyIDFromRendererAttribute");
