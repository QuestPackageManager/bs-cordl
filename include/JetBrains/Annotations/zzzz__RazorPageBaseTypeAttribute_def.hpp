#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RazorPageBaseTypeAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class RazorPageBaseTypeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::RazorPageBaseTypeAttribute);
// Type: JetBrains.Annotations::RazorPageBaseTypeAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: ::JetBrains.Annotations::RazorPageBaseTypeAttribute*
class CORDL_TYPE RazorPageBaseTypeAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_BaseType, put = set_BaseType))::StringW BaseType;

  __declspec(property(get = get_PageName, put = set_PageName))::StringW PageName;

  /// @brief Field <BaseType>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__BaseType_k__BackingField, put = __cordl_internal_set__BaseType_k__BackingField))::StringW _BaseType_k__BackingField;

  /// @brief Field <PageName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__PageName_k__BackingField, put = __cordl_internal_set__PageName_k__BackingField))::StringW _PageName_k__BackingField;

  static inline ::JetBrains::Annotations::RazorPageBaseTypeAttribute* New_ctor(::StringW baseType);

  static inline ::JetBrains::Annotations::RazorPageBaseTypeAttribute* New_ctor(::StringW baseType, ::StringW pageName);

  constexpr ::StringW const& __cordl_internal_get__BaseType_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__BaseType_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__PageName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__PageName_k__BackingField();

  constexpr void __cordl_internal_set__BaseType_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__PageName_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x30229cc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW baseType);

  /// @brief Method .ctor, addr 0x30229f4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW baseType, ::StringW pageName);

  /// @brief Method get_BaseType, addr 0x3022a20, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_BaseType();

  /// @brief Method get_PageName, addr 0x3022a30, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PageName();

  /// @brief Method set_BaseType, addr 0x3022a28, size 0x8, virtual false, abstract: false, final false
  inline void set_BaseType(::StringW value);

  /// @brief Method set_PageName, addr 0x3022a38, size 0x8, virtual false, abstract: false, final false
  inline void set_PageName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RazorPageBaseTypeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RazorPageBaseTypeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RazorPageBaseTypeAttribute(RazorPageBaseTypeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RazorPageBaseTypeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RazorPageBaseTypeAttribute(RazorPageBaseTypeAttribute const&) = delete;

  /// @brief Field <BaseType>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____BaseType_k__BackingField;

  /// @brief Field <PageName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____PageName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::RazorPageBaseTypeAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::JetBrains::Annotations::RazorPageBaseTypeAttribute, ____BaseType_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JetBrains::Annotations::RazorPageBaseTypeAttribute, ____PageName_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::RazorPageBaseTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::RazorPageBaseTypeAttribute*, "JetBrains.Annotations", "RazorPageBaseTypeAttribute");
