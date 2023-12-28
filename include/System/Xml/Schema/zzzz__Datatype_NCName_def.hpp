#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_Name_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Datatype_NCName)
namespace System::Xml {
class XmlNameTable;
}
namespace System {
class Object;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
class Exception;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_NCName;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_NCName);
// Type: System.Xml.Schema::Datatype_NCName
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11658))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11659))
// CS Name: ::System.Xml.Schema::Datatype_NCName*
class CORDL_TYPE Datatype_NCName : public ::System::Xml::Schema::Datatype_Name {
public:
  // Declarations
  __declspec(property(get = get_TypeCode))::System::Xml::Schema::XmlTypeCode TypeCode;

  /// @brief Method get_TypeCode addr 0x28bb6bc size 0x8 virtual true final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

  /// @brief Method TryParseValue addr 0x28bb6c4 size 0xfc virtual true final false
  inline ::System::Exception* TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ByRef<::System::Object*> typedValue);

  static inline ::System::Xml::Schema::Datatype_NCName* New_ctor();

  /// @brief Method .ctor addr 0x28bb7c0 size 0x4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_NCName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_NCName(Datatype_NCName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_NCName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_NCName(Datatype_NCName const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_NCName();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_NCName, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_NCName);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_NCName*, "System.Xml.Schema", "Datatype_NCName");
