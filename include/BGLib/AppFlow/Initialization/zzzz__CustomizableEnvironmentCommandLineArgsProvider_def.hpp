#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/CustomizableEnvironmentCommandLineArgsProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CustomizableEnvironmentCommandLineArgsProvider)
// Forward declare root types
namespace BGLib::AppFlow::Initialization {
class CustomizableEnvironmentCommandLineArgsProvider;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::AppFlow::Initialization::CustomizableEnvironmentCommandLineArgsProvider);
// Dependencies System.Object
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// CS Name: BGLib.AppFlow.Initialization.CustomizableEnvironmentCommandLineArgsProvider
class CORDL_TYPE CustomizableEnvironmentCommandLineArgsProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetCommandLineArgs, addr 0x31e31e8, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetCommandLineArgs();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomizableEnvironmentCommandLineArgsProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomizableEnvironmentCommandLineArgsProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomizableEnvironmentCommandLineArgsProvider(CustomizableEnvironmentCommandLineArgsProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomizableEnvironmentCommandLineArgsProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomizableEnvironmentCommandLineArgsProvider(CustomizableEnvironmentCommandLineArgsProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21361 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::CustomizableEnvironmentCommandLineArgsProvider, 0x10>, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
NEED_NO_BOX(::BGLib::AppFlow::Initialization::CustomizableEnvironmentCommandLineArgsProvider);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::CustomizableEnvironmentCommandLineArgsProvider*, "BGLib.AppFlow.Initialization", "CustomizableEnvironmentCommandLineArgsProvider");
