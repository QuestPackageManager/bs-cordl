#pragma once
// IWYU pragma private; include "JetBrains/Annotations/BaseTypeRequiredAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(BaseTypeRequiredAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace JetBrains::Annotations {
class BaseTypeRequiredAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::BaseTypeRequiredAttribute);
// Type: JetBrains.Annotations::BaseTypeRequiredAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// CS Name: ::JetBrains.Annotations::BaseTypeRequiredAttribute*
class CORDL_TYPE BaseTypeRequiredAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_BaseType, put = set_BaseType)) ::System::Type* BaseType;

  /// @brief Field <BaseType>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__BaseType_k__BackingField, put = __cordl_internal_set__BaseType_k__BackingField)) ::System::Type* _BaseType_k__BackingField;

  static inline ::JetBrains::Annotations::BaseTypeRequiredAttribute* New_ctor(::System::Type* baseType);

  constexpr ::System::Type*& __cordl_internal_get__BaseType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__BaseType_k__BackingField() const;

  constexpr void __cordl_internal_set__BaseType_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x4a8c098, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* baseType);

  /// @brief Method get_BaseType, addr 0x4a8c0c0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_BaseType();

  /// @brief Method set_BaseType, addr 0x4a8c0c8, size 0x8, virtual false, abstract: false, final false
  inline void set_BaseType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseTypeRequiredAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseTypeRequiredAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseTypeRequiredAttribute(BaseTypeRequiredAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseTypeRequiredAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseTypeRequiredAttribute(BaseTypeRequiredAttribute const&) = delete;

  /// @brief Field <BaseType>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____BaseType_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18371 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::BaseTypeRequiredAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::JetBrains::Annotations::BaseTypeRequiredAttribute, ____BaseType_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::BaseTypeRequiredAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::BaseTypeRequiredAttribute*, "JetBrains.Annotations", "BaseTypeRequiredAttribute");
