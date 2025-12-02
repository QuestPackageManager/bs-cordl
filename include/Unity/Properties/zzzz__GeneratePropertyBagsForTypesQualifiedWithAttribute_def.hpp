#pragma once
// IWYU pragma private; include "Unity/Properties/GeneratePropertyBagsForTypesQualifiedWithAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "Unity/Properties/zzzz__TypeGenerationOptions_def.hpp"
CORDL_MODULE_EXPORT(GeneratePropertyBagsForTypesQualifiedWithAttribute)
namespace System {
class Type;
}
namespace Unity::Properties {
struct TypeGenerationOptions;
}
// Forward declare root types
namespace Unity::Properties {
class GeneratePropertyBagsForTypesQualifiedWithAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute);
// Dependencies System.Attribute, Unity.Properties.TypeGenerationOptions
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.GeneratePropertyBagsForTypesQualifiedWithAttribute
class CORDL_TYPE GeneratePropertyBagsForTypesQualifiedWithAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Options>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__Options_k__BackingField, put = __cordl_internal_set__Options_k__BackingField)) ::Unity::Properties::TypeGenerationOptions _Options_k__BackingField;

  /// @brief Field <Type>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Type_k__BackingField, put = __cordl_internal_set__Type_k__BackingField)) ::System::Type* _Type_k__BackingField;

  static inline ::Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute* New_ctor(::System::Type* type, ::Unity::Properties::TypeGenerationOptions options);

  constexpr ::Unity::Properties::TypeGenerationOptions const& __cordl_internal_get__Options_k__BackingField() const;

  constexpr ::Unity::Properties::TypeGenerationOptions& __cordl_internal_get__Options_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__Type_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__Type_k__BackingField();

  constexpr void __cordl_internal_set__Options_k__BackingField(::Unity::Properties::TypeGenerationOptions value);

  constexpr void __cordl_internal_set__Type_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x696a194, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::Unity::Properties::TypeGenerationOptions options);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GeneratePropertyBagsForTypesQualifiedWithAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GeneratePropertyBagsForTypesQualifiedWithAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GeneratePropertyBagsForTypesQualifiedWithAttribute(GeneratePropertyBagsForTypesQualifiedWithAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GeneratePropertyBagsForTypesQualifiedWithAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GeneratePropertyBagsForTypesQualifiedWithAttribute(GeneratePropertyBagsForTypesQualifiedWithAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19306 };

  /// @brief Field <Type>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____Type_k__BackingField;

  /// @brief Field <Options>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::Unity::Properties::TypeGenerationOptions ____Options_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute, ____Type_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute, ____Options_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute, 0x20>, "Size mismatch!");

} // namespace Unity::Properties
NEED_NO_BOX(::Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::GeneratePropertyBagsForTypesQualifiedWithAttribute*, "Unity.Properties", "GeneratePropertyBagsForTypesQualifiedWithAttribute");
