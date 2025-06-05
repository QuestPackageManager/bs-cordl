#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_NCName.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_Name_def.hpp"
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
// Dependencies System.Xml.Schema.Datatype_Name
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.Datatype_NCName
class CORDL_TYPE Datatype_NCName : public ::System::Xml::Schema::Datatype_Name {
public:
  // Declarations
  __declspec(property(get = get_TypeCode)) ::System::Xml::Schema::XmlTypeCode TypeCode;

  static inline ::System::Xml::Schema::Datatype_NCName* New_ctor();

  /// @brief Method TryParseValue, addr 0x43ad768, size 0xfc, virtual true, abstract: false, final false
  inline ::System::Exception* TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::ByRef<::System::Object*> typedValue);

  /// @brief Method .ctor, addr 0x43a5b40, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TypeCode, addr 0x43ad760, size 0x8, virtual true, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7561 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_NCName, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_NCName);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_NCName*, "System.Xml.Schema", "Datatype_NCName");
