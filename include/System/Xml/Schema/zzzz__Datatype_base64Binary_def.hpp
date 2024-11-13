#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_base64Binary.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Datatype_base64Binary)
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
class Datatype_base64Binary;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_base64Binary);
// Type: System.Xml.Schema::Datatype_base64Binary
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::Datatype_base64Binary*
class CORDL_TYPE Datatype_base64Binary : public ::System::Xml::Schema::Datatype_anySimpleType {
public:
  // Declarations
  __declspec(property(get = get_BuiltInWhitespaceFacet)) ::System::Xml::Schema::XmlSchemaWhiteSpace BuiltInWhitespaceFacet;

  __declspec(property(get = get_FacetsChecker)) ::System::Xml::Schema::FacetsChecker* FacetsChecker;

  __declspec(property(get = get_ListValueType)) ::System::Type* ListValueType;

  __declspec(property(get = get_TypeCode)) ::System::Xml::Schema::XmlTypeCode TypeCode;

  __declspec(property(get = get_ValidRestrictionFlags)) ::System::Xml::Schema::RestrictionFlags ValidRestrictionFlags;

  __declspec(property(get = get_ValueType)) ::System::Type* ValueType;

  /// @brief Field atomicValueType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_atomicValueType, put = setStaticF_atomicValueType)) ::System::Type* atomicValueType;

  /// @brief Field listValueType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_listValueType, put = setStaticF_listValueType)) ::System::Type* listValueType;

  /// @brief Method Compare, addr 0x4349cc4, size 0xa8, virtual true, abstract: false, final false
  inline int32_t Compare(::System::Object* value1, ::System::Object* value2);

  /// @brief Method CreateValueConverter, addr 0x4349b98, size 0xc, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType);

  static inline ::System::Xml::Schema::Datatype_base64Binary* New_ctor();

  /// @brief Method TryParseValue, addr 0x4349d6c, size 0x1a0, virtual true, abstract: false, final false
  inline ::System::Exception* TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ByRef<::System::Object*> typedValue);

  /// @brief Method .ctor, addr 0x43425e8, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Type* getStaticF_atomicValueType();

  static inline ::System::Type* getStaticF_listValueType();

  /// @brief Method get_BuiltInWhitespaceFacet, addr 0x4349cb4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet();

  /// @brief Method get_FacetsChecker, addr 0x4349ba4, size 0x58, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::FacetsChecker* get_FacetsChecker();

  /// @brief Method get_ListValueType, addr 0x4349c5c, size 0x58, virtual true, abstract: false, final false
  inline ::System::Type* get_ListValueType();

  /// @brief Method get_TypeCode, addr 0x4349bfc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

  /// @brief Method get_ValidRestrictionFlags, addr 0x4349cbc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::RestrictionFlags get_ValidRestrictionFlags();

  /// @brief Method get_ValueType, addr 0x4349c04, size 0x58, virtual true, abstract: false, final false
  inline ::System::Type* get_ValueType();

  static inline void setStaticF_atomicValueType(::System::Type* value);

  static inline void setStaticF_listValueType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_base64Binary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Datatype_base64Binary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_base64Binary(Datatype_base64Binary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_base64Binary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_base64Binary(Datatype_base64Binary const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7521 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_base64Binary, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_base64Binary);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_base64Binary*, "System.Xml.Schema", "Datatype_base64Binary");
