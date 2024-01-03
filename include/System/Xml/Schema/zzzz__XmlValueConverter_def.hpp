#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlValueConverter)
namespace System {
class Object;
}
namespace System {
struct DateTime;
}
namespace System {
class Type;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlValueConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlValueConverter);
// Type: System.Xml.Schema::XmlValueConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11747))
// CS Name: ::System.Xml.Schema::XmlValueConverter*
class CORDL_TYPE XmlValueConverter : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToBoolean, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool ToBoolean(int64_t value);

  /// @brief Method ToBoolean, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool ToBoolean(int32_t value);

  /// @brief Method ToBoolean, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool ToBoolean(double_t value);

  /// @brief Method ToBoolean, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool ToBoolean(::System::DateTime value);

  /// @brief Method ToBoolean, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool ToBoolean(::StringW value);

  /// @brief Method ToBoolean, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool ToBoolean(::System::Object* value);

  /// @brief Method ToInt32, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t ToInt32(bool value);

  /// @brief Method ToInt32, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t ToInt32(int64_t value);

  /// @brief Method ToInt32, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t ToInt32(double_t value);

  /// @brief Method ToInt32, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t ToInt32(::System::DateTime value);

  /// @brief Method ToInt32, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t ToInt32(::StringW value);

  /// @brief Method ToInt32, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt64, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t ToInt64(bool value);

  /// @brief Method ToInt64, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t ToInt64(int32_t value);

  /// @brief Method ToInt64, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t ToInt64(double_t value);

  /// @brief Method ToInt64, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t ToInt64(::System::DateTime value);

  /// @brief Method ToInt64, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t ToInt64(::StringW value);

  /// @brief Method ToInt64, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToDecimal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Decimal ToDecimal(::StringW value);

  /// @brief Method ToDecimal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Decimal ToDecimal(::System::Object* value);

  /// @brief Method ToDouble, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline double_t ToDouble(bool value);

  /// @brief Method ToDouble, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline double_t ToDouble(int32_t value);

  /// @brief Method ToDouble, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline double_t ToDouble(int64_t value);

  /// @brief Method ToDouble, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline double_t ToDouble(::System::DateTime value);

  /// @brief Method ToDouble, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline double_t ToDouble(::StringW value);

  /// @brief Method ToDouble, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline double_t ToDouble(::System::Object* value);

  /// @brief Method ToSingle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t ToSingle(double_t value);

  /// @brief Method ToSingle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t ToSingle(::StringW value);

  /// @brief Method ToSingle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t ToSingle(::System::Object* value);

  /// @brief Method ToDateTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::DateTime ToDateTime(bool value);

  /// @brief Method ToDateTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::DateTime ToDateTime(int32_t value);

  /// @brief Method ToDateTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::DateTime ToDateTime(int64_t value);

  /// @brief Method ToDateTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::DateTime ToDateTime(double_t value);

  /// @brief Method ToDateTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::DateTime ToDateTime(::System::DateTimeOffset value);

  /// @brief Method ToDateTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::DateTime ToDateTime(::StringW value);

  /// @brief Method ToDateTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::DateTime ToDateTime(::System::Object* value);

  /// @brief Method ToDateTimeOffset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::DateTimeOffset ToDateTimeOffset(::System::DateTime value);

  /// @brief Method ToDateTimeOffset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::DateTimeOffset ToDateTimeOffset(::StringW value);

  /// @brief Method ToDateTimeOffset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::DateTimeOffset ToDateTimeOffset(::System::Object* value);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW ToString(bool value);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW ToString(int32_t value);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW ToString(int64_t value);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW ToString(::System::Decimal value);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW ToString(float_t value);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW ToString(double_t value);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW ToString(::System::DateTime value);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW ToString(::System::DateTimeOffset value);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW ToString(::System::Object* value);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW ToString(::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* ChangeType(bool value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* ChangeType(int32_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* ChangeType(int64_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* ChangeType(::System::Decimal value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* ChangeType(double_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* ChangeType(::System::DateTime value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  static inline ::System::Xml::Schema::XmlValueConverter* New_ctor();

  /// @brief Method .ctor, addr 0x28c9354, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XmlValueConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlValueConverter(XmlValueConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlValueConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlValueConverter(XmlValueConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlValueConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlValueConverter, 0x10>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlValueConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlValueConverter*, "System.Xml.Schema", "XmlValueConverter");
