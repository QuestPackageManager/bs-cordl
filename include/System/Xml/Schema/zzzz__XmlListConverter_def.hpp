#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlListConverter)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IList;
}
namespace System::Xml::Schema {
class XmlBaseConverter;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml {
class IXmlNamespaceResolver;
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
class XmlListConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlListConverter);
// Type: System.Xml.Schema::XmlListConverter
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlListConverter*
class CORDL_TYPE XmlListConverter : public ::System::Xml::Schema::XmlBaseConverter {
public:
  // Declarations
  /// @brief Field atomicConverter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_atomicConverter, put = __cordl_internal_set_atomicConverter))::System::Xml::Schema::XmlValueConverter* atomicConverter;

  /// @brief Method ChangeListType, addr 0x2a2c260, size 0xdf8, virtual true, abstract: false, final false
  inline ::System::Object* ChangeListType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x2a30bd4, size 0x108, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method Create, addr 0x2a30a28, size 0x1ac, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlValueConverter* atomicConverter);

  /// @brief Method CreateInvalidClrMappingException, addr 0x2a30e6c, size 0x26c, virtual false, abstract: false, final false
  inline ::System::Exception* CreateInvalidClrMappingException(::System::Type* sourceType, ::System::Type* destinationType);

  /// @brief Method IsListType, addr 0x2a30cdc, size 0x190, virtual false, abstract: false, final false
  inline bool IsListType(::System::Type* type);

  /// @brief Method ListAsString, addr 0x2a310d8, size 0x3ac, virtual false, abstract: false, final false
  inline ::StringW ListAsString(::System::Collections::IEnumerable* list, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  static inline ::System::Xml::Schema::XmlListConverter* New_ctor(::System::Xml::Schema::XmlBaseConverter* atomicConverter);

  static inline ::System::Xml::Schema::XmlListConverter* New_ctor(::System::Xml::Schema::XmlBaseConverter* atomicConverter, ::System::Type* clrTypeDefault);

  static inline ::System::Xml::Schema::XmlListConverter* New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method StringAsList, addr 0x2a31484, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* StringAsList(::StringW value);

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> ToArray(::System::Object* list, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ToList, addr 0x2a31534, size 0x644, virtual false, abstract: false, final false
  inline ::System::Collections::IList* ToList(::System::Object* list, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  constexpr ::System::Xml::Schema::XmlValueConverter*& __cordl_internal_get_atomicConverter();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlValueConverter*> const& __cordl_internal_get_atomicConverter() const;

  constexpr void __cordl_internal_set_atomicConverter(::System::Xml::Schema::XmlValueConverter* value);

  /// @brief Method .ctor, addr 0x2a30610, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlBaseConverter* atomicConverter);

  /// @brief Method .ctor, addr 0x2a26654, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlBaseConverter* atomicConverter, ::System::Type* clrTypeDefault);

  /// @brief Method .ctor, addr 0x2a26554, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaType* schemaType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlListConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlListConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlListConverter(XmlListConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlListConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlListConverter(XmlListConverter const&) = delete;

  /// @brief Field atomicConverter, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::XmlValueConverter* ___atomicConverter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlListConverter, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlListConverter, ___atomicConverter) == 0x28, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlListConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlListConverter*, "System.Xml.Schema", "XmlListConverter");
