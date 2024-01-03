#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlListConverter_def.hpp"
CORDL_MODULE_EXPORT(XmlAnyListConverter)
namespace System::Xml::Schema {
class XmlBaseConverter;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlAnyListConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlAnyListConverter);
// Type: System.Xml.Schema::XmlAnyListConverter
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11758))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11757))
// CS Name: ::System.Xml.Schema::XmlAnyListConverter*
class CORDL_TYPE XmlAnyListConverter : public ::System::Xml::Schema::XmlListConverter {
public:
  // Declarations
  /// @brief Field ItemList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ItemList, put = setStaticF_ItemList))::System::Xml::Schema::XmlValueConverter* ItemList;

  /// @brief Field AnyAtomicList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AnyAtomicList, put = setStaticF_AnyAtomicList))::System::Xml::Schema::XmlValueConverter* AnyAtomicList;

  static inline void setStaticF_ItemList(::System::Xml::Schema::XmlValueConverter* value);

  static inline ::System::Xml::Schema::XmlValueConverter* getStaticF_ItemList();

  static inline void setStaticF_AnyAtomicList(::System::Xml::Schema::XmlValueConverter* value);

  static inline ::System::Xml::Schema::XmlValueConverter* getStaticF_AnyAtomicList();

  static inline ::System::Xml::Schema::XmlAnyListConverter* New_ctor(::System::Xml::Schema::XmlBaseConverter* atomicConverter);

  /// @brief Method .ctor, addr 0x28e52f0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlBaseConverter* atomicConverter);

  /// @brief Method ChangeType, addr 0x28e5364, size 0x258, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  // Ctor Parameters [CppParam { name: "", ty: "XmlAnyListConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlAnyListConverter(XmlAnyListConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlAnyListConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlAnyListConverter(XmlAnyListConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlAnyListConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlAnyListConverter, 0x30>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlAnyListConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlAnyListConverter*, "System.Xml.Schema", "XmlAnyListConverter");
