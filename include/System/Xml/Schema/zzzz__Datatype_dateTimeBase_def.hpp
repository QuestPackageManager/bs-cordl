#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
#include "System/Xml/Schema/zzzz__XsdDateTimeFlags_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Datatype_dateTimeBase)
namespace System::Xml::Schema {
class FacetsChecker;
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
namespace System::Xml::Schema {
struct XsdDateTimeFlags;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlNameTable;
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
class Datatype_dateTimeBase;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_dateTimeBase);
// Type: System.Xml.Schema::Datatype_dateTimeBase
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11624)), TypeDefinitionIndex(TypeDefinitionIndex(11759))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11635))
// CS Name: ::System.Xml.Schema::Datatype_dateTimeBase*
class CORDL_TYPE Datatype_dateTimeBase : public ::System::Xml::Schema::Datatype_anySimpleType {
public:
  // Declarations
  /// @brief Field dateTimeFlags, offset 0x38, size 0x4
  __declspec(property(get = __get_dateTimeFlags, put = __set_dateTimeFlags))::System::Xml::Schema::XsdDateTimeFlags dateTimeFlags;

  /// @brief Field atomicValueType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_atomicValueType, put = setStaticF_atomicValueType))::System::Type* atomicValueType;

  /// @brief Field listValueType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_listValueType, put = setStaticF_listValueType))::System::Type* listValueType;

  __declspec(property(get = get_FacetsChecker))::System::Xml::Schema::FacetsChecker* FacetsChecker;

  __declspec(property(get = get_TypeCode))::System::Xml::Schema::XmlTypeCode TypeCode;

  __declspec(property(get = get_ValueType))::System::Type* ValueType;

  __declspec(property(get = get_ListValueType))::System::Type* ListValueType;

  __declspec(property(get = get_BuiltInWhitespaceFacet))::System::Xml::Schema::XmlSchemaWhiteSpace BuiltInWhitespaceFacet;

  constexpr ::System::Xml::Schema::XsdDateTimeFlags& __get_dateTimeFlags();

  constexpr ::System::Xml::Schema::XsdDateTimeFlags const& __get_dateTimeFlags() const;

  constexpr void __set_dateTimeFlags(::System::Xml::Schema::XsdDateTimeFlags value);

  static inline void setStaticF_atomicValueType(::System::Type* value);

  static inline ::System::Type* getStaticF_atomicValueType();

  static inline void setStaticF_listValueType(::System::Type* value);

  static inline ::System::Type* getStaticF_listValueType();

  /// @brief Method CreateValueConverter, addr 0x28b9704, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method get_FacetsChecker, addr 0x28b976c, size 0x58, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::FacetsChecker* get_FacetsChecker();

  /// @brief Method get_TypeCode, addr 0x28b97c4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

  static inline ::System::Xml::Schema::Datatype_dateTimeBase* New_ctor(::System::Xml::Schema::XsdDateTimeFlags dateTimeFlags);

  /// @brief Method .ctor, addr 0x28b97cc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XsdDateTimeFlags dateTimeFlags);

  /// @brief Method get_ValueType, addr 0x28b9834, size 0x58, virtual true, abstract: false, final false
  inline ::System::Type* get_ValueType();

  /// @brief Method get_ListValueType, addr 0x28b988c, size 0x58, virtual true, abstract: false, final false
  inline ::System::Type* get_ListValueType();

  /// @brief Method get_BuiltInWhitespaceFacet, addr 0x28b98e4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet();

  /// @brief Method Compare, addr 0x28b98ec, size 0x108, virtual true, abstract: false, final false
  inline int32_t Compare(::System::Object* value1, ::System::Object* value2);

  /// @brief Method TryParseValue, addr 0x28b99f4, size 0x324, virtual true, abstract: false, final false
  inline ::System::Exception* TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ByRef<::System::Object*> typedValue);

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_dateTimeBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_dateTimeBase(Datatype_dateTimeBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_dateTimeBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_dateTimeBase(Datatype_dateTimeBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_dateTimeBase();

public:
  /// @brief Field dateTimeFlags, offset: 0x38, size: 0x4, def value: None
  ::System::Xml::Schema::XsdDateTimeFlags ___dateTimeFlags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_dateTimeBase, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::Datatype_dateTimeBase, ___dateTimeFlags) == 0x38, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_dateTimeBase);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_dateTimeBase*, "System.Xml.Schema", "Datatype_dateTimeBase");
