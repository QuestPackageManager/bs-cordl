#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AspMvcAreaViewLocationFormatAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcAreaViewLocationFormatAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute);
// Type: JetBrains.Annotations::AspMvcAreaViewLocationFormatAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: ::JetBrains.Annotations::AspMvcAreaViewLocationFormatAttribute*
class CORDL_TYPE AspMvcAreaViewLocationFormatAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Format, put = set_Format))::StringW Format;

  /// @brief Field <Format>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Format_k__BackingField, put = __cordl_internal_set__Format_k__BackingField))::StringW _Format_k__BackingField;

  static inline ::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute* New_ctor(::StringW format);

  constexpr ::StringW const& __cordl_internal_get__Format_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Format_k__BackingField();

  constexpr void __cordl_internal_set__Format_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x2fc9cd4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW format);

  /// @brief Method get_Format, addr 0x2fc9cfc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Format();

  /// @brief Method set_Format, addr 0x2fc9d04, size 0x8, virtual false, abstract: false, final false
  inline void set_Format(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AspMvcAreaViewLocationFormatAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AspMvcAreaViewLocationFormatAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AspMvcAreaViewLocationFormatAttribute(AspMvcAreaViewLocationFormatAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AspMvcAreaViewLocationFormatAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AspMvcAreaViewLocationFormatAttribute(AspMvcAreaViewLocationFormatAttribute const&) = delete;

  /// @brief Field <Format>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Format_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute, ____Format_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcAreaViewLocationFormatAttribute*, "JetBrains.Annotations", "AspMvcAreaViewLocationFormatAttribute");
