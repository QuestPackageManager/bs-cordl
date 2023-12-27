#pragma once
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15747))
// CS Name: ::JetBrains.Annotations::BaseTypeRequiredAttribute*
class CORDL_TYPE BaseTypeRequiredAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <BaseType>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__BaseType_k__BackingField, put = __set__BaseType_k__BackingField))::System::Type* _BaseType_k__BackingField;

  __declspec(property(get = get_BaseType, put = set_BaseType))::System::Type* BaseType;

  constexpr ::System::Type*& __get__BaseType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__BaseType_k__BackingField() const;

  constexpr void __set__BaseType_k__BackingField(::System::Type* value);

  static inline ::JetBrains::Annotations::BaseTypeRequiredAttribute* New_ctor(::System::Type* baseType);

  /// @brief Method .ctor addr 0x2eba114 size 0x28 virtual false final false
  inline void _ctor(::System::Type* baseType);

  /// @brief Method get_BaseType addr 0x2eba13c size 0x8 virtual false final false
  inline ::System::Type* get_BaseType();

  /// @brief Method set_BaseType addr 0x2eba144 size 0x8 virtual false final false
  inline void set_BaseType(::System::Type* value);

  // Ctor Parameters [CppParam { name: "", ty: "BaseTypeRequiredAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseTypeRequiredAttribute(BaseTypeRequiredAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseTypeRequiredAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseTypeRequiredAttribute(BaseTypeRequiredAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseTypeRequiredAttribute();

public:
  /// @brief Field <BaseType>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____BaseType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::BaseTypeRequiredAttribute, 0x18>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::BaseTypeRequiredAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::BaseTypeRequiredAttribute*, "JetBrains.Annotations", "BaseTypeRequiredAttribute");
