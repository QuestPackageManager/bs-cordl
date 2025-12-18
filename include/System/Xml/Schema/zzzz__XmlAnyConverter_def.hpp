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
// Dependencies System.Xml.Schema.XmlBaseConverter
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlAnyConverter
class CORDL_TYPE XmlAnyConverter : public ::System::Xml::Schema::XmlBaseConverter {
public:
  // Declarations
  /// @brief Field AnyAtomic, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AnyAtomic, put = setStaticF_AnyAtomic)) ::System::Xml::Schema::XmlValueConverter* AnyAtomic;

  /// @brief Field Item, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Item, put = setStaticF_Item)) ::System::Xml::Schema::XmlValueConverter* Item;

  /// @brief Method ChangeType, addr 0x60aa400, size 0x1c8, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x60a9ae0, size 0x1c8, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::DateTime value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x60a9ca8, size 0x23c, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Decimal value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x60aa5c8, size 0x1284, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x60a97d8, size 0x1b8, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(bool value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x60a9ee4, size 0x1b4, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(double_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x60aa098, size 0x1b4, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(int32_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x60aa24c, size 0x1b4, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(int64_t value, ::System::Type* destinationType);

  /// @brief Method ChangeTypeWildcardDestination, addr 0x60a8b58, size 0x128, virtual false, abstract: false, final false
  inline ::System::Object* ChangeTypeWildcardDestination(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeTypeWildcardSource, addr 0x60a9990, size 0x150, virtual false, abstract: false, final false
  inline ::System::Object* ChangeTypeWildcardSource(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  static inline ::System::Xml::Schema::XmlAnyConverter* New_ctor(::System::Xml::Schema::XmlTypeCode typeCode);

  /// @brief Method ToBoolean, addr 0x60a89cc, size 0x18c, virtual true, abstract: false, final false
  inline bool ToBoolean(::System::Object* value);

  /// @brief Method ToDateTime, addr 0x60a8c80, size 0x1a0, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(::System::Object* value);

  /// @brief Method ToDateTimeOffset, addr 0x60a8e20, size 0x1b8, virtual true, abstract: false, final false
  inline ::System::DateTimeOffset ToDateTimeOffset(::System::Object* value);

  /// @brief Method ToDecimal, addr 0x60a8fd8, size 0x1b8, virtual true, abstract: false, final false
  inline ::System::Decimal ToDecimal(::System::Object* value);

  /// @brief Method ToDouble, addr 0x60a9190, size 0x18c, virtual true, abstract: false, final false
  inline double_t ToDouble(::System::Object* value);

  /// @brief Method ToInt32, addr 0x60a931c, size 0x18c, virtual true, abstract: false, final false
  inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt64, addr 0x60a94a8, size 0x18c, virtual true, abstract: false, final false
  inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToNavigator, addr 0x60ab84c, size 0x80, virtual false, abstract: false, final false
  inline ::System::Xml::XPath::XPathNavigator* ToNavigator(::System::Xml::XPath::XPathNavigator* nav);

  /// @brief Method ToSingle, addr 0x60a9634, size 0x1a4, virtual true, abstract: false, final false
  inline float_t ToSingle(::System::Object* value);

  /// @brief Method .ctor, addr 0x60a8960, size 0x6c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9819 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlAnyConverter, 0x28>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlAnyConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlAnyConverter*, "System.Xml.Schema", "XmlAnyConverter");
