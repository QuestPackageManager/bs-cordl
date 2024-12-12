#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_integer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_decimal_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Datatype_integer)
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
class Datatype_integer;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_integer);
// Dependencies System.Xml.Schema.Datatype_decimal
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.Datatype_integer
class CORDL_TYPE Datatype_integer : public ::System::Xml::Schema::Datatype_decimal {
public:
  // Declarations
  __declspec(property(get = get_TypeCode)) ::System::Xml::Schema::XmlTypeCode TypeCode;

  static inline ::System::Xml::Schema::Datatype_integer* New_ctor();

  /// @brief Method TryParseValue, addr 0x43ac528, size 0x140, virtual true, abstract: false, final false
  inline ::System::Exception* TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::ByRef<::System::Object*> typedValue);

  /// @brief Method .ctor, addr 0x43a4088, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TypeCode, addr 0x43ac520, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_integer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Datatype_integer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_integer(Datatype_integer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_integer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_integer(Datatype_integer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7561 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_integer, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_integer);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_integer*, "System.Xml.Schema", "Datatype_integer");
