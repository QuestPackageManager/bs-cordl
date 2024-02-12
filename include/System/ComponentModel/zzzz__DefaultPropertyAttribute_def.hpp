#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultPropertyAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class DefaultPropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DefaultPropertyAttribute);
// Type: System.ComponentModel::DefaultPropertyAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2547))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7428))
// CS Name: ::System.ComponentModel::DefaultPropertyAttribute*
class CORDL_TYPE DefaultPropertyAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField))::StringW _Name_k__BackingField;

  /// @brief Field Default, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Default, put = setStaticF_Default))::System::ComponentModel::DefaultPropertyAttribute* Default;

  __declspec(property(get = get_Name))::StringW Name;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  static inline void setStaticF_Default(::System::ComponentModel::DefaultPropertyAttribute* value);

  static inline ::System::ComponentModel::DefaultPropertyAttribute* getStaticF_Default();

  static inline ::System::ComponentModel::DefaultPropertyAttribute* New_ctor(::StringW name);

  /// @brief Method .ctor, addr 0x2912be8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method get_Name, addr 0x2912c10, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method Equals, addr 0x2912c18, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2912c98, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "DefaultPropertyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultPropertyAttribute(DefaultPropertyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultPropertyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultPropertyAttribute(DefaultPropertyAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultPropertyAttribute();

public:
  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DefaultPropertyAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::DefaultPropertyAttribute, ____Name_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DefaultPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DefaultPropertyAttribute*, "System.ComponentModel", "DefaultPropertyAttribute");
