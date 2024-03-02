#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CommandLineArguments)
// Forward declare root types
namespace GlobalNamespace {
class CommandLineArguments;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CommandLineArguments);
// Type: ::CommandLineArguments
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CommandLineArguments*
class CORDL_TYPE CommandLineArguments : public ::System::Object {
public:
  // Declarations
  /// @brief Method Contains, addr 0xe8cc4c, size 0x84, virtual false, abstract: false, final false
  static inline bool Contains(::StringW argument);

  /// @brief Method GetCommandLineArgs, addr 0xe8cc10, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetCommandLineArgs();

  /// @brief Method GetParameter, addr 0xe8ccd0, size 0xa0, virtual false, abstract: false, final false
  static inline ::StringW GetParameter(::StringW argument);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandLineArguments();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandLineArguments", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandLineArguments(CommandLineArguments&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandLineArguments", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandLineArguments(CommandLineArguments const&) = delete;

  /// @brief Field kArgumentPrefix offset 0xffffffff size 0x2
  static constexpr char16_t kArgumentPrefix{ u'-' };

  /// @brief Field kArgumentSeparator offset 0xffffffff size 0x2
  static constexpr char16_t kArgumentSeparator{ u',' };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CommandLineArguments, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CommandLineArguments);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CommandLineArguments*, "", "CommandLineArguments");
