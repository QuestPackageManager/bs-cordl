#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_fixed.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_decimal_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Datatype_fixed)
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
class Datatype_fixed;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_fixed);
// Dependencies System.Xml.Schema.Datatype_decimal
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.Datatype_fixed
class CORDL_TYPE Datatype_fixed : public ::System::Xml::Schema::Datatype_decimal {
public:
  // Declarations
  static inline ::System::Xml::Schema::Datatype_fixed* New_ctor();

  /// @brief Method ParseValue, addr 0x43ac5dc, size 0x2a8, virtual true, abstract: false, final false
  inline ::System::Object* ParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr);

  /// @brief Method TryParseValue, addr 0x43acaf4, size 0x158, virtual true, abstract: false, final false
  inline ::System::Exception* TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::ByRef<::System::Object*> typedValue);

  /// @brief Method .ctor, addr 0x43a0988, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_fixed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Datatype_fixed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_fixed(Datatype_fixed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_fixed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_fixed(Datatype_fixed const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7584 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_fixed, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_fixed);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_fixed*, "System.Xml.Schema", "Datatype_fixed");
