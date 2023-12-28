#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlListConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlUntypedConverter)
namespace System {
struct DateTimeOffset;
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
struct Decimal;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System {
class Object;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11758))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11755))
// CS Name: ::System.Xml.Schema::XmlUntypedConverter*
class CORDL_TYPE XmlUntypedConverter : public ::System::Xml::Schema::XmlListConverter {
public:
  // Declarations
  /// @brief Field allowListToList, offset 0x30, size 0x1
  __declspec(property(get = __get_allowListToList, put = __set_allowListToList)) bool allowListToList;

  /// @brief Field Untyped, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Untyped, put = setStaticF_Untyped))::System::Xml::Schema::XmlValueConverter* Untyped;

  /// @brief Field UntypedList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UntypedList, put = setStaticF_UntypedList))::System::Xml::Schema::XmlValueConverter* UntypedList;

  constexpr bool& __get_allowListToList();

  constexpr bool const& __get_allowListToList() const;

  constexpr void __set_allowListToList(bool value);

  static inline void setStaticF_Untyped(::System::Xml::Schema::XmlValueConverter* value);

  static inline ::System::Xml::Schema::XmlValueConverter* getStaticF_Untyped();

  static inline void setStaticF_UntypedList(::System::Xml::Schema::XmlValueConverter* value);

  static inline ::System::Xml::Schema::XmlValueConverter* getStaticF_UntypedList();

  static inline ::System::Xml::Schema::XmlUntypedConverter* New_ctor();

  /// @brief Method .ctor addr 0x28db1a8 size 0x90 virtual false final false
  inline void _ctor();

  static inline ::System::Xml::Schema::XmlUntypedConverter* New_ctor(::System::Xml::Schema::XmlUntypedConverter* atomicConverter, bool allowListToList);

  /// @brief Method .ctor addr 0x28db2a0 size 0x98 virtual false final false
  inline void _ctor(::System::Xml::Schema::XmlUntypedConverter* atomicConverter, bool allowListToList);

  /// @brief Method ToBoolean addr 0x28db3b0 size 0xa8 virtual true final false
  inline bool ToBoolean(::StringW value);

  /// @brief Method ToBoolean addr 0x28db458 size 0x1d0 virtual true final false
  inline bool ToBoolean(::System::Object* value);

  /// @brief Method ToDateTime addr 0x28db764 size 0xa8 virtual true final false
  inline ::System::DateTime ToDateTime(::StringW value);

  /// @brief Method ToDateTime addr 0x28db80c size 0x1b8 virtual true final false
  inline ::System::DateTime ToDateTime(::System::Object* value);

  /// @brief Method ToDateTimeOffset addr 0x28db9c4 size 0xa8 virtual true final false
  inline ::System::DateTimeOffset ToDateTimeOffset(::StringW value);

  /// @brief Method ToDateTimeOffset addr 0x28dba6c size 0x1b8 virtual true final false
  inline ::System::DateTimeOffset ToDateTimeOffset(::System::Object* value);

  /// @brief Method ToDecimal addr 0x28dbc24 size 0xa8 virtual true final false
  inline ::System::Decimal ToDecimal(::StringW value);

  /// @brief Method ToDecimal addr 0x28dbccc size 0x1d0 virtual true final false
  inline ::System::Decimal ToDecimal(::System::Object* value);

  /// @brief Method ToDouble addr 0x28dbe9c size 0xa8 virtual true final false
  inline double_t ToDouble(::StringW value);

  /// @brief Method ToDouble addr 0x28dbf44 size 0x1d0 virtual true final false
  inline double_t ToDouble(::System::Object* value);

  /// @brief Method ToInt32 addr 0x28dc114 size 0xa8 virtual true final false
  inline int32_t ToInt32(::StringW value);

  /// @brief Method ToInt32 addr 0x28dc1bc size 0x1d0 virtual true final false
  inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt64 addr 0x28dc38c size 0xa8 virtual true final false
  inline int64_t ToInt64(::StringW value);

  /// @brief Method ToInt64 addr 0x28dc434 size 0x1d0 virtual true final false
  inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToSingle addr 0x28dc604 size 0xa8 virtual true final false
  inline float_t ToSingle(::StringW value);

  /// @brief Method ToSingle addr 0x28dc6ac size 0x1d0 virtual true final false
  inline float_t ToSingle(::System::Object* value);

  /// @brief Method ToString addr 0x28dc87c size 0x58 virtual true final false
  inline ::StringW ToString(bool value);

  /// @brief Method ToString addr 0x28dc8d4 size 0x58 virtual true final false
  inline ::StringW ToString(::System::DateTime value);

  /// @brief Method ToString addr 0x28dc92c size 0x68 virtual true final false
  inline ::StringW ToString(::System::DateTimeOffset value);

  /// @brief Method ToString addr 0x28dc994 size 0x68 virtual true final false
  inline ::StringW ToString(::System::Decimal value);

  /// @brief Method ToString addr 0x28dc9fc size 0x60 virtual true final false
  inline ::StringW ToString(double_t value);

  /// @brief Method ToString addr 0x28dca5c size 0x58 virtual true final false
  inline ::StringW ToString(int32_t value);

  /// @brief Method ToString addr 0x28dcab4 size 0x58 virtual true final false
  inline ::StringW ToString(int64_t value);

  /// @brief Method ToString addr 0x28dcb0c size 0x60 virtual true final false
  inline ::StringW ToString(float_t value);

  /// @brief Method ToString addr 0x28dcb6c size 0xda8 virtual true final false
  inline ::StringW ToString(::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType addr 0x28dd914 size 0x1e4 virtual true final false
  inline ::System::Object* ChangeType(bool value, ::System::Type* destinationType);

  /// @brief Method ChangeType addr 0x28ddc90 size 0x1cc virtual true final false
  inline ::System::Object* ChangeType(::System::DateTime value, ::System::Type* destinationType);

  /// @brief Method ChangeType addr 0x28dde5c size 0x20c virtual true final false
  inline ::System::Object* ChangeType(::System::Decimal value, ::System::Type* destinationType);

  /// @brief Method ChangeType addr 0x28de068 size 0x1e0 virtual true final false
  inline ::System::Object* ChangeType(double_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType addr 0x28de248 size 0x1e0 virtual true final false
  inline ::System::Object* ChangeType(int32_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType addr 0x28de428 size 0x1e0 virtual true final false
  inline ::System::Object* ChangeType(int64_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType addr 0x28de608 size 0xc08 virtual true final false
  inline ::System::Object* ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType addr 0x28df210 size 0x14fc virtual true final false
  inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeTypeWildcardDestination addr 0x28db628 size 0x13c virtual false final false
  inline ::System::Object* ChangeTypeWildcardDestination(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeTypeWildcardSource addr 0x28ddaf8 size 0x198 virtual false final false
  inline ::System::Object* ChangeTypeWildcardSource(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeListType addr 0x28e070c size 0x308 virtual true final false
  inline ::System::Object* ChangeListType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method SupportsType addr 0x28e0a14 size 0x530 virtual false final false
  inline bool SupportsType(::System::Type* clrType);

  // Ctor Parameters [CppParam { name: "", ty: "XmlUntypedConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlUntypedConverter(XmlUntypedConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlUntypedConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlUntypedConverter(XmlUntypedConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlUntypedConverter();

public:
  /// @brief Field allowListToList, offset: 0x30, size: 0x1, def value: None
  bool ___allowListToList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlUntypedConverter, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlUntypedConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlUntypedConverter*, "System.Xml.Schema", "XmlUntypedConverter");
