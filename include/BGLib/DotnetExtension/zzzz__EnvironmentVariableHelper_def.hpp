#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/EnvironmentVariableHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnvironmentVariableHelper)
// Forward declare root types
namespace BGLib::DotnetExtension {
class EnvironmentVariableHelper;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::DotnetExtension::EnvironmentVariableHelper);
// Type: BGLib.DotnetExtension::EnvironmentVariableHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGLib::DotnetExtension {
// Is value type: false
// CS Name: ::BGLib.DotnetExtension::EnvironmentVariableHelper*
class CORDL_TYPE EnvironmentVariableHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetDirectoryPath, addr 0x10834d4, size 0xb0, virtual false, abstract: false, final false
  static inline ::StringW GetDirectoryPath(::StringW variableName);

  /// @brief Method SetDirectoryPath, addr 0x1083584, size 0x12c, virtual false, abstract: false, final false
  static inline void SetDirectoryPath(::StringW variableName, ::StringW path);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentVariableHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentVariableHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentVariableHelper(EnvironmentVariableHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentVariableHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentVariableHelper(EnvironmentVariableHelper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::DotnetExtension::EnvironmentVariableHelper, 0x10>, "Size mismatch!");

} // namespace BGLib::DotnetExtension
NEED_NO_BOX(::BGLib::DotnetExtension::EnvironmentVariableHelper);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::DotnetExtension::EnvironmentVariableHelper*, "BGLib.DotnetExtension", "EnvironmentVariableHelper");
