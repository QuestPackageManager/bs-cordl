#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlNumeric10Converter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlNumeric10Converter)
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
class XmlNumeric10Converter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlNumeric10Converter);
// Type: System.Xml.Schema::XmlNumeric10Converter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlNumeric10Converter*
class CORDL_TYPE XmlNumeric10Converter : public ::System::Xml::Schema::XmlBaseConverter {
public:
  // Declarations
  /// @brief Method ChangeType, addr 0x427b0a4, size 0x420, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x4279fbc, size 0x440, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Decimal value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x427b4c4, size 0xf04, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x427a85c, size 0x41c, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(int32_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x427ac78, size 0x42c, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(int64_t value, ::System::Type* destinationType);

  /// @brief Method ChangeTypeWildcardDestination, addr 0x4278bd4, size 0x460, virtual false, abstract: false, final false
  inline ::System::Object* ChangeTypeWildcardDestination(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeTypeWildcardSource, addr 0x427a3fc, size 0x460, virtual false, abstract: false, final false
  inline ::System::Object* ChangeTypeWildcardSource(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method Create, addr 0x42786c0, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* schemaType);

  static inline ::System::Xml::Schema::XmlNumeric10Converter* New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method ToDecimal, addr 0x4278718, size 0xc4, virtual true, abstract: false, final false
  inline ::System::Decimal ToDecimal(::StringW value);

  /// @brief Method ToDecimal, addr 0x42787dc, size 0x3f8, virtual true, abstract: false, final false
  inline ::System::Decimal ToDecimal(::System::Object* value);

  /// @brief Method ToInt32, addr 0x427908c, size 0x100, virtual true, abstract: false, final false
  inline int32_t ToInt32(::StringW value);

  /// @brief Method ToInt32, addr 0x427918c, size 0x3f0, virtual true, abstract: false, final false
  inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt32, addr 0x4279034, size 0x58, virtual true, abstract: false, final false
  inline int32_t ToInt32(int64_t value);

  /// @brief Method ToInt64, addr 0x4279584, size 0x100, virtual true, abstract: false, final false
  inline int64_t ToInt64(::StringW value);

  /// @brief Method ToInt64, addr 0x4279684, size 0x3d4, virtual true, abstract: false, final false
  inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToInt64, addr 0x427957c, size 0x8, virtual true, abstract: false, final false
  inline int64_t ToInt64(int32_t value);

  /// @brief Method ToString, addr 0x4279a58, size 0xbc, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Decimal value);

  /// @brief Method ToString, addr 0x4279bc4, size 0x3f8, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ToString, addr 0x4279b14, size 0x58, virtual true, abstract: false, final false
  inline ::StringW ToString(int32_t value);

  /// @brief Method ToString, addr 0x4279b6c, size 0x58, virtual true, abstract: false, final false
  inline ::StringW ToString(int64_t value);

  /// @brief Method .ctor, addr 0x4278658, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaType* schemaType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNumeric10Converter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlNumeric10Converter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlNumeric10Converter(XmlNumeric10Converter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlNumeric10Converter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlNumeric10Converter(XmlNumeric10Converter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7714 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlNumeric10Converter, 0x28>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlNumeric10Converter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlNumeric10Converter*, "System.Xml.Schema", "XmlNumeric10Converter");
