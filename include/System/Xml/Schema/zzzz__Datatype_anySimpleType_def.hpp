#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_anySimpleType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__DatatypeImplementation_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Datatype_anySimpleType)
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System::Xml::Schema {
struct RestrictionFlags;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
struct XmlTokenizedType;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_anySimpleType;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_anySimpleType);
// Dependencies System.Xml.Schema.DatatypeImplementation
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.Datatype_anySimpleType
class CORDL_TYPE Datatype_anySimpleType : public ::System::Xml::Schema::DatatypeImplementation {
public:
  // Declarations
  __declspec(property(get = get_BuiltInWhitespaceFacet)) ::System::Xml::Schema::XmlSchemaWhiteSpace BuiltInWhitespaceFacet;

  __declspec(property(get = get_FacetsChecker)) ::System::Xml::Schema::FacetsChecker* FacetsChecker;

  __declspec(property(get = get_ListValueType)) ::System::Type* ListValueType;

  __declspec(property(get = get_TokenizedType)) ::System::Xml::XmlTokenizedType TokenizedType;

  __declspec(property(get = get_TypeCode)) ::System::Xml::Schema::XmlTypeCode TypeCode;

  __declspec(property(get = get_ValidRestrictionFlags)) ::System::Xml::Schema::RestrictionFlags ValidRestrictionFlags;

  __declspec(property(get = get_ValueType)) ::System::Type* ValueType;

  /// @brief Field atomicValueType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_atomicValueType, put = setStaticF_atomicValueType)) ::System::Type* atomicValueType;

  /// @brief Field listValueType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_listValueType, put = setStaticF_listValueType)) ::System::Type* listValueType;

  /// @brief Method Compare, addr 0x43a9e4c, size 0x5c, virtual true, abstract: false, final false
  inline int32_t Compare(::System::Object* value1, ::System::Object* value2);

  /// @brief Method CreateValueConverter, addr 0x43a9ccc, size 0x58, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType);

  static inline ::System::Xml::Schema::Datatype_anySimpleType* New_ctor();

  /// @brief Method TryParseValue, addr 0x43a9ea8, size 0x24, virtual true, abstract: false, final false
  inline ::System::Exception* TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::ByRef<::System::Object*> typedValue);

  /// @brief Method .ctor, addr 0x43a4e90, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Type* getStaticF_atomicValueType();

  static inline ::System::Type* getStaticF_listValueType();

  /// @brief Method get_BuiltInWhitespaceFacet, addr 0x43a9e44, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet();

  /// @brief Method get_FacetsChecker, addr 0x43a9d24, size 0x58, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::FacetsChecker* get_FacetsChecker();

  /// @brief Method get_ListValueType, addr 0x43a9ddc, size 0x58, virtual true, abstract: false, final false
  inline ::System::Type* get_ListValueType();

  /// @brief Method get_TokenizedType, addr 0x43a9e34, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlTokenizedType get_TokenizedType();

  /// @brief Method get_TypeCode, addr 0x43a9dd4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

  /// @brief Method get_ValidRestrictionFlags, addr 0x43a9e3c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::RestrictionFlags get_ValidRestrictionFlags();

  /// @brief Method get_ValueType, addr 0x43a9d7c, size 0x58, virtual true, abstract: false, final false
  inline ::System::Type* get_ValueType();

  static inline void setStaticF_atomicValueType(::System::Type* value);

  static inline void setStaticF_listValueType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_anySimpleType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Datatype_anySimpleType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_anySimpleType(Datatype_anySimpleType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_anySimpleType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_anySimpleType(Datatype_anySimpleType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7526 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_anySimpleType, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_anySimpleType);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_anySimpleType*, "System.Xml.Schema", "Datatype_anySimpleType");
