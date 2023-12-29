#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeConverterAttribute)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class TypeConverterAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::TypeConverterAttribute);
// Type: System.ComponentModel::TypeConverterAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2545))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8295))
// CS Name: ::System.ComponentModel::TypeConverterAttribute*
class CORDL_TYPE TypeConverterAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <ConverterTypeName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__ConverterTypeName_k__BackingField, put = __set__ConverterTypeName_k__BackingField))::StringW _ConverterTypeName_k__BackingField;

  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::ComponentModel::TypeConverterAttribute* Default;

  __declspec(property(get = get_ConverterTypeName))::StringW ConverterTypeName;

  constexpr ::StringW& __get__ConverterTypeName_k__BackingField();

  constexpr ::StringW const& __get__ConverterTypeName_k__BackingField() const;

  constexpr void __set__ConverterTypeName_k__BackingField(::StringW value);

  static inline void setStaticF_Default(::System::ComponentModel::TypeConverterAttribute* value);

  static inline ::System::ComponentModel::TypeConverterAttribute* getStaticF_Default();

  static inline ::System::ComponentModel::TypeConverterAttribute* New_ctor();

  /// @brief Method .ctor addr 0x279ada4 size 0x5c virtual false final false
  inline void _ctor();

  static inline ::System::ComponentModel::TypeConverterAttribute* New_ctor(::System::Type* type);

  /// @brief Method .ctor addr 0x279ae00 size 0x44 virtual false final false
  inline void _ctor(::System::Type* type);

  static inline ::System::ComponentModel::TypeConverterAttribute* New_ctor(::StringW typeName);

  /// @brief Method .ctor addr 0x279ae44 size 0x28 virtual false final false
  inline void _ctor(::StringW typeName);

  /// @brief Method get_ConverterTypeName addr 0x279ae6c size 0x8 virtual false final false
  inline ::StringW get_ConverterTypeName();

  /// @brief Method Equals addr 0x279ae74 size 0x80 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x279aef4 size 0x20 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "TypeConverterAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeConverterAttribute(TypeConverterAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeConverterAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeConverterAttribute(TypeConverterAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeConverterAttribute();

public:
  /// @brief Field <ConverterTypeName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____ConverterTypeName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::TypeConverterAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::TypeConverterAttribute, ____ConverterTypeName_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::TypeConverterAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeConverterAttribute*, "System.ComponentModel", "TypeConverterAttribute");
