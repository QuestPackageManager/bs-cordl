#pragma once
// IWYU pragma private; include "JetBrains/Annotations/AspTypePropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AspTypePropertyAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class AspTypePropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspTypePropertyAttribute);
// Dependencies System.Attribute
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: JetBrains.Annotations.AspTypePropertyAttribute
class CORDL_TYPE AspTypePropertyAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_CreateConstructorReferences, put = set_CreateConstructorReferences)) bool CreateConstructorReferences;

  /// @brief Field <CreateConstructorReferences>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__CreateConstructorReferences_k__BackingField,
                      put = __cordl_internal_set__CreateConstructorReferences_k__BackingField)) bool _CreateConstructorReferences_k__BackingField;

  static inline ::JetBrains::Annotations::AspTypePropertyAttribute* New_ctor(bool createConstructorReferences);

  constexpr bool const& __cordl_internal_get__CreateConstructorReferences_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CreateConstructorReferences_k__BackingField();

  constexpr void __cordl_internal_set__CreateConstructorReferences_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x4af3b98, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(bool createConstructorReferences);

  /// @brief Method get_CreateConstructorReferences, addr 0x4af3b84, size 0x8, virtual false, abstract: false, final false
  inline bool get_CreateConstructorReferences();

  /// @brief Method set_CreateConstructorReferences, addr 0x4af3b8c, size 0xc, virtual false, abstract: false, final false
  inline void set_CreateConstructorReferences(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AspTypePropertyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AspTypePropertyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AspTypePropertyAttribute(AspTypePropertyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AspTypePropertyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AspTypePropertyAttribute(AspTypePropertyAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18517 };

  /// @brief Field <CreateConstructorReferences>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____CreateConstructorReferences_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JetBrains::Annotations::AspTypePropertyAttribute, ____CreateConstructorReferences_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspTypePropertyAttribute, 0x18>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspTypePropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspTypePropertyAttribute*, "JetBrains.Annotations", "AspTypePropertyAttribute");
