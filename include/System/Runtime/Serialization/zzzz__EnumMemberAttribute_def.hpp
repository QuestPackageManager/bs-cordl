#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnumMemberAttribute)
// Forward declare root types
namespace System::Runtime::Serialization {
class EnumMemberAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::EnumMemberAttribute);
// Type: System.Runtime.Serialization::EnumMemberAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16241))
// CS Name: ::System.Runtime.Serialization::EnumMemberAttribute*
class CORDL_TYPE EnumMemberAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __get_value, put = __set_value))::StringW value;

  __declspec(property(get = get_Value))::StringW Value;

  constexpr ::StringW& __get_value();

  constexpr ::StringW const& __get_value() const;

  constexpr void __set_value(::StringW value);

  /// @brief Method get_Value addr 0x284d61c size 0x8 virtual false final false
  inline ::StringW get_Value();

  // Ctor Parameters [CppParam { name: "", ty: "EnumMemberAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumMemberAttribute(EnumMemberAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumMemberAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumMemberAttribute(EnumMemberAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumMemberAttribute();

public:
  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::StringW ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::EnumMemberAttribute, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::EnumMemberAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::EnumMemberAttribute*, "System.Runtime.Serialization", "EnumMemberAttribute");
