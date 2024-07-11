#pragma once
// IWYU pragma private; include "JetBrains/Annotations/StringFormatMethodAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StringFormatMethodAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class StringFormatMethodAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::StringFormatMethodAttribute);
// Type: JetBrains.Annotations::StringFormatMethodAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: ::JetBrains.Annotations::StringFormatMethodAttribute*
class CORDL_TYPE StringFormatMethodAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_FormatParameterName, put = set_FormatParameterName))::StringW FormatParameterName;

  /// @brief Field <FormatParameterName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__FormatParameterName_k__BackingField, put = __cordl_internal_set__FormatParameterName_k__BackingField))::StringW _FormatParameterName_k__BackingField;

  static inline ::JetBrains::Annotations::StringFormatMethodAttribute* New_ctor(::StringW formatParameterName);

  constexpr ::StringW const& __cordl_internal_get__FormatParameterName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__FormatParameterName_k__BackingField();

  constexpr void __cordl_internal_set__FormatParameterName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x3650f5c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW formatParameterName);

  /// @brief Method get_FormatParameterName, addr 0x3650f84, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FormatParameterName();

  /// @brief Method set_FormatParameterName, addr 0x3650f8c, size 0x8, virtual false, abstract: false, final false
  inline void set_FormatParameterName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringFormatMethodAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringFormatMethodAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringFormatMethodAttribute(StringFormatMethodAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringFormatMethodAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringFormatMethodAttribute(StringFormatMethodAttribute const&) = delete;

  /// @brief Field <FormatParameterName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____FormatParameterName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::StringFormatMethodAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::JetBrains::Annotations::StringFormatMethodAttribute, ____FormatParameterName_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::StringFormatMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::StringFormatMethodAttribute*, "JetBrains.Annotations", "StringFormatMethodAttribute");
