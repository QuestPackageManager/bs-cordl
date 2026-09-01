#pragma once
// IWYU pragma private; include "GlobalNamespace\IPerformanceBoostController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPerformanceBoostController)
// Forward declare root types
namespace GlobalNamespace {
class IPerformanceBoostController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IPerformanceBoostController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IPerformanceBoostController*, "", "IPerformanceBoostController");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IPerformanceBoostController
class CORDL_TYPE IPerformanceBoostController {
public:
  // Declarations
  /// @brief Method AskForBoost, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AskForBoost();

  // Ctor Parameters [CppParam { name: "", ty: "IPerformanceBoostController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPerformanceBoostController(IPerformanceBoostController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6626 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
