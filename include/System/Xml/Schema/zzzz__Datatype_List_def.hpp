#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_List.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Datatype_List)
namespace System::Xml::Schema {
class DatatypeImplementation;
}
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
class Datatype_List;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_List);
// Type: System.Xml.Schema::Datatype_List
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::Datatype_List*
class CORDL_TYPE Datatype_List : public ::System::Xml::Schema::Datatype_anySimpleType {
public:
  // Declarations
  __declspec(property(get = get_FacetsChecker))::System::Xml::Schema::FacetsChecker* FacetsChecker;

  __declspec(property(get = get_ListValueType))::System::Type* ListValueType;

  __declspec(property(get = get_TokenizedType))::System::Xml::XmlTokenizedType TokenizedType;

  __declspec(property(get = get_TypeCode))::System::Xml::Schema::XmlTypeCode TypeCode;

  __declspec(property(get = get_ValidRestrictionFlags))::System::Xml::Schema::RestrictionFlags ValidRestrictionFlags;

  __declspec(property(get = get_ValueType))::System::Type* ValueType;

  /// @brief Field itemType, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_itemType, put = __cordl_internal_set_itemType))::System::Xml::Schema::DatatypeImplementation* itemType;

  /// @brief Field minListSize, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_minListSize, put = __cordl_internal_set_minListSize)) int32_t minListSize;

  /// @brief Method Compare, addr 0x2f07518, size 0x2a0, virtual true, abstract: false, final false
  inline int32_t Compare(::System::Object* value1, ::System::Object* value2);

  /// @brief Method CreateValueConverter, addr 0x2f07274, size 0x2a4, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType);

  static inline ::System::Xml::Schema::Datatype_List* New_ctor(::System::Xml::Schema::DatatypeImplementation* type, int32_t minListSize);

  /// @brief Method TryParseValue, addr 0x2f07e84, size 0x424, virtual true, abstract: false, final false
  inline ::System::Exception* TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ByRef<::System::Object*> typedValue);

  /// @brief Method TryParseValue, addr 0x2f0788c, size 0x5f8, virtual true, abstract: false, final false
  inline ::System::Exception* TryParseValue(::System::Object* value, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* namespaceResolver,
                                            ByRef<::System::Object*> typedValue);

  constexpr ::System::Xml::Schema::DatatypeImplementation*& __cordl_internal_get_itemType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::DatatypeImplementation*> const& __cordl_internal_get_itemType() const;

  constexpr int32_t const& __cordl_internal_get_minListSize() const;

  constexpr int32_t& __cordl_internal_get_minListSize();

  constexpr void __cordl_internal_set_itemType(::System::Xml::Schema::DatatypeImplementation* value);

  constexpr void __cordl_internal_set_minListSize(int32_t value);

  /// @brief Method .ctor, addr 0x2f062e4, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::DatatypeImplementation* type, int32_t minListSize);

  /// @brief Method get_FacetsChecker, addr 0x2f0780c, size 0x58, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::FacetsChecker* get_FacetsChecker();

  /// @brief Method get_ListValueType, addr 0x2f077e8, size 0x24, virtual true, abstract: false, final false
  inline ::System::Type* get_ListValueType();

  /// @brief Method get_TokenizedType, addr 0x2f077c8, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlTokenizedType get_TokenizedType();

  /// @brief Method get_TypeCode, addr 0x2f07864, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

  /// @brief Method get_ValidRestrictionFlags, addr 0x2f07884, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::RestrictionFlags get_ValidRestrictionFlags();

  /// @brief Method get_ValueType, addr 0x2f077b8, size 0x10, virtual true, abstract: false, final false
  inline ::System::Type* get_ValueType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_List();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Datatype_List", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_List(Datatype_List&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_List", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_List(Datatype_List const&) = delete;

  /// @brief Field itemType, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::Schema::DatatypeImplementation* ___itemType;

  /// @brief Field minListSize, offset: 0x40, size: 0x4, def value: None
  int32_t ___minListSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_List, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::Datatype_List, ___itemType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Datatype_List, ___minListSize) == 0x40, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_List);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_List*, "System.Xml.Schema", "Datatype_List");
