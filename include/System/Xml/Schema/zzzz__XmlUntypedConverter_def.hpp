#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlUntypedConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlListConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlUntypedConverter)
namespace System::Xml::Schema {
class XmlValueConverter;
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
class XmlUntypedConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlUntypedConverter);
// Dependencies System.Xml.Schema.XmlListConverter
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlUntypedConverter
class CORDL_TYPE XmlUntypedConverter : public ::System::Xml::Schema::XmlListConverter {
public:
  // Declarations
  /// @brief Field Untyped, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Untyped, put = setStaticF_Untyped)) ::System::Xml::Schema::XmlValueConverter* Untyped;

  /// @brief Field UntypedList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UntypedList, put = setStaticF_UntypedList)) ::System::Xml::Schema::XmlValueConverter* UntypedList;

  /// @brief Field allowListToList, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_allowListToList, put = __cordl_internal_set_allowListToList)) bool allowListToList;

  /// @brief Method ChangeListType, addr 0x60a74c8, size 0x2cc, virtual true, abstract: false, final false
  inline ::System::Object* ChangeListType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x60a5624, size 0xb30, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x60a4d8c, size 0x194, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::DateTime value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x60a4f20, size 0x20c, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Decimal value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x60a6154, size 0x1374, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x60a4a8c, size 0x19c, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(bool value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x60a512c, size 0x198, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(double_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x60a52c4, size 0x1b0, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(int32_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x60a5474, size 0x1b0, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(int64_t value, ::System::Type* destinationType);

  /// @brief Method ChangeTypeWildcardDestination, addr 0x60a2a6c, size 0x128, virtual false, abstract: false, final false
  inline ::System::Object* ChangeTypeWildcardDestination(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeTypeWildcardSource, addr 0x60a4c28, size 0x164, virtual false, abstract: false, final false
  inline ::System::Object* ChangeTypeWildcardSource(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  static inline ::System::Xml::Schema::XmlUntypedConverter* New_ctor();

  static inline ::System::Xml::Schema::XmlUntypedConverter* New_ctor(::System::Xml::Schema::XmlUntypedConverter* atomicConverter, bool allowListToList);

  /// @brief Method SupportsType, addr 0x60a7794, size 0x448, virtual false, abstract: false, final false
  inline bool SupportsType(::System::Type* clrType);

  /// @brief Method ToBoolean, addr 0x60a2830, size 0xa8, virtual true, abstract: false, final false
  inline bool ToBoolean(::StringW value);

  /// @brief Method ToBoolean, addr 0x60a28d8, size 0x194, virtual true, abstract: false, final false
  inline bool ToBoolean(::System::Object* value);

  /// @brief Method ToDateTime, addr 0x60a2b94, size 0xa8, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(::StringW value);

  /// @brief Method ToDateTime, addr 0x60a2c3c, size 0x190, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(::System::Object* value);

  /// @brief Method ToDateTimeOffset, addr 0x60a2dcc, size 0xa8, virtual true, abstract: false, final false
  inline ::System::DateTimeOffset ToDateTimeOffset(::StringW value);

  /// @brief Method ToDateTimeOffset, addr 0x60a2e74, size 0x190, virtual true, abstract: false, final false
  inline ::System::DateTimeOffset ToDateTimeOffset(::System::Object* value);

  /// @brief Method ToDecimal, addr 0x60a3004, size 0xa8, virtual true, abstract: false, final false
  inline ::System::Decimal ToDecimal(::StringW value);

  /// @brief Method ToDecimal, addr 0x60a30ac, size 0x1a8, virtual true, abstract: false, final false
  inline ::System::Decimal ToDecimal(::System::Object* value);

  /// @brief Method ToDouble, addr 0x60a3254, size 0xa8, virtual true, abstract: false, final false
  inline double_t ToDouble(::StringW value);

  /// @brief Method ToDouble, addr 0x60a32fc, size 0x194, virtual true, abstract: false, final false
  inline double_t ToDouble(::System::Object* value);

  /// @brief Method ToInt32, addr 0x60a3490, size 0xb8, virtual true, abstract: false, final false
  inline int32_t ToInt32(::StringW value);

  /// @brief Method ToInt32, addr 0x60a3548, size 0x1ac, virtual true, abstract: false, final false
  inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt64, addr 0x60a36f4, size 0xb8, virtual true, abstract: false, final false
  inline int64_t ToInt64(::StringW value);

  /// @brief Method ToInt64, addr 0x60a37ac, size 0x1ac, virtual true, abstract: false, final false
  inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToSingle, addr 0x60a3958, size 0xa8, virtual true, abstract: false, final false
  inline float_t ToSingle(::StringW value);

  /// @brief Method ToSingle, addr 0x60a3a00, size 0x194, virtual true, abstract: false, final false
  inline float_t ToSingle(::System::Object* value);

  /// @brief Method ToString, addr 0x60a3bf0, size 0x5c, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::DateTime value);

  /// @brief Method ToString, addr 0x60a3c4c, size 0x6c, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::DateTimeOffset value);

  /// @brief Method ToString, addr 0x60a3cb8, size 0x6c, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Decimal value);

  /// @brief Method ToString, addr 0x60a3ee4, size 0xba8, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ToString, addr 0x60a3b94, size 0x5c, virtual true, abstract: false, final false
  inline ::StringW ToString(bool value);

  /// @brief Method ToString, addr 0x60a3d24, size 0x64, virtual true, abstract: false, final false
  inline ::StringW ToString(double_t value);

  /// @brief Method ToString, addr 0x60a3e80, size 0x64, virtual true, abstract: false, final false
  inline ::StringW ToString(float_t value);

  /// @brief Method ToString, addr 0x60a3d88, size 0x7c, virtual true, abstract: false, final false
  inline ::StringW ToString(int32_t value);

  /// @brief Method ToString, addr 0x60a3e04, size 0x7c, virtual true, abstract: false, final false
  inline ::StringW ToString(int64_t value);

  constexpr bool const& __cordl_internal_get_allowListToList() const;

  constexpr bool& __cordl_internal_get_allowListToList();

  constexpr void __cordl_internal_set_allowListToList(bool value);

  /// @brief Method .ctor, addr 0x60a25fc, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x60a270c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlUntypedConverter* atomicConverter, bool allowListToList);

  static inline ::System::Xml::Schema::XmlValueConverter* getStaticF_Untyped();

  static inline ::System::Xml::Schema::XmlValueConverter* getStaticF_UntypedList();

  static inline void setStaticF_Untyped(::System::Xml::Schema::XmlValueConverter* value);

  static inline void setStaticF_UntypedList(::System::Xml::Schema::XmlValueConverter* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlUntypedConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlUntypedConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlUntypedConverter(XmlUntypedConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlUntypedConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlUntypedConverter(XmlUntypedConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9818 };

  /// @brief Field allowListToList, offset: 0x30, size: 0x1, def value: None
  bool ___allowListToList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlUntypedConverter, ___allowListToList) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlUntypedConverter, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlUntypedConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlUntypedConverter*, "System.Xml.Schema", "XmlUntypedConverter");
