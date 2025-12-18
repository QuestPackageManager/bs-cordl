#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaCompilationSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaCompilationSettings)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaCompilationSettings;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaCompilationSettings);
// Dependencies System.Object
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaCompilationSettings
class CORDL_TYPE XmlSchemaCompilationSettings : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_EnableUpaCheck)) bool EnableUpaCheck;

  /// @brief Field enableUpaCheck, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_enableUpaCheck, put = __cordl_internal_set_enableUpaCheck)) bool enableUpaCheck;

  static inline ::System::Xml::Schema::XmlSchemaCompilationSettings* New_ctor();

  constexpr bool const& __cordl_internal_get_enableUpaCheck() const;

  constexpr bool& __cordl_internal_get_enableUpaCheck();

  constexpr void __cordl_internal_set_enableUpaCheck(bool value);

  /// @brief Method .ctor, addr 0x60793c0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_EnableUpaCheck, addr 0x60793cc, size 0x8, virtual false, abstract: false, final false
  inline bool get_EnableUpaCheck();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaCompilationSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaCompilationSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaCompilationSettings(XmlSchemaCompilationSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaCompilationSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaCompilationSettings(XmlSchemaCompilationSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9731 };

  /// @brief Field enableUpaCheck, offset: 0x10, size: 0x1, def value: None
  bool ___enableUpaCheck;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaCompilationSettings, ___enableUpaCheck) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaCompilationSettings, 0x18>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaCompilationSettings);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaCompilationSettings*, "System.Xml.Schema", "XmlSchemaCompilationSettings");
