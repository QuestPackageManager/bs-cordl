#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/CommandLine/CommandLineParseException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CommandLineParseException)
namespace System {
class Exception;
}
// Forward declare root types
namespace BGLib::DotnetExtension::CommandLine {
class CommandLineParseException;
}
// Write type traits
MARK_REF_T(::BGLib::DotnetExtension::CommandLine::CommandLineParseException*);
DEFINE_IL2CPP_CLASS(::BGLib::DotnetExtension::CommandLine::CommandLineParseException*, "BGLib.DotnetExtension.CommandLine", "CommandLineParseException");
// Dependencies System.Exception
namespace BGLib::DotnetExtension::CommandLine {
// Is value type: false
// CS Name: BGLib.DotnetExtension.CommandLine.CommandLineParseException
class CORDL_TYPE CommandLineParseException : public ::System::Exception {
public:
  // Declarations
  static inline ::BGLib::DotnetExtension::CommandLine::CommandLineParseException* New_ctor(::StringW hint, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x330f50c, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::StringW hint, ::System::Exception* innerException);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandLineParseException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandLineParseException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandLineParseException(CommandLineParseException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandLineParseException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandLineParseException(CommandLineParseException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20486 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BGLib::DotnetExtension::CommandLine::CommandLineParseException) == 0x90, "Size mismatch!");

} // namespace BGLib::DotnetExtension::CommandLine
