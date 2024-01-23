#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(Datatype_union)
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_union;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_union);
// Type: System.Xml.Schema::Datatype_union
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11624))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11623))
// CS Name: ::System.Xml.Schema::Datatype_union*
class CORDL_TYPE Datatype_union : public ::System::Xml::Schema::Datatype_anySimpleType {
public:
  // Declarations
  /// @brief Field types, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_types,
                      put = __cordl_internal_set_types))::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> types;

  /// @brief Field atomicValueType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_atomicValueType, put = setStaticF_atomicValueType))::System::Type* atomicValueType;

  /// @brief Field listValueType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_listValueType, put = setStaticF_listValueType))::System::Type* listValueType;

  constexpr ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*>& __cordl_internal_get_types();

  constexpr ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> const& __cordl_internal_get_types() const;

  constexpr void __cordl_internal_set_types(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> value);

  static inline void setStaticF_atomicValueType(::System::Type* value);

  static inline ::System::Type* getStaticF_atomicValueType();

  static inline void setStaticF_listValueType(::System::Type* value);

  static inline ::System::Type* getStaticF_listValueType();

  /// @brief Method HasAtomicMembers, addr 0x28b7404, size 0x80, virtual false, abstract: false, final false
  inline bool HasAtomicMembers();

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_union", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_union(Datatype_union&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_union", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_union(Datatype_union const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_union();

public:
  /// @brief Field types, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> ___types;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_union, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::Datatype_union, ___types) == 0x38, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_union);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_union*, "System.Xml.Schema", "Datatype_union");
