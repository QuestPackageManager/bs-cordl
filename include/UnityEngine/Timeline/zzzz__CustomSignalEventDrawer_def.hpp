#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\CustomSignalEventDrawer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(CustomSignalEventDrawer)
// Forward declare root types
namespace UnityEngine::Timeline {
class CustomSignalEventDrawer;
}
// Write type traits
MARK_REF_T(::UnityEngine::Timeline::CustomSignalEventDrawer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Timeline::CustomSignalEventDrawer*, "UnityEngine.Timeline", "CustomSignalEventDrawer");
// Dependencies UnityEngine.PropertyAttribute
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.CustomSignalEventDrawer
class CORDL_TYPE CustomSignalEventDrawer : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  static inline ::UnityEngine::Timeline::CustomSignalEventDrawer* New_ctor();

  /// @brief Method .ctor, addr 0x69c681c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomSignalEventDrawer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomSignalEventDrawer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomSignalEventDrawer(CustomSignalEventDrawer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomSignalEventDrawer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomSignalEventDrawer(CustomSignalEventDrawer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19214 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Timeline::CustomSignalEventDrawer) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Timeline
