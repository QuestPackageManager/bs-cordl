#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Datatype_List)
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System {
class Type;
}
namespace System::Xml::Schema {
class DatatypeImplementation;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System {
class Exception;
}
namespace System::Xml {
struct XmlTokenizedType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_List;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_List);
// Type: System.Xml.Schema::Datatype_List
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11624))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11622))
// CS Name: ::System.Xml.Schema::Datatype_List*
class CORDL_TYPE Datatype_List : public ::System::Xml::Schema::Datatype_anySimpleType {
public:
  // Declarations
  /// @brief Field itemType, offset 0x38, size 0x8
  __declspec(property(get = __get_itemType, put = __set_itemType))::System::Xml::Schema::DatatypeImplementation* itemType;

  /// @brief Field minListSize, offset 0x40, size 0x4
  __declspec(property(get = __get_minListSize, put = __set_minListSize)) int32_t minListSize;

  __declspec(property(get = get_ValueType))::System::Type* ValueType;

  __declspec(property(get = get_TokenizedType))::System::Xml::XmlTokenizedType TokenizedType;

  __declspec(property(get = get_ListValueType))::System::Type* ListValueType;

  __declspec(property(get = get_FacetsChecker))::System::Xml::Schema::FacetsChecker* FacetsChecker;

  __declspec(property(get = get_TypeCode))::System::Xml::Schema::XmlTypeCode TypeCode;

  constexpr ::System::Xml::Schema::DatatypeImplementation*& __get_itemType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::DatatypeImplementation*> const& __get_itemType() const;

  constexpr void __set_itemType(::System::Xml::Schema::DatatypeImplementation* value);

  constexpr int32_t& __get_minListSize();

  constexpr int32_t const& __get_minListSize() const;

  constexpr void __set_minListSize(int32_t value);

  /// @brief Method CreateValueConverter addr 0x28b59e0 size 0x2a4 virtual true final false
  inline ::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType);

  static inline ::System::Xml::Schema::Datatype_List* New_ctor(::System::Xml::Schema::DatatypeImplementation* type, int32_t minListSize);

  /// @brief Method .ctor addr 0x28b54b0 size 0x74 virtual false final false
  inline void _ctor(::System::Xml::Schema::DatatypeImplementation* type, int32_t minListSize);

  /// @brief Method Compare addr 0x28b5c84 size 0x29c virtual true final false
  inline int32_t Compare(::System::Object* value1, ::System::Object* value2);

  /// @brief Method get_ValueType addr 0x28b5f20 size 0x10 virtual true final false
  inline ::System::Type* get_ValueType();

  /// @brief Method get_TokenizedType addr 0x28b5f30 size 0x20 virtual true final false
  inline ::System::Xml::XmlTokenizedType get_TokenizedType();

  /// @brief Method get_ListValueType addr 0x28b5f50 size 0x24 virtual true final false
  inline ::System::Type* get_ListValueType();

  /// @brief Method get_FacetsChecker addr 0x28b5f74 size 0x58 virtual true final false
  inline ::System::Xml::Schema::FacetsChecker* get_FacetsChecker();

  /// @brief Method get_TypeCode addr 0x28b5fcc size 0x20 virtual true final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

  /// @brief Method TryParseValue addr 0x28b5fec size 0x1418 virtual true final false
  inline ::System::Exception* TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ByRef<::System::Object*> typedValue);

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_List", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_List(Datatype_List&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_List", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_List(Datatype_List const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_List();

public:
  /// @brief Field itemType, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::Schema::DatatypeImplementation* ___itemType;

  /// @brief Field minListSize, offset: 0x40, size: 0x4, def value: None
  int32_t ___minListSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_List, 0x48>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_List);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_List*, "System.Xml.Schema", "Datatype_List");
