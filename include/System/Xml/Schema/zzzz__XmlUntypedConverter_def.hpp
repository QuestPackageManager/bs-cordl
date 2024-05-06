#pragma once
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
// Type: System.Xml.Schema::XmlUntypedConverter
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlUntypedConverter*
class CORDL_TYPE XmlUntypedConverter : public ::System::Xml::Schema::XmlListConverter {
public:
  // Declarations
  /// @brief Field Untyped, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Untyped, put = setStaticF_Untyped))::System::Xml::Schema::XmlValueConverter* Untyped;

  /// @brief Field UntypedList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UntypedList, put = setStaticF_UntypedList))::System::Xml::Schema::XmlValueConverter* UntypedList;

  /// @brief Field allowListToList, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_allowListToList, put = __cordl_internal_set_allowListToList)) bool allowListToList;

  /// @brief Method ChangeListType, addr 0x2e417dc, size 0x308, virtual true, abstract: false, final false
  inline ::System::Object* ChangeListType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x2e3f6d8, size 0xc08, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x2e3ed60, size 0x1cc, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::DateTime value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x2e3ef2c, size 0x20c, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Decimal value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x2e402e0, size 0x14fc, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x2e3e9e4, size 0x1e4, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(bool value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x2e3f138, size 0x1e0, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(double_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x2e3f318, size 0x1e0, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(int32_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x2e3f4f8, size 0x1e0, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(int64_t value, ::System::Type* destinationType);

  /// @brief Method ChangeTypeWildcardDestination, addr 0x2e3c6f8, size 0x13c, virtual false, abstract: false, final false
  inline ::System::Object* ChangeTypeWildcardDestination(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeTypeWildcardSource, addr 0x2e3ebc8, size 0x198, virtual false, abstract: false, final false
  inline ::System::Object* ChangeTypeWildcardSource(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  static inline ::System::Xml::Schema::XmlUntypedConverter* New_ctor();

  static inline ::System::Xml::Schema::XmlUntypedConverter* New_ctor(::System::Xml::Schema::XmlUntypedConverter* atomicConverter, bool allowListToList);

  /// @brief Method SupportsType, addr 0x2e41ae4, size 0x530, virtual false, abstract: false, final false
  inline bool SupportsType(::System::Type* clrType);

  /// @brief Method ToBoolean, addr 0x2e3c480, size 0xa8, virtual true, abstract: false, final false
  inline bool ToBoolean(::StringW value);

  /// @brief Method ToBoolean, addr 0x2e3c528, size 0x1d0, virtual true, abstract: false, final false
  inline bool ToBoolean(::System::Object* value);

  /// @brief Method ToDateTime, addr 0x2e3c834, size 0xa8, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(::StringW value);

  /// @brief Method ToDateTime, addr 0x2e3c8dc, size 0x1b8, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(::System::Object* value);

  /// @brief Method ToDateTimeOffset, addr 0x2e3ca94, size 0xa8, virtual true, abstract: false, final false
  inline ::System::DateTimeOffset ToDateTimeOffset(::StringW value);

  /// @brief Method ToDateTimeOffset, addr 0x2e3cb3c, size 0x1b8, virtual true, abstract: false, final false
  inline ::System::DateTimeOffset ToDateTimeOffset(::System::Object* value);

  /// @brief Method ToDecimal, addr 0x2e3ccf4, size 0xa8, virtual true, abstract: false, final false
  inline ::System::Decimal ToDecimal(::StringW value);

  /// @brief Method ToDecimal, addr 0x2e3cd9c, size 0x1d0, virtual true, abstract: false, final false
  inline ::System::Decimal ToDecimal(::System::Object* value);

  /// @brief Method ToDouble, addr 0x2e3cf6c, size 0xa8, virtual true, abstract: false, final false
  inline double_t ToDouble(::StringW value);

  /// @brief Method ToDouble, addr 0x2e3d014, size 0x1d0, virtual true, abstract: false, final false
  inline double_t ToDouble(::System::Object* value);

  /// @brief Method ToInt32, addr 0x2e3d1e4, size 0xa8, virtual true, abstract: false, final false
  inline int32_t ToInt32(::StringW value);

  /// @brief Method ToInt32, addr 0x2e3d28c, size 0x1d0, virtual true, abstract: false, final false
  inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt64, addr 0x2e3d45c, size 0xa8, virtual true, abstract: false, final false
  inline int64_t ToInt64(::StringW value);

  /// @brief Method ToInt64, addr 0x2e3d504, size 0x1d0, virtual true, abstract: false, final false
  inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToSingle, addr 0x2e3d6d4, size 0xa8, virtual true, abstract: false, final false
  inline float_t ToSingle(::StringW value);

  /// @brief Method ToSingle, addr 0x2e3d77c, size 0x1d0, virtual true, abstract: false, final false
  inline float_t ToSingle(::System::Object* value);

  /// @brief Method ToString, addr 0x2e3d9a4, size 0x58, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::DateTime value);

  /// @brief Method ToString, addr 0x2e3d9fc, size 0x68, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::DateTimeOffset value);

  /// @brief Method ToString, addr 0x2e3da64, size 0x68, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Decimal value);

  /// @brief Method ToString, addr 0x2e3dc3c, size 0xda8, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ToString, addr 0x2e3d94c, size 0x58, virtual true, abstract: false, final false
  inline ::StringW ToString(bool value);

  /// @brief Method ToString, addr 0x2e3dacc, size 0x60, virtual true, abstract: false, final false
  inline ::StringW ToString(double_t value);

  /// @brief Method ToString, addr 0x2e3dbdc, size 0x60, virtual true, abstract: false, final false
  inline ::StringW ToString(float_t value);

  /// @brief Method ToString, addr 0x2e3db2c, size 0x58, virtual true, abstract: false, final false
  inline ::StringW ToString(int32_t value);

  /// @brief Method ToString, addr 0x2e3db84, size 0x58, virtual true, abstract: false, final false
  inline ::StringW ToString(int64_t value);

  constexpr bool const& __cordl_internal_get_allowListToList() const;

  constexpr bool& __cordl_internal_get_allowListToList();

  constexpr void __cordl_internal_set_allowListToList(bool value);

  /// @brief Method .ctor, addr 0x2e3c278, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2e3c370, size 0x98, virtual false, abstract: false, final false
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

  /// @brief Field allowListToList, offset: 0x30, size: 0x1, def value: None
  bool ___allowListToList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlUntypedConverter, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlUntypedConverter, ___allowListToList) == 0x30, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlUntypedConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlUntypedConverter*, "System.Xml.Schema", "XmlUntypedConverter");
