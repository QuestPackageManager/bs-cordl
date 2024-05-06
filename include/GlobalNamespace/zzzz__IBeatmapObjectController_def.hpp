#pragma once
// IWYU pragma private; include "GlobalNamespace/IBeatmapObjectController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IBeatmapObjectController)
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapObjectController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBeatmapObjectController);
// Type: ::IBeatmapObjectController
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IBeatmapObjectController*
class CORDL_TYPE IBeatmapObjectController {
public:
  // Declarations
  /// @brief Method Dissolve, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Dissolve(float_t duration);

  /// @brief Method Hide, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Hide(bool hide);

  /// @brief Method Pause, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Pause(bool pause);

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapObjectController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBeatmapObjectController(IBeatmapObjectController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapObjectController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatmapObjectController(IBeatmapObjectController const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBeatmapObjectController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatmapObjectController*, "", "IBeatmapObjectController");
