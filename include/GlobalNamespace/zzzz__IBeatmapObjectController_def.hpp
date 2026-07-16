#pragma once
// IWYU pragma private; include "GlobalNamespace/IBeatmapObjectController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IBeatmapObjectController)
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapObjectController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IBeatmapObjectController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IBeatmapObjectController*, "", "IBeatmapObjectController");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IBeatmapObjectController
class CORDL_TYPE IBeatmapObjectController {
public:
  // Declarations
  /// @brief Method Dissolve, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Dissolve(float_t duration);

  /// @brief Method Hide, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Hide(bool hide);

  /// @brief Method Pause, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Pause(bool pause);

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapObjectController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatmapObjectController(IBeatmapObjectController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5633 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
