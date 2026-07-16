#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/EnvironmentVariableHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EnvironmentVariableHelper)
// Forward declare root types
namespace BGLib::DotnetExtension {
class EnvironmentVariableHelper;
}
// Write type traits
MARK_REF_T(::BGLib::DotnetExtension::EnvironmentVariableHelper*);
DEFINE_IL2CPP_CLASS(::BGLib::DotnetExtension::EnvironmentVariableHelper*, "BGLib.DotnetExtension", "EnvironmentVariableHelper");
// Dependencies System.Object
namespace BGLib::DotnetExtension {
// Is value type: false
// CS Name: BGLib.DotnetExtension.EnvironmentVariableHelper
class CORDL_TYPE EnvironmentVariableHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetDirectoryPath, addr 0x330d628, size 0xa4, virtual false, abstract: false, final false
  static inline ::StringW GetDirectoryPath(::StringW variableName);

  /// @brief Method SetDirectoryPath, addr 0x330d6cc, size 0x120, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20476 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BGLib::DotnetExtension::EnvironmentVariableHelper) == 0x10, "Size mismatch!");

} // namespace BGLib::DotnetExtension
