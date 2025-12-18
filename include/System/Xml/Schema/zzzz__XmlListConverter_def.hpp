#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlListConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
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
// Dependencies System.Xml.Schema.XmlBaseConverter
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlListConverter
class CORDL_TYPE XmlListConverter : public ::System::Xml::Schema::XmlBaseConverter {
public:
  // Declarations
  /// @brief Field atomicConverter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_atomicConverter, put = __cordl_internal_set_atomicConverter)) ::System::Xml::Schema::XmlValueConverter* atomicConverter;

  /// @brief Method ChangeListType, addr 0x60a7bdc, size 0xcdc, virtual true, abstract: false, final false
  inline ::System::Object* ChangeListType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x60abef8, size 0xcc, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method Create, addr 0x60abd3c, size 0x1bc, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlValueConverter* atomicConverter);

  /// @brief Method CreateInvalidClrMappingException, addr 0x60ac120, size 0x264, virtual false, abstract: false, final false
  inline ::System::Exception* CreateInvalidClrMappingException(::System::Type* sourceType, ::System::Type* destinationType);

  /// @brief Method IsListType, addr 0x60abfc4, size 0x15c, virtual false, abstract: false, final false
  inline bool IsListType(::System::Type* type);

  /// @brief Method ListAsString, addr 0x60ac384, size 0x384, virtual false, abstract: false, final false
  inline ::StringW ListAsString(::System::Collections::IEnumerable* list, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  static inline ::System::Xml::Schema::XmlListConverter* New_ctor(::System::Xml::Schema::XmlBaseConverter* atomicConverter);

  static inline ::System::Xml::Schema::XmlListConverter* New_ctor(::System::Xml::Schema::XmlBaseConverter* atomicConverter, ::System::Type* clrTypeDefault);

  static inline ::System::Xml::Schema::XmlListConverter* New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method StringAsList, addr 0x60ac708, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* StringAsList(::StringW value);

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ArrayW<T, ::Array<T>*> ToArray(::System::Object* list, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ToList, addr 0x60ac7bc, size 0x640, virtual false, abstract: false, final false
  inline ::System::Collections::IList* ToList(::System::Object* list, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  constexpr ::System::Xml::Schema::XmlValueConverter* const& __cordl_internal_get_atomicConverter() const;

  constexpr ::System::Xml::Schema::XmlValueConverter*& __cordl_internal_get_atomicConverter();

  constexpr void __cordl_internal_set_atomicConverter(::System::Xml::Schema::XmlValueConverter* value);

  /// @brief Method .ctor, addr 0x60ab950, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlBaseConverter* atomicConverter);

  /// @brief Method .ctor, addr 0x60a27b0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlBaseConverter* atomicConverter, ::System::Type* clrTypeDefault);

  /// @brief Method .ctor, addr 0x60a26a0, size 0x6c, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9821 };

  /// @brief Field atomicConverter, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::XmlValueConverter* ___atomicConverter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlListConverter, ___atomicConverter) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlListConverter, 0x30>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlListConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlListConverter*, "System.Xml.Schema", "XmlListConverter");
