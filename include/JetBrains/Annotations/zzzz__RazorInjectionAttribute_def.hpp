#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RazorInjectionAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class RazorInjectionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::RazorInjectionAttribute);
// Type: JetBrains.Annotations::RazorInjectionAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: ::JetBrains.Annotations::RazorInjectionAttribute*
class CORDL_TYPE RazorInjectionAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_FieldName, put = set_FieldName))::StringW FieldName;

  __declspec(property(get = get_Type, put = set_Type))::StringW Type;

  /// @brief Field <FieldName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__FieldName_k__BackingField, put = __cordl_internal_set__FieldName_k__BackingField))::StringW _FieldName_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField))::StringW _Type_k__BackingField;

  static inline ::JetBrains::Annotations::RazorInjectionAttribute* New_ctor(::StringW type, ::StringW fieldName);

  constexpr ::StringW const& __cordl_internal_get__FieldName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__FieldName_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Type_k__BackingField();

  constexpr void __cordl_internal_set__FieldName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x360f50c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW type, ::StringW fieldName);

  /// @brief Method get_FieldName, addr 0x360f548, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FieldName();

  /// @brief Method get_Type, addr 0x360f538, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Type();

  /// @brief Method set_FieldName, addr 0x360f550, size 0x8, virtual false, abstract: false, final false
  inline void set_FieldName(::StringW value);

  /// @brief Method set_Type, addr 0x360f540, size 0x8, virtual false, abstract: false, final false
  inline void set_Type(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RazorInjectionAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RazorInjectionAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RazorInjectionAttribute(RazorInjectionAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RazorInjectionAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RazorInjectionAttribute(RazorInjectionAttribute const&) = delete;

  /// @brief Field <Type>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Type_k__BackingField;

  /// @brief Field <FieldName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____FieldName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::RazorInjectionAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::JetBrains::Annotations::RazorInjectionAttribute, ____Type_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JetBrains::Annotations::RazorInjectionAttribute, ____FieldName_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::RazorInjectionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::RazorInjectionAttribute*, "JetBrains.Annotations", "RazorInjectionAttribute");
