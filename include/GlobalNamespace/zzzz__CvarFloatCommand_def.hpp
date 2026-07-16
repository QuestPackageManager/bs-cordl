#pragma once
// IWYU pragma private; include "GlobalNamespace/CvarFloatCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CvarCommand_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CvarFloatCommand)
// Forward declare root types
namespace GlobalNamespace {
class CvarFloatCommand;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CvarFloatCommand*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CvarFloatCommand*, "", "CvarFloatCommand");
// Dependencies CvarCommand`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: CvarFloatCommand
class CORDL_TYPE CvarFloatCommand : public ::GlobalNamespace::CvarCommand_1<float_t> {
public:
  // Declarations
  static inline ::GlobalNamespace::CvarFloatCommand* New_ctor();

  /// @brief Method .ctor, addr 0x32cc988, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CvarFloatCommand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CvarFloatCommand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CvarFloatCommand(CvarFloatCommand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CvarFloatCommand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CvarFloatCommand(CvarFloatCommand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19348 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CvarFloatCommand) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
