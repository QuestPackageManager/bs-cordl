#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AspMvcAreaMasterLocationFormatAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspMvcAreaMasterLocationFormatAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspMvcAreaMasterLocationFormatAttribute);
// Type: JetBrains.Annotations::AspMvcAreaMasterLocationFormatAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2545))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15710))
// CS Name: ::JetBrains.Annotations::AspMvcAreaMasterLocationFormatAttribute*
class CORDL_TYPE AspMvcAreaMasterLocationFormatAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Format>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Format_k__BackingField, put = __set__Format_k__BackingField))::StringW _Format_k__BackingField;

  __declspec(property(get = get_Format, put = set_Format))::StringW Format;

  constexpr ::StringW& __get__Format_k__BackingField();

  constexpr ::StringW const& __get__Format_k__BackingField() const;

  constexpr void __set__Format_k__BackingField(::StringW value);

  static inline ::JetBrains::Annotations::AspMvcAreaMasterLocationFormatAttribute* New_ctor(::StringW format);

  /// @brief Method .ctor addr 0x2d52674 size 0x28 virtual false final false
  inline void _ctor(::StringW format);

  /// @brief Method get_Format addr 0x2d5269c size 0x8 virtual false final false
  inline ::StringW get_Format();

  /// @brief Method set_Format addr 0x2d526a4 size 0x8 virtual false final false
  inline void set_Format(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "AspMvcAreaMasterLocationFormatAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AspMvcAreaMasterLocationFormatAttribute(AspMvcAreaMasterLocationFormatAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AspMvcAreaMasterLocationFormatAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AspMvcAreaMasterLocationFormatAttribute(AspMvcAreaMasterLocationFormatAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AspMvcAreaMasterLocationFormatAttribute();

public:
  /// @brief Field <Format>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Format_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspMvcAreaMasterLocationFormatAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::JetBrains::Annotations::AspMvcAreaMasterLocationFormatAttribute, ____Format_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspMvcAreaMasterLocationFormatAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspMvcAreaMasterLocationFormatAttribute*, "JetBrains.Annotations", "AspMvcAreaMasterLocationFormatAttribute");
