#pragma once
// IWYU pragma private; include "GlobalNamespace/CvarIntCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CvarCommand_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CvarIntCommand)
// Forward declare root types
namespace GlobalNamespace {
class CvarIntCommand;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CvarIntCommand*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CvarIntCommand*, "", "CvarIntCommand");
// Dependencies CvarCommand`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: CvarIntCommand
class CORDL_TYPE CvarIntCommand : public ::GlobalNamespace::CvarCommand_1<int32_t> {
public:
  // Declarations
  static inline ::GlobalNamespace::CvarIntCommand* New_ctor();

  /// @brief Method .ctor, addr 0x32cc9fc, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CvarIntCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CvarIntCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CvarIntCommand(CvarIntCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CvarIntCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CvarIntCommand(CvarIntCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19349 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CvarIntCommand) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
