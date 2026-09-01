#pragma once
// IWYU pragma private; include "GlobalNamespace\CvarBoolCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CvarCommand_1_def.hpp"
CORDL_MODULE_EXPORT(CvarBoolCommand)
// Forward declare root types
namespace GlobalNamespace {
class CvarBoolCommand;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CvarBoolCommand*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CvarBoolCommand*, "", "CvarBoolCommand");
// Dependencies CvarCommand`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: CvarBoolCommand
class CORDL_TYPE CvarBoolCommand : public ::GlobalNamespace::CvarCommand_1<bool> {
public:
  // Declarations
  static inline ::GlobalNamespace::CvarBoolCommand* New_ctor();

  /// @brief Method .ctor, addr 0x32ce09c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CvarBoolCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CvarBoolCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CvarBoolCommand(CvarBoolCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CvarBoolCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CvarBoolCommand(CvarBoolCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19378 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CvarBoolCommand) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
