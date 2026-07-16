#pragma once
// IWYU pragma private; include "GlobalNamespace/ILevelRestartController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILevelRestartController)
// Forward declare root types
namespace GlobalNamespace {
class ILevelRestartController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ILevelRestartController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ILevelRestartController*, "", "ILevelRestartController");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ILevelRestartController
class CORDL_TYPE ILevelRestartController {
public:
  // Declarations
  /// @brief Method RestartLevel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RestartLevel();

  // Ctor Parameters [CppParam { name: "", ty: "ILevelRestartController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILevelRestartController(ILevelRestartController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23051 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
