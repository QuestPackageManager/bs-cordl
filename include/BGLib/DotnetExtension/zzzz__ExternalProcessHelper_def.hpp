#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/ExternalProcessHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExternalProcessHelper)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Diagnostics {
class Process;
}
// Forward declare root types
namespace BGLib::DotnetExtension {
class ExternalProcessHelper;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::DotnetExtension::ExternalProcessHelper);
// Dependencies System.Object
namespace BGLib::DotnetExtension {
// Is value type: false
// CS Name: BGLib.DotnetExtension.ExternalProcessHelper
class CORDL_TYPE ExternalProcessHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetProcessOutputLines, addr 0x3217e64, size 0x458, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* GetProcessOutputLines(::StringW path, ::StringW arguments);

  /// @brief Method StartBackgroundProcess, addr 0x3217df0, size 0x74, virtual false, abstract: false, final false
  static inline ::System::Diagnostics::Process* StartBackgroundProcess(::StringW path, ::StringW arguments);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExternalProcessHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExternalProcessHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExternalProcessHelper(ExternalProcessHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExternalProcessHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExternalProcessHelper(ExternalProcessHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20538 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::DotnetExtension::ExternalProcessHelper, 0x10>, "Size mismatch!");

} // namespace BGLib::DotnetExtension
NEED_NO_BOX(::BGLib::DotnetExtension::ExternalProcessHelper);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::DotnetExtension::ExternalProcessHelper*, "BGLib.DotnetExtension", "ExternalProcessHelper");
