#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlAnyConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlAnyConverter)
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml::XPath {
class XPathNavigator;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlAnyConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlAnyConverter);
// Type: System.Xml.Schema::XmlAnyConverter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlAnyConverter*
class CORDL_TYPE XmlAnyConverter : public ::System::Xml::Schema::XmlBaseConverter {
public:
  // Declarations
  /// @brief Field AnyAtomic, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AnyAtomic, put = setStaticF_AnyAtomic)) ::System::Xml::Schema::XmlValueConverter* AnyAtomic;

  /// @brief Field Item, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Item, put = setStaticF_Item)) ::System::Xml::Schema::XmlValueConverter* Item;

  /// @brief Method ChangeType, addr 0x428c104, size 0x1f8, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x428b718, size 0x1ec, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::DateTime value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x428b904, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Decimal value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x428c2fc, size 0x14c8, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x428b3c4, size 0x1f0, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(bool value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x428bb40, size 0x1ec, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(double_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x428bd2c, size 0x1ec, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(int32_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x428bf18, size 0x1ec, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(int64_t value, ::System::Type* destinationType);

  /// @brief Method ChangeTypeWildcardDestination, addr 0x428a694, size 0x13c, virtual false, abstract: false, final false
  inline ::System::Object* ChangeTypeWildcardDestination(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeTypeWildcardSource, addr 0x428b5b4, size 0x164, virtual false, abstract: false, final false
  inline ::System::Object* ChangeTypeWildcardSource(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  static inline ::System::Xml::Schema::XmlAnyConverter* New_ctor(::System::Xml::Schema::XmlTypeCode typeCode);

  /// @brief Method ToBoolean, addr 0x428a4e4, size 0x1b0, virtual true, abstract: false, final false
  inline bool ToBoolean(::System::Object* value);

  /// @brief Method ToDateTime, addr 0x428a7d0, size 0x1b0, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(::System::Object* value);

  /// @brief Method ToDateTimeOffset, addr 0x428a980, size 0x1bc, virtual true, abstract: false, final false
  inline ::System::DateTimeOffset ToDateTimeOffset(::System::Object* value);

  /// @brief Method ToDecimal, addr 0x428ab3c, size 0x1bc, virtual true, abstract: false, final false
  inline ::System::Decimal ToDecimal(::System::Object* value);

  /// @brief Method ToDouble, addr 0x428acf8, size 0x1b0, virtual true, abstract: false, final false
  inline double_t ToDouble(::System::Object* value);

  /// @brief Method ToInt32, addr 0x428aea8, size 0x1b0, virtual true, abstract: false, final false
  inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt64, addr 0x428b058, size 0x1b0, virtual true, abstract: false, final false
  inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToNavigator, addr 0x428d7c4, size 0x88, virtual false, abstract: false, final false
  inline ::System::Xml::XPath::XPathNavigator* ToNavigator(::System::Xml::XPath::XPathNavigator* nav);

  /// @brief Method ToSingle, addr 0x428b208, size 0x1bc, virtual true, abstract: false, final false
  inline float_t ToSingle(::System::Object* value);

  /// @brief Method .ctor, addr 0x428a47c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlTypeCode typeCode);

  static inline ::System::Xml::Schema::XmlValueConverter* getStaticF_AnyAtomic();

  static inline ::System::Xml::Schema::XmlValueConverter* getStaticF_Item();

  static inline void setStaticF_AnyAtomic(::System::Xml::Schema::XmlValueConverter* value);

  static inline void setStaticF_Item(::System::Xml::Schema::XmlValueConverter* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlAnyConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlAnyConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlAnyConverter(XmlAnyConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlAnyConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlAnyConverter(XmlAnyConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7721 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlAnyConverter, 0x28>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlAnyConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlAnyConverter*, "System.Xml.Schema", "XmlAnyConverter");
