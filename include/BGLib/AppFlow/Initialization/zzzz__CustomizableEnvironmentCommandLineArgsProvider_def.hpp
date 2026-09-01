#pragma once
// IWYU pragma private; include "BGLib\AppFlow\Initialization\CustomizableEnvironmentCommandLineArgsProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CustomizableEnvironmentCommandLineArgsProvider)
// Forward declare root types
namespace BGLib::AppFlow::Initialization {
class CustomizableEnvironmentCommandLineArgsProvider;
}
// Write type traits
MARK_REF_T(::BGLib::AppFlow::Initialization::CustomizableEnvironmentCommandLineArgsProvider*);
DEFINE_IL2CPP_CLASS(::BGLib::AppFlow::Initialization::CustomizableEnvironmentCommandLineArgsProvider*, "BGLib.AppFlow.Initialization", "CustomizableEnvironmentCommandLineArgsProvider");
// Dependencies System.Object
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// CS Name: BGLib.AppFlow.Initialization.CustomizableEnvironmentCommandLineArgsProvider
class CORDL_TYPE CustomizableEnvironmentCommandLineArgsProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetCommandLineArgs, addr 0x3309e78, size 0x10, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW> GetCommandLineArgs();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21562 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BGLib::AppFlow::Initialization::CustomizableEnvironmentCommandLineArgsProvider) == 0x10, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
