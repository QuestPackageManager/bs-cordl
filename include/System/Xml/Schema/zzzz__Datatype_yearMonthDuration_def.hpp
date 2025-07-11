#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_yearMonthDuration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_duration_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Datatype_yearMonthDuration)
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
class Datatype_yearMonthDuration;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_yearMonthDuration);
// Dependencies System.Xml.Schema.Datatype_duration
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.Datatype_yearMonthDuration
class CORDL_TYPE Datatype_yearMonthDuration : public ::System::Xml::Schema::Datatype_duration {
public:
  // Declarations
  __declspec(property(get = get_TypeCode)) ::System::Xml::Schema::XmlTypeCode TypeCode;

  static inline ::System::Xml::Schema::Datatype_yearMonthDuration* New_ctor();

  /// @brief Method TryParseValue, addr 0x43ab628, size 0x1c8, virtual true, abstract: false, final false
  inline ::System::Exception* TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::ByRef<::System::Object*> typedValue);

  /// @brief Method .ctor, addr 0x43a5e4c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TypeCode, addr 0x43ab7f0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_yearMonthDuration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Datatype_yearMonthDuration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_yearMonthDuration(Datatype_yearMonthDuration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_yearMonthDuration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_yearMonthDuration(Datatype_yearMonthDuration const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7535 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_yearMonthDuration, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_yearMonthDuration);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_yearMonthDuration*, "System.Xml.Schema", "Datatype_yearMonthDuration");
