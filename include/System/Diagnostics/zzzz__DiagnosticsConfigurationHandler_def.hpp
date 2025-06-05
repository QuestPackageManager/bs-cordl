#pragma once
// IWYU pragma private; include "System/Diagnostics/DiagnosticsConfigurationHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__IConfigurationSectionHandler_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DiagnosticsConfigurationHandler)
namespace System::Xml {
class XmlNode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Diagnostics {
class DiagnosticsConfigurationHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::DiagnosticsConfigurationHandler);
// Dependencies System.Configuration.IConfigurationSectionHandler, System.Object
namespace System::Diagnostics {
// Is value type: false
// CS Name: System.Diagnostics.DiagnosticsConfigurationHandler
class CORDL_TYPE DiagnosticsConfigurationHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Configuration::IConfigurationSectionHandler"
  constexpr operator ::System::Configuration::IConfigurationSectionHandler*() noexcept;

  /// @brief Method Create, addr 0x4407b4c, size 0x38, virtual true, abstract: false, final false
  inline ::System::Object* Create(::System::Object* parent, ::System::Object* configContext, ::System::Xml::XmlNode* section);

  static inline ::System::Diagnostics::DiagnosticsConfigurationHandler* New_ctor();

  /// @brief Method .ctor, addr 0x4407b14, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Configuration::IConfigurationSectionHandler"
  constexpr ::System::Configuration::IConfigurationSectionHandler* i___System__Configuration__IConfigurationSectionHandler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiagnosticsConfigurationHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticsConfigurationHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiagnosticsConfigurationHandler(DiagnosticsConfigurationHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiagnosticsConfigurationHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiagnosticsConfigurationHandler(DiagnosticsConfigurationHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9933 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::DiagnosticsConfigurationHandler, 0x10>, "Size mismatch!");

} // namespace System::Diagnostics
NEED_NO_BOX(::System::Diagnostics::DiagnosticsConfigurationHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DiagnosticsConfigurationHandler*, "System.Diagnostics", "DiagnosticsConfigurationHandler");
