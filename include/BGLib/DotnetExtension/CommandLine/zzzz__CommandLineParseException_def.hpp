#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/CommandLine/CommandLineParseException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CommandLineParseException)
namespace System {
class Exception;
}
// Forward declare root types
namespace BGLib::DotnetExtension::CommandLine {
class CommandLineParseException;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::DotnetExtension::CommandLine::CommandLineParseException);
// Type: BGLib.DotnetExtension.CommandLine::CommandLineParseException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::DotnetExtension::CommandLine {
// Is value type: false
// CS Name: ::BGLib.DotnetExtension.CommandLine::CommandLineParseException*
class CORDL_TYPE CommandLineParseException : public ::System::Exception {
public:
  // Declarations
  static inline ::BGLib::DotnetExtension::CommandLine::CommandLineParseException* New_ctor(::StringW hint, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x226d0c4, size 0xcc, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16909 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::DotnetExtension::CommandLine::CommandLineParseException, 0x90>, "Size mismatch!");

} // namespace BGLib::DotnetExtension::CommandLine
NEED_NO_BOX(::BGLib::DotnetExtension::CommandLine::CommandLineParseException);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::DotnetExtension::CommandLine::CommandLineParseException*, "BGLib.DotnetExtension.CommandLine", "CommandLineParseException");
