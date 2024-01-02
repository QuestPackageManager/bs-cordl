#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(DataContractAttribute)
// Forward declare root types
namespace System::Runtime::Serialization {
class DataContractAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::DataContractAttribute);
// Type: System.Runtime.Serialization::DataContractAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16239))
// CS Name: ::System.Runtime.Serialization::DataContractAttribute*
class CORDL_TYPE DataContractAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field isReference, offset 0x10, size 0x1
  __declspec(property(get = __get_isReference, put = __set_isReference)) bool isReference;

  __declspec(property(get = get_IsReference)) bool IsReference;

  constexpr bool& __get_isReference();

  constexpr bool const& __get_isReference() const;

  constexpr void __set_isReference(bool value);

  /// @brief Method get_IsReference, addr 0x284d5f4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsReference();

  // Ctor Parameters [CppParam { name: "", ty: "DataContractAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataContractAttribute(DataContractAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataContractAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataContractAttribute(DataContractAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataContractAttribute();

public:
  /// @brief Field isReference, offset: 0x10, size: 0x1, def value: None
  bool ___isReference;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::DataContractAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::DataContractAttribute, ___isReference) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::DataContractAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::DataContractAttribute*, "System.Runtime.Serialization", "DataContractAttribute");
