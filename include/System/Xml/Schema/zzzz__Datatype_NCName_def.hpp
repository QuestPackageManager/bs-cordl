#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_NCName.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_Name_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Datatype_NCName)
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System {
class Exception;
}
namespace System {
class Object;
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
// CS Name: ::System.Xml.Schema::Datatype_NCName*
class CORDL_TYPE Datatype_NCName : public ::System::Xml::Schema::Datatype_Name {
public:
  // Declarations
  __declspec(property(get = get_TypeCode))::System::Xml::Schema::XmlTypeCode TypeCode;

  static inline ::System::Xml::Schema::Datatype_NCName* New_ctor();

  /// @brief Method TryParseValue, addr 0x2f2d9f8, size 0xfc, virtual true, abstract: false, final false
  inline ::System::Exception* TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ByRef<::System::Object*> typedValue);

  /// @brief Method .ctor, addr 0x2f25dbc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TypeCode, addr 0x2f2d9f0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_NCName();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Datatype_NCName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_NCName(Datatype_NCName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_NCName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_NCName(Datatype_NCName const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_NCName, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_NCName);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_NCName*, "System.Xml.Schema", "Datatype_NCName");
