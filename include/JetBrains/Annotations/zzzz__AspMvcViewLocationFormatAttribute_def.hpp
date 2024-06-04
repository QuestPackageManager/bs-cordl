#pragma once
// IWYU pragma private; include "JetBrains/Annotations/AspMvcViewLocationFormatAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AspMvcViewLocationFormatAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcViewLocationFormatAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspMvcViewLocationFormatAttribute);
// Type: JetBrains.Annotations::AspMvcViewLocationFormatAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: ::JetBrains.Annotations::AspMvcViewLocationFormatAttribute*
class CORDL_TYPE AspMvcViewLocationFormatAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Format, put = set_Format))::StringW Format;

  /// @brief Field <Format>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Format_k__BackingField, put = __cordl_internal_set__Format_k__BackingField))::StringW _Format_k__BackingField;

  static inline ::JetBrains::Annotations::AspMvcViewLocationFormatAttribute* New_ctor(::StringW format);

  constexpr ::StringW const& __cordl_internal_get__Format_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Format_k__BackingField();

  constexpr void __cordl_internal_set__Format_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x363a674, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW format);

  /// @brief Method get_Format, addr 0x363a69c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Format();

  /// @brief Method set_Format, addr 0x363a6a4, size 0x8, virtual false, abstract: false, final false
  inline void set_Format(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AspMvcViewLocationFormatAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AspMvcViewLocationFormatAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AspMvcViewLocationFormatAttribute(AspMvcViewLocationFormatAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AspMvcViewLocationFormatAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AspMvcViewLocationFormatAttribute(AspMvcViewLocationFormatAttribute const&) = delete;

  /// @brief Field <Format>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Format_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspMvcViewLocationFormatAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::JetBrains::Annotations::AspMvcViewLocationFormatAttribute, ____Format_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspMvcViewLocationFormatAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcViewLocationFormatAttribute*, "JetBrains.Annotations", "AspMvcViewLocationFormatAttribute");
